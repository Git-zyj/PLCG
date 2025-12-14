/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = ((232 ? var_9 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = ((-18446744073709551615 >> ((((~((var_9 ? var_9 : -1480325576)))) + 1395353248))));
                            var_21 = ((+(max((214 & 0), -var_12))));
                            arr_12 [i_2] [i_1 - 1] = 4294967295;
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = ((-var_17 ? (var_0 / var_2) : (((max(18446744073709551615, var_16)) / -119))));
            }
        }
    }
    #pragma endscop
}
