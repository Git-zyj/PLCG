/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (((((((!(arr_3 [i_0] [i_0] [0]))) ? ((((!(arr_1 [i_0 - 1] [14]))))) : (((arr_2 [i_0] [i_0] [i_0]) ^ (arr_0 [5])))))) ? (arr_1 [i_0] [i_0 - 1]) : (((((~(arr_0 [i_0 - 1])))) ? (arr_3 [i_0] [i_0] [i_1 - 1]) : (((arr_1 [i_0] [i_1]) ? (arr_2 [i_0] [16] [i_1]) : (arr_1 [i_1] [i_0])))))));
                var_16 += (arr_1 [i_0 - 1] [i_1 - 1]);
                var_17 = (min((((((min((arr_1 [i_0] [i_1]), (arr_0 [i_0])))) >= (((arr_1 [i_0] [i_0]) ? (arr_0 [5]) : (arr_1 [i_0] [i_1])))))), ((((((arr_1 [1] [i_1]) ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (arr_0 [i_1])))) ? (min((arr_2 [3] [9] [i_0 - 1]), (arr_1 [i_0] [16]))) : ((((arr_1 [i_0 - 1] [i_1 + 2]) ? (arr_3 [i_0 - 1] [1] [i_1]) : (arr_1 [i_0] [i_1 + 1]))))))));
            }
        }
    }
    var_18 += (((((var_10 ? ((var_13 ? var_7 : var_7)) : -var_12))) % (((min(var_13, var_0)) + (var_4 <= var_5)))));
    #pragma endscop
}
