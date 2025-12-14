/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((((6027460673849359320 ? 16683 : var_12)))) ? var_3 : var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, (((-((((!(arr_2 [i_0]))))))))));
        arr_3 [i_0] = (((((-115 ? -115 : 115))) ? ((23 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_1 [i_0]) >> (var_9 + 21)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_19 = (!var_0);
                            arr_16 [i_1] [i_2] = ((var_12 ? ((max(((var_9 ? var_11 : -106)), 1222995431))) : ((((max(var_11, var_15))) ? (((arr_8 [i_5] [i_1]) ? (arr_2 [i_3]) : var_10)) : (arr_7 [i_2 + 4] [i_5 + 1] [i_5 - 1])))));
                        }
                    }
                }
            }

            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                arr_20 [i_1] [i_2] [i_1] [i_6] = (((var_8 ? var_1 : (arr_15 [4] [i_1]))));
                var_20 = var_11;
                var_21 = (min(var_21, ((max((min((arr_14 [i_1] [i_2 + 2] [i_6] [i_6] [11]), (max(var_0, (arr_15 [1] [1]))))), var_1)))));
            }
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                var_22 = (((((-(arr_5 [i_7 + 1])))) ? 2255884570405126576 : (((((-33 ? 225 : 115)))))));
                arr_24 [i_1] [i_1] [i_1] = (((var_16 - var_5) ? (arr_23 [i_1] [i_2] [i_2] [i_7]) : ((13608978063625327251 ? -21940 : -115))));
            }
            arr_25 [i_1] = (((~2575586318661424928) ? (arr_9 [i_2] [i_1] [i_2] [9]) : var_5));
            arr_26 [i_1] = (((((227 ? var_6 : (arr_19 [i_2 + 3] [i_2 + 2] [i_1] [i_1])))) ? ((var_0 ? (arr_19 [i_2 - 1] [i_2 - 1] [6] [11]) : var_4)) : (((arr_19 [i_2 + 1] [i_2 + 2] [i_2] [i_1]) ? (arr_19 [i_2 + 1] [i_2 + 1] [i_2] [i_1]) : var_10))));
            var_23 = ((((((!184) ? (min(var_12, var_0)) : var_3))) ? ((116 ? (((arr_2 [i_1]) / -29116)) : ((((arr_8 [3] [i_1]) ? 37 : -19258))))) : (min(var_10, (min(var_13, 126))))));
        }
        arr_27 [i_1] = ((var_10 ? ((((((115642760 ? -101 : 121))) && (arr_4 [i_1] [i_1])))) : ((var_2 ? ((119 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [11]) : 4006)) : var_10))));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        arr_35 [i_1] [i_8] [i_1] = ((-(((arr_14 [2] [1] [7] [i_8] [i_9]) ? ((var_15 ? var_12 : var_7)) : ((var_13 ? (arr_12 [i_1] [i_8] [i_8] [i_9] [i_9] [i_10]) : 33265))))));
                        var_24 ^= ((((~(arr_32 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8])))) ? (((-(arr_32 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8])))) : ((-122 ? 2772091647653110694 : 150)));
                        var_25 = ((+((max((arr_34 [i_8 - 2] [i_8 + 1] [i_8 - 2]), 116)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
