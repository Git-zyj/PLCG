/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [22] [i_1] = (((!10) >> (var_9 - 1856705796)));
                var_21 = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
