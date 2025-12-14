/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 |= ((~((32985348833280 - (arr_8 [i_0 - 3] [i_0 + 1])))));
                                var_21 = (max(var_21, var_6));
                                arr_13 [i_0] [i_1 - 2] [i_2] [i_2] [i_4] = ((var_19 ? ((-var_4 ? -6035 : (arr_8 [1] [i_2]))) : (((max((!var_3), var_18))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((((-1012497142 ? ((max((arr_2 [i_0] [i_1] [7]), var_18))) : -1012497136))) ^ -6035)))));
                }
            }
        }
    }
    var_23 = var_12;
    var_24 = var_18;
    #pragma endscop
}
