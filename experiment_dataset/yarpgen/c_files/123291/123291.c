/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_13 ^= ((+(max((min((arr_1 [i_0]), (arr_5 [i_0] [i_0] [24]))), (1266142530 >= var_4)))));
                var_14 = ((!(((-1152921504590069760 ? (~var_5) : (max(3623916389, 4666987892378828656)))))));
            }
        }
    }
    #pragma endscop
}
