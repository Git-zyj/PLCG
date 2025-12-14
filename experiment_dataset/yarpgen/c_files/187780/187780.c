/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (!((!(((~(arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = ((102 ? 337641927 : 135));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = 108;
                                var_19 = ((255 ? 120 : 18446744073709551615));
                            }
                        }
                    }
                    var_20 = ((((max((!-67), -126))) + -56219));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = 1474037264;
                        arr_20 [i_1] [i_1] [5] = ((((((!(((-(arr_19 [i_0] [i_1] [i_5])))))))) % (max((min(511, 0)), (arr_1 [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_6] [i_1] [i_0] [i_1] [i_0] = (!var_9);
                        var_22 = (min(var_22, (-1 <= 32767)));
                        arr_24 [i_1] [i_1] = (max(-87, 65535));
                        arr_25 [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_6]);
                    }
                    arr_26 [15] [15] [i_1] = (max((min((arr_8 [i_1]), (arr_8 [i_1]))), (((38668 || (arr_8 [i_1]))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_8 [i_0])));
                        var_24 |= (min((max((arr_12 [i_0] [i_0] [i_9 - 1] [i_0]), (arr_12 [i_7] [i_7] [i_9 - 2] [i_9 + 2]))), (max(153, (arr_12 [i_9] [i_9] [i_9 + 1] [i_9])))));
                        var_25 = (min(var_25, (1 & 1)));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = (arr_35 [i_10]);
        var_26 = (((((arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) >> ((((~(arr_12 [i_10] [i_10] [i_10] [i_10]))) + 153))))) ? ((((var_16 % (arr_6 [i_10] [i_10]))))) : (min((arr_13 [i_10] [i_10] [i_10] [i_10]), (10370673798835930086 * 38668))));

        for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_27 = 1;
            arr_41 [i_10] [i_10] [i_10] = (min(((38657 ? (arr_30 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 3]) : (arr_30 [i_11 - 1] [i_11 - 1] [i_11 - 2] [i_11 - 3]))), 0));
            arr_42 [i_10] [i_10] = (!16383);
        }
        for (int i_12 = 3; i_12 < 17;i_12 += 1) /* same iter space */
        {
            var_28 = 135;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_51 [i_10] [i_12] [i_13] [i_13] [i_14] = 18446744073709551597;
                        arr_52 [12] [i_12] [i_13] [i_13] = 0;
                        var_29 = (min(var_29, (((((min((arr_10 [i_10]), (min(-65, 4294950913))))) ? (((((113 ? 205 : 1)) + (arr_17 [i_10] [i_13] [i_12 + 1] [i_10] [i_10] [i_10])))) : (((arr_30 [i_10] [i_12] [i_13] [i_14]) + (((1 ? 1 : 3473))))))))));
                    }
                }
            }
            var_30 *= (arr_9 [i_10] [i_12] [12]);
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_31 = (arr_36 [i_15] [i_15]);
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                {
                    arr_63 [i_17] [i_16 - 2] [i_17] = ((113 ? (arr_44 [i_16 + 1]) : ((-((min(180, 126)))))));
                    arr_64 [i_15] [i_17] [i_16 - 1] [i_17] = 127;
                    var_32 = (max(31086, 120));
                    arr_65 [i_15] [i_15] [i_17] = ((144 ? ((max(0, 8069))) : (max(((1 ? 0 : 10)), (~231)))));
                    var_33 = ((66 ? 121 : 1));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    {
                        arr_73 [i_19] [i_18] = var_1;
                        arr_74 [i_15] [i_18] = (170 >= -1828879423894113025);
                    }
                }
            }
        }
        arr_75 [i_15] |= 1;
    }
    var_34 |= var_7;
    #pragma endscop
}
