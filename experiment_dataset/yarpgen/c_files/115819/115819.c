/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((var_16 ? (min(28, 4294967249)) : var_8)), ((min(var_9, (var_4 && var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((arr_4 [i_0] [i_1]) ^ var_17));
                arr_6 [i_1] = (((((var_11 | (var_16 & var_3)))) ? ((((28 ^ (arr_3 [9]))) ^ ((((arr_0 [i_0]) ? var_8 : (arr_0 [3])))))) : var_11));
                var_20 = var_17;
            }
        }
    }
    var_21 = ((((((var_0 >> (var_1 + 234333300)))) ? var_14 : var_0)));
    #pragma endscop
}
