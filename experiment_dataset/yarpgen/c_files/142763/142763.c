/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (~var_5)));
    var_17 = (var_11 > var_10);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? ((((((arr_0 [i_0] [i_0]) ? var_4 : var_6)) >> (((arr_0 [i_0] [i_0]) + 6846672230991782964))))) : ((((((arr_0 [i_0] [i_0]) ? var_4 : var_6)) >> (((((arr_0 [i_0] [i_0]) - 6846672230991782964)) + 2085422596248218002)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [13] [0] [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((((1434529467 != (arr_12 [i_2] [i_3 - 1]))) ? ((((arr_12 [i_1] [i_3 - 1]) != (arr_12 [i_0] [i_3 - 1])))) : ((max((arr_12 [i_0] [i_1]), (arr_12 [i_0] [i_1]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] &= var_1;
                    }
                }
            }
            arr_15 [i_0] = max(9346283725448768170, (arr_0 [i_0] [i_0]));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_18 [i_4] [i_4] &= ((((max((arr_8 [i_0]), (arr_8 [i_0])))) <= 12));
            arr_19 [i_0] [i_0] [i_0] = (arr_16 [i_0]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_26 [5] [i_0] [i_6] = (arr_21 [i_0]);
                var_18 = (((arr_17 [i_0] [i_0]) <= (arr_17 [i_0] [i_0])));
                arr_27 [i_0] [i_5] [i_0] = 1434529467;
                arr_28 [i_0] = (!197);
            }
            arr_29 [13] [i_0] = (((arr_12 [i_0] [i_5]) / 1434529483));
            var_19 += ((785424469 ? (arr_3 [i_5]) : 1434529467));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_33 [i_0] [8] [i_0] = ((((((arr_11 [i_0] [i_7]) ? (arr_32 [i_7] [i_0]) : var_11))) ? (10 && 1434529483) : (~112)));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_43 [i_0] [i_0] [i_8] [i_0] [i_8] = (((arr_37 [i_8] [i_8] [i_9 + 2] [i_10]) ? (arr_40 [i_9] [i_9] [i_9 + 2] [i_10] [i_10]) : (arr_42 [6] [i_8] [i_9 + 2] [i_0] [i_9] [i_10 - 2])));
                            var_20 = (min(var_20, ((((arr_42 [i_10] [i_10 - 1] [i_10] [i_8] [i_10] [i_10]) + 10773838370358511558)))));
                            var_21 = (arr_1 [i_0] [i_7]);
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_47 [i_0] = ((243 ? 8115798834195385101 : 243));
                    arr_48 [i_0] = 13;
                }
            }
            var_22 = (max(var_22, (((5895805146095773384 << (((-104 + 134) - 14)))))));
            arr_49 [1] [i_0] = ((var_2 <= (arr_39 [i_0] [i_7] [i_0] [i_7] [i_0])));
            arr_50 [i_0] [16] = (((arr_8 [i_0]) ^ (arr_8 [i_0])));
        }
        arr_51 [i_0] = (((arr_31 [i_0]) && (((var_10 ? (arr_31 [i_0]) : -46166834)))));
    }
    #pragma endscop
}
