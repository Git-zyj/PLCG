/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((max(1, 16))) ? var_10 : ((var_8 ? var_4 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((-(arr_2 [i_0] [i_0])))) ? (min((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_0]))) : (!0)));
                var_14 = (((var_0 - var_11) - (max((arr_3 [i_0] [i_0] [i_1]), (((-(arr_2 [i_1] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
