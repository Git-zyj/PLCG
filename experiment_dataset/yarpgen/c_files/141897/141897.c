/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 *= (((((((arr_9 [i_0] [i_1] [i_2 - 1] [10] [i_3 - 4] [i_1]) << (8192 - 8188)))) ? ((((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (min(var_8, (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                            var_20 = (max(var_20, var_15));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((0 ? 4294967295 : (3367791271 >= 60))));
                            var_21 = (min(var_21, ((((var_5 || -848023284) ? (((min((arr_3 [i_0]), (arr_3 [i_3 - 3]))))) : (4269679976 | 4294967287))))));
                        }
                    }
                }
                var_22 = (min((~4294967295), (arr_1 [i_0] [i_0])));
                var_23 |= (arr_8 [i_0] [i_0] [i_1] [i_0]);
                var_24 = var_16;
            }
        }
    }
    var_25 = (var_0 - var_4);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_26 *= (((((((((arr_14 [0]) >> (var_13 - 14977)))) ^ var_6))) ? (((((((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (arr_2 [i_4] [i_4] [i_4]) : 268435455)) >= (((848023284 / (arr_12 [i_5])))))))) : (((arr_6 [i_4] [i_5] [23] [i_4]) / 4294967276))));
                arr_19 [i_4] = 4294967273;
                var_27 = (max(var_27, (arr_0 [i_4] [i_4])));
            }
        }
    }
    #pragma endscop
}
