/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((-((max(255, 23)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((252 - (((arr_1 [i_1] [i_0]) | (arr_1 [i_0] [i_1])))));
                arr_5 [i_0] = (max(0, 2113929216));
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
