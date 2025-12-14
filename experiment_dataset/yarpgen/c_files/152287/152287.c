/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [4] [i_1] [i_0] = ((-(arr_2 [i_2])));
                            var_20 = (max(var_20, ((((((((16384 && (arr_5 [1] [1]))) ? (arr_12 [i_0] [14] [i_0] [i_3] [i_0] [i_0]) : 0))) ? 8646911284551352320 : (((((arr_0 [i_0] [i_0]) ? 113 : var_18)) / (arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_2] [i_0]))))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_21 = (min(var_21, (arr_17 [i_0] [i_0] [i_2])));
                                arr_18 [i_1] [i_3] [i_1] [i_1] [i_0] [i_0] = (arr_1 [i_0] [1]);
                                var_22 = (((arr_0 [i_0] [i_0]) ? (arr_9 [i_0] [i_1] [6]) : (arr_0 [i_0] [i_1])));
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1)
                            {
                                var_23 = ((((arr_11 [i_0] [i_1] [18]) << (125829120 - 125829074))));
                                var_24 = (min(var_24, -1302701895));
                                var_25 = (((((arr_10 [i_5 + 1] [i_1 - 1] [i_1 - 1]) ? (((arr_17 [i_5] [i_0] [i_0]) / var_12)) : (arr_4 [i_3] [i_2] [i_1]))) / -var_16));
                                var_26 = ((((arr_14 [i_1 - 1] [i_2] [i_3] [i_5 + 1]) <= (arr_14 [i_3] [i_2] [i_1 - 1] [i_0]))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_27 = arr_21 [i_1 - 1];
                                var_28 = (-2283 ^ var_11);
                                arr_23 [8] [8] [i_2] [13] [i_1] [13] [i_6] = ((!(arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                                var_29 = (arr_16 [i_1 - 1] [17] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                arr_24 [i_1] [i_1] [i_0] = (((-(((arr_1 [i_0] [i_1 - 1]) ? (arr_10 [i_1] [i_0] [i_0]) : 6499765521035108478)))));
                arr_25 [i_1] [i_1] [8] = ((arr_20 [i_1] [i_0] [i_0] [i_0] [i_0]) ? ((min((1278411230 || 10), (arr_2 [i_0])))) : ((~(-7028 != var_11))));
            }
        }
    }
    var_30 = var_2;
    #pragma endscop
}
