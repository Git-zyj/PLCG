/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (((~2681944724295453153) < 3731270835));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (~1204154839)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2 + 3] [18] = (min((((!(~var_7)))), (min((arr_13 [i_0]), (arr_13 [i_0])))));
                            arr_15 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = var_6;
                            arr_16 [i_0] [23] [i_1] [i_0] = (1204154839 ? (max(1990206533, -1204154852)) : var_1);
                            arr_17 [i_0] = max((((~(arr_6 [i_0] [i_0])))), var_1);
                            arr_18 [i_0] = var_2;
                        }
                    }
                }
                arr_19 [i_0] [0] = (arr_8 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
