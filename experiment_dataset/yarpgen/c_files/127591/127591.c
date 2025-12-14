/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_2 [i_1]);
                var_14 = (max(((min((arr_0 [i_0 + 2]), ((1334930638 % (arr_3 [i_0] [11] [i_1])))))), (min(16435240127237721518, 2960036657))));
            }
        }
    }
    var_15 = 0;
    #pragma endscop
}
