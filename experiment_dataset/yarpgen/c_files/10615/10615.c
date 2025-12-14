/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 ^= ((~(((max(var_9, (arr_2 [i_0]))) ^ var_4))));
                arr_5 [i_0] [i_0] [i_1] |= (min(3661800853, (max(((max(0, var_4))), (max(var_3, 582946509))))));
            }
        }
    }
    var_11 = max(var_8, (((!219) % var_3)));
    #pragma endscop
}
