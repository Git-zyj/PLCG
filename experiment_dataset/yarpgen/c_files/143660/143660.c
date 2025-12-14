/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(-133, (~3115707380))))));
        var_18 = ((-1064954266 ? 3115707365 : ((((32751 < (((237 >= (arr_1 [i_0]))))))))));
        var_19 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_20, ((!((-10 >= (((arr_0 [i_1]) | var_16))))))));
            arr_6 [i_0] [15] [i_1] = 15545991766817843620;
            var_21 = var_6;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_22 = ((((((arr_2 [i_2]) ? var_10 : (arr_0 [i_2])))) || -2199023255552));
            var_23 = var_6;
            var_24 = ((!(!7163)));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_25 = 7169;
            var_26 = var_8;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_27 = 63;
        var_28 = ((((27 ? 100 : (arr_12 [i_4]))) > var_8));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_29 = var_16;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                {
                    var_30 = 237;
                    var_31 = (((((arr_15 [i_5]) ^ -84)) << (((~var_10) - 2038474181))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_32 |= ((156 < (-2147483647 - 1)));
                                var_33 = ((((-1576075475649015015 ? 7689938632921132599 : -1577629970)) >= ((9223372036854775807 ? -12118 : (var_12 / 900900122659004250)))));
                                var_34 = (max(var_34, var_6));
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_5] &= (!-1);

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_35 = var_0;
            var_36 = max(237, 9);
            arr_30 [i_5] [i_5] [7] = ((!(-2147483647 - 1)));
            var_37 = ((900900122659004250 >> ((((~(arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))) - 18132210310379967489))));
        }
        var_38 = ((((arr_26 [8] [8] [8]) / (arr_5 [i_5] [i_5]))));
    }
    var_39 = (max(var_39, 1));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                var_40 = ((!((!(((var_2 ? 1 : (arr_26 [i_11] [i_12] [i_12]))))))));
                arr_35 [i_11] = ((((~(max(var_13, var_4)))) ^ var_1));
            }
        }
    }

    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 6;i_16 += 1)
                    {
                        var_41 = ((!(arr_36 [i_14] [i_15])));
                        var_42 -= 18;

                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            var_43 = (((-1368220100 ? var_16 : var_8)));
                            var_44 = (((((var_10 ? (((arr_41 [i_13] [i_14] [i_15]) ? 18446744073709551615 : 4966650075842065614)) : (37285 != 2815)))) ? ((~(((arr_29 [i_13]) ? 900900122659004235 : 80)))) : ((3115707383 ? ((var_4 + (arr_28 [i_14]))) : 58372))));
                        }
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_45 = (3030900695 > 3115707380);
                        var_46 *= (min((min((arr_25 [i_18] [i_18] [14] [14] [0] [i_13]), ((((arr_45 [i_13] [i_13] [i_15] [i_15] [i_18]) << (((var_5 + 14603) - 1))))))), 243));
                    }
                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 6;i_19 += 1)
                    {
                        var_47 = ((1 | (-127 - 1)));
                        var_48 = (!var_10);
                    }
                    arr_53 [i_13] [i_14] [i_15] [i_14] = (!102);
                    var_49 = (max(var_49, (((!(arr_49 [i_15] [i_15] [4] [i_14] [i_13]))))));
                }
            }
        }
        var_50 = (min((min(var_3, (arr_18 [i_13] [i_13] [i_13] [6]))), ((min(1, -64)))));
        var_51 = ((((((~-48) ? ((22 ? (arr_25 [i_13] [i_13] [16] [i_13] [i_13] [i_13]) : var_2)) : -1))) ? (((var_1 != (((900900122659004254 && (-127 - 1))))))) : 127));
    }
    #pragma endscop
}
