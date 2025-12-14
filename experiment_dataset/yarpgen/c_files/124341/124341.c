/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = ((246 ? ((65 + (arr_4 [i_0] [i_0] [i_0]))) : (arr_5 [i_0])));
                arr_6 [i_0] [i_0] = ((var_10 - (~74)));
                arr_7 [10] = ((((((var_4 & 13) ? (arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1]) : (arr_3 [i_1 - 1])))) ? (((!(arr_2 [i_0])))) : var_0));
            }
        }
    }
    var_15 |= var_3;
    #pragma endscop
}
