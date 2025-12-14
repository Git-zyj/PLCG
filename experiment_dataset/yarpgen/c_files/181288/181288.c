/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(((min(var_10, 642744505))), 7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_12 ^= ((~((max((!var_5), (arr_1 [i_1 - 1] [i_1 - 1]))))));
                arr_5 [i_0] &= (min((~var_8), var_5));
            }
        }
    }
    #pragma endscop
}
