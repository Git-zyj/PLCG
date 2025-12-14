/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [9] [i_1] [i_0] = (((var_4 * var_5) ? (arr_1 [9] [i_1]) : ((((((arr_1 [i_0] [i_1]) ? 1 : 1))) ? (arr_3 [i_0] [i_0]) : (((-(arr_0 [i_0] [i_0]))))))));
            arr_5 [i_0] [0] = arr_0 [i_0] [i_1];
            arr_6 [i_0] [14] [i_0] = max(2153812188, -69);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_17 = var_1;
            var_18 = (min(var_18, ((max((((((min((arr_0 [i_0] [i_0]), 2206292996))) ? var_4 : (min(var_11, var_1))))), (((var_10 / var_15) + (((arr_1 [18] [i_0]) ? var_8 : (arr_2 [11] [i_2]))))))))));
            var_19 = (((arr_1 [i_0] [18]) + (0 - 1)));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] = 1;
            arr_13 [i_0] = ((var_15 ? ((((((arr_2 [3] [i_3]) ? 1 : var_2))) ? (arr_7 [i_0]) : ((((arr_1 [i_0] [i_0]) ? 0 : 1))))) : var_16));
        }

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_20 = (max(var_20, (((((1 | (var_16 + 1))) | ((((27518 << (var_13 - 28420))) >> ((1 << (((arr_11 [1] [i_4] [i_4]) - 992280420)))))))))));
            arr_17 [2] = (min((((!(arr_16 [i_0])))), ((max((arr_1 [i_4] [i_0]), 1)))));
            var_21 = ((max(var_15, var_3)));
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_22 = (((((arr_19 [i_5 - 1] [i_5]) && 1)) ? (max(var_16, (arr_1 [i_5 + 2] [i_5 + 1]))) : (((((((arr_14 [i_5]) / var_12))) ? 1 : (((arr_11 [3] [19] [i_5]) / 75)))))));
            var_23 = (max(var_23, ((-(arr_18 [i_5 + 1] [i_5 - 2])))));
            var_24 = ((((max(((1 ? 0 : var_10)), (arr_14 [i_5 - 1])))) >= (~var_2)));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_22 [0] [i_5] = 12135221709456922745;
                var_25 = (max(var_25, ((((max(((((arr_14 [i_6]) ^ (arr_19 [i_6] [11])))), (((arr_0 [i_0] [1]) ? (arr_7 [i_5]) : 247028287))))) ? (max((arr_19 [i_5 + 2] [i_5 + 2]), (((arr_15 [i_0] [i_0] [i_0]) >> (((arr_7 [i_6]) - 397921647)))))) : (((arr_2 [i_5] [i_5 - 2]) << (((arr_2 [i_5] [i_5 - 2]) - 3661549477))))))));

                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    arr_26 [i_7] [i_6] [i_5] [i_0] = ((!(((((max((arr_15 [i_0] [i_0] [i_6]), (arr_19 [i_7] [i_5])))) ? (arr_25 [i_0] [i_5] [i_0] [i_7]) : (~var_14))))));
                    var_26 += var_11;
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_30 [i_0] [i_0] [14] [i_0] = 1;
                    arr_31 [i_0] [i_5] [i_8] = var_7;
                }
                var_27 ^= (!var_7);
            }
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_28 = (((arr_0 [i_9] [i_9 + 2]) && (arr_21 [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_29 = 6311522364252628860;
                        var_30 = (((arr_36 [i_0] [i_9] [i_9 - 1]) - var_14));
                        arr_39 [i_0] [i_9] [i_0] [12] = ((4089833811 - ((12135221709456922745 ? (arr_11 [i_0] [i_9] [i_0]) : 1))));
                    }
                }
            }
            var_31 = (arr_3 [i_0] [i_9 - 2]);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    {
                        arr_44 [12] [i_13] [i_9] [i_12] [i_13] = ((~((var_13 ? var_12 : (arr_25 [i_9 - 2] [i_9] [13] [i_9])))));
                        var_32 = var_16;
                    }
                }
            }
        }
    }
    var_33 = (~var_16);
    var_34 += (((((14870489245436971688 - 1) ? 1 : var_16))) ? var_14 : var_12);
    #pragma endscop
}
