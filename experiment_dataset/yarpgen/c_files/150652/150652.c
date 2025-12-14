/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [7] = max(((var_4 ? (arr_4 [i_1 + 1] [0]) : var_1)), ((((((arr_7 [i_1] [i_1] [i_1] [i_2]) ? var_5 : var_1))) ? (((arr_8 [i_0] [i_0] [i_0]) ? 33554431 : (arr_7 [i_1] [i_1] [i_1 + 2] [i_2]))) : -1)));
                    var_14 *= (((max(var_12, (arr_8 [i_0] [i_1] [i_2])))));
                    arr_10 [i_2] [i_1 - 1] [12] |= (max(((((((arr_6 [5] [5] [5] [i_2]) ? var_0 : -1))) + (arr_1 [i_1]))), (arr_3 [i_1 - 1])));
                    var_15 |= (max((min(((((arr_2 [0]) ? -17129 : var_8))), (((arr_5 [i_2] [i_1] [i_1]) | var_7)))), ((((var_4 ^ var_6) ? var_8 : (arr_7 [i_2] [i_1] [i_1 + 2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
