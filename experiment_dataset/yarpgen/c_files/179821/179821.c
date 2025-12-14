/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [8] [i_0] [12] = (min((((var_5 && ((min(var_11, var_8)))))), (arr_2 [i_0] [i_1])));
                var_19 &= (((-1 < -70) != (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((((((var_8 & var_0) != (~var_15)))) * (arr_0 [i_2 - 1])));
                                var_21 = ((var_3 + (min((arr_3 [i_0 + 1]), ((min((arr_10 [14] [i_1] [14] [i_3] [i_4]), (arr_0 [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_7));
    var_23 = var_15;
    #pragma endscop
}
