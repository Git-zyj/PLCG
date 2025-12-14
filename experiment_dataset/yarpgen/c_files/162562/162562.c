/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 ^= (arr_2 [i_0] [i_0]);
                    var_14 |= ((-(arr_7 [i_0] [4] [i_2 + 4] [i_0])));
                }
            }
        }
    }
    var_15 |= ((+(min((var_0 * 0), ((var_8 ? var_7 : var_1))))));

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = var_3;
        var_16 = (max(var_16, (((((max((arr_9 [i_3 - 1]), (arr_9 [i_3 + 1])))) ^ (arr_8 [i_3] [i_3 - 1]))))));
        var_17 ^= (((((((arr_8 [i_3 + 1] [i_3 - 1]) + 2147483647)) >> (((arr_9 [i_3 + 1]) - 106)))) >> (((arr_8 [i_3 - 1] [i_3 + 1]) / ((min(var_3, (arr_8 [13] [2]))))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((((arr_12 [i_3 + 1] [19] [i_3 + 1]) < -1)) ? (((arr_10 [i_4] [i_6]) ? (arr_8 [1] [1]) : var_7)) : (arr_9 [i_3]))) != ((min((((arr_9 [i_3]) || (arr_13 [i_4] [i_3]))), ((1 && (arr_18 [2]))))))));
                        var_18 = (max(var_18, (((((min((arr_14 [i_5 - 1] [i_3]), (arr_14 [i_5 - 1] [i_4])))) / ((((min((arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_10 [i_5] [i_5])))) + (arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))))));
                    }
                }
            }
        }
        arr_22 [i_3] = (((((((((arr_16 [i_3] [i_3] [i_3] [i_3]) ? (arr_12 [i_3] [i_3] [i_3]) : (arr_9 [i_3])))) ? var_7 : ((max(1, (arr_16 [i_3] [i_3] [i_3] [i_3]))))))) ? ((-(arr_19 [i_3] [11] [i_3 + 1] [i_3] [21]))) : var_4));
    }
    var_19 ^= (min(var_6, (~-var_9)));
    #pragma endscop
}
