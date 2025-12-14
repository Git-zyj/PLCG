/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~(((~var_9) + (var_12 >= var_14))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((((max(13910551060883825618, 122))) || (((-(arr_5 [i_2] [i_1] [i_2]))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 *= ((~((-((~(arr_3 [i_0] [i_0] [i_0])))))));
                        var_23 = ((((-(arr_4 [i_1] [i_1] [i_3]))) + ((-(var_9 + var_9)))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_24 *= (arr_3 [5] [i_1] [i_0]);
                            var_25 = ((((((arr_3 [14] [12] [i_5]) ? 189 : var_8))) >= (((arr_3 [i_0] [i_1] [i_4]) * var_11))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_26 = var_14;
                            var_27 = ((((((arr_6 [i_0] [11] [i_4] [i_6]) > 69))) >= ((((!var_18) ? ((min(255, var_0))) : (max(var_12, var_3)))))));
                            var_28 = (min(((((max(1685002626, 109))) ? 233 : 253)), (((arr_16 [i_6]) ? (arr_16 [i_0]) : (arr_16 [i_4])))));
                        }
                        var_29 ^= ((-((~(~180)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_30 = (((~-26286) < 17592186044408));
                        var_31 = -18379;
                        var_32 = (((~-18377) & (16123 + -1685002633)));
                        var_33 = ((((((arr_1 [i_1]) ? (arr_14 [i_0] [i_1] [i_1] [i_7] [i_1]) : var_5))) ? -var_4 : (((var_1 <= (arr_13 [i_0] [i_0] [9] [i_1] [i_1] [i_1] [i_7]))))));
                        var_34 = ((~((var_15 ? var_7 : var_5))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_35 = (arr_10 [i_0] [i_1] [i_8]);

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_36 = ((144115188075855872 ? (-32767 - 1) : 18380));
                            var_37 = ((~((max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_0]))))));
                            var_38 = (min(var_38, (((((min((~var_19), var_17))) ? ((-(var_13 + var_18))) : -82)))));
                            var_39 *= (((arr_10 [i_9] [i_9] [i_2]) && (185 < 18446726481523507195)));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_40 -= ((((max(-var_3, ((var_17 / (arr_3 [i_0] [3] [i_2])))))) && ((((arr_15 [i_0] [i_1] [i_2] [i_8]) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_2] [i_1] [i_0]))))));
                            var_41 = (((((var_17 | var_17) * (max((arr_19 [i_0] [i_1] [i_2] [i_2] [i_10]), var_16)))) & ((((((max(32742, 508)))) > ((-1515874428 ? var_16 : var_7)))))));
                        }
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            var_42 = ((((((~117) ? ((((arr_6 [i_0] [i_0] [i_0] [i_0]) && 115))) : (var_13 | var_17)))) & ((((max(var_6, (arr_18 [i_0] [4] [i_0] [4] [i_0])))) ? var_14 : (arr_27 [i_11 - 1])))));
                            var_43 &= var_13;
                            var_44 = ((((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) && ((max(var_12, (arr_26 [i_0] [i_11]))))))) + (min((29540 || 13055), ((var_0 ? var_10 : var_14))))));
                            var_45 = ((-((((~-5033) && ((min(var_17, (arr_26 [3] [i_1])))))))));
                        }
                    }
                    var_46 += (((((-((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_18 [i_0] [i_1] [i_2] [i_0] [11]))))))) + (max(15, -5022))));
                    var_47 += ((((((-(max((arr_8 [i_2] [i_1] [i_1] [i_0]), var_5)))) + 2147483647)) >> ((((~(arr_6 [i_2] [i_1] [i_1] [i_0]))) - 24670))));
                    var_48 -= (arr_26 [i_2] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
