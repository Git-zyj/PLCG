/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (((((((min(var_9, -20384))) ? ((min(-4096, var_8))) : ((var_1 ? var_9 : var_7))))) ? -4107 : ((~((var_4 ? var_1 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 ^= (((min(-4123, -1262))) ? ((1267946264 ? ((min(-1239, 48))) : 841945421)) : var_4);
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = (!-7);
                            }
                        }
                    }
                }
                var_14 -= (arr_7 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_21 [i_5] [17] [i_6] [i_6] [i_5] = (((min((arr_1 [i_6]), (-64 && -1))) + ((min((((arr_5 [i_0] [i_0] [i_0]) | 1155872690)), var_4)))));
                                var_15 -= (max(4294967279, 7));
                                arr_22 [i_6] [i_5] [21] [i_6] [i_6] [i_6] = (min((arr_19 [i_0] [i_1] [i_5] [14] [i_7]), (arr_19 [i_0] [i_6] [i_0] [i_6] [i_7])));
                                var_16 = ((min(((max(var_2, var_3))), (min(var_2, (arr_3 [18]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
