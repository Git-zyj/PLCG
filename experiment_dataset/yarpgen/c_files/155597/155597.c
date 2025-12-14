/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_5, ((((var_10 ? var_1 : 1)) + var_5))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (((var_1 | 113) != (var_8 + var_1)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_13 = (6151412818637529376 || var_2);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_14 += ((var_3 != (((arr_7 [12] [i_1] [i_2]) & 6151412818637529376))));

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_15 = (6151412818637529371 & 6151412818637529396);
                    var_16 = -63;
                    arr_11 [i_0] [i_3] [i_2] [i_3] = ((((var_10 != (arr_8 [i_0]))) ? (arr_9 [i_0 - 1] [i_0] [i_0] [9] [i_0] [i_0]) : ((1 ? 6151412818637529388 : (arr_4 [15])))));
                }
            }
        }
        var_17 |= ((0 ? (arr_9 [i_0 - 1] [i_0 - 1] [6] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_2 [i_0])));
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_18 = ((-16272 & -9704) == (arr_15 [i_6]));
                            arr_24 [i_4] [i_5] = ((((((!(arr_12 [i_4 - 3]))))) > (((arr_12 [i_4 - 2]) ? (arr_12 [i_4 - 2]) : 5092186990440998729))));
                            var_19 -= ((!((((((arr_14 [i_6] [i_8]) || (arr_18 [i_4]))) ? (max(2019516636067148899, var_9)) : (((min(1, var_2)))))))));
                        }
                    }
                }
            }
            var_20 -= (max(((((arr_22 [i_4 - 1] [i_4 - 1] [3] [i_4] [i_4] [i_4 + 1]) ? 1 : (arr_22 [i_4 - 2] [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4 + 1])))), (max(-var_7, 9223372036854775807))));
            var_21 = (arr_15 [i_4]);
            var_22 = (min(var_22, (((((min((-9223372036854775807 - 1), (arr_12 [i_4 + 1])))) ? (min(var_5, (arr_15 [i_4 + 1]))) : ((min((arr_22 [14] [i_5] [i_5] [14] [i_4] [i_5]), (arr_22 [1] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_28 [i_9] [i_9] = 8033780706982460622;
            var_23 = ((((((-(arr_13 [i_4])))) >= ((928245973 ? 18071 : 937038388)))));
        }
        arr_29 [9] |= (max((((var_11 != 12) ? (((((arr_14 [i_4 + 1] [i_4]) && var_11)))) : (max(12295331255072022245, 6151412818637529382)))), 1));
        var_24 = (min((arr_17 [i_4 + 1]), ((((arr_17 [i_4 + 1]) > (arr_17 [i_4 + 1]))))));
    }
    #pragma endscop
}
