/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] &= (arr_0 [i_0] [i_0]);
                arr_6 [i_0] [11] = ((~((max(1, 41)))));
            }
        }
    }
    var_18 = (min(var_18, ((((~(max(3597655235, var_17))))))));
    var_19 = var_14;
    #pragma endscop
}
