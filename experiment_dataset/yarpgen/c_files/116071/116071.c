/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((~(((arr_4 [i_1] [i_0]) ? (!4095) : -236))));
                var_16 = 18446744073709551615;
                arr_6 [i_1] = (-var_14 + var_9);
            }
        }
    }
    var_17 |= var_5;
    var_18 = (max(var_18, (~18446744073709551615)));
    var_19 = (min(var_19, (((var_8 ? (min(((max(var_8, 1))), (min(9188052919905977816, 9223372036854775807)))) : (((((4611686018427387903 >> (4611686018427387917 - 4611686018427387875)))) ? ((var_5 ? var_3 : 18446744073709551615)) : var_4)))))));
    #pragma endscop
}
