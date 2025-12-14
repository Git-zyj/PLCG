/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 ^ var_12);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = arr_0 [i_0];
        var_16 = (max(var_16, (((((((arr_1 [i_0]) ? (arr_1 [11]) : (arr_0 [i_0])))) ? (((arr_0 [i_0 - 1]) ? (arr_2 [i_0]) : ((((1415960131 && (arr_0 [i_0]))))))) : (((arr_2 [i_0]) ? (((((arr_2 [i_0]) < (arr_1 [i_0]))))) : (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [8] &= (((arr_3 [i_1] [i_1]) / (arr_5 [i_1])));
        var_17 += (((arr_1 [i_1]) && ((((arr_3 [i_1] [i_1]) ? (((arr_0 [i_1]) ? (arr_1 [i_1]) : (arr_5 [i_1]))) : (arr_5 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_3] [i_4] = (arr_12 [i_3] [i_2]);
                        arr_18 [i_1] [i_1] [i_1] [8] [4] = (((arr_12 [i_1] [i_1]) != ((((arr_16 [i_2 - 1] [12] [i_2] [i_2 - 1] [12]) ? (((arr_3 [i_1] [i_2]) ? (arr_13 [i_2] [i_2] [i_3]) : (arr_15 [i_2 + 2] [i_3] [1]))) : (arr_11 [i_1] [i_1]))))));
                        var_18 = (min(var_18, (((((((arr_1 [i_1]) + (arr_7 [i_1])))) ? ((((arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? (((arr_14 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1]) ? (arr_2 [i_1]) : (arr_8 [i_1] [i_2]))) : (arr_8 [i_2] [5])))) : (((arr_3 [i_1] [10]) & (((arr_10 [i_2] [i_3] [i_2]) ? (arr_4 [i_2]) : (arr_3 [7] [i_4]))))))))));
                        var_19 |= (((((((arr_7 [0]) ? (arr_15 [i_1] [i_2] [i_4]) : (arr_0 [i_4]))))) ? (arr_8 [i_2 - 1] [i_2 - 1]) : (arr_13 [i_1] [i_2 + 1] [i_4])));
                        var_20 |= (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [i_3] [i_2] [i_1]) : (((29 << (562949953421312 - 562949953421302))))));
                    }
                }
            }
        }
        arr_19 [i_1] = ((((18446181123756130279 ? 2041253238 : 4294967295)) != (((((arr_13 [i_1] [i_1] [i_1]) != (arr_9 [i_1] [i_1] [i_1])))))));
        var_21 = arr_15 [i_1] [i_1] [i_1];
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] [8] = ((((((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_1 [i_5]) : (arr_21 [i_5])))) ? (((arr_21 [i_5]) ? (arr_2 [i_5]) : (((arr_5 [i_5]) << (((arr_5 [i_5]) - 2318216105199375511)))))) : (arr_5 [i_5])));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_26 [i_5] [i_6] = (arr_4 [i_5]);
            var_22 ^= ((arr_12 [i_6] [i_6]) ? (arr_24 [i_5]) : ((((arr_11 [i_5] [1]) << (((arr_8 [i_5] [i_6]) + 3676471070595275537))))));
            arr_27 [i_6] [i_5] [i_5] = (((arr_20 [i_5] [i_6]) >> (((arr_24 [i_5]) - 12351160479024375985))));
        }
        var_23 = (arr_13 [i_5] [i_5] [i_5]);
    }
    var_24 -= var_12;
    #pragma endscop
}
