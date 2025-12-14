/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (arr_4 [i_1 - 1]);
                        var_20 = ((var_7 / (arr_0 [i_0])));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2 - 1] = (arr_8 [i_3] [i_3] [i_3]);
                        arr_14 [i_1] [i_0] [i_1] = var_7;

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1 + 1] [i_1 - 1] [i_2 - 1] [i_1] [i_3] [16] = ((arr_3 [i_1 + 1]) & 562949416550400);
                            var_21 = (224 / 32);
                            var_22 = ((((((arr_1 [i_0]) || -97))) ^ (arr_1 [i_1 - 2])));
                            var_23 = var_11;
                            var_24 = (arr_9 [8] [8] [16] [i_4 - 2]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] = 9223372036854775807;
                        var_25 = var_16;

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_26 = ((((((-(arr_0 [i_5]))) ^ 4294967295)) > 239));
                            var_27 = (max((min((arr_10 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 3]), var_16)), ((max(-2, (arr_5 [i_1 - 1] [i_1]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_28 = 126;
                            var_29 &= arr_12 [i_0] [i_1] [i_1] [i_5] [i_7];
                            var_30 = 2715982713;
                            var_31 = ((!(arr_28 [i_1 - 3] [i_1] [i_0] [i_1] [i_0])));
                            var_32 = (max(var_32, var_9));
                        }
                        var_33 = 210;
                    }
                    var_34 = (min(var_34, (((4294967286 & (arr_28 [i_0] [i_0] [i_2] [i_0] [i_1 - 2]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_35 = ((((((arr_27 [12] [13] [i_9 + 3] [i_9 - 2] [i_9 + 3] [i_9 + 3] [i_9]) + (arr_27 [i_9] [i_9] [i_9 + 3] [i_9] [i_9] [i_9] [i_9])))) ? (max(var_12, -97)) : (var_3 / 1578984557)));
                    var_36 = var_16;
                    var_37 |= (min(var_10, (arr_6 [i_9 - 2] [i_9 - 2] [i_9 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
