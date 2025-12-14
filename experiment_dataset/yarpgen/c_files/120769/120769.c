/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        var_17 = (((arr_0 [i_0]) & (arr_1 [i_0])));
        arr_3 [7] = ((~((-(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = ((((arr_4 [i_1] [i_1]) ? (arr_0 [i_1]) : -1736085847)));
        var_18 = (max(var_18, ((min(((min((min((arr_5 [7] [i_1]), (arr_1 [i_1]))), (arr_5 [i_1] [i_1])))), ((min(var_3, var_5))))))));
        var_19 |= ((((1736085846 / (max((arr_5 [i_1] [13]), (arr_4 [i_1] [i_1]))))) >> (((arr_0 [12]) + 2054596433))));
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_20 = ((((arr_6 [i_2 - 1]) ? (arr_6 [i_2 - 1]) : 22718)));
        arr_10 [i_2] = ((-36 ? ((0 ? 63589 : 606156671)) : 1));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] = (min(((((max(-359505008, (arr_1 [7])))) ? (max(var_0, 2029682050)) : (!30))), (((((-(arr_1 [i_3]))) > (1736085853 == 3648697690))))));
        var_21 = (((((40 ? 1 : (arr_4 [i_3] [i_3])))) || (467981933 < 1)));
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_22 = ((((max(6275, -40))) & (arr_15 [i_4])));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_23 = arr_17 [i_4] [i_5] [i_4];
            var_24 = (arr_18 [i_4] [i_5]);
        }
        var_25 = (max(var_25, ((min((((~(~var_2)))), (~var_9))))));
    }
    #pragma endscop
}
