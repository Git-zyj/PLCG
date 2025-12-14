/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2146608311;
    var_15 = (max(var_15, 4135));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max((((2148358960 ? var_7 : 755503063))), -var_4));
                var_17 = (max(var_17, ((-((var_2 * ((2148358985 ? 57796 : 63))))))));
            }
        }
    }
    #pragma endscop
}
