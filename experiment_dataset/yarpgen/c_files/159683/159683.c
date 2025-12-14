/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((max((((((18266 ? var_0 : (arr_0 [i_0]))) >= 85))), ((-(arr_2 [i_0]))))))));
                var_17 = (max(var_17, var_1));
                var_18 = ((-(arr_3 [i_0] [i_0] [1])));
                var_19 = ((-((47269 ? (max(18269, var_9)) : ((((-2147483647 - 1) ^ 47266)))))));
            }
        }
    }
    var_20 &= 112;
    #pragma endscop
}
