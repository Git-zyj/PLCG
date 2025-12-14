/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_0 [i_0]) ? ((~(arr_2 [i_0]))) : (((-(arr_1 [21]))))))) ? (max((arr_3 [i_1 - 4] [i_1 + 2]), (arr_3 [i_1 - 3] [i_1 - 2]))) : (((29 & (((arr_4 [i_0] [i_0] [i_0]) ? (arr_2 [20]) : (arr_0 [i_0]))))))));
                var_11 |= (min(var_8, ((max(var_6, -32741)))));
            }
        }
    }
    var_12 = ((var_10 >= (((!((min(var_9, var_2))))))));
    #pragma endscop
}
