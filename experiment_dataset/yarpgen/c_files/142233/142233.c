/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((-(min(1444347173, var_10)))), -var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [20] |= var_8;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = max((arr_8 [i_1 - 4]), (min(var_15, var_8)));
        arr_10 [10] |= min((min((max(var_12, 1144291050)), var_15)), (!var_8));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_3 - 2] [i_2] [13] [i_1] = (((min((arr_8 [i_1 - 1]), -11867))) ? ((min(var_8, 794342702))) : var_16);
                        var_20 = (max(((max(1885, 247))), (((var_1 | (arr_13 [i_1] [i_1 - 4] [5] [i_1 + 1]))))));
                        var_21 = (min(var_21, 12196));
                    }
                }
            }
        }
        var_22 -= var_7;
        arr_20 [i_1] = (max(var_13, (((var_2 ? var_3 : 214)))));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_23 *= (((var_4 < -24110) / var_14));
        arr_24 [i_5] = min(var_5, ((min(var_4, (arr_22 [i_5] [i_5 + 3])))));
    }
    var_24 = (15 ? var_5 : (((((var_9 ? 31 : -11850))))));
    var_25 -= (3150676256 <= 120);
    #pragma endscop
}
