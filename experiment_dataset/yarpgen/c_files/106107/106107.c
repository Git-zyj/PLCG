/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 > 50);
    var_13 -= (min((var_4 > 201), (((-((101 ? var_5 : 0)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_0] [i_0] &= ((((((205 != -101) < (min(4064650401946001620, 1369379663787902510))))) << (4064650401946001612 - 4064650401946001588)));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_14 -= (arr_3 [i_0 - 1] [2] [i_4 - 2]);
                            arr_13 [i_3] = ((0 / (((((23 ? 0 : -4064650401946001612))) ? 4391789164327541464 : (arr_7 [i_2] [0])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_3] = (~var_7);
                            var_15 = (min(var_15, ((((arr_5 [i_5 - 1] [i_5 - 3]) * (arr_5 [i_5 + 1] [i_5 - 3]))))));
                        }
                        arr_17 [7] [i_1] [i_3] [i_0 - 4] = ((((((arr_2 [i_0 - 3]) / (arr_0 [i_0 + 3])))) ? ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2])))) : var_6));
                        var_16 = (min(var_16, 0));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_17 = 856371614;
                        var_18 = (min(var_18, ((((arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_6]) > (arr_2 [i_0]))))));
                    }
                    arr_22 [i_0] = (min(2973502379948773647, -15159));
                    var_19 = (min(var_19, ((((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1]) == (arr_21 [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_20 -= min(((min((arr_27 [i_7] [i_7] [i_7]), (arr_27 [i_7] [i_8] [i_7])))), ((4294967290 | (arr_27 [i_7] [i_7] [i_7]))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_21 = (((min(1, (1 - -1894095904152380701))) * -var_9));
                            arr_34 [i_7] [i_7] [i_7] [i_10] &= (arr_27 [i_8] [i_8] [i_9]);
                            arr_35 [4] [i_8] [4] [4] [4] = ((((min((((4294967281 ? 670237211 : 0))), (~-7817405079988515462)))) / (((arr_33 [i_9] [i_9] [i_9] [i_9] [i_9]) ? ((min(3, 6))) : (arr_29 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))));

                            /* vectorizable */
                            for (int i_11 = 3; i_11 < 14;i_11 += 1)
                            {
                                arr_39 [i_9] [i_11] [i_9] [i_10] [i_11] [i_8] = 88313093144154684;
                                arr_40 [i_7] [i_7] [i_8] [i_7] [i_7] = ((!(((-88313093144154684 ? (arr_38 [i_7] [i_8] [i_7] [i_7]) : var_7)))));
                                var_22 = ((-4064650401946001612 & (arr_36 [i_7] [i_7] [i_8] [i_8] [0] [0] [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
