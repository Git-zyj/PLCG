/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_5));
                var_18 = (((-(arr_1 [i_0]))));
                arr_6 [i_0] [i_1] = (((!var_5) ? ((-79 ? var_14 : ((1 ? 15 : 6950448745242491564)))) : (((((((18446744073709551607 << (12420005183276359849 - 12420005183276359806)))) && (((arr_2 [16]) && var_0))))))));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
