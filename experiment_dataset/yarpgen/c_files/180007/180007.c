/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] = 2084767562;
                        var_12 = (arr_5 [i_1 - 2] [i_1 - 2]);
                        var_13 = (min(var_13, (!13611312755270685784)));
                    }
                    var_14 = (((arr_7 [i_0 + 3] [1] [i_1 + 2] [i_1] [i_1 - 1]) ? (arr_4 [i_0 + 4] [i_1] [i_1 - 2] [i_1]) : (arr_7 [i_0 + 2] [20] [i_1 + 1] [4] [i_1 - 1])));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [1] [i_1] [12] [i_4] [13] = (((var_2 || var_3) / var_1));
                                var_15 += (((arr_2 [i_0 + 1] [i_1 + 2]) ? (arr_2 [i_0 + 1] [i_1 - 2]) : -94));
                            }
                        }
                    }
                    arr_21 [i_0] [i_4] = ((-(arr_14 [i_4 + 1] [i_1 + 1] [i_0] [i_0 + 2])));
                }

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_25 [i_0] [i_1] [i_7] |= var_3;
                    var_16 = 429899736;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_17 = (max(var_17, (arr_14 [i_0 + 4] [i_0] [i_0 - 1] [i_0 + 4])));
                    var_18 = (min(var_18, (arr_26 [i_0 + 1] [i_1])));
                }
                var_19 = (arr_23 [i_0] [i_0 + 1] [14]);
                var_20 -= 4005804151;
            }
        }
    }
    #pragma endscop
}
