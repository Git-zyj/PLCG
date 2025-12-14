/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] &= ((((((arr_0 [i_1 - 1] [8]) ? (arr_2 [4] [4]) : (((arr_4 [i_0 - 3] [i_0 + 1]) ? var_4 : var_11))))) ? var_3 : ((-(arr_2 [1] [1])))));
                arr_6 [16] |= arr_0 [i_0] [2];
                arr_7 [6] |= ((!((((arr_4 [i_0 + 1] [i_1 + 1]) ? (arr_0 [i_0 + 1] [6]) : var_4)))));
                arr_8 [i_0] [6] = ((((((arr_4 [i_0 - 1] [i_1 - 1]) ? (arr_4 [i_0 - 1] [i_1 + 2]) : (arr_4 [i_0 + 1] [i_1 + 1])))) ? (((((242 > 34359738368) != (!103))))) : (((((var_7 ? (arr_0 [i_0] [0]) : (arr_2 [20] [i_1 + 1])))) ? (((arr_0 [i_1 - 1] [1]) ? (arr_4 [i_0] [i_0 - 3]) : var_11)) : (arr_1 [i_0 + 1] [0])))));
                arr_9 [i_0] [i_1 + 1] = ((((((arr_2 [i_0] [i_1 + 1]) ? (var_7 > var_4) : ((27 >> (242 - 240)))))) ? ((((((arr_4 [i_0] [i_0 + 2]) ? (arr_4 [i_0 - 2] [i_1 - 1]) : (arr_2 [i_0] [i_0 + 2])))) ? ((var_9 ? var_8 : var_6)) : (max(var_7, (arr_3 [i_0]))))) : (((!(1 && 13))))));
            }
        }
    }
    var_12 = ((((((((var_10 ? var_0 : var_1))) ? ((var_7 ? var_7 : var_1)) : ((var_3 ? var_5 : var_1))))) ? (!var_0) : (((var_10 ? var_9 : var_3)))));
    var_13 = var_8;
    #pragma endscop
}
