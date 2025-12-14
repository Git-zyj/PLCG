/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(var_13, var_7));
        var_14 = (min(var_14, ((min(((7020921443970611992 ? 11425822629738939616 : -29373)), (arr_2 [i_0]))))));
        var_15 &= ((max((arr_2 [i_0]), var_7)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 ^= ((~(max(18376467981267764598, ((max(var_3, (arr_2 [i_1]))))))));
            var_17 = (max(var_17, var_1));
            var_18 = 7020921443970612011;
            var_19 = (max(var_19, -3758953038062295588));
        }
        for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((max((arr_19 [i_6] [i_6 - 3] [i_6] [i_6] [i_6] [i_6 + 1]), ((+((var_5 ? (arr_19 [i_1] [i_1] [i_1] [11] [1] [1]) : 6412110113392865705)))))))));
                            var_21 *= (arr_8 [i_4]);
                            var_22 = ((((arr_14 [i_3 + 3] [i_3 + 3] [i_1]) <= (arr_14 [i_3 + 1] [i_3 - 2] [i_1]))));
                            var_23 = (max(var_23, ((((arr_12 [i_6]) + ((var_11 ? (arr_18 [i_3 + 2] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_4]) : var_10)))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_24 *= 1;
                            var_25 = max((((((((arr_20 [i_8] [i_8] [i_7]) ? 4890 : var_0))) ? ((min((arr_19 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1]), (arr_12 [i_3])))) : (arr_18 [i_1] [i_3] [i_1] [i_3 - 2] [i_1])))), (((arr_23 [i_1] [i_1] [i_3 + 1] [i_7] [i_8] [i_9]) ? 7020921443970611999 : var_9)));
                            var_26 = ((((min(29366, (arr_14 [i_9] [i_7] [i_1])))) | ((61509 + (arr_14 [i_3] [i_7] [i_1])))));
                        }
                    }
                }
            }
            arr_29 [i_1] [12] |= (min(var_2, ((~(min(1, (arr_23 [4] [i_1] [4] [4] [i_3] [6])))))));
            arr_30 [i_1] = (~var_3);
            var_27 *= (((((var_4 >> (((arr_27 [i_1] [i_3 - 1] [i_3] [8] [i_3] [i_1]) - 1844624514))))) ? (!-3758953038062295591) : 234));
        }
        for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_34 [i_10] [i_1] = (((arr_17 [i_1] [i_1] [i_10] [i_1]) ? (((arr_12 [i_1]) ? (arr_28 [i_10] [i_1] [i_1] [i_10 - 2] [i_1] [i_1] [i_1]) : (min(1, var_9)))) : var_7));
            arr_35 [i_1] [6] &= (min(34314, (min((min(var_6, var_9)), (arr_13 [12] [i_10 - 2] [10])))));
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_28 = ((((var_11 - (var_2 - var_3))) / -var_4));
            arr_39 [i_1] = min(var_7, 16383);
            var_29 = (min(var_29, ((((((arr_19 [i_11] [9] [i_1] [i_1] [9] [i_1]) || (arr_19 [i_11] [i_11] [i_11] [i_1] [i_1] [i_1]))) && 511)))));
        }
        var_30 = (max(var_30, (arr_7 [i_1])));
        arr_40 [i_1] [i_1] = var_2;
        var_31 += ((((~var_1) == (arr_5 [4]))));
    }
    var_32 *= ((-29373 < (var_3 & -2104)));
    var_33 = (max(var_33, var_1));
    #pragma endscop
}
