/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max(8, ((~(arr_6 [i_2 - 1] [i_1] [i_2] [i_2] [i_4]))))))));
                                arr_13 [i_0] = ((var_13 ? ((((min(127, (arr_4 [i_0] [i_1] [i_2] [i_3])))) ? ((-21577 ? 31468 : var_15)) : (~26916))) : (((~(((arr_3 [i_4 - 1] [i_3]) ? 46801 : 32744)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] = max(-97, (((arr_8 [i_0] [i_0] [i_5] [i_0]) ? (arr_8 [i_6] [i_5] [i_1] [i_0]) : (arr_8 [i_6] [i_6] [i_5] [i_6]))));
                            var_21 = arr_16 [i_6] [i_5] [i_1] [i_0];
                            arr_20 [i_6] [i_0] [i_0] [i_0] = (~0);
                            var_22 = ((~(((arr_5 [i_0] [i_5] [i_6]) ? var_9 : (arr_14 [i_0] [i_0] [i_5] [i_1])))));
                            var_23 -= ((((min(var_7, ((28896 ? (arr_8 [i_6] [i_5] [i_1] [i_0]) : -43))))) ? (((var_14 ? (arr_10 [i_6] [i_6] [i_5] [i_1] [i_6]) : ((~(arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])))))) : (min((((106 ? (arr_5 [i_0] [i_1] [i_5]) : -16))), (min((arr_4 [i_0] [i_0] [i_5] [i_6]), var_8))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
