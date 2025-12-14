/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -7173;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, (((((max(var_2, (arr_0 [i_0 + 1]))))) / (min(-5737235378153690232, 7173))))));

        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [10] [8] [i_0] [i_0 + 1] = ((((min(var_4, (arr_13 [i_2] [i_1] [i_3 - 1] [i_0 + 1] [i_1 - 1])))) ? ((max(7170, 17387))) : ((((((arr_3 [i_0 - 1] [i_0 - 1]) ? 5803634429321780952 : var_2))) ? (var_4 != 48643) : (21749 <= 1750283229)))));
                            arr_16 [i_0] [i_1 + 3] [4] [i_0] = min(var_11, ((min(58361, 7174))));
                            var_15 |= (min(((min(15626, 49910))), 5915576871305228238));
                            arr_17 [i_0] [i_4] = (max(var_7, ((-(min((arr_5 [i_1] [i_2] [i_0]), (arr_7 [i_4])))))));
                        }
                    }
                }
                arr_18 [i_0 - 1] [2] [i_0] = var_8;
                arr_19 [i_0 - 1] [i_0] [i_0] [1] = (i_0 % 2 == 0) ? ((((arr_5 [13] [13] [i_0]) == (((arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_0] [4]) << ((((-(arr_3 [i_0] [i_1]))) - 1177690948))))))) : ((((arr_5 [13] [13] [i_0]) == (((((arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_0] [4]) + 2147483647)) << ((((((-(arr_3 [i_0] [i_1]))) - 1177690948)) - 1)))))));
                var_16 += var_9;
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1] [i_5] [i_0] [i_7] = ((((min(21749, 128))) > -var_2));
                            arr_28 [i_0] = ((arr_20 [i_0] [i_1 + 2] [0] [i_0]) < (((((arr_7 [i_0 - 1]) ? (arr_3 [11] [i_7 + 2]) : (arr_6 [i_0] [0] [i_5]))) - (-11 <= 15648))));
                            arr_29 [i_0] [i_5] [i_6] = 49910;
                        }
                    }
                }
            }
            arr_30 [i_0] = (arr_14 [i_0] [2]);
            var_17 = (max(var_17, ((min((((arr_26 [4] [i_0 + 1] [i_1] [i_0 + 1]) / -1)), (min((-14183 ^ 1), ((min(-121, 1))))))))));
            var_18 = (((arr_10 [i_0] [i_0] [i_1 + 1] [i_1]) / (((var_0 ? (arr_21 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_1 + 2] [i_0 + 1]))))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
        {
            arr_33 [i_0 + 1] [i_8 - 1] [i_0] = (arr_21 [i_0] [i_0 + 1]);
            arr_34 [8] [i_0] [i_0] = (arr_0 [i_0 + 1]);
        }
        arr_35 [i_0] = ((!((!(arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
    }
    var_19 = (((((min(var_6, var_2)))) / var_9));
    #pragma endscop
}
