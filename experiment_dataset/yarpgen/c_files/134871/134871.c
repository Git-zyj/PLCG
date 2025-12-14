/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 = var_2;
                            arr_13 [i_1] = var_1;
                        }
                    }
                }
                var_15 &= (var_7 >= (var_7 && var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] = (arr_15 [i_4] [i_5]);
                var_16 *= ((!((var_9 > (arr_2 [i_5])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                var_17 = (min(var_17, (((-((max((arr_23 [i_6 - 3]), var_6))))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_31 [i_7] [1] [1] [i_7] &= (((~(var_7 | var_5))));
                            var_18 -= ((var_4 & (~54375)));
                            var_19 &= (((max(11172, 54375))));
                            arr_32 [i_6] [4] [i_8] [i_6] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = var_5;
    #pragma endscop
}
