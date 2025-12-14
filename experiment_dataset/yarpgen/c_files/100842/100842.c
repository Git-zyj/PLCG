/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(162, 0));
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_1]);
                var_13 = (min((((((-8484089503416916509 ? var_9 : (arr_3 [5])))) + (arr_4 [10]))), ((min((arr_2 [i_1] [i_1]), (arr_2 [13] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
