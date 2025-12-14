/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_5 + 9223372036854775807) << (20401 - 20401))))) ? var_6 : -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (max(((20411 <= (arr_4 [i_1]))), (((arr_1 [i_1]) >= ((min(var_16, (arr_2 [i_0] [i_1]))))))));
                var_18 *= ((((((var_8 ? var_3 : (arr_2 [i_0] [i_1]))))) >= ((var_10 ? (var_9 % 9505714232952206365) : var_16))));
                arr_7 [i_0] [i_1] = ((((~((20402 ? 26250 : var_16)))) - ((((max((arr_4 [i_0]), 1))) * ((max((arr_2 [i_1] [i_0]), (arr_1 [i_0]))))))));
                arr_8 [i_1] = ((((min((arr_1 [i_0]), (arr_4 [i_0])))) && 1));
            }
        }
    }
    #pragma endscop
}
