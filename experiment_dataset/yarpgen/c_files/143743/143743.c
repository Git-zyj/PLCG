/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = ((((13690616172926446443 <= (arr_0 [i_0] [i_0]))) && var_6));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_11 = (1107009650 == var_9);
        var_12 = (max(var_12, (107 > 2646717618)));
        arr_6 [13] [i_1] = (((var_1 == var_7) ? (arr_4 [i_1 + 2] [i_1 + 3]) : (arr_5 [i_1 + 3] [i_1 + 1])));
        var_13 = var_1;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_14 ^= ((var_3 - (((arr_8 [i_2]) ? (max(124, 18446744073709551615)) : (max(var_5, var_2))))));
        var_15 = (min(var_15, ((((((arr_8 [i_2]) / (arr_8 [i_2]))) * (arr_8 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [16] [i_4] = (((var_7 == (arr_14 [i_3 + 1]))));
                        var_16 = (!((var_4 && (((arr_15 [i_2] [i_3 + 1] [i_4] [i_3 + 1]) || (arr_10 [3] [i_3]))))));
                        var_17 = (max(var_17, (((((max((arr_11 [i_3 + 1] [i_3 + 1]), (arr_11 [i_3 + 1] [i_3 + 1])))) == (arr_11 [i_3 + 1] [i_3 + 1]))))));
                        var_18 += (arr_11 [i_5] [i_3]);
                    }
                    arr_18 [i_3] = (max((1 - 2147483647), var_5));
                    arr_19 [i_4] [i_4] [i_2] [i_2] = (((arr_9 [i_2] [i_2] [i_2]) + (((arr_11 [i_3 + 1] [i_3 + 1]) - var_3))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_19 ^= (((((arr_12 [2]) + 2147483647)) >> (((((arr_21 [i_6] [1]) - (arr_16 [i_6] [i_6] [i_6] [i_6]))) - 3839705656))));
        var_20 = (min(((var_7 - (-13414197 > 0))), ((((arr_8 [i_6]) == (arr_16 [i_6] [i_6] [i_6] [i_6]))))));
    }
    #pragma endscop
}
