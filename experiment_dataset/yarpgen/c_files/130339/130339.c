/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [20] |= 2242598007;
        var_13 = -var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 *= ((((var_9 ? (arr_8 [i_0] [2] [1] [i_1]) : (arr_8 [i_0] [i_0] [0] [i_2]))) >= (arr_3 [1] [i_2])));
                    var_15 += min(((((min(var_4, var_1))) ? (((((arr_7 [i_0] [i_0] [i_0] [14]) || (arr_1 [20]))))) : ((var_6 ? (arr_8 [i_0] [i_2] [8] [i_2]) : 2242598025)))), (arr_7 [i_0] [i_0] [i_1] [1]));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        arr_14 [6] &= (((min((arr_2 [2]), (arr_2 [4]))) >> (((((arr_5 [i_3]) ? (max(2052369288, (arr_7 [i_3] [i_3] [i_3] [8]))) : (min(var_12, 2052369284)))) - 2052369288))));
        arr_15 [i_3] [i_3 - 4] = 1692597797;
        arr_16 [6] &= arr_13 [4];
        arr_17 [4] [i_3] = (min(((9 ? var_9 : (((arr_9 [i_3] [i_3] [i_3] [8]) ? (arr_9 [1] [i_3] [i_3 - 4] [1]) : (arr_1 [i_3]))))), ((((arr_3 [i_3] [i_3 - 1]) ? (arr_3 [i_3] [i_3 - 2]) : (arr_3 [i_3] [i_3 - 2]))))));
        var_16 = (((((((arr_8 [i_3] [i_3 + 1] [i_3] [i_3]) + 1692597776)) / ((((arr_13 [i_3]) + -18922))))) + ((((((2246521745 ? 4294967295 : 4294967295))) ? ((-(arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3]))) : ((((arr_6 [23] [1]) ? var_12 : var_4))))))));
    }
    var_17 = var_1;
    #pragma endscop
}
