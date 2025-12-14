/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 13451;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 -= (((((238009406 ? (((arr_0 [i_0] [i_1]) ? 152 : var_1)) : ((var_9 ? 4762916241398711881 : var_8))))) ? var_4 : -3565581936141349680));
                arr_7 [i_0] [i_0] = 0;
                var_15 &= (((arr_2 [i_0]) ? (min(var_12, (arr_2 [i_0]))) : (arr_2 [i_0])));
                var_16 = ((~((-(arr_2 [i_1])))));
                var_17 -= var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [i_2] = ((var_10 % (((max(((min(48, var_3))), (arr_10 [i_2])))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = var_5;
                                arr_22 [i_2] [7] = min(((((arr_1 [i_3]) ? 0 : var_12))), (min((arr_1 [i_2]), (arr_1 [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
