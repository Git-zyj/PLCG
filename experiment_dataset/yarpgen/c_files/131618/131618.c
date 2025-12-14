/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (1 + var_0);
                arr_5 [i_0] [i_1] = (((((max(1064581154, var_1)))) ? ((((!(arr_2 [i_1 - 1] [i_1 - 1]))))) : ((((max((arr_3 [i_1]), (arr_2 [i_0] [i_1])))) ? (arr_4 [i_1]) : (((arr_0 [i_1]) ? 69 : var_9))))));
                var_13 += (((((max(var_3, (arr_1 [i_1]))) & (((max(51568, (arr_0 [i_0])))))))) ? (max((arr_2 [i_0] [i_0]), (((arr_1 [i_0]) ? (arr_0 [i_1]) : (arr_3 [i_1]))))) : (((~((var_5 ? (arr_2 [15] [i_0]) : (arr_0 [i_0])))))));
            }
        }
    }
    var_14 = var_9;
    var_15 |= ((1 ? (max(268435454, (((var_0 ? 33 : var_10))))) : var_4));
    #pragma endscop
}
