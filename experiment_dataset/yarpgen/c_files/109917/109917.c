/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((((((((arr_1 [i_0]) || 0)) ? ((((arr_1 [i_0]) && (arr_0 [i_0] [i_0])))) : 72))) ? (arr_0 [i_0] [i_0]) : var_14));
        arr_2 [i_0] [i_0] = (max(var_18, ((min((arr_0 [i_0] [i_0]), var_16)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 = 25109;
        arr_5 [i_1] = (arr_0 [i_1] [i_1]);
        var_23 &= var_15;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_24 = (((((-(((arr_7 [i_2]) << (((arr_7 [i_2 - 1]) - 10758))))))) ? (((((var_12 ? (arr_6 [i_2] [i_2]) : (arr_0 [i_2] [i_2])))) ? ((var_5 ? (arr_7 [i_2]) : 3825020888)) : (((arr_6 [i_2] [i_2]) & 469946407)))) : (!-1)));
        arr_9 [i_2] [i_2] = (((arr_7 [i_2]) ? var_13 : var_18));

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_25 = (min((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1])));
            arr_13 [i_2] [i_2] = max(var_2, ((var_18 ? var_1 : var_17)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_26 = (((arr_1 [i_2 - 1]) ? (arr_6 [i_2 - 1] [i_2 - 1]) : 0));

            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_27 = 6893158292464634868;
                arr_20 [i_2 - 1] [i_2] [i_5] = ((((arr_15 [i_2]) ? var_2 : var_0)));
                arr_21 [i_2] = ((!(40427 & var_16)));
                var_28 = var_2;
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_26 [i_2] = (arr_11 [i_6]);
                var_29 = (max(var_29, (((0 ? var_0 : 127)))));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_30 += 1;
                    var_31 = 0;
                }
                arr_29 [i_2 - 1] [i_2] [i_4] [i_2] = 216172782113783808;
                var_32 = (max(var_32, 105));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_33 = (arr_10 [i_2] [i_4] [i_4]);
                var_34 -= (arr_24 [i_8] [i_4]);
            }
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_35 = (max((arr_8 [i_2 - 1] [2]), (arr_1 [i_9])));
            arr_34 [i_2] [i_2] [i_2] = (arr_17 [i_2] [11] [i_9] [i_2]);
            arr_35 [i_2] [i_2 - 1] = max(40426, (arr_31 [i_2] [i_2] [i_2] [i_2]));
            arr_36 [i_2] = ((var_3 >> (var_17 - 1377471019143373317)));
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                {
                    var_36 = (min(var_36, var_16));
                    arr_41 [0] |= ((((((((216172782113783808 ? (arr_22 [i_2] [i_2] [i_2]) : (arr_24 [i_2] [1])))) ? (~3) : var_15))) ? (((((min(5754968642511178127, (arr_31 [i_2] [i_10 + 2] [i_10 + 2] [i_10 + 2])))) || 1165971653918018119))) : (max((max(var_9, 6762)), var_12))));
                    var_37 = ((((3825020888 ? 1 : (((arr_10 [i_2] [i_10 - 1] [i_11 - 1]) ? 1 : (arr_27 [i_2 - 1] [i_10] [i_11] [i_11]))))) * (((!40427) ? (arr_28 [i_11 + 1]) : ((255 ? (arr_8 [i_2] [i_2 - 1]) : 1))))));
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 18;i_12 += 1)
    {
        var_38 += max(((var_7 ? ((0 ? var_1 : 87)) : var_3)), (((4462528649699251101 ? 3908748883 : (34878 / var_2)))));
        arr_45 [i_12] = (((arr_43 [i_12 - 3]) * (arr_43 [i_12])));
    }
    var_39 = ((max((((255 ? 237 : 3584))), (max(-5754968642511178131, -2002887173973661450)))));
    #pragma endscop
}
