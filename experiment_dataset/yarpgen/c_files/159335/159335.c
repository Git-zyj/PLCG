/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((((var_6 ? var_11 : var_3))) ? (min(var_4, var_1)) : var_1)), ((max(((var_5 ? var_3 : var_5)), ((var_5 ? var_0 : var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 |= (max(((var_4 >> ((((var_6 ? var_7 : var_1)) - 94)))), ((max(var_7, (((var_1 ? var_10 : var_9))))))));
                                arr_14 [8] [i_4 + 3] = var_10;
                                var_14 = (max(var_14, ((min((((var_4 ? var_2 : var_9))), ((112 >> (var_7 - 102))))))));
                            }
                        }
                    }
                    var_15 = ((!((max(((var_8 ? var_9 : var_3)), ((max(var_3, var_6))))))));
                    var_16 = var_10;
                }
            }
        }
    }
    var_17 = ((max(var_3, var_2)));
    #pragma endscop
}
