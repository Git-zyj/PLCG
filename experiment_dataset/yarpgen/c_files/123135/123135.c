/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((-(((~var_3) - (var_1 - var_13)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = ((((var_14 ? var_1 : var_4)) - var_10));
        arr_2 [i_0] = ((((min(-124, (arr_1 [i_0])))) * ((var_1 ? (arr_1 [i_0]) : ((min(-122, var_12)))))));
        var_19 = ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_20 = (max((arr_1 [i_0]), ((((!var_9) < 1364827123)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (((min((!-21681), -8250709104648145152)) & (((((min(-29, 22675))) ? (var_9 || var_3) : (~var_3))))));
        arr_5 [i_1] [i_1] = (((max(var_13, (arr_1 [i_1]))) ^ ((((arr_1 [i_1]) && (arr_1 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (~var_6);
        var_22 ^= (544194878 ? 1 : 3750772417);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_23 = (!var_10);

                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        var_24 = (28 | 3750772406);
                        arr_18 [i_5 + 1] [i_5] [i_5] [i_3 + 1] [i_5] [i_2] = ((-(arr_16 [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_25 |= (!var_6);
                        var_26 = ((((((arr_17 [i_4] [i_3 + 1]) == (arr_14 [i_2] [6] [i_4]))))) - 4294967289);
                        arr_21 [i_2] [i_2] [i_6] [i_6] [9] = var_14;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_2] [i_3] [i_4] [i_7] [i_7] [i_3] = 3534777443843098472;

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_27 = (!43);
                            arr_27 [i_7] = ((-3768243905418024145 ? 15463503567991675377 : -20015));
                            arr_28 [i_2] [i_3] [i_4] [i_4] [7] [i_7] = ((28 << (((((arr_1 [i_4]) ? 32 : var_11)) - 30))));
                            arr_29 [i_2] [i_2] [i_7] = ((~(arr_25 [i_3] [i_3 - 1] [i_3 - 1] [6] [i_3 - 1] [i_3 + 1])));
                            arr_30 [1] [i_3 + 1] [1] [i_7] [0] [1] = 127;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_34 [i_9] [i_3] [i_7] [i_7] [i_7] [i_3] [i_2] = (((arr_19 [i_3 + 1]) <= (arr_1 [i_3 + 1])));
                            arr_35 [i_7] [i_9] [i_7] [3] [i_3 - 1] [i_7] = (((((arr_32 [i_7] [i_7] [i_7] [i_3 - 1] [i_7]) ? 544194883 : (arr_0 [i_3 - 1]))) - -109));
                        }
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            arr_40 [i_2] [i_7] [i_10 - 2] [i_7] [i_3] [i_7] [i_7] = ((31866 ? -616062560263783240 : 38615));
                            var_28 = (max(var_28, var_4));
                            arr_41 [i_2] [i_7] [i_3] [i_4] [i_4] [i_7] [i_10 - 1] = (~var_14);
                            arr_42 [i_2] [i_7] [1] [1] [i_2] = (((arr_33 [i_7]) ? var_0 : (arr_33 [i_7])));
                        }
                        arr_43 [i_7] [i_4] [i_3] [i_7] = (arr_17 [i_2] [i_3 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
