/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_7;
    var_11 = (max(var_11, (((((max(var_6, 103))) ? -var_0 : (1995900679 > var_6))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_0] = ((9395 ? ((var_2 >> (var_4 + 1268335500))) : (((!(arr_2 [i_0]))))));
            var_12 = (min(var_12, ((((((1104039568427152507 ? -1177212565 : var_7))) + (arr_0 [i_1]))))));
            var_13 ^= (arr_4 [i_1] [8]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_14 = -6459696627172097826;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_15 += ((((max((max(60273, var_3)), (arr_5 [i_2] [i_3])))) ? (arr_0 [i_2]) : (arr_12 [i_0] [i_2] [i_3] [1])));

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_16 = -1254296826;
                    var_17 = (((((((-17 ? -9395 : var_7)) ^ (arr_10 [12] [i_4])))) ? ((~(arr_8 [i_4] [i_2] [i_0]))) : 4284003947));
                    var_18 = (max(37220, (max((((!(arr_10 [i_0] [12])))), var_7))));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_19 = (arr_3 [i_0]);
                    var_20 |= ((((arr_10 [i_2] [1]) ? var_9 : 2970480570934277101)) & var_8);
                }
                var_21 = (((arr_4 [i_0] [8]) < ((((arr_13 [i_0]) || (var_4 || var_3))))));
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                var_22 = (min(var_22, (((((((((((arr_11 [i_2] [i_2] [i_2]) * var_1))) && (-6190502954427338279 / var_3))))) == (((arr_13 [i_0]) ? (arr_18 [i_0]) : 1)))))));
                arr_21 [6] [i_0] [i_6 - 1] = var_0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_23 = arr_15 [i_0] [i_2] [2] [i_7] [i_7] [i_8 + 1];
                            arr_28 [i_0] [i_0] [i_0] [13] [i_8 + 1] = (!-40);
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_24 = (min(var_24, (arr_12 [i_0] [i_2] [i_2] [i_2])));
                var_25 = (~((((28315 || (arr_18 [17]))))));
            }
            var_26 -= (((var_7 ? ((max(-23175, 21169))) : (((!(arr_19 [i_0] [i_0] [i_2])))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_36 [i_0] [i_10] [i_0] = (((var_1 - 3952222471) ? (var_3 ^ var_9) : (arr_9 [i_0] [i_10])));

            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {

                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    var_27 = (((arr_25 [i_12 - 3] [i_12] [1] [i_12 - 3]) ? (!-6602) : 4176114646));
                    arr_42 [i_0] = var_0;
                    arr_43 [i_0] [i_10] [i_11] [5] = (arr_10 [i_0] [i_0]);
                }
                arr_44 [i_0] [1] [i_0] = (((((var_2 ? var_2 : (arr_37 [i_0] [19] [11])))) ? (arr_39 [i_0] [i_0] [i_0] [0] [i_0]) : (arr_13 [i_0])));
            }
            var_28 = (min(var_28, (((~(arr_22 [i_0] [i_10] [i_0] [i_10] [i_0]))))));
            var_29 -= (((4 ? -5 : (arr_19 [i_0] [14] [i_0]))));
        }
        arr_45 [i_0] = (max(65510, var_3));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        arr_50 [i_13] &= var_6;
        var_30 = (((arr_6 [i_13] [10] [i_13]) ? (arr_6 [i_13] [i_13] [i_13]) : (arr_6 [i_13] [i_13] [i_13])));
    }
    #pragma endscop
}
