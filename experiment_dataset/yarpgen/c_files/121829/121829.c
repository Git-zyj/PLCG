/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (139431946 && -344946761);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = (min(0, 16383));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] = (min(-953995452, 1));
            var_15 = (min(var_15, 344946761));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] = ((!((var_5 > (arr_5 [i_2] [i_2] [i_2])))));
            arr_11 [4] [i_2] [i_2] &= (arr_9 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_16 ^= (1 ? 0 : 0);
            var_17 -= 40372;
            arr_15 [7] = var_2;
            arr_16 [0] [i_3] = (arr_4 [6]);
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (((((~(min(922532465, (arr_4 [i_4])))))) % var_2));
        arr_20 [i_4] [i_4] = (((max((arr_12 [4]), (((arr_5 [i_4] [i_4] [i_4]) * (arr_0 [i_4]))))) < ((225 ? (arr_13 [i_4] [10]) : (((-(arr_3 [i_4]))))))));
        arr_21 [i_4] [i_4] = (~0);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = (min(((((((arr_6 [i_5]) ? 146 : var_5))) ? (arr_13 [i_5] [i_5]) : 225)), ((min(922532470, ((max(1, 16383))))))));
        var_18 *= 1328660619;
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_30 [i_6] [i_6] = min(((((arr_29 [i_6] [i_7] [i_7]) * (arr_29 [i_6] [i_6] [i_6])))), (((((1 ? -1717586851 : (arr_25 [i_6] [i_6])))) ? ((112 ? var_4 : 12176407621321940464)) : (!-3))));
            arr_31 [i_6] [i_7] &= ((var_5 ? (((((((arr_29 [17] [i_6] [i_6]) / (arr_25 [18] [i_7])))) ? (((arr_27 [i_7]) ? (arr_29 [i_6] [i_7] [i_7]) : -1989548994863168574)) : 1))) : (((arr_27 [i_6]) ? (((arr_29 [i_6] [15] [i_6]) ? var_4 : (arr_26 [i_7]))) : 18785))));
        }
        arr_32 [i_6] |= (((((arr_29 [i_6] [6] [6]) <= (arr_29 [i_6] [i_6] [i_6]))) ? (min(((-(arr_25 [i_6] [i_6]))), (arr_25 [3] [i_6]))) : 4294967295));
    }
    #pragma endscop
}
