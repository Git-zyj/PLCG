/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] [12] = ((~((7508081683337967970 / (arr_0 [i_0 + 3])))));
                arr_8 [13] [i_0] = -73;
                arr_9 [i_0] [i_1] = ((((max((arr_4 [12]), 216))) >> (((arr_5 [i_0] [i_0]) - 4246426790))));
                arr_10 [i_0] [7] [i_0] = ((!(((((arr_5 [10] [i_1]) * 4))))));
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
