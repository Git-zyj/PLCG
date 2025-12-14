/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (~var_7);
                arr_7 [i_1] [i_1] [i_0] = var_13;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (((max((min(var_5, var_7)), -var_7)) | (~var_3)));
                                var_15 = (min(((min((~var_5), (72 | 25625)))), var_9));
                                var_16 = (max((((14059518439440353915 ? (-127065460 && 25625) : (25625 == 12857)))), (min(var_0, (((var_5 ? var_11 : var_2)))))));
                                var_17 = max((((((min(var_7, var_6))) ? (var_13 < var_1) : (min(var_10, var_7))))), ((16936826810831434529 ? (max(8737649869633811217, 0)) : -168284112)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (~-8413893213412942165);
    var_19 = (-(min((~var_9), (((var_0 ? var_7 : var_7))))));
    #pragma endscop
}
