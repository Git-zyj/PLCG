/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 &= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_2 [i_0 + 1]) & 87));
                var_13 = (max((min((max(2180974135794615210, 18391)), (min(-5620099581798523572, 87)))), (arr_1 [i_0 - 1])));
            }
        }
    }
    var_14 = (max(var_14, var_4));
    #pragma endscop
}
