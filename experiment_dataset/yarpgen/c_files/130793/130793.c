/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, 3574));
        var_12 ^= var_10;
        var_13 = (max(var_13, (((((-(max(0, var_8)))) + (arr_0 [8] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 &= var_1;
        var_15 ^= (((arr_2 [i_1]) ? var_2 : (((!(arr_2 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] &= ((-(127 == 18446744073709551615)));

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_10 [15] |= (((arr_4 [i_2]) ? var_6 : ((var_9 ? var_8 : var_3))));
            var_16 = (max(var_16, 7854358581140907494));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_17 *= ((-((3638799936996660637 ? var_1 : var_6))));
            var_18 = (max(var_18, -6974181253648337891));
            var_19 = (max(var_19, (((-(-4281746966848608210 == 0))))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_20 |= 1;

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_17 [i_2] [i_2] [i_2] [i_2] &= 620929829;
                var_21 = (min(var_21, (((22 ? var_8 : 8)))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_22 &= ((-((var_7 ? var_6 : 1))));
                    var_23 *= (0 ? 11472562820061213725 : (arr_19 [i_2] [i_2] [i_6] [i_2]));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_24 = (min(var_24, (((-72 ? ((((var_5 >= (arr_6 [i_2] [i_5]))))) : ((323338205 << (9970255130191617289 - 9970255130191617287))))))));
                    var_25 = (min(var_25, (!-1023594574)));
                    var_26 += var_4;
                    var_27 = (max(var_27, (var_10 + -var_3)));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_28 = (min(var_28, ((((arr_12 [i_5] [i_6]) ? var_4 : var_1)))));
                        var_29 = 6974181253648337894;
                        var_30 ^= var_5;
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_30 [i_2] [i_2] [i_6] [i_10] [6] |= (arr_28 [i_2] [i_2] [i_6] [i_8] [i_10]);
                        var_31 &= ((1 ? 20463 : (arr_18 [i_2] [i_2] [i_10] [i_10])));
                        var_32 |= (~65522);
                        var_33 = (max(var_33, 7));
                        var_34 *= ((45073 ? 18446744073709551615 : 15107789340215860188));
                    }
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_35 &= -1;
                    var_36 -= ((var_6 + (arr_13 [i_11] [i_11])));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_37 ^= ((var_10 && var_1) ? ((var_6 >> (arr_28 [i_2] [i_2] [i_2] [i_2] [i_2]))) : var_9);
                    var_38 *= (!117);
                    var_39 += (((((var_5 ? 23084 : var_10))) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_24 [i_2] [i_2] [i_2] [i_5] [i_5] [i_2] [i_12])));
                }
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                var_40 = (min(var_40, (arr_22 [i_13] [i_13] [i_13])));

                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_47 [i_2] [i_15] &= (arr_3 [i_5]);
                        var_41 = (min(var_41, var_3));
                    }
                    var_42 -= 127;
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    var_43 -= (((arr_33 [i_2] [i_2] [i_2] [i_2]) ? var_8 : 45));
                    var_44 -= var_6;
                    var_45 = (max(var_45, -53950));
                }
                var_46 = (min(var_46, 0));
            }
            for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
            {
                var_47 ^= (~var_3);
                var_48 |= -20463;
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
            {
                var_49 -= (((var_8 >= 11472562820061213724) - 180));
                var_50 ^= (~var_3);
            }
            arr_57 [i_2] [i_2] &= ((var_5 ? ((var_6 ? 65535 : (arr_50 [14] [i_5] [i_2]))) : (((var_3 ? 1 : var_6)))));
        }
        arr_58 [i_2] |= ((var_10 ? (arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : var_9));
    }
    var_51 = (max(var_51, ((min(var_1, var_9)))));
    var_52 = (min(var_52, 180));
    #pragma endscop
}
