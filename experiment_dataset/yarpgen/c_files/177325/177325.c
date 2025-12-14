/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((255 ? (arr_10 [i_0] [i_1] [4] [i_3] [i_4] [i_4]) : (min((0 / 4294967041), -15))));
                                var_17 = (((((65535 ? 4294967041 : 3))) ? (min(var_14, -15)) : (((0 ? 0 : 39305)))));
                                var_18 &= (-127 - 1);
                            }
                        }
                    }
                }
                var_19 = ((((var_12 == (arr_7 [i_0] [i_0])))));
                var_20 = var_1;
            }
        }
    }
    #pragma endscop
}
