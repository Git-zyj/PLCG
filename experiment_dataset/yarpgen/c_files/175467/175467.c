/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_13 += var_0;
                var_14 = (min(var_14, (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_15 = ((108 ? 148 : -7377286867770982140));
    var_16 = ((-1587347625428533935 ? var_4 : ((-(var_10 - var_9)))));
    #pragma endscop
}
