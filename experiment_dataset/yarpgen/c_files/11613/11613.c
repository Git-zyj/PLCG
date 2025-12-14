/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10))) || (!28)));
        var_13 = (max(var_13, (((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (~18446744073709551615) : ((max(((9 | (arr_0 [19]))), (arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = ((-((1 ? 3943668244 : 351299052))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 = var_6;
            var_16 = (max((93 < 14), (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
            var_17 *= -10;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_8 [i_3] [6] [i_3] = (((max(((~(arr_2 [i_1]))), (arr_1 [i_1] [i_2]))) <= (max((((arr_0 [i_3]) ^ (arr_5 [i_1] [1]))), ((min((arr_2 [i_2]), (arr_0 [i_3]))))))));
                var_18 = (min(var_18, (((-13169293442841338866 && (((((max((arr_1 [i_1] [i_1]), var_5))) - ((max((arr_3 [1] [i_2]), (arr_2 [i_1]))))))))))));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_19 = max(-1, 1);
                arr_11 [i_4] [i_1] [i_1] = var_6;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_20 *= var_8;

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_16 [i_6] [i_5] [i_1] = (arr_5 [i_1] [i_1]);
                var_21 ^= (((arr_14 [i_1] [i_1] [i_5] [i_6]) << ((((-(arr_9 [i_1] [i_1] [5]))) + 18))));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_20 [i_1] [i_1] [i_1] = (680757690 >= 1);
                    var_22 = ((-((var_8 + (arr_18 [i_7] [i_5] [i_7] [i_6] [i_5] [i_1])))));
                    arr_21 [i_1] [i_1] = ((1913085716 ? (arr_9 [i_1] [i_5] [i_6]) : (arr_19 [i_1])));
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    var_23 = ((-(var_11 < 13344651554348450540)));
                    var_24 = 1;
                    var_25 = (arr_12 [i_1]);
                }
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    arr_27 [i_1] [i_9 - 3] = (((((arr_14 [i_9 + 1] [i_6] [i_5] [i_1]) ? 1 : var_1)) * 9));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_10] = (((arr_14 [i_9 - 1] [5] [i_9 + 2] [i_5]) ? (((arr_17 [i_1] [i_1] [i_6] [16] [i_10]) ? (arr_0 [6]) : (arr_12 [1]))) : (!var_0)));
                        arr_31 [i_1] [i_1] [i_6] [i_6] [i_1] = (arr_24 [i_1] [1] [1] [i_10]);
                        var_26 = var_5;
                    }
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        arr_34 [i_1] [i_5] [i_6] [i_9] [i_9] [i_1] |= (arr_26 [i_9 - 3] [i_9 - 1] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 2]);
                        var_27 *= var_11;
                        arr_35 [i_1] [i_1] [i_1] [i_9] [i_11] = (arr_33 [i_9 + 1] [i_5] [i_5] [i_9 + 1] [i_11 + 1]);
                        var_28 += var_5;
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_39 [i_9] [i_9] [5] [14] [i_9] = (arr_38 [i_1] [i_5] [19] [i_5] [i_1] [i_1] [1]);
                        var_29 = (-21 < 6717482911487755363);
                    }
                    for (int i_13 = 4; i_13 < 19;i_13 += 1)
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~var_11);
                        arr_43 [i_1] [i_1] [i_1] |= (arr_7 [i_5] [i_1]);
                    }
                    var_30 = (arr_0 [i_9 - 1]);
                    arr_44 [i_1] [i_5] [i_5] [i_9 - 1] = (arr_28 [11]);
                }
            }
            for (int i_14 = 3; i_14 < 19;i_14 += 1)
            {
                var_31 = var_7;
                var_32 *= ((((var_10 + (arr_24 [i_1] [i_1] [i_5] [i_14]))) > -10));
                var_33 = (arr_3 [i_1] [15]);
                var_34 = (((arr_13 [i_14] [i_14 + 2] [i_5]) ? (((!(arr_45 [i_5])))) : (~var_11)));
            }
            var_35 = var_3;
            var_36 = ((arr_29 [i_1] [i_5] [i_1] [i_5] [i_1]) % (arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_37 = var_1;
            arr_50 [i_1] [i_1] [i_15] = ((!(var_10 & 5277450630868212749)));
            arr_51 [i_1] [i_1] [0] = ((1 ? ((-(arr_48 [13]))) : (((37 ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : (arr_4 [1] [i_15]))))));
            arr_52 [i_15] = -28;
        }
        var_38 |= ((~((1 >> (-13934 + 13965)))));
        var_39 = (max(var_39, var_3));
        var_40 = (min(1, (var_10 && var_8)));
    }
    var_41 |= var_6;
    var_42 = var_3;
    #pragma endscop
}
