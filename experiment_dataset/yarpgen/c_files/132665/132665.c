/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 += (arr_1 [i_0]);
        var_15 = (max(var_15, var_7));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_2] = (!var_9);
                    arr_14 [9] [i_3] [i_2] = 6343952769463660320;
                }
            }
        }
        arr_15 [i_1 - 1] [12] = (~(arr_2 [i_1 - 2]));
        arr_16 [i_1] = var_11;
    }

    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_4] = ((!(var_5 != 48974)));
                        var_16 = (((var_12 + 2147483647) << (((12102791304245891296 & var_8) - 12102791304245891232))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_17 = (max(var_17, (arr_22 [i_4 + 2] [i_6 - 1])));
                            var_18 = (min(var_18, 4294967295));
                            var_19 -= var_11;
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_20 = var_10;
                            var_21 = (max(var_21, var_1));
                            var_22 = 11428589718794350547;
                            var_23 *= ((var_9 >> (21674 - 21672)));
                            arr_33 [i_4] [i_4] [i_6] [i_7] [i_6] = ((var_0 || (arr_7 [i_9 + 1] [i_6 - 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_24 = var_13;
                        var_25 = var_8;
                    }
                    arr_37 [i_4] = 0;
                }
            }
        }
        arr_38 [i_4] [i_4 + 3] = arr_25 [i_4 + 4] [8] [i_4 - 3];
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        arr_41 [i_11] = ((var_10 / (((29368 ? ((max((arr_6 [i_11] [i_11]), 27048))) : (arr_9 [i_11]))))));
        var_26 = ((((((min(var_9, 38488))) == 8191)) ? (((max(38487, 11949625706708646277)) | (arr_0 [i_11] [i_11]))) : (((((min(93, 32736))) / var_0)))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                {
                    var_27 = (min(var_27, var_1));
                    var_28 = (min(var_28, (((-(3154165696 <= 32800))))));
                }
            }
        }
        var_29 = (((arr_45 [1] [i_11]) ? 30940 : 64074));
        var_30 = ((var_4 % ((9257 ? ((var_10 ? 496 : var_7)) : ((min(149, var_6)))))));
    }
    for (int i_14 = 3; i_14 < 12;i_14 += 1)
    {
        var_31 |= -4248633103647903954;
        var_32 = (min(var_32, (((((arr_30 [i_14] [i_14] [i_14] [i_14 - 1] [i_14]) && (arr_30 [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 - 1] [i_14]))) ? 24 : (min((arr_34 [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14 + 1]), (arr_21 [i_14])))))));
        var_33 = (max(((65535 ? (((var_13 ? var_2 : 42932))) : 6343952769463660320)), ((((~27048) ? (arr_29 [i_14 - 1] [i_14] [i_14]) : 10)))));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        arr_55 [i_15] = ((16561 ? (min(18717, 16760500859833587662)) : (arr_10 [i_15])));
        arr_56 [0] |= ((!(-8142255807679432362 - var_7)));
        arr_57 [i_15] [i_15] = 18355562493156399950;
        var_34 -= 1088066200;
    }
    #pragma endscop
}
