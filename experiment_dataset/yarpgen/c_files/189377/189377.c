/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_5;
    var_16 = (var_5 >= var_11);
    var_17 = (((var_6 | var_11) != var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] [7] = max((((arr_1 [i_1 - 1] [i_2]) + (arr_1 [i_1 - 1] [i_1]))), (((-5543286517590224551 + 9223372036854775807) << (((((arr_1 [i_1 - 1] [i_1]) + 4006822724719074956)) - 50)))));
                    var_18 = arr_1 [i_0 - 1] [i_1 + 2];
                    var_19 = (min(var_19, (max((((arr_7 [i_0] [i_1] [i_1 + 1] [i_1]) / (arr_1 [i_0] [i_1 + 2]))), (arr_7 [i_0 + 1] [i_0 + 1] [i_1 - 1] [13])))));
                }
            }
        }
    }
    #pragma endscop
}
