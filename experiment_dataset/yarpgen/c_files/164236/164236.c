/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((min(((min(123, 124))), (arr_0 [i_1 - 2] [i_1]))));
                var_17 = 18446744073709551597;
            }
        }
    }
    var_18 = (max(var_18, (((26898 ? 7783466463023618711 : -1294683669)))));
    #pragma endscop
}
