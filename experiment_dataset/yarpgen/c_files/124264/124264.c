/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = var_7;
                var_12 = (max(var_12, (((((-((var_10 ? var_3 : (arr_2 [10]))))) != ((43021 & (arr_0 [1]))))))));
                var_13 = (((((-(arr_4 [i_0 + 1] [i_1])))) ? (max((arr_4 [i_0 + 2] [i_0 + 2]), ((((arr_1 [i_0]) ? (arr_3 [i_0] [i_1]) : var_6))))) : (arr_1 [i_0])));
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
