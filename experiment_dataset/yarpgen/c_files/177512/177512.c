/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ^ ((((var_15 ^ var_3) ? ((var_6 ? var_7 : 255)) : var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 += ((min((arr_0 [i_2 + 2]), (arr_0 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [9] [i_1] [i_1] [i_0] = ((!((((((var_3 ? (arr_5 [i_1] [i_1] [i_1]) : 34165))) ? (((arr_6 [i_1]) ^ 4294967295)) : (arr_5 [i_1] [i_3] [i_3]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_11 [i_1 + 1] [i_4] [i_4] [i_2 - 4] [i_1 + 1]);
                                var_20 = (min(var_20, (arr_6 [2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (!1);
    var_22 ^= (max(var_0, (var_9 - -4294967286)));
    var_23 = (max(var_23, (((((((var_11 ? var_3 : var_3))) ^ ((var_17 ? var_3 : var_12))))))));
    #pragma endscop
}
