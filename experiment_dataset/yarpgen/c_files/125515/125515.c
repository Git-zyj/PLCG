/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_10 = ((~(arr_0 [i_0])));
                var_11 = (max(var_11, 128));
            }
        }
    }
    var_12 = 27;
    var_13 = 106;
    #pragma endscop
}
