/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_2;
    var_14 = (~-27024);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = -var_8;
                var_16 = var_5;
                arr_4 [i_0] = ((181 ? (max(181, (~357468536834885156))) : 16797));
                var_17 = (min(var_17, (((arr_3 [i_0] [i_1] [i_1]) + var_10))));
                var_18 = ((((((61 ? 1 : var_3) != var_6)))));
            }
        }
    }
    #pragma endscop
}
