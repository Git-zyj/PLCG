/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 - (min((max(var_3, var_8)), ((48 ? 5 : var_10))))));
    var_14 = var_0;
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 6;i_2 += 1)
            {
                {
                    var_16 = var_4;
                    var_17 *= (((((((arr_1 [i_1 + 3]) + 2147483647)) >> (var_7 - 136))) << (((arr_6 [i_1 + 2] [i_1 - 1] [i_2 - 1] [i_2 - 1]) - 13))));
                    var_18 = (max(var_18, ((((((50 ? 24 : (arr_5 [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 1])))) && var_6)))));
                    var_19 ^= (((max(((var_11 ? var_12 : 214)), -2147483628)) == (min(((min(var_9, (-32767 - 1)))), ((-63 + (arr_5 [i_0] [i_0] [i_2] [i_1])))))));
                    var_20 = (min(var_20, 28));
                }
            }
        }
    }
    #pragma endscop
}
