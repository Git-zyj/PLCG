/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 |= (max(127, (arr_3 [i_0])));
                arr_5 [15] = -1947652617;
            }
        }
    }
    #pragma endscop
}
