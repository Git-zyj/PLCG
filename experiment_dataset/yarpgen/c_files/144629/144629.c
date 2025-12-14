/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_14 ? 3061497 : var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = ((10867414205449672586 ? 2271 : -953033977));
                    arr_7 [i_1] = 108;
                    var_21 ^= ((32767 ? (max(var_16, 4083)) : (-953033977 <= 953033977)));
                    var_22 = (max(var_22, ((-(max(-953033977, (min((arr_4 [i_0] [i_1 - 1] [i_1 - 1]), 536870911))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_23 -= ((!((!(arr_3 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_16 [i_5] [i_4] [i_3] [i_3] = (arr_2 [i_3] [i_4] [i_5]);
                    arr_17 [i_3] [i_3] [i_5] [19] = -1573198016;
                    var_24 *= ((((min((arr_12 [i_3] [i_4] [i_3]), var_3))) ? ((((arr_12 [i_3] [i_4] [i_5]) ^ -68))) : (((arr_2 [i_3] [i_4] [i_3]) ^ -960240230))));
                }
            }
        }
        arr_18 [4] [i_3] = 983650804;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        var_25 = ((((max(1, var_13) ^ (min(122, 2517738633))))));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_26 ^= ((!(arr_30 [i_8 - 1] [i_3] [2] [i_8 - 1] [i_9])));
                            var_27 = (min(var_27, ((((((arr_4 [i_3] [i_9] [i_9]) || 49)) ? 1 : 32198)))));
                            var_28 = (min(var_28, 888864782));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            var_29 ^= (min(127, 9223372036854775807));
                            var_30 = (min(var_30, ((((-32767 - 1) ? 2019860915 : (var_13 - 53))))));
                            arr_33 [0] [0] [i_8] [i_7] [i_8] [i_6] [i_3] = (min((((32767 ? var_16 : 4294967295))), ((((arr_20 [i_8 + 1] [i_8 - 1] [i_8 + 1]) >= (arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                            var_31 ^= 0;
                        }

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_32 = (max(var_32, (((((-17705 / var_5) > ((17310100596699851540 ? -540086382 : var_14))))))));
                            var_33 += var_9;
                            var_34 = (max(var_34, (arr_23 [i_6] [i_6] [i_7])));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_35 = (min(var_35, -328971670));
                            var_36 -= ((4083 ? -953033977 : 227));
                            var_37 = (max(var_37, ((((arr_38 [i_3] [i_6] [i_7] [i_3] [i_12]) ? ((2147483647 ? 0 : -9290)) : var_2)))));
                            var_38 &= (max((arr_2 [i_3] [i_8] [i_3]), (((var_11 ? var_6 : -56)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_39 = (min(var_39, (arr_39 [i_13])));
        var_40 = ((((43 & (0 ^ var_10))) | var_1));
        arr_42 [i_13] |= (((((arr_4 [i_13] [i_13] [i_13]) >= 10150099218638050034)) ? ((2902969364892094257 << (4070594840 - 4070594837))) : ((6 & (arr_5 [i_13] [i_13] [i_13])))));
    }

    for (int i_14 = 2; i_14 < 9;i_14 += 1)
    {
        arr_45 [0] &= 210;
        var_41 = -26485;
        var_42 = arr_44 [i_14 + 2];
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_43 += -20170;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                {
                    arr_52 [18] [i_16] [18] &= (((arr_51 [i_15] [i_16] [8]) ? ((var_8 ? var_15 : 9223372036854775807)) : -5007871881570828308));
                    var_44 ^= ((3311316491 ? var_15 : 1641017178));
                }
            }
        }
        var_45 |= -6932304611104034004;
        var_46 = (((arr_4 [i_15] [i_15] [i_15]) ? 227 : (arr_0 [i_15] [i_15])));
        var_47 &= var_9;
    }
    /* vectorizable */
    for (int i_18 = 3; i_18 < 12;i_18 += 1)
    {
        var_48 ^= ((983650805 ? var_2 : (arr_11 [i_18 - 3])));
        var_49 = ((~(arr_8 [i_18])));
    }
    #pragma endscop
}
