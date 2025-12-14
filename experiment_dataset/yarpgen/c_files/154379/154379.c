/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-(arr_1 [1])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                var_14 = (arr_0 [13] [13]);
                arr_10 [i_0] [i_0] [i_0] [i_2] &= ((((max((arr_9 [i_2] [i_2 + 2] [i_2 + 1] [i_2]), (arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2])))) ? (min((arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_0]), (arr_9 [i_2] [i_2] [i_2 + 1] [7]))) : (max((arr_9 [i_2] [i_2] [i_2 + 1] [i_2]), (arr_9 [1] [i_2] [i_2 + 1] [1])))));
                arr_11 [i_2] [i_1] [i_0] = (arr_6 [i_0] [i_0]);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_15 = (!var_9);
                var_16 = ((var_2 ? (arr_12 [i_1]) : (arr_2 [i_1])));
                var_17 -= (arr_9 [i_3] [i_3] [i_1] [i_0]);
                var_18 *= (arr_0 [i_0] [i_0]);
            }
            var_19 = ((~(arr_9 [i_0] [i_0] [i_0] [i_0])));
            arr_14 [i_1] = (min(((~(arr_0 [i_1] [i_0]))), (((var_10 || ((((arr_5 [i_1] [21]) ? var_5 : (arr_7 [6])))))))));
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_20 -= (min(((min((min((arr_16 [1] [i_4]), (arr_0 [i_0] [i_4]))), (arr_12 [i_0])))), (min(var_13, (arr_13 [i_0] [i_0] [i_0] [16])))));

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                arr_20 [i_5] [8] [i_4] [8] = (((((8117 ? -4294967293 : ((~(arr_9 [i_0] [i_4] [i_4] [1])))))) ? (((((((~(arr_0 [i_0] [i_0])))) && ((max((arr_2 [i_0]), 8436207525535939869))))))) : (((arr_9 [i_5 + 1] [i_0] [i_0] [i_0]) ? (arr_9 [i_5 - 1] [i_4] [i_4] [i_4]) : (arr_9 [i_5 - 1] [i_5] [i_0] [i_0])))));
                var_21 = (((arr_13 [i_5 + 1] [i_5 - 1] [i_0] [i_5 + 1]) ? (arr_17 [i_5] [i_4] [i_0]) : (arr_7 [i_5])));
                arr_21 [10] [1] [i_5 + 2] [i_5 + 2] = ((((((arr_12 [i_5]) ? ((min((arr_0 [i_0] [i_0]), (arr_6 [i_0] [i_0])))) : (arr_18 [i_5] [i_5] [i_5 + 1] [i_5 - 1])))) || ((((((arr_3 [i_0]) * (arr_8 [i_4]))) | ((15 ? (arr_18 [i_4] [12] [i_4] [i_0]) : -16)))))));
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_22 = (1 > 0);
                arr_25 [i_6] = (arr_17 [i_6] [i_4] [5]);
                var_23 = ((~(max(((max(1, 0))), 81))));
            }
        }
        arr_26 [i_0] = 1;
        arr_27 [i_0] [i_0] = (((min((arr_18 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0]))) > ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_18 [i_0] [i_0] [i_0] [14]))))));
    }
    var_24 = var_8;
    #pragma endscop
}
