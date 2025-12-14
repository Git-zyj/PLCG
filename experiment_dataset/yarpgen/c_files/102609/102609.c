/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 ^= ((((((arr_3 [i_0] [8]) | (arr_0 [i_0] [i_0])))) ? (3566117995 && 65535) : ((min((arr_1 [i_0]), var_1)))));
                var_19 = (min(15872, ((max((arr_0 [i_0] [i_1]), var_3)))));
                var_20 = var_0;
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
