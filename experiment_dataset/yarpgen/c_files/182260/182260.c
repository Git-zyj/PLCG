/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((~var_7), (var_3 / var_3));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1 - 2] [i_2] [i_1 + 2] = ((((min((((arr_9 [i_1] [i_1] [i_0]) ? var_9 : (arr_5 [1] [i_3]))), 1))) * 16140901064495857664));
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = ((((((var_9 ? -22728 : var_7)))) ? ((~(((var_2 <= (arr_0 [i_2])))))) : 55));
                        var_17 = (max(((((arr_10 [i_0] [i_1] [i_2] [i_0]) == 0))), ((+(((arr_1 [i_3]) + 22719))))));
                        arr_13 [i_0] [i_0] [1] [i_1] [1] [i_3] = var_12;
                        arr_14 [i_0] [i_1] [i_2] [i_2] = (max((~var_3), -30437517));
                    }
                }
            }
        }
        var_18 = (((((((max(-14, 75))) * (-11020 || 16072)))) || (arr_5 [i_0] [i_0])));
        arr_15 [i_0] = ((~((var_15 | (arr_6 [i_0] [i_0] [i_0 + 1] [13])))));
        arr_16 [i_0 + 1] = (arr_7 [i_0] [i_0] [i_0 - 2]);
        var_19 = ((((arr_10 [i_0 - 1] [i_0] [i_0 - 2] [i_0]) < var_14)));
    }
    var_20 = 61534;
    #pragma endscop
}
