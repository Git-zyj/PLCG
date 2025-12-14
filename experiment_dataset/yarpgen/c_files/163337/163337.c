/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = (((arr_3 [i_0 + 3]) ? var_8 : (arr_0 [i_0 + 3])));
                            var_19 = (!524286);
                            arr_13 [i_2] [i_2 + 3] = (((arr_8 [i_2] [i_2 + 1] [i_2] [i_2]) != (arr_0 [i_2 + 3])));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [i_0] [i_2] [i_1 + 2] [i_2] [i_3] [i_3] = (((((1 ? -1741457790 : 4294443033))) ? (arr_11 [i_3 - 1] [i_5 + 1] [i_5 + 3]) : 524312));
                            arr_17 [12] [0] [i_1] [i_1] [i_1] |= (((arr_10 [i_1 - 1] [i_3 - 1] [12] [i_5 - 1]) ? (arr_4 [i_2 - 1] [i_2]) : ((((arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_5]) * var_12)))));
                        }
                        arr_18 [i_2] [i_2 - 1] [i_1] [i_2] = ((((1 ? (~20994) : (((arr_6 [i_0] [i_1] [i_2] [i_2]) & (arr_9 [i_0] [2] [i_2] [i_3 - 1])))))) ? ((~((4294967295 ? 17409306404219236996 : 1)))) : ((((!((!(arr_1 [i_3 - 1]))))))));
                        arr_19 [i_2] [i_2] [i_2] [i_1] [i_1] [i_2] = (-(!347702421));
                        arr_20 [i_3] [i_1] [i_2] [i_2] [i_0 + 2] = (arr_7 [i_2] [i_2] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_20 = -23300;
                            var_21 = ((arr_23 [i_2] [i_2] [i_2 + 1]) < (arr_23 [i_1] [i_2] [i_2 + 2]));
                            arr_25 [i_0 + 1] [i_2] [i_6 + 3] [i_2] = (arr_11 [i_0] [i_6] [i_2 + 2]);
                            var_22 = ((((arr_0 [i_7]) >= (arr_1 [i_0]))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_28 [i_6] [i_6 + 2] [i_1] [i_2] [i_1] = (((arr_23 [i_1] [i_2] [i_8]) + 7251556854354302852));
                            arr_29 [i_0] [i_2] [5] [i_6] [10] = ((arr_7 [i_2] [i_0] [i_0 + 3]) ? (arr_7 [i_2] [i_0] [i_0 + 3]) : (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2]));
                        }
                        arr_30 [i_2] [i_2] [i_2 + 3] = -244;
                        var_23 &= ((43203 ? 4294443001 : 2));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_37 [i_2] = (min((arr_24 [i_0 + 2] [i_1 - 2] [i_1 - 2] [i_2 + 2] [i_1 - 2] [i_10] [i_10]), ((min(((var_11 ^ (arr_35 [i_0] [i_2] [i_2 + 1]))), (arr_35 [i_10] [i_2] [i_0]))))));
                                var_24 = ((~((((max(-39, var_15))) ? var_15 : (arr_35 [i_1 + 2] [i_2] [i_2 + 3])))));
                                arr_38 [i_2] = 1011017192165116571;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_9 * ((-(max(3947264874, var_16))))));
    #pragma endscop
}
