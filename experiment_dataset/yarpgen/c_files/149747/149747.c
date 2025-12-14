/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_11 = (max(var_11, (((~((-(arr_0 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (arr_8 [i_3] [i_2] [i_3] [i_3])));
                                var_13 *= ((((((arr_8 [i_2] [i_2] [i_1 - 1] [i_3]) ? (arr_8 [i_2] [0] [i_1 - 1] [i_1 - 1]) : var_9))) && ((((arr_8 [i_3] [i_4] [i_1 + 2] [i_4]) ? (arr_8 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 2]) : (arr_8 [i_2] [i_1 + 2] [i_1 - 1] [10]))))));
                                arr_13 [i_0] [i_0] [10] [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_8))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((1 != (arr_0 [i_0])))))));
                            }
                        }
                    }
                    var_14 = (max(var_14, (arr_7 [i_0])));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_15 *= (max((((!((((arr_6 [i_2] [i_2] [i_2]) ? var_8 : (arr_1 [i_2] [i_2]))))))), (((arr_9 [i_0 - 3]) ? (arr_16 [i_0] [i_1] [i_2] [i_0]) : (arr_0 [i_2])))));
                        var_16 = (arr_5 [i_1]);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 = ((~((((min((arr_9 [i_0 + 2]), 10363))) >> (((arr_2 [i_0 - 3]) ? 1 : 1))))));
                            var_18 &= (arr_8 [i_2] [i_2] [i_2] [i_2]);
                            arr_19 [i_6] [i_5] [i_0] [i_0] [i_1 + 1] [i_0 + 2] = ((~((((min((arr_8 [i_0] [i_1 + 2] [i_2] [11]), var_5))) ? (min((arr_16 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0]))) : ((max(var_6, (arr_2 [i_0]))))))));
                            var_19 = (arr_1 [i_2] [i_5]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = (arr_22 [i_1 - 1] [i_0] [i_1 + 2] [5] [i_1 + 2]);
                            var_21 = var_7;
                            var_22 ^= ((~(((arr_5 [i_0 - 3]) | ((1 ? (arr_15 [i_2]) : (arr_1 [i_2] [i_2])))))));
                            var_23 = (((arr_4 [i_0 - 3] [i_0 - 2] [i_0 + 2]) ? (((arr_2 [i_0 - 1]) ? (arr_17 [i_2] [i_7]) : (arr_17 [i_0] [i_1 + 1]))) : ((((arr_20 [i_0] [i_0 + 2] [i_0] [i_1 - 1] [i_7]) != ((max((arr_9 [12]), (arr_7 [i_7])))))))));
                            arr_24 [i_0] [i_0] = (arr_18 [i_0] [i_0 + 1] [i_0 + 2] [i_0]);
                        }
                        var_24 = (min(var_2, (min((max((arr_15 [i_0]), 9832324305338005310)), var_10))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_25 = (max(9, ((((min((arr_27 [i_0] [i_0] [i_1 + 1] [i_2] [i_0] [i_0]), (arr_1 [i_0] [i_1 - 1])))) ? (((max(-10364, (arr_27 [i_0 - 1] [1] [1] [i_0] [i_0] [i_0 - 1]))))) : (max((arr_20 [i_0] [5] [i_1] [i_2] [i_8]), var_9))))));
                        var_26 = (arr_3 [i_0]);
                        var_27 ^= (!-18400);
                    }
                }
                var_28 = (max(((~(((arr_17 [i_0 + 2] [12]) ? (arr_7 [i_0]) : var_6)))), (((arr_16 [i_0] [i_0 - 3] [i_0] [i_1]) ? (arr_16 [0] [i_0 + 1] [i_0] [i_0]) : (arr_16 [i_0 + 1] [i_0 + 2] [1] [i_1])))));
            }
        }
    }
    var_29 -= (!var_1);
    #pragma endscop
}
