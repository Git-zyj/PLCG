/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (max(((min((10178315026358862181 < var_17), (max(56335265, 16))))), (max(-8817218187837007148, -2))));
                var_19 = (((((((-127 - 1) % -32760)) * var_18)) ^ ((((arr_2 [i_0] [i_1] [i_1]) || (var_0 ^ 0))))));
                arr_7 [18] [i_1] [i_0] = (((((var_11 << (-var_12 + 5011)))) && (((arr_4 [i_0] [i_0] [i_1]) || ((max(58, var_0)))))));
            }
        }
    }
    var_20 = (((((var_9 << (216172782113783808 - 216172782113783797)))) & (min((var_15 >= var_13), (10051585120863384236 * -24169)))));
    #pragma endscop
}
