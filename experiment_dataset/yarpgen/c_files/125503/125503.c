/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(var_0, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((~(((!(1 >> 1))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [23] [1] [1] [12] [i_2] [1] = ((-(arr_3 [16] [i_3 - 2] [i_3 + 1])));
                                var_17 += (min((((arr_11 [21] [22] [1] [1] [1] [i_3 - 1] [i_3 + 1]) ? ((max(1, 1))) : (~1))), ((((~var_13) >= (arr_5 [0] [i_1] [i_1]))))));
                                var_18 ^= (((arr_5 [1] [18] [i_1]) & (((~((min(1, var_11))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 &= arr_9 [1] [1] [1] [15];
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_4 [1] [12])));
                            var_22 ^= ((((29 * ((0 ? 1 : 1)))) << (((((min((-1235219077277331834 || -7), (arr_1 [8]))) + 5574196692366962372)) - 24))));
                        }
                    }
                }
                arr_23 [i_5] = -var_12;
            }
        }
    }
    #pragma endscop
}
