/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = max(((((arr_12 [i_2] [i_2] [14] [i_2]) << (((arr_1 [0]) - 48389))))), ((((1084626601 ? (arr_2 [i_0]) : var_5)) * ((min((arr_8 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0]), -13258578))))));
                                var_16 = (min(var_16, 8388607));
                                arr_16 [i_0] [i_1] [1] [i_3 + 2] [i_2] [3] = var_5;
                                var_17 = ((((min((arr_1 [i_0]), var_1))) & ((2772637646639576620 ? (max(var_6, 2634848849)) : (max(729140570, -1473552807))))));
                                arr_17 [i_4] [i_2] [i_2] [i_3] [i_2] = (((((((min(-1473552807, 39770))) ? (min(9223372036854775807, 1)) : (arr_8 [i_0] [i_4 - 1] [i_2] [i_0] [i_0] [i_1 - 3])))) || (((arr_11 [i_2]) || (((~(arr_3 [i_0] [i_3]))))))));
                            }
                        }
                    }
                }
                arr_18 [i_1] = (min(((max((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 4] [i_1 - 1]), (arr_14 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 4])))), ((552615431 ? (arr_3 [i_1] [i_1 - 3]) : 55272))));
                arr_19 [i_0] [i_0] [10] = (((((arr_12 [i_0] [i_1] [6] [i_1]) & 5961)) & ((~(arr_11 [i_1])))));
            }
        }
    }
    #pragma endscop
}
