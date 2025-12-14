/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_11 ? (var_7 ^ var_2) : var_4))) | ((~(-40 | 9038075894162136067)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_16 = (min(var_16, (((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))) ? (((arr_1 [2] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))))))));
        arr_3 [i_0] = (((((4294967295 ? -1483844491 : 770957509))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (min(499011134, (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 += (0 ? (-127 - 1) : (max(-1792440003, (max(107, 703625)))));
        var_18 = ((((-(((arr_1 [i_1] [i_1]) * 0)))) * (((((arr_5 [i_1]) * (arr_5 [8]))) * (arr_0 [i_1 - 1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_1] = (((arr_0 [i_1 + 1]) ^ (arr_0 [i_1 + 1])));
            var_19 &= ((((~(arr_8 [i_1] [i_2]))) >= ((-658335072 ? (arr_5 [2]) : 0))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((((!((!(arr_10 [i_1] [i_1])))))) | ((((max(65535, -787788637)) > (((1792440002 <= (arr_7 [i_1] [i_1]))))))));
            arr_13 [8] [i_3] [i_1] = arr_7 [i_1 + 1] [i_3];
            var_20 += (min((((!(arr_0 [i_1])))), ((((((arr_10 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_1 [i_1] [i_1])))) ? (arr_5 [i_1]) : (arr_1 [i_1] [i_1])))));
            var_21 |= (arr_10 [i_1] [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_22 += (((arr_6 [i_1 + 1]) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 1])));
            arr_17 [i_1] [i_1] [i_1] = ((((((arr_0 [0]) ? (arr_1 [i_1] [i_4]) : (arr_14 [5])))) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : ((62 ? -1 : 1))));
            arr_18 [i_4] [i_4] [i_4] = (((arr_1 [0] [0]) ? (arr_8 [i_1] [i_1]) : (arr_0 [i_4])));
        }
        arr_19 [i_1] = ((((((arr_6 [i_1]) & 1792439996))) ? 16026810216053870831 : (((((0 == (arr_7 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
