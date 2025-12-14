/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0] = ((((var_6 ? (arr_2 [i_0]) : (((arr_2 [i_1]) % (arr_4 [i_0] [i_1] [i_0])))))) ? (min((arr_4 [i_0] [i_0] [i_0 - 2]), 4149248903551331334)) : ((((min((arr_3 [i_0]), (arr_2 [i_0])))) ? var_5 : (((arr_4 [i_0] [i_0 + 1] [i_0]) ? var_2 : var_2)))));
                arr_6 [i_1] = 5626070935491173640;
                arr_7 [i_0] [i_1] = var_5;
                var_10 = (max(var_10, ((((arr_2 [i_0 - 1]) ? (((arr_1 [i_0 - 1] [i_0 - 3]) ? 8191 : (arr_3 [i_0 - 1]))) : (((~(arr_2 [i_0])))))))));
            }
        }
    }
    var_11 = var_7;
    var_12 = (((var_6 * (var_9 % var_8))));
    #pragma endscop
}
