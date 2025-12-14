/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161289
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
                var_15 = ((+(((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_1])))));
                arr_6 [i_1] [4] = (((((arr_2 [i_0] [i_1] [i_1]) || (!28))) && (arr_1 [i_0])));
                arr_7 [i_1] = (max(((-((~(arr_1 [4]))))), ((((arr_3 [i_0] [i_1]) | (arr_4 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [1] [i_1] = (arr_10 [i_1] [i_1] [i_1]);
                            arr_14 [i_0] [i_1] [i_2] [2] [i_2] [i_1] = (arr_12 [11] [i_3] [i_1]);
                            var_16 = ((!(((+(((arr_4 [i_0] [i_2]) ? (arr_12 [2] [0] [i_1]) : (arr_8 [i_1] [2] [i_1]))))))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_17 [i_0] [i_0] [9] [i_0] [8] [i_1] [i_0] = (((arr_12 [1] [i_2] [i_1]) && (arr_11 [i_4] [i_4] [i_1] [i_4] [i_4] [6])));
                                arr_18 [i_0] [i_1] [6] [i_1] [i_2] [i_3] [i_4] = (max((((max((arr_5 [i_0] [i_1] [12]), (arr_15 [i_1] [i_1]))))), ((~(arr_0 [i_1])))));
                                var_17 = arr_11 [i_0] [i_0] [i_1] [i_0] [1] [i_0];
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_23 [i_1] [12] [i_0] [0] [i_1] [i_1] = (arr_2 [i_0] [6] [i_0]);
                                arr_24 [i_1] [i_1] [i_1] [i_1] = (max((((arr_1 [i_5]) ? (((max((arr_21 [9] [9] [i_2] [i_1] [i_2] [i_2]), -11423)))) : ((2361941871 ? (arr_10 [i_0] [i_1] [7]) : (arr_0 [i_5]))))), ((max((arr_21 [i_5] [12] [i_1] [i_1] [i_1] [i_0]), (((arr_0 [i_0]) - (arr_0 [i_1]))))))));
                                var_18 = (min((max((min((arr_15 [i_1] [i_3]), 1)), ((((arr_9 [i_1] [i_2] [0] [i_5]) && (arr_0 [0])))))), (arr_0 [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((min(var_7, 1))) ? -var_1 : var_14)) | ((min((max(var_0, var_1)), var_5))));
    var_20 = var_0;
    var_21 = var_14;
    #pragma endscop
}
