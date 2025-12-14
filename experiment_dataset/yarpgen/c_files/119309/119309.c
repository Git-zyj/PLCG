/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((2341226308 ^ (max(var_5, var_8))))) ? var_8 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_2 [i_1 + 1]);
                var_15 = ((((((max(var_10, var_4))) ? (min(6219066364292475601, (arr_0 [13]))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))) & var_10));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
