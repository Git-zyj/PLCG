/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_1));
    var_12 = (min(var_12, var_5));
    var_13 -= ((((max(4294967286, var_7))) ? var_10 : ((var_5 ? var_6 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    arr_7 [9] [i_1] = ((!(((10214214616005673039 ? var_8 : var_3)))));
                    arr_8 [i_1] [i_1] [i_2] = (max(24154, (arr_6 [i_2 + 1] [i_2 + 3] [i_1] [i_2 - 1])));
                    arr_9 [i_1] = var_10;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_14 = (min(var_14, var_2));
                            var_15 = (arr_16 [i_4]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_6] = (arr_1 [i_1] [i_5]);
                            var_16 = var_7;
                            var_17 += (arr_3 [i_5 + 2] [i_5 - 2]);
                            arr_23 [i_1] [i_5] [i_1] = var_9;
                            var_18 = (max(((max(1, var_2))), ((var_10 ? var_7 : (arr_1 [i_5 + 2] [i_0])))));
                        }
                    }
                }
                var_19 = ((((((max(1, var_10))) >> (var_8 - 17893287127831637632))) >> ((((54211 ? var_8 : 14789274024062036173)) - 17893287127831637655))));
            }
        }
    }
    #pragma endscop
}
