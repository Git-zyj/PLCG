/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_11 = ((((min((min((arr_2 [i_0] [i_1]), var_4)), ((((arr_2 [i_0] [20]) | (arr_1 [i_0] [i_0]))))))) ? (arr_2 [i_0] [i_1]) : (min((arr_0 [i_0] [i_0]), var_0))));
            var_12 -= (arr_0 [i_0] [1]);
            arr_5 [i_0] [i_0] = ((~(((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 - 1])))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_13 = ((!((max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_1] [i_2]))))));
                arr_8 [i_0] = ((min(var_8, (arr_4 [i_1] [i_0]))));
                arr_9 [i_0] [i_1] [i_2] = (min(10969351869136127824, 7477392204573423813));
            }
        }
        arr_10 [14] |= 1;
        arr_11 [i_0] [1] |= ((-(arr_4 [i_0] [i_0 - 1])));
        var_14 *= (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0]) && (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] |= var_1;
        arr_15 [i_3] = (max(-7655173316472669217, 14666187818254062475));
    }

    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (min(((((var_2 ? 65519 : var_1)))), (((arr_3 [i_4] [i_4 + 2] [i_4]) / var_1))));
        arr_19 [20] |= -var_10;
        arr_20 [i_4] = ((7477392204573423784 / ((var_0 ? (arr_2 [i_4 - 1] [i_4 + 3]) : 8024891290432716423))));
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        var_15 = (min(var_15, (((arr_21 [i_5]) ? var_9 : ((min(var_6, ((var_3 & (arr_23 [2]))))))))));
        arr_24 [i_5] = var_10;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_34 [i_6] [i_6] [i_6] [i_6] = var_8;
                    var_16 *= 0;
                    arr_35 [i_7 + 3] [i_7] [i_7] [12] = (((~(arr_4 [i_7 + 1] [i_7 - 1]))));

                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        arr_39 [i_6] [i_7 - 4] = (min(((((arr_38 [i_6] [i_9 - 2]) < -250574627418178998))), (max((max((arr_27 [i_6]), var_7)), (((~(arr_1 [i_6] [i_6]))))))));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_43 [10] [3] [i_7] [i_8] [10] [i_10] [10] &= var_1;
                            var_17 = 74;
                            var_18 = (min(var_18, (((-(min(3780556255455489137, -var_2)))))));
                            arr_44 [i_6] [i_7] [i_8] [i_9] [8] |= (max((min(3780556255455489137, -43)), (((963 / (arr_31 [i_9 - 3] [i_7 + 2]))))));
                        }
                        arr_45 [i_7] [i_7] [i_7] [i_6] = (((((-(arr_30 [i_7 - 3])))) ? ((((((arr_22 [1]) && 8024891290432716423)) && ((!(arr_12 [i_6])))))) : (((!(((1 ^ (arr_36 [i_8])))))))));
                        var_19 = (((arr_17 [i_6]) & (0 / 1280063948)));
                    }
                    arr_46 [i_6] = (max((((((var_5 ? var_10 : (arr_42 [i_7] [2] [i_7])))) ? (~var_0) : 65535)), ((max((((62175 && (arr_16 [4])))), (((arr_25 [i_6] [i_6]) - (arr_22 [0]))))))));
                }
            }
        }
        var_20 = ((((max(var_7, 3023858593024564999)) >= ((((arr_38 [14] [i_6]) ? (arr_28 [i_6]) : (arr_21 [i_6])))))) && ((min((var_2 | var_5), ((min(28, (arr_2 [i_6] [9]))))))));
        var_21 = (((((min((arr_27 [15]), (arr_4 [i_6] [i_6]))) | var_6)) ^ (min((arr_33 [i_6] [i_6] [i_6] [i_6]), ((((arr_37 [i_6] [i_6] [i_6] [1]) ^ var_1)))))));
    }
    #pragma endscop
}
