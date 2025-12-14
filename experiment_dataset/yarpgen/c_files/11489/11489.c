/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_0] = (arr_4 [i_0] [i_2] [i_3]);
                            var_17 = ((~((((arr_8 [i_3 + 3] [i_1] [i_2] [i_3 + 2]) || var_0)))));
                            var_18 = (~1);
                        }
                    }
                }
                arr_10 [i_0] [i_1] = (((((arr_7 [i_1] [i_1] [i_0] [i_0]) && 7267978983220116642)) ? (max(7267978983220116642, (arr_1 [i_0]))) : var_14));
            }
        }
    }
    var_19 = 11178765090489434973;
    var_20 = var_0;
    #pragma endscop
}
