/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((((arr_4 [3] [i_0] [i_1]) ? 159354331 : var_0))) ? (var_2 ^ var_8) : (arr_4 [i_1] [i_1] [4])))) ? ((((61762 & 1) ^ (arr_0 [i_1 - 1] [i_1])))) : (((arr_3 [5]) ? (((max(37, 3774)))) : (arr_0 [i_0] [0])))));
                var_10 = ((~((((21196 / (arr_3 [3])))))));
                arr_6 [6] [i_1] = (-(((((20101 ? -113 : (arr_1 [i_0])))) / ((1 ? 1600061616 : (arr_4 [i_0] [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = -12730;
                    var_11 = (arr_8 [i_1 - 1] [i_1] [i_1 + 1]);
                    var_12 = var_1;
                }
                arr_10 [i_1] = ((!(arr_2 [i_0])));
            }
        }
    }
    var_13 = (min(var_13, (((56408 ? (((var_9 ? var_0 : var_3))) : (max(var_9, (var_4 && var_1))))))));
    #pragma endscop
}
