/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((min(3169603931, var_2))) % (max(0, var_7)))) > (((var_5 ? (-29161 / 3169603933) : (var_2 & var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((-((((0 ? 1 : 1125363350)) - -1125363364)))))));
                    arr_6 [i_0] [i_1] [i_0] = 969850537;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 = (-969850537 || 0);
                        var_14 = (max(var_14, (((-1341608335 != (arr_5 [i_3] [i_1] [i_2] [4]))))));
                        var_15 = (!-7412845235705935341);
                        var_16 = ((var_3 ? -7903016119253829537 : ((var_9 ? (arr_1 [i_2]) : -4159))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
