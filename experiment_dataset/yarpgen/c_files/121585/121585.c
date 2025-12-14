/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (min((!63655), (((!var_1) < -var_2))));
        var_22 = max(((max(((((arr_0 [i_0]) <= (arr_1 [i_0] [i_0])))), (arr_1 [i_0] [i_0])))), ((~(((arr_1 [i_0] [i_0]) * var_7)))));
        var_23 = (((((!((max(21155, (arr_2 [i_0])))))))) | ((~(arr_0 [i_0]))));
        arr_3 [i_0] = ((-((min((arr_1 [i_0] [i_0]), 44399)))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                arr_14 [i_1] [i_1] [i_1] [i_1] = max(-55926, (2393561247 * var_15));
                var_24 = ((~((max((arr_13 [i_1 + 1] [i_1] [i_1]), var_11)))));
                var_25 = (min((max((809566312 ^ var_11), (arr_13 [i_3 + 1] [i_3] [i_3]))), ((max((arr_1 [i_3 + 1] [i_1 + 1]), (max((arr_9 [i_2]), var_4)))))));
            }
            arr_15 [i_1] [i_2] = (max((min((arr_2 [i_1 + 1]), 11624)), (((var_15 < (arr_2 [i_1 - 1]))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_20 [i_1] [i_4] = (3 | var_16);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_26 = (~53912);
                            var_27 = (((var_2 | var_8) >> (29555 - 29534)));
                            var_28 = (~-63403);
                        }
                    }
                }
            }
            arr_28 [i_1] [i_1] [i_4] = (var_7 > var_1);
            var_29 = (min(var_29, ((((arr_11 [i_1] [i_1 + 1] [i_1 - 1]) >> (2152353308 - 2152353295))))));
        }
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            arr_32 [i_1] [i_1] [i_1] = ((!(((arr_25 [i_1] [i_8] [i_1 + 2]) > (arr_25 [i_8] [i_8] [i_1 + 2])))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_30 = ((var_0 || ((!(arr_7 [i_9])))));
                            var_31 = -var_7;
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            arr_46 [i_12] [i_12] [i_9] [i_12] [i_12] = ((!((max(var_15, 6)))));
                            var_32 *= ((!((min(var_2, 65514)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            var_33 = -var_6;
                            arr_51 [i_1] [i_8] [i_1] = (!var_8);
                        }
                        arr_52 [i_1] [i_1] [i_9] [i_10] [i_8] [i_9] = ((max((arr_43 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]), var_19)) - ((((!(arr_47 [i_1 - 1]))))));
                        var_34 = (min(((max((((arr_0 [i_9]) || 9632)), (var_0 || 63523)))), (32767 | var_9)));
                        arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!((min(4294967295, (arr_48 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 2]))))));

                        /* vectorizable */
                        for (int i_14 = 4; i_14 < 13;i_14 += 1)
                        {
                            var_35 = var_15;
                            var_36 = (min(var_36, (~2183856285)));
                            var_37 = (~var_4);
                        }
                        for (int i_15 = 2; i_15 < 13;i_15 += 1)
                        {
                            arr_58 [i_1] [i_1] [i_1] [i_10] [i_15] = ((((min(((max(37269, var_16))), (((arr_16 [i_15]) + (arr_27 [i_1] [i_1] [i_8] [i_1] [i_10] [i_15] [i_15])))))) || (!12841)));
                            arr_59 [i_1] [i_8] [i_1] [i_10] [i_10] [i_8] = (((min(var_6, (arr_47 [i_1 + 2])))));
                        }
                    }
                }
            }
        }
        var_38 = ((!((max((max(52695, var_3)), (arr_26 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1 + 1]))))));
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        var_39 = ((!(((~(var_1 < 2253939992))))));
        arr_64 [i_16] = (max((((!32776) || (~var_1))), ((!(((arr_62 [i_16] [i_16]) && 21511))))));
        var_40 = (min(((min(var_8, 6298))), (max(30672, var_18))));
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 21;i_19 += 1)
            {
                {
                    var_41 = (((((~(((32795 && (arr_66 [i_18]))))))) || ((max((arr_69 [i_19 + 1] [i_19 - 1] [i_19 + 1]), ((var_1 | (arr_66 [i_17]))))))));
                    arr_72 [i_17] [i_18] [i_19] [i_19] = (3816141251 ^ var_8);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_20 = 3; i_20 < 23;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                {
                    var_42 = ((~((max((min((arr_73 [i_22]), 14)), (65535 >= 63523))))));
                    arr_81 [i_20] [i_20] [i_21] [i_22] = (((min((min(var_3, 14)), var_17)) & ((((~60043) ^ ((min(var_6, var_13))))))));
                }
            }
        }
    }
    #pragma endscop
}
