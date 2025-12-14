/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0] = (arr_1 [i_0 - 3]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = (((((arr_2 [i_0 + 1] [i_0 + 1]) - ((((arr_6 [i_1] [i_1]) && (arr_6 [i_0] [i_0])))))) < (arr_2 [i_0] [i_1])));
            arr_8 [i_0] [i_0] = (((arr_0 [i_1]) + (arr_2 [i_0 - 1] [6])));
            arr_9 [i_0 - 1] |= (arr_6 [i_0 + 1] [i_0 + 1]);
            var_19 = (((arr_5 [i_0 - 3] [i_1] [0]) / ((((((arr_7 [i_1]) < (arr_0 [7])))) ^ ((((arr_0 [i_0]) <= (arr_6 [i_0 - 4] [i_1]))))))));
            arr_10 [i_0 - 2] = (((((((((arr_1 [i_0 - 4]) && (arr_3 [i_0] [i_0])))) << (((arr_3 [i_1] [i_0]) >> (((arr_1 [2]) + 5262860355197122930))))))) > (arr_7 [i_0])));
        }
        var_20 ^= ((((((arr_0 [i_0 - 4]) + (arr_6 [i_0] [i_0 + 1])))) || (arr_1 [i_0 - 2])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_21 |= (arr_12 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_22 += (((arr_15 [i_3] [i_3] [i_3] [i_5 + 2]) == (((((((arr_16 [i_3] [i_3]) / (arr_11 [i_4])))) && (arr_13 [i_2] [i_3]))))));
                        var_23 = (i_4 % 2 == 0) ? ((((((arr_21 [11] [i_4] [i_4] [i_2] [i_4] [i_5 - 1]) / (arr_21 [i_2] [i_4] [i_4] [i_5 + 2] [i_5 - 1] [i_2]))) << (((((arr_21 [i_5 + 1] [i_4] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5]) / (arr_15 [i_4] [i_3] [i_5 + 1] [i_5 - 1]))) - 95042812))))) : ((((((arr_21 [11] [i_4] [i_4] [i_2] [i_4] [i_5 - 1]) / (arr_21 [i_2] [i_4] [i_4] [i_5 + 2] [i_5 - 1] [i_2]))) << (((((((arr_21 [i_5 + 1] [i_4] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5]) / (arr_15 [i_4] [i_3] [i_5 + 1] [i_5 - 1]))) - 95042812)) - 4249638392)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_24 = (((((((arr_22 [i_6] [i_6]) == (arr_16 [i_6] [i_6]))))) - (arr_16 [i_6] [i_6])));
                    var_25 = (arr_18 [i_2] [i_2] [i_6]);
                }
            }
        }
        var_26 = ((arr_19 [12] [i_2] [12] [i_2]) & (arr_16 [16] [4]));
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        arr_29 [i_8 - 1] |= (((((arr_16 [18] [i_8 - 1]) / (arr_16 [1] [i_8 - 1]))) ^ (arr_25 [0] [i_8 - 1] [0] [i_8])));
        var_27 = (((arr_19 [12] [i_8] [i_8 - 1] [12]) / (arr_25 [i_8] [i_8] [i_8 + 1] [i_8])));
        arr_30 [i_8 - 1] = (arr_17 [i_8] [i_8] [i_8] [i_8 - 1]);
        var_28 = (arr_12 [i_8 - 1]);
        arr_31 [i_8 - 1] [i_8] = (((arr_17 [21] [21] [i_8 - 1] [i_8]) - (arr_13 [i_8] [i_8])));
    }
    var_29 &= (var_7 < var_13);
    var_30 = var_0;
    #pragma endscop
}
