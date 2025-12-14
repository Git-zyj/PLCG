/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_13 % var_6);
    var_16 = (~-var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (((((var_6 && var_3) & ((-(arr_3 [i_0] [i_1]))))) % ((~(((arr_6 [i_1] [i_1] [i_0]) << (1049948111 - 1049948106)))))));
                var_18 = (arr_5 [i_0]);
                var_19 = (min(var_19, (((-(((((arr_2 [i_0]) & (arr_4 [1] [4]))))))))));
                var_20 = ((~((((~(arr_2 [i_0]))) ^ ((~(arr_5 [i_0])))))));
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
