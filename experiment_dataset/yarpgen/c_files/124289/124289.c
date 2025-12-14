/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_4));
    var_14 = (min(var_14, (((((min(var_0, 7921))) ? (((30501 % 18446744073709551612) - -18446744073709551608)) : ((min(215630462, 32767))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((32767 ? 39379 : 1524823859));
                var_16 = (max(var_16, 8189));
                var_17 ^= (max(11, 18446744073709551596));
                var_18 |= ((-((((min((arr_2 [i_1]), 5260065435529584418))) ? ((var_5 ? var_3 : 18446744073709551596)) : 1))));
                var_19 -= ((-(((((47789 ? -8 : 2770143413))) ? 5436 : ((2907854653 >> (-31192 + 31194)))))));
            }
        }
    }
    var_20 = (max(var_20, (((var_10 <= (((!var_8) ? ((((-27 + 2147483647) >> (var_5 - 785379636107655419)))) : (var_4 - var_12))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                var_21 ^= ((~(((arr_0 [i_3 + 1]) * 1387112637))));
                var_22 = ((!((((arr_1 [i_3 - 2]) ? (arr_0 [i_3 + 2]) : (arr_0 [i_3 + 3]))))));
            }
        }
    }
    #pragma endscop
}
