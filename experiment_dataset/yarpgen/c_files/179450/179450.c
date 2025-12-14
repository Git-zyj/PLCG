/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [5] [i_0] = arr_4 [i_0] [i_1] [i_1];
                var_20 = (min(var_20, (((~(max((((arr_3 [i_0] [i_1]) * (arr_5 [i_0]))), (arr_6 [14]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 *= (!var_1);
                            var_22 = max(((min(var_15, (arr_8 [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 - 3])))), (max((arr_1 [i_2]), var_5)));
                            arr_14 [i_0] [i_0] [4] [i_2] = var_9;
                        }
                    }
                }
                var_23 = (max(var_23, -4777478362276591270));
                arr_15 [i_1] [i_0] = (((((65535 / (arr_8 [i_0] [i_0] [12] [23])))) ? (arr_8 [21] [i_1] [21] [i_1]) : (((arr_8 [i_0] [11] [i_1] [i_0]) ? var_17 : (arr_8 [4] [i_0] [i_1] [0])))));
            }
        }
    }
    var_24 = 0;
    var_25 = ((((((var_2 ? 1 : 4231922009473598529))) ? var_19 : ((34938 ? 65535 : -96)))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_4] = (((((arr_1 [i_4 + 1]) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 3])))) ? (max(var_0, (arr_1 [i_4 + 3]))) : (((arr_1 [i_4 + 1]) ? (arr_1 [i_4 + 2]) : var_18)));
                var_26 *= (((((5662191888040140179 ? (arr_5 [i_4 + 1]) : (arr_5 [i_4 + 1])))) ? ((~(arr_18 [i_5] [i_4 + 2]))) : ((var_10 ? 40977 : (arr_5 [i_4 + 1])))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_8] = (((arr_19 [i_4 + 3] [i_4]) ? (((((arr_9 [i_5] [i_4] [i_4]) == (arr_9 [i_6] [i_4] [i_8 - 1]))))) : -5372384621811134871));
                                var_27 = (min(var_27, ((((0 ? (max(1, (arr_2 [16] [i_4])) : ((var_4 ? var_5 : var_5)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
