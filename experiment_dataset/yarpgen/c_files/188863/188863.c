/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = ((~(-var_8 <= var_4)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [14] [14] |= ((((((arr_0 [i_0]) <= (arr_0 [i_2 + 1])))) <= (arr_0 [i_0 + 2])));
                    arr_8 [i_0] [i_1] = (((((-(((arr_5 [i_0] [i_0]) ? 38 : var_2))))) && (max((33 >= var_0), (((arr_5 [i_0] [i_2 + 1]) <= (arr_4 [i_0])))))));
                }
            }
        }
        var_17 = (min(var_17, 217));
        arr_9 [i_0] = (((((arr_1 [i_0] [i_0 + 1]) == (max((arr_6 [4] [i_0] [1]), var_0))))) & (((((max(38, var_11))) <= (((((arr_6 [11] [11] [i_0]) + 2147483647)) >> (45 - 29)))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_0] [i_0] [i_3] = ((~((-(8579441849584992823 % var_3)))));
            var_18 = (min(var_18, (max((max((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_6 [i_0 - 1] [i_0] [i_0 - 1]))), ((1 | (arr_6 [i_0 + 1] [i_0] [i_0 + 1])))))));

            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                var_19 = ((-23 ? (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 1]))) : ((var_10 ? 0 : var_10))));
                var_20 = (max(var_20, (~32630)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_24 [9] [i_3] [i_4 - 1] [i_5] [i_0] = ((-(((arr_10 [i_0]) / (arr_10 [i_0])))));
                            var_21 = (min((arr_12 [2]), ((((arr_20 [i_4 + 1] [13] [i_4 + 1]) && 32922)))));
                        }
                    }
                }
                var_22 = (min(var_22, (((((max((~var_3), (arr_2 [8])))) ? (((((arr_2 [4]) && ((((-2147483647 - 1) / var_6))))))) : var_13)))));
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7 + 2] = ((arr_21 [i_7 + 2] [i_7 - 1]) < (arr_21 [i_7 - 1] [i_7 + 1]));
        arr_29 [11] = (var_1 ? (arr_26 [i_7 - 1] [i_7 + 1]) : (arr_0 [i_7 + 1]));

        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_23 = ((((4294967266 ? 218 : (arr_27 [i_7]))) != (114 == 1)));
            arr_32 [i_7] [i_8 - 1] = ((-var_11 ? ((((arr_4 [i_7 + 1]) == (arr_5 [i_8 - 1] [i_8 - 1])))) : 65522));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_35 [i_7] [12] [12] = ((arr_6 [i_7 - 1] [i_7] [i_7]) || var_4);
            arr_36 [i_9] |= var_4;
            arr_37 [i_7 + 3] [4] |= (arr_23 [i_7] [i_7] [4] [i_9] [i_9]);
            var_24 = (max(var_24, (-216 % var_4)));
        }
        var_25 += (((arr_15 [i_7] [i_7] [i_7 + 1] [i_7 + 2]) >= ((5765827496666933531 | (arr_12 [i_7 + 3])))));
        var_26 = (min(var_26, (((-((42174 ? (arr_6 [i_7] [i_7 + 2] [i_7 + 1]) : (arr_25 [10]))))))));
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
    {
        arr_40 [11] [i_10] = var_11;
        arr_41 [i_10] = ((~(arr_5 [i_10 + 3] [i_10 + 3])));

        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            var_27 += (min((((arr_27 [i_10 - 1]) ^ -24934)), (((arr_27 [i_10 - 1]) ? 23 : (arr_27 [i_10 + 1])))));
            var_28 += ((var_4 << (((max(23, 1))))));
            arr_45 [i_10] [i_11] [i_11 - 2] = (max(((((arr_11 [i_10] [14]) ? (arr_18 [i_10] [i_10 + 1] [i_10] [i_10 - 1] [i_11] [i_11]) : (arr_19 [i_10] [i_10] [i_10] [i_10 + 2] [i_10] [i_11])))), 12680916577042618084));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_29 ^= 1;
            var_30 *= ((~((~(arr_31 [i_10 + 1])))));
            var_31 = (min(var_31, (((0 / (max((max((arr_42 [i_10] [i_12]), (arr_31 [i_10 + 1]))), ((max((arr_10 [2]), -10794))))))))));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            arr_51 [i_10] [i_13] = (arr_21 [i_10 + 1] [i_10]);
            arr_52 [i_13] = (arr_4 [i_10 + 2]);
            var_32 = (max(var_32, ((max(((var_2 ? var_14 : 14336)), ((((arr_25 [i_10 + 1]) >> (((arr_25 [i_10 + 2]) - 9148))))))))));
            arr_53 [i_10] [i_13] [i_10] = ((((max(((max(1, (arr_42 [i_10 + 3] [i_13])))), 18306331592353020088))) <= 5341505153906332214));
        }
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            arr_57 [i_14 - 1] [i_14] = (!((((var_10 / -869788979) / ((16 - (arr_17 [i_10] [i_10 - 1] [i_14 + 2])))))));
            var_33 = (((((arr_21 [i_14 - 1] [i_10 - 1]) >> (65534 % var_7))) < (arr_21 [i_10] [i_14])));
            var_34 = (min(var_34, var_13));
        }
    }
    #pragma endscop
}
