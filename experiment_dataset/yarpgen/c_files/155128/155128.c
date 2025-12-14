/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((~((var_1 ? var_5 : (((var_10 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 13)))))));
                    var_12 *= (((arr_5 [0] [2] [0]) ? ((1 ? (max(9622, (arr_0 [i_0] [i_2 - 2]))) : ((~(arr_4 [12] [2] [i_1]))))) : ((((max((arr_3 [i_2] [i_2] [i_2]), (arr_0 [i_2 - 2] [i_1])))) ? (arr_4 [i_2 + 3] [6] [i_2 + 1]) : (~159)))));
                }
            }
        }
    }
    var_13 = ((!((((!var_5) ? var_1 : var_6)))));
    #pragma endscop
}
