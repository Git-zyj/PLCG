/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = ((((~(arr_5 [i_0 - 1] [i_0] [i_0 + 2]))) ^ ((~(16383 ^ 1376694911)))));
                var_14 = ((((((((arr_2 [i_0]) | var_3)) ^ (arr_0 [i_0 + 3])))) ? (((129 | (~65519)))) : (max(24722, (~3402934023)))));
                var_15 = (((((((arr_5 [5] [i_0] [i_0]) ? 40814 : (arr_1 [i_0]))))) == (((arr_5 [i_0 - 2] [12] [1]) ? var_7 : (((arr_5 [i_1] [i_1] [i_1]) - var_5))))));
                var_16 = var_8;
                arr_7 [i_0] [i_0] [i_0] = 27618;
            }
        }
    }
    var_17 = ((~(((!var_8) ? var_7 : (var_0 - 65535)))));
    #pragma endscop
}
