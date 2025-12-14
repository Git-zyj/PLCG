/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 ? 10662901386993627873 : 2073213737);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [18] = -8272497671823883852;
                    var_16 = (3852326853 ^ var_9);
                }
            }
        }
    }
    var_17 = (~var_11);
    #pragma endscop
}
