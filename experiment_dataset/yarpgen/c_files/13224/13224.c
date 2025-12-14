/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = min(((var_10 ? var_4 : ((var_0 ? var_10 : (arr_0 [i_0] [1]))))), var_5);
                var_14 = (max(var_14, (min((min(var_1, ((var_2 ? (arr_4 [i_1]) : (arr_4 [i_0]))))), var_2))));
                var_15 = (((((!(arr_1 [i_0]))))) ? (max(((var_4 ? (arr_6 [i_0] [i_0]) : var_7)), ((var_0 ? var_3 : (arr_4 [i_1]))))) : (((((((arr_5 [i_1]) || (arr_4 [i_0]))) && (arr_2 [i_0]))))));
                arr_7 [i_0] [i_0 - 1] [i_0] = min((max((!var_10), var_4)), ((var_0 ? (min(var_12, (arr_4 [i_0]))) : (var_0 || var_10))));
                var_16 ^= (((arr_1 [5]) ? (max(var_12, var_8)) : var_8));
            }
        }
    }
    var_17 = min(var_12, (min((max(var_11, var_8)), ((var_12 ? var_5 : var_10)))));
    var_18 = (var_7 ? (max((min(var_11, var_5)), (!var_8))) : ((((min(var_2, var_11))) ? (min(var_7, var_2)) : ((var_12 ? var_2 : var_12)))));
    #pragma endscop
}
