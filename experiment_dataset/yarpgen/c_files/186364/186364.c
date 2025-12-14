/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 |= -5113287231911189272;
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_13 = (arr_6 [i_0] [i_0]);
                            arr_11 [i_0] [i_1 - 3] [i_1 - 3] [i_2] [i_2] [i_3 + 1] = -6800;
                            arr_12 [i_0] [i_1] [i_2] [i_3 + 1] |= (((max((min(-6800, var_9)), (arr_1 [i_1 - 3] [i_3 + 1]))) < 861131667));
                            arr_13 [7] [i_1] = (min((min(((((arr_9 [i_0] [i_1] [8] [i_0] [8]) / var_9))), var_8)), (arr_4 [i_0] [i_1 + 1] [i_1 + 1])));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] = 32;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_14 |= (max(-6800, ((3072 >> (122 - 99)))));
                                var_15 = max(((-((0 ? 1 : -22950)))), (!13976));
                                var_16 = (min(3433835629, (((max(6800, 5265427216355315337))))));
                            }
                        }
                    }
                    arr_23 [11] = (((arr_4 [i_4 + 2] [i_1 - 1] [i_1 - 1]) ? ((((arr_4 [i_4 - 3] [i_1 - 3] [i_1 + 1]) & (arr_4 [i_4 + 3] [i_1 - 1] [i_1 - 3])))) : (min((arr_4 [i_4 - 3] [i_1 - 2] [i_1 - 1]), var_6))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_27 [i_0] [1] [i_7] [i_7] = ((-(((arr_21 [11] [11] [i_7]) % (arr_9 [i_1 - 3] [i_1] [i_0] [i_0] [i_0])))));
                    var_17 = ((((min(var_4, (arr_14 [i_0] [i_1 - 1] [i_0] [i_1 - 2])))) ? (((arr_14 [i_0] [i_0] [i_1 - 3] [i_7]) / (arr_14 [i_0] [i_7] [i_7] [i_1 - 1]))) : (arr_14 [i_0] [i_0] [i_0] [i_0])));
                }
                var_18 = (arr_0 [i_0]);
                var_19 = var_1;
                var_20 = (arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 3]);
            }
        }
    }
    #pragma endscop
}
