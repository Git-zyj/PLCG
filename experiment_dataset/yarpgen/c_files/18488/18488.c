/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_16 |= (((((var_9 ? ((min(var_12, var_8))) : ((var_7 + (arr_0 [i_0] [i_0])))))) ? (min(var_3, (((arr_2 [i_0] [i_0]) ? 29 : var_2)))) : ((min((min(28, (-127 - 1))), 121)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_13 [i_0 - 1] [i_3] = ((((min(20, (arr_0 [i_4 + 2] [i_3 - 3])))) ? ((((max((arr_5 [i_4] [i_3] [i_0]), 39))) ? 70 : (((!(arr_12 [10] [i_1] [i_2] [i_1] [i_4 + 1])))))) : 59));
                            arr_14 [i_4] [i_3] [i_4] = ((((((((var_10 + var_2) + 2147483647)) << (((arr_10 [14] [i_3]) >> (((arr_8 [15] [i_1] [i_1] [i_1]) + 65))))))) ? ((min((arr_0 [i_4 - 1] [i_0 + 1]), (arr_0 [i_4 + 1] [i_0 - 1])))) : (arr_2 [i_0 - 3] [i_1])));
                            arr_15 [10] [10] [22] [i_2] [i_3] [22] [i_4] = max(var_12, (min((arr_5 [i_3 - 3] [i_0 + 1] [i_4 - 1]), (-127 - 1))));
                        }
                        var_17 -= max(20, var_11);
                        var_18 = var_2;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_19 [i_3] [i_3] [10] [i_1] [i_3] = (max((((((var_9 ? 19 : (arr_18 [i_0] [i_0] [i_2] [i_3] [i_2])))) ? var_5 : ((var_11 ? 125 : (-127 - 1))))), ((max((-22 == var_15), (min(var_9, var_2)))))));
                            var_19 += (min((((((17 ? var_14 : 108))) ? ((0 ? -126 : var_9)) : var_10)), (max(((-47 ? 127 : 85)), var_8))));
                            var_20 = (min(((max((arr_11 [i_3] [i_3] [22] [i_3 - 1] [21] [i_3] [i_3]), (arr_18 [17] [i_3 - 1] [i_5] [i_3] [i_5])))), (max(((127 ? (arr_1 [i_5]) : 98)), var_13))));
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_3] [i_5] = (max(((var_7 / (arr_18 [i_0 - 1] [i_1] [i_0 - 2] [i_3] [i_5]))), ((max(var_7, (arr_18 [19] [15] [i_2] [i_3] [i_5]))))));
                        }
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            var_21 = (((arr_3 [i_6 - 1]) ? ((max(var_14, (arr_21 [i_0] [i_0] [i_0] [8])))) : ((var_0 ? (arr_22 [i_0 + 1]) : var_9))));
                            arr_24 [i_0] [4] [i_2] [i_3] [i_3] = min(-21, ((max((arr_11 [i_3] [23] [i_1] [i_1] [i_3] [14] [22]), -110))));
                            arr_25 [1] [4] [1] [i_3] [4] = (((((var_9 ? (arr_3 [i_0 - 1]) : -20))) ? -22 : ((var_4 ? -20 : (arr_12 [i_1] [20] [i_1] [i_1] [i_1])))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_29 [i_2] [i_1] [i_1] [i_3] [i_3] [i_3] [i_7] = (((((((((arr_12 [15] [11] [i_2] [i_2] [i_7]) ? -120 : 106))) ? var_0 : (arr_6 [i_0] [i_1] [i_1] [i_7])))) ? var_10 : ((min(var_5, (max(var_9, (arr_1 [i_0]))))))));
                            var_22 = ((((((max((arr_10 [i_0] [i_3]), 31))) > (arr_22 [i_0 - 2]))) ? (((arr_17 [i_3] [i_3 - 2] [11] [i_3] [i_3]) ? (arr_17 [i_2] [i_7] [i_2] [22] [i_7]) : ((max(-112, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (arr_27 [4] [4] [i_0 + 1] [i_3 + 1])));
                            arr_30 [i_1] [i_2] [i_2] [12] [i_3] [23] = ((((max((arr_28 [i_0 + 1] [i_0 + 1] [i_3] [10]), (arr_4 [i_3 - 1] [i_3 + 2])))) ? ((max((-127 - 1), (arr_4 [i_3 - 3] [i_3 - 3])))) : ((max(var_4, 98)))));
                        }
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            var_23 += (max(-23, (min((arr_9 [i_8] [i_8] [i_8]), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
            var_24 -= max(((max((arr_17 [i_0] [i_8] [i_0] [i_0] [i_0]), (arr_31 [i_0])))), var_7);
        }
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_25 -= (((((61 != (arr_21 [2] [i_9] [2] [6])))) ^ (((min(-19, -19))))));
        arr_38 [i_9] [i_9] = ((((max(-92, var_5))) ? ((var_14 ? (arr_10 [16] [16]) : var_0)) : ((((arr_10 [i_9] [18]) > (arr_10 [i_9] [14]))))));
    }
    var_26 += var_13;
    #pragma endscop
}
