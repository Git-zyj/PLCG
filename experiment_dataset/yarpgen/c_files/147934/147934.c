/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [1] |= ((((var_0 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) <= (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((+(((arr_3 [i_0] [i_1]) ? var_1 : -12903323140986693325))));
                    arr_10 [i_0] [i_0] [i_0] = (((((max((arr_1 [i_2]), (arr_1 [i_0]))))) ^ (max((arr_5 [i_2] [i_1] [i_0]), 5543420932722858295))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((min((((min((arr_1 [i_1]), var_3)) & var_1)), (arr_5 [i_0] [i_3] [i_3]))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] = ((+(((arr_7 [i_0]) ? (arr_7 [i_0]) : 5543420932722858315))));
                            var_14 ^= (max((min((arr_7 [i_3]), (max((arr_7 [i_2]), (arr_0 [5] [i_1]))))), (((((min(var_10, (arr_3 [i_2] [i_2])))) <= (max(var_2, var_7)))))));
                            arr_16 [i_4] [1] [i_3] [i_1] [i_0] &= (min(((max(((max(0, -25897))), (min(3829843512, 58))))), (var_10 - 921670782)));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_0] = (max((((arr_13 [i_0] [2] [i_0] [i_0]) ? (!var_7) : ((max((arr_4 [i_0] [i_1] [i_1]), var_4))))), ((~(var_4 | var_10)))));
                            var_15 += (((arr_7 [i_3]) ? (var_10 + 16777215) : (max(5543420932722858293, (arr_17 [5] [5] [i_0] [i_3] [5])))));
                            arr_20 [i_5] [i_0] [i_2] [i_0] [3] = 2;
                            var_16 = (min(var_16, (arr_7 [i_3])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min(((max(((var_2 ? (arr_17 [i_0] [i_1] [6] [i_6] [i_7]) : var_8)), (arr_5 [i_0] [i_0] [i_7])))), (max(((-867504191 ? var_5 : var_9)), (((var_6 ? (arr_23 [i_6]) : (arr_7 [i_2])))))))))));
                                var_18 = (max(var_18, (arr_1 [i_0])));
                                arr_27 [i_0] [i_0] [i_2] [i_6] [i_6] = (max((max((((var_2 ? (arr_12 [i_0] [i_0] [i_6] [i_7]) : (arr_25 [i_0])))), (arr_24 [i_2]))), var_2));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        var_19 *= ((var_10 ? (arr_22 [i_8] [i_8] [i_8] [i_8]) : ((3269177817 & (arr_22 [i_8] [i_8] [i_8] [i_8])))));
                        arr_30 [i_0] [i_1] = (max(var_5, ((((max((arr_24 [i_0]), var_7))) ? ((~(arr_6 [i_0] [i_2] [i_0] [i_0]))) : (((arr_29 [i_0] [i_1] [i_1] [i_2] [i_8]) ? (arr_21 [i_0] [i_0]) : (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_20 = (min(var_20, (((((220 < (!var_2))) ? (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((((arr_23 [i_0]) / (arr_12 [i_8] [i_2] [i_2] [i_0]))) - (((arr_26 [i_8] [i_1] [i_1]) / var_2)))))))));
                        var_21 = max(var_2, (arr_23 [i_0]));
                        arr_31 [i_0] [i_0] = var_9;
                    }
                }
            }
        }
    }
    var_22 = (((((var_3 || var_9) ? var_9 : 63)) | (((min((!19298), var_1))))));
    var_23 = (min(var_23, (((var_5 ? var_10 : (max((((var_5 >> (var_7 - 1346946770)))), var_6)))))));
    #pragma endscop
}
