/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(((min(127, 52787))), (max(var_8, 33511)))))));
    var_16 = var_14;
    var_17 = (max((min(var_8, var_9)), (((!(~var_0))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [1] = (((min(var_1, ((~(arr_8 [i_0]))))) & var_0));
                    var_18 = ((-(181 && 21977)));
                    var_19 = (arr_7 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((max(var_1, ((var_13 * (arr_8 [i_2]))))) * (!var_2)))));
                                var_21 = (((((((max((arr_2 [i_4]), (arr_17 [i_0] [i_0] [2]))))) - (max(-5263258023092069704, (arr_0 [i_0]))))) % (((((max(-5263258023092069704, -5263258023092069704))) ? var_2 : ((-(arr_18 [i_3]))))))));
                                arr_19 [i_0 + 2] [i_1] [i_1] [i_3] = (min(((max(var_5, (-5263258023092069704 >= 62)))), (min(var_3, (arr_6 [i_2 + 1] [i_0 - 1] [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [11] = (5263258023092069682 - 576460752303423480);
        arr_21 [i_0] = (~5263258023092069703);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = (400392734 ^ var_12);
        var_22 = (max(var_22, (((!(arr_22 [i_5]))))));
        var_23 = (max(var_23, -792667029));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 ^= (max((max(67, -5263258023092069704), (((3 >> (6148328747260618589 - 6148328747260618575)))))));
        arr_27 [i_6] = (((((6148328747260618589 ^ var_14) ? (~var_3) : (((22 ? 16384 : (arr_22 [i_6])))))) & ((((arr_25 [i_6]) ? (234 == 56387) : (max(5263258023092069703, (arr_22 [18]))))))));
        arr_28 [i_6] &= (max(((((arr_26 [i_6]) / (arr_26 [i_6])))), var_8));
        var_25 = (min(26, 159139460));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] [i_7] = (((arr_29 [i_7]) + (arr_23 [i_7])));
        var_26 += (((arr_30 [18]) || (253 / var_7)));
        arr_32 [i_7] [i_7] = (-(4294967290 + 6));
    }
    #pragma endscop
}
