/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((min((max(1388897341, 248565694)), var_8))) + var_1)))));
    var_11 = (max(var_11, var_5));
    var_12 = ((~((var_6 ? (var_5 && 1029019486) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (arr_2 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((min(var_5, 18446744073709551615)))));
                            arr_11 [i_0] [i_1 - 1] [i_0] [i_3] |= min(255, (max((min(var_9, var_2)), ((39 ? 268435455 : 8866461766385664)))));
                            arr_12 [i_1] [i_3] [3] [i_3] [i_0] = var_2;
                            var_15 = (min(var_15, (((max(((193 ? 81 : (arr_5 [7] [i_2] [i_3]))), var_5))))));
                            var_16 = (max(var_16, (!var_6)));
                        }
                    }
                }
            }
        }
    }
    var_17 = (!587707471985756447);
    #pragma endscop
}
