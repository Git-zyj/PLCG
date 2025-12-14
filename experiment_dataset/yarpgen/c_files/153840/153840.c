/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = (((((!(arr_2 [i_1])))) >> (((var_0 - 22) + 685075175))));
            var_14 = var_9;
            var_15 ^= ((~(~215)));
            var_16 = var_2;
            var_17 ^= (11928650142060656722 * 1);
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_18 = (((arr_1 [11]) % var_2));
            var_19 = var_2;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 = var_0;
                var_21 = (arr_3 [i_3]);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_22 = (367258170 / -38);
                    var_23 = (arr_13 [i_4] [i_4]);
                    var_24 ^= -3479;
                    arr_15 [i_4] [i_4] = (459335279 + var_6);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_25 = -2147483646;
                    var_26 = var_3;
                    arr_18 [i_0] [i_4] [i_4] [i_6] = (!var_7);
                    var_27 = (~var_4);
                }
            }
            for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
            {
                var_28 = 76;
                var_29 = ((!(min(0, (arr_12 [i_0] [i_0] [i_0] [i_0])))));
                var_30 = (max(var_30, -600957505));
            }
            for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
            {
                var_31 ^= ((((var_9 ? var_9 : 16)) - (0 - 26)));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_26 [i_9] [i_8 - 1] [i_3] [i_3] [9] [i_0] = 600957498;
                    var_32 = ((367258170 * (arr_19 [i_8] [i_9])));
                    var_33 = ((507644286 << (600957496 - 600957495)));
                    var_34 = (var_4 >> 1);
                    arr_27 [8] [i_3] [i_3] [i_3] [i_3] = ((-38 < (!6518093931648894918)));
                }
            }
            for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
            {
                var_35 = var_5;
                var_36 = (min(var_36, ((((((var_7 - var_1) | var_5)) | ((-(123 & -600957505))))))));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {

                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        var_37 = -507644265;
                        var_38 ^= (600957532 / (((1796189705 < (arr_1 [0])))));
                        var_39 = ((~206) / -1329094773);
                        var_40 = (((-107 >= -70306637) >> (var_11 + 1078)));
                        var_41 = ((~((-(arr_19 [1] [i_12])))));
                    }
                    for (int i_13 = 1; i_13 < 11;i_13 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_10 - 2] [i_11] [i_11] [3] = (((!var_4) ? (var_2 || var_9) : ((var_8 ? (arr_14 [i_0]) : var_8))));
                        var_42 = (max(var_42, var_6));
                        var_43 = var_5;
                    }
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        var_44 = (3126406330 - -1015735481);
                        var_45 = var_11;
                        arr_42 [i_0] [i_3] [i_10] = (-36 ? 237 : 194);
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_46 = var_5;
                        var_47 = ((var_4 + (var_3 - var_3)));
                    }

                    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                    {
                        var_48 = (arr_23 [i_10 - 1] [i_3] [i_10] [9]);
                        var_49 = (max(var_49, 1260352007));
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        var_50 = (507644284 & -729683407);
                        var_51 = (min(var_51, (((!(arr_17 [i_0] [i_0] [10] [6]))))));
                    }
                    var_52 = (-729683409 + 6518093931648894893);
                    var_53 = -32756;
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    arr_54 [i_0] [i_0] [8] [7] = ((194 ? 46 : var_2));
                    var_54 = -13747;
                }
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        var_55 &= ((((11928650142060656716 << (-1445442219 + 1445442267))) << (11928650142060656727 - 11928650142060656677)));
                        var_56 = ((var_1 >> (613822030 - 613822013)));
                        var_57 = (min(-55, 429443091259956238));
                    }
                    var_58 = (min(((max((((-2147483636 + 2147483647) >> (((arr_61 [i_0] [i_0] [11] [0] [i_10 - 2] [i_19]) + 853831874)))), var_0))), ((93 ? 1 : 386453974))));

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        arr_64 [i_0] [9] [i_19] = var_3;
                        var_59 = var_3;
                    }
                }
            }
            var_60 = (max(((max(var_10, var_7))), (max((arr_11 [i_0] [i_0] [i_0] [i_0]), var_11))));
            arr_65 [i_3] [i_3] [9] = (arr_43 [3] [3] [i_3] [i_3] [i_3]);

            for (int i_22 = 0; i_22 < 12;i_22 += 1)
            {
                arr_70 [i_22] = (+((min((arr_32 [i_3] [i_3] [i_3] [1] [0] [i_3]), var_7))));
                var_61 = var_3;
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
        {
            arr_74 [10] = arr_61 [1] [i_23] [3] [i_0] [i_0] [i_0];
            var_62 = (max(var_62, (((var_5 <= (arr_0 [i_23] [i_23]))))));
        }
        for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
        {
            var_63 = 47122;
            var_64 += min((arr_12 [8] [i_0] [i_0] [i_24]), (63746 | -81));
            var_65 *= (-59 || -17);
            var_66 = (!-13195);
        }
        var_67 = -613822056;
    }
    #pragma endscop
}
