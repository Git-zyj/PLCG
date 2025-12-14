/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-var_8 ? ((max(var_3, var_10))) : (var_0 % var_11))) + ((var_0 ? -19 : -var_6))));
    var_16 = (min(var_16, var_14));
    var_17 += ((((((var_9 ? var_13 : var_11) > (((max(var_5, var_7)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((+((+(((arr_3 [i_0] [i_2]) % (arr_3 [i_0] [i_0])))))));
                    var_18 = (max(var_18, (((((((((arr_8 [i_0]) | (arr_8 [i_1])))) ? ((((!(arr_3 [i_0 + 1] [i_1]))))) : (arr_2 [i_0 - 1] [i_0 - 1]))) ^ ((((((arr_7 [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_4 [i_1])))) ? ((-(arr_6 [i_0] [i_0] [i_2]))) : -32764)))))));
                    arr_10 [12] [i_2] = ((((((((arr_8 [i_2]) | (arr_7 [i_2])))) != (arr_2 [i_0] [i_0]))) ? (((-(arr_6 [i_0] [i_2] [i_2])))) : (456791530 | 456791531)));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = (((((+(max((arr_8 [i_2]), (arr_3 [i_2] [i_2])))))) ? (arr_6 [i_0 - 2] [i_2] [i_2]) : ((((((arr_4 [14]) | (arr_5 [i_2] [i_2] [i_1] [i_2])))) & (max((arr_5 [i_2] [9] [i_1] [i_1]), (arr_0 [i_0 - 2])))))));
                    arr_12 [i_2] = max(((((arr_8 [i_2]) ? (arr_4 [i_0 - 2]) : ((min((arr_4 [10]), (arr_4 [i_0 + 1]))))))), (((((~(arr_8 [i_2])))) ? (((~(arr_1 [i_0] [i_0])))) : (((arr_0 [i_1]) ^ (arr_3 [i_1] [i_2]))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_23 [i_3 + 1] [i_3] [i_4 + 1] [14] = ((-(((((arr_16 [i_3]) ? (arr_13 [i_5]) : (arr_15 [i_3 + 1] [i_4 - 4] [i_3 + 1]))) / (arr_15 [i_5] [11] [i_3 + 1])))));
                    arr_24 [i_5] [i_4 - 3] [i_3] |= (((!((((arr_15 [i_3] [i_4 - 1] [i_5]) ? (arr_16 [i_3]) : (arr_17 [9] [i_4 - 1] [i_3])))))) ? (arr_16 [i_5]) : (arr_22 [i_3] [i_3] [i_3] [i_5]));
                    var_19 = (min(536440129, 40));
                    var_20 = arr_21 [i_3 + 1] [i_4 - 4] [19] [i_4 - 2];
                }
            }
        }
        arr_25 [i_3 + 1] &= (arr_16 [i_3]);
        var_21 = ((((((arr_13 [i_3 + 1]) | (arr_13 [i_3 + 2])))) ? (arr_22 [i_3] [i_3 + 1] [i_3] [i_3]) : (arr_17 [i_3] [i_3 - 1] [10])));
        arr_26 [i_3] [i_3] = (((((-(arr_16 [i_3 + 2])))) + (arr_13 [i_3 - 1])));
    }
    #pragma endscop
}
