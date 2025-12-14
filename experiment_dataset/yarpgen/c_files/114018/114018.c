/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_3 < -4294967295);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] = var_6;
                    arr_11 [i_0] [12] [2] [15] = ((!(arr_4 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] [18] |= ((((31 ? (min(var_7, var_4)) : (65266 / var_4))) * (arr_3 [i_4])));
                                arr_19 [i_0] [i_3] [12] = 63112;
                                arr_20 [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] [i_4] = max((((~1) ? 14065718562557247466 : ((297 % (arr_4 [i_0] [i_1 - 2] [i_4]))))), (((-(arr_13 [i_2] [i_3] [17])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
