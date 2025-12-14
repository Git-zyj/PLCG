/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_3, (2147483647 * 0)))) ? 13777097018565647632 : (max(0, (0 && 1)))));
    var_15 = (((var_6 <= 4294967291) ? (((~((min(var_0, var_3)))))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 ^= (max(var_9, (max(var_8, (arr_3 [21] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 1] [i_0] [i_3 - 1] = ((-((-11 ? 159 : (!1)))));
                            var_17 = (1 && 1);
                            arr_13 [i_0] [i_0] [i_0] [i_3 - 1] = (+((((arr_4 [i_2] [i_0]) ? 2903879214946745812 : var_10))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 += (var_1 != var_6);
    #pragma endscop
}
