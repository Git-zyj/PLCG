/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 += (((arr_2 [i_0] [i_1]) ? (arr_0 [2]) : (max((((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1]))), (arr_0 [12])))));
                arr_4 [i_0] = ((((max(2938, ((17 ? 2935 : 1))))) | ((2938 | (arr_3 [i_1] [i_0])))));
                var_12 = (((((-(arr_2 [i_0] [5])))) ? ((((-32750 != (arr_1 [i_1 + 2] [i_1 + 1]))))) : (((arr_3 [i_1 + 2] [4]) ? (arr_3 [i_1 + 1] [i_1]) : (arr_3 [i_1 + 2] [i_1])))));
                arr_5 [i_0] [i_0] [6] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    var_13 = var_9;
    var_14 = ((((((max(128, var_10))) - (max(var_3, var_6))))) ? var_7 : var_2);
    var_15 = (max((var_5 | var_10), ((max(var_2, var_4)))));
    #pragma endscop
}
