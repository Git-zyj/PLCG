/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? 18446744073709551615 : var_10))) ? (((38745 ? 38738 : -1))) : (((1 + 47552) ? 503942971109432925 : (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : var_12));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [18] [i_1] [i_0] [19] = (((arr_9 [i_3 - 1] [i_2 - 3] [5]) ? (arr_9 [i_3 + 1] [i_2 - 2] [i_2]) : (arr_9 [i_3 - 1] [i_2 - 2] [i_2 + 1])));
                        arr_12 [i_0] = ((((var_2 ? 14228574108816199176 : 0))) ? var_8 : (arr_8 [i_3 + 1] [i_2 - 2] [i_1]));
                        arr_13 [i_0] [i_0] [14] [i_3] [0] = 8253;
                    }
                }
            }
            var_16 += ((-78 ? (var_3 * 38745) : 127));
            var_17 = (arr_8 [i_1] [i_1] [i_0]);
            arr_14 [i_0] [14] [i_0] |= ((var_11 ? (((~(arr_4 [4] [i_0] [8])))) : 4294967295));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_9));
                            arr_24 [i_0] [i_0] [i_0] [i_5] [10] [i_0] = ((!((13184 > (arr_17 [14] [1] [i_4])))));
                        }
                    }
                }
                var_19 &= (((arr_4 [i_5] [16] [i_5]) ? 127 : (arr_4 [i_4] [i_4] [i_5])));
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_28 [i_0] [i_0] [i_4] [i_8] = (((((78 ? (((arr_16 [i_8] [i_4] [16]) ? 30 : (arr_15 [i_0] [i_0]))) : ((var_5 ? (arr_4 [i_0] [i_0] [i_0]) : -23))))) != (min((arr_4 [i_0] [i_4] [14]), (8741165882984203517 & var_5)))));
                var_20 = (max(var_20, ((max(((((arr_27 [i_0] [i_0] [i_4] [i_0]) ? (arr_27 [i_0] [i_0] [i_4] [i_0]) : (arr_27 [i_0] [i_0] [i_4] [i_0])))), (arr_3 [i_0] [i_4] [i_8]))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_34 [i_0] = (3 + 18446744073709551615);
                            arr_35 [i_9] [18] [i_8] [i_9] [i_10 - 1] [i_9] [16] &= (arr_4 [i_9] [i_4] [i_8]);
                            var_21 = (((((min(-6, var_14))) ? var_15 : ((((arr_21 [i_0] [i_0] [i_8] [i_8]) & (arr_19 [i_4] [i_0] [i_4])))))));
                        }
                    }
                }
                var_22 &= (((((!(var_5 & var_5)))) >> (((13 * -1) + 24))));
            }
            var_23 = (((((((((arr_8 [i_0] [i_0] [i_0]) ? (arr_33 [i_0] [i_4] [i_0] [i_0] [13]) : 4294967295))) + -118))) ? (min(((var_7 ? var_7 : (arr_31 [i_0] [i_0]))), 1)) : ((((max(16396726503990994188, -64))) ? 38 : (25636606 ^ 7835778155558608454)))));
            var_24 += (arr_30 [i_4]);
            var_25 = (0 >= var_2);
        }
    }
    var_26 = (((((((8861 ? var_14 : 1))) ? var_2 : (((126 ? var_1 : var_7))))) >> (((max(var_1, (min(8, -736445797)))) + 152))));
    #pragma endscop
}
