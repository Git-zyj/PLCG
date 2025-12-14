/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = -367544667843296858;
                    var_18 = ((-(min(var_8, 1))));
                }
            }
        }
    }
    var_19 = ((var_0 ? ((((!((min(4611668426241343488, var_10))))))) : (((((4611668426241343470 ? -4611668426241343482 : var_5))) ? var_3 : -1))));

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_20 = (min((arr_11 [i_3] [i_3]), (((arr_11 [i_3] [i_3]) ? var_5 : var_2))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_21 = (-1 ? ((var_4 ? -36028797018963968 : (arr_15 [i_3] [i_5 - 1] [8]))) : (arr_16 [i_4] [i_4] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 1]));
                            var_22 = (((var_2 ? (arr_18 [i_3] [i_3] [i_5] [i_6] [i_3] [i_7]) : 255)));
                            arr_22 [14] [i_4] [14] [8] [i_7] = -4611668426241343489;
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_23 = (max(6717183888394742712, (((!((max(1, 18446744073709551615))))))));
                            var_24 = 2757;
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            arr_27 [i_3] [i_4 + 2] [i_3] [5] [i_3] = (arr_16 [i_3] [i_3] [i_3] [1] [i_6] [10]);
                            var_25 = 36788;
                        }
                        var_26 = ((9138981401304103208 ? 18446744073709551615 : 1));
                        arr_28 [i_5] = 9223372036854775803;
                    }
                }
            }
        }
        arr_29 [1] = 255;
        var_27 = (max(var_27, var_6));
        var_28 = 11729560185314808901;
        arr_30 [i_3] = ((((((!var_4) << (((arr_13 [i_3] [i_3]) - 221994231))))) ? ((min((arr_13 [i_3] [1]), (arr_13 [2] [16])))) : (min((arr_16 [i_3] [10] [i_3] [i_3] [i_3] [10]), -2720319037541494095))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_29 -= (arr_32 [i_10]);
        var_30 = var_5;
        var_31 = 896;
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_37 [5] [i_11] = var_15;
        var_32 = (max(var_32, 20226));
        var_33 |= (((((arr_35 [i_11] [i_11]) ? (arr_8 [i_11] [i_11] [i_11]) : 178)) * ((((!((((arr_7 [i_11] [9] [i_11] [10]) ? var_13 : (arr_0 [i_11] [i_11]))))))))));
        var_34 = var_13;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_35 = ((17502333058342184824 ? (arr_38 [i_12 + 1]) : (((65527 ? var_3 : 2147483647)))));
        var_36 = (-31 ^ 9100572927617842727);
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_37 = ((49223 ? (arr_38 [i_13]) : (arr_38 [i_13])));
        var_38 = 2147483647;
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_39 = (arr_41 [i_14]);
        var_40 = (((!706909937) ? (((7042729573916730225 ? var_8 : (arr_44 [i_14])))) : ((((((var_2 ? 3107363410 : 234)) != (!var_7)))))));
        var_41 = (arr_43 [12] [i_14]);
    }
    #pragma endscop
}
