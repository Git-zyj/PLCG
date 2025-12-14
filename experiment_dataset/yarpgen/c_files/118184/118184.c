/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 += (((min(((((arr_3 [6] [6]) && -39))), 1528681615)) | (((min((arr_4 [i_3] [i_2] [i_3]), var_12))))));
                                var_17 = ((((((((max(var_7, var_15))) || ((((arr_4 [i_0] [i_1] [i_2]) ? var_12 : (arr_2 [i_0] [i_1] [10])))))))) & var_6));
                                var_18 = (min(((((min(var_5, var_12))) ^ (min(var_8, (arr_4 [i_0] [1] [i_1]))))), ((((~38) ^ (min(var_9, var_4)))))));
                                arr_12 [i_0] [i_2] [i_2] [5] [i_4] [i_4] [1] = var_10;
                                arr_13 [9] [i_1] [i_2] [i_2] [i_4] = (((((min(2946184558128147039, 1))) <= (min(var_13, 8217488416271240991)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_19 = (arr_16 [i_0] [12] [5] [i_6]);
                            var_20 = (max(6135, var_15));
                            var_21 = ((var_4 > ((((((39 >= (arr_7 [i_0] [i_0] [i_5 + 1] [7]))))) ^ (min(-1, var_11))))));

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_22 = (((arr_2 [i_7] [i_7] [i_7]) - ((((arr_1 [i_5 - 1] [i_6 + 2]) >= (arr_1 [i_5 + 1] [i_6 + 2]))))));
                                var_23 = (((max((arr_14 [0] [i_0]), (((arr_5 [1]) << (var_0 - 3280649736))))) <= ((((arr_2 [i_0] [i_1] [0]) != (((arr_2 [i_1] [i_5] [i_1]) ? (arr_4 [i_5] [i_6] [i_1]) : var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_12;
    var_25 = -19;
    #pragma endscop
}
