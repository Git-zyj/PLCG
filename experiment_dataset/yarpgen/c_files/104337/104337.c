/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 ^= ((var_5 ? ((((((arr_1 [i_1]) ? var_9 : var_9))) ? (!var_5) : (arr_2 [i_1] [i_1] [i_0]))) : var_13));
                var_17 += (max((arr_1 [i_1]), ((min((max(var_15, var_5)), -var_2)))));
            }
        }
    }
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_17 [i_5] [i_2] = ((((((var_0 == var_5) >= var_10))) <= ((-(var_12 % var_6)))));
                                var_19 = (max(var_19, (--13046)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_22 [i_2] [i_7] = var_6;
                            arr_23 [i_2] [i_3] [i_7] [i_3] = (+(((arr_5 [i_2 + 1] [i_7]) ? 4294967295 : ((var_15 ? 1586802587 : 4294967295)))));
                            var_20 = (min(var_20, (((-(46525 / -301952281))))));
                            var_21 = (max(var_21, ((((((var_15 >> (((arr_10 [i_3] [i_3]) - 2728450938))))) || -693818924)))));
                        }
                    }
                }
                arr_24 [i_2] [i_3] [i_2] = ((((57859 ? 1 : 3097520760)) < -var_6));
                var_22 -= ((-(min(var_11, var_12))));
            }
        }
    }
    #pragma endscop
}
