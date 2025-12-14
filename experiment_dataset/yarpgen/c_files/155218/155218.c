/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = 2073305340;
                arr_4 [i_0] [i_0] [i_1] = (min(2278028706070472488, ((min((arr_3 [i_0]), (arr_0 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
