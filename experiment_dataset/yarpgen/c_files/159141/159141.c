/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] = var_4;
                arr_6 [i_0] [i_0] = ((~((1546485083 ? -1 : 3626871270693201517))));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
