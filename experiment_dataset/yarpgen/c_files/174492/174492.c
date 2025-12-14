/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= 665602322691580430;
    var_16 = ((((((((var_10 ? var_4 : var_4))) & var_3))) || (var_12 & 1260782553)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [15] [16] [i_0] = (var_6 ? (((var_2 ? var_5 : (arr_4 [i_1 + 1])))) : (arr_2 [i_0] [i_0] [i_0]));
                arr_6 [i_0] = 29;
                var_17 = var_0;
                var_18 = ((((var_3 | -92) ? (~var_5) : (arr_3 [i_0] [i_1 - 1] [i_1 - 1]))));
            }
        }
    }
    #pragma endscop
}
