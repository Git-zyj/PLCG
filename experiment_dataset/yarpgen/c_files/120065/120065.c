/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] [i_2 - 1] = var_4;
                    arr_9 [13] [i_2] [i_2 - 1] [i_1] = 3330;
                }
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] = (max((((0 >= (arr_3 [i_1 + 1])))), (~1)));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        var_13 = var_12;
                        var_14 = (~-57);
                    }
                }
                arr_17 [i_0] [i_1] = min(-1, 62205);
                arr_18 [i_1] [i_1] = (arr_3 [i_1]);
            }
        }
    }
    var_15 = (max(var_15, (((-5088544010983419043 ^ (~2974113543402577749))))));
    var_16 = (((var_4 ? 3574 : 3330)) & (((((var_2 ? var_6 : var_0))) ? var_3 : var_7)));
    #pragma endscop
}
