/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(1, 1)) ? 65 : ((-65 ? 32767 : 65535))))) ? var_12 : (max(18446744073709551615, (((-16 ? 189 : 8)))))));
    var_14 = (((min((18065691652877403036 - -49), var_10)) - -12441));
    var_15 = (min(var_15, ((((var_1 * var_9) & ((((-16 < (max(10163, 1724004153)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (!1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((((max(((min(var_5, -65))), (max(var_11, var_5))))) / (max((1139055954 ^ 64), (arr_4 [i_0])))));
                            var_18 &= (((((max(1, var_9)))) ? (max((max(var_7, 312460809)), (arr_0 [16]))) : var_8));
                        }
                    }
                }
                var_19 = (min(var_19, (((((arr_1 [i_1 - 3] [i_1 - 3]) ? (arr_1 [i_1 - 1] [i_1 + 1]) : var_0)) != (((var_7 > (arr_1 [i_1 + 1] [i_1 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
