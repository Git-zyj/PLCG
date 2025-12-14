/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (var_11 > var_6)));
                                var_18 ^= ((((((var_14 ? var_12 : var_5))) ? ((var_8 ? var_0 : var_4)) : ((max(var_6, var_13))))) % var_7);
                            }
                        }
                    }
                    var_19 = (min(var_19, ((min(var_12, (((var_1 / var_9) ? var_12 : (max(var_14, var_4)))))))));
                    var_20 = (((max(((max(var_8, var_7))), ((var_11 ? var_5 : var_10)))) < (((((var_7 + var_6) != ((var_8 ? var_7 : var_8))))))));
                    arr_12 [i_2] [i_2] [i_2] [i_0] = ((((var_5 ? var_4 : var_0))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_5] = ((((-61 ? var_11 : (var_10 < var_8))) * (15689846706472204799 <= 32759)));
                                arr_18 [i_0] [i_5] [i_5] [i_6] = ((((((((var_2 ? var_6 : var_15))) ^ var_12))) ? 2756897367237346815 : (((max(var_11, var_12)) & var_2))));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, var_10));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_24 [12] [12] [i_8] [12] [12] = ((((max(var_0, var_5))) ? (max(var_13, ((11494305311004737921 ? 14595489957470328888 : -23)))) : var_11));
                            arr_25 [i_0] [10] [i_0 + 2] [i_8] [i_7] [12] = (((((((32762 ? 2756897367237346812 : 5141376157900885251))) ? var_9 : (var_0 | var_7)))) - (((var_10 > var_10) & (max(15689846706472204801, var_3)))));
                            var_22 = (min(var_6, (((var_13 == ((var_1 ? var_6 : var_10)))))));
                            arr_26 [i_0] [8] [i_0 - 2] [i_8] [i_0] [i_0 + 2] = ((((((var_10 % var_10) ? var_14 : (max(1, 17737340779983509099))))) ? ((((var_15 * var_3) ? ((var_10 ? var_5 : var_1)) : (var_16 < var_4)))) : (min(var_6, (var_0 * var_5)))));

                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                var_23 = (min(var_23, ((max(709403293726042516, 3591020080)))));
                                arr_29 [i_0] [i_8] [i_1] [i_1] [i_7] [i_8] [i_9] = (min((((((var_5 ? var_2 : var_10))) ? var_11 : (2756897367237346817 + 75))), (((((var_16 ? var_8 : var_14)) + (((min(var_9, var_5)))))))));
                                arr_30 [i_8] [i_1] = var_8;
                            }
                            for (int i_10 = 3; i_10 < 23;i_10 += 1)
                            {
                                arr_35 [i_8] [i_1] [i_1] [i_1] [i_1] = var_0;
                                arr_36 [i_8] [i_10] [i_1] [19] [20] [i_1] [i_8] = ((var_5 << (((((17359587152038478760 + 1080863910568919040) - var_5)) - 18440451062607375093))));
                                var_24 = ((((max((18446744073709551605 || 18287), ((var_16 ? var_6 : var_16))))) ? ((((var_15 || var_4) >> ((((var_10 ? var_4 : var_8)) - 7053591739579557965))))) : -18288));
                                arr_37 [i_7] [i_7] [i_7 + 2] [i_0] [i_0] [18] &= (((((var_6 ? var_15 : ((var_1 ? var_5 : var_9))))) * (min(var_4, var_0))));
                                arr_38 [i_1] [i_8] = ((var_6 * (((var_9 != (var_12 && var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 += (((4746263219994335475 ? 36536 : 709403293726042510)));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    arr_49 [i_11] [i_12] [i_11] [i_13] = 1;
                    var_26 = (((((((max(var_6, var_1))) | (max(var_10, var_9))))) & ((-28899 ? -672 : 15689846706472204800))));
                    var_27 &= (var_13 & var_7);
                    arr_50 [i_11] [i_12] [i_11] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
