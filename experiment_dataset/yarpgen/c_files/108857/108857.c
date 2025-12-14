/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (834462833 / 8184)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((max(8184, -834462834))) ? ((var_17 ^ ((32640 << (var_14 - 1835743458))))) : -834462815));
                var_21 += (min((-1613007100 | 8184), 10758942249185126860));
            }
        }
    }
    var_22 = ((var_19 / ((((var_3 << (var_5 - 3228543438))) ^ ((max(0, -32640)))))));
    #pragma endscop
}
