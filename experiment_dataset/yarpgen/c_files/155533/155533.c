/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [1] [i_2] = (((((152 ? 0 : 6902044976189513240))) ? -1644186416 : 0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (0 < 4294967295);
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = var_15;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_21 += (-18538 ? (((var_1 ? var_14 : var_18))) : ((var_3 ? 17285717150700936124 : var_5)));
                arr_21 [8] = (((((0 ? (~0) : var_0))) ? var_17 : ((var_10 ? ((var_6 ? var_3 : 1)) : (~1960006616756519959)))));
                var_22 = (max(var_22, (1915391290877413584 || var_8)));
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
