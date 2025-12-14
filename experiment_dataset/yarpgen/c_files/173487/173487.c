/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_4 ? ((var_11 ? var_3 : var_16)) : (var_0 || -27))), var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 &= min(((((!var_12) ? (arr_5 [i_0 - 1] [i_0 + 1]) : (var_11 || var_13)))), (((((126 ? 16423012688988672867 : 245))) ? var_2 : ((-3701186778007143708 ? var_1 : -4605686416815369870)))));
                    arr_6 [i_0 - 1] [i_0] [i_0] [i_0] &= ((((((arr_3 [i_0] [i_1] [i_2]) - 9223372036854775806)) == (((min((arr_0 [i_0]), 6537)))))));
                    var_19 = (((arr_1 [i_0]) + ((min((arr_5 [i_0 + 1] [i_2 + 1]), var_16)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = ((51483 ? ((((arr_10 [i_0] [i_0 + 1] [i_2 + 1] [i_3 + 2] [i_2 + 1] [i_3]) ? var_14 : var_2))) : var_15));
                                var_21 = 3046811520;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((!((min(30479, (!1038653791878324569))))));
    #pragma endscop
}
