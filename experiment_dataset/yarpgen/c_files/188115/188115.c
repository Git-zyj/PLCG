/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (7195036107551417857 > 1);
                var_14 = (arr_2 [i_0] [i_0] [i_0]);
                var_15 = (arr_2 [i_0] [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = (min(((251658240 << (-251658241 + 251658243))), (-127 - 1)));
                    arr_7 [i_0] [10] [i_0] [i_0] = var_1;
                    arr_8 [6] [i_1] [6] = (((arr_4 [i_1] [i_2]) << ((((var_6 ? var_2 : (arr_6 [i_0] [i_0] [i_0]))) - 85))));
                    arr_9 [i_2] [i_0] = var_0;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_16 [i_1] [i_3] = ((-(arr_0 [i_0])));
                        arr_17 [i_4] [i_3] [i_1] [i_0] = var_1;
                        arr_18 [1] [i_3] [15] = (arr_6 [i_0] [i_0] [i_0]);
                        arr_19 [i_0] [i_0] [i_0] [i_3] [i_4] = (arr_1 [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_22 [8] [8] [i_5] = (arr_14 [i_0] [i_0] [i_3] [8]);
                        arr_23 [11] = ((-(((arr_0 [i_1]) + var_12))));
                    }
                    arr_24 [i_0] [i_1] [4] = ((!(((~(arr_4 [4] [i_0]))))));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_28 [i_0] = var_1;
                    arr_29 [i_6] [i_1] [i_0] = (-var_9 ^ (arr_12 [i_6] [i_1]));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_32 [6] = var_12;
                    arr_33 [i_0] [16] [i_1] [i_7] = ((!((((arr_20 [14] [i_1] [i_7] [i_7]) ? var_8 : (!var_9))))));
                    arr_34 [i_0] = ((-251658234 ? (arr_31 [i_0] [i_7]) : 12));
                }
                arr_35 [i_1] [10] [12] = 13;
            }
        }
    }
    var_17 = (~var_1);
    #pragma endscop
}
