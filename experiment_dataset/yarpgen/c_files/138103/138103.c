/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_3 + var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 += (max((((!(29392 + 22736)))), (max(var_6, (29385 * 2555476711)))));
                                var_12 = arr_0 [i_0];
                                var_13 &= ((-(min(var_7, 24664))));
                                arr_13 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3] = (((((((arr_12 [i_0] [i_1] [i_1] [6]) << (24651 - 24644))) >> 1)) << (arr_4 [i_1])));
                            }
                        }
                    }
                }
                var_14 = 0;
            }
        }
    }
    var_15 = (((((~9301077511270494992) < -8233)) && var_1));
    var_16 = (min(var_16, ((((max(((max(var_8, var_5))), 2555476711)) ^ var_8)))));
    var_17 *= (max((((((18863 ? -65 : 8251))) ? var_3 : (31 % var_1))), (min(((var_1 ? var_7 : var_3)), ((1739490584 ? var_2 : var_2))))));
    #pragma endscop
}
