/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((((var_6 ? -16384 : 1))), (-7276516826943925706 | 0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((arr_2 [i_0 + 1] [i_0 + 1] [i_1 - 1]) ? ((-27767 ? 59734 : 3291323363115412386)) : (((0 ? 0 : (arr_2 [9] [9] [9])))));
                var_13 &= ((!(arr_1 [0])));
            }
        }
    }
    var_14 = ((65535 ? var_9 : (((!(var_5 | var_4))))));
    #pragma endscop
}
