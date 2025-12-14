/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((4294967267 ^ (((-(var_13 == 43768))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_0 [i_0]) || -700665118)))));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) || (((((max((arr_2 [i_0]), var_6))) ? ((var_11 ? (arr_2 [i_0]) : (arr_1 [i_0]))) : ((((arr_0 [10]) ? var_7 : var_11))))))));
        arr_5 [i_0] [i_0] = ((~(arr_3 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_18 = ((((!(arr_8 [i_1] [i_1 - 1]))) ? ((~(~var_10))) : (!-4)));
                            arr_19 [i_4] [i_3] [i_1] = (!23550);
                            var_19 = ((((~(arr_0 [7]))) != (max(61, (((arr_17 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4]) ? var_11 : (arr_9 [i_1] [i_2] [i_3])))))));
                            var_20 = ((((196 * 0) ? 94 : (max(66, -1)))));
                            var_21 *= (max(var_2, (max(-1, (198 / 49152)))));
                        }
                    }
                }
                var_22 = var_8;
            }
        }
    }
    var_23 *= (((((-((max(var_10, var_0)))))) ? var_9 : ((220 ? 129619228 : -5902))));
    var_24 = var_3;
    #pragma endscop
}
