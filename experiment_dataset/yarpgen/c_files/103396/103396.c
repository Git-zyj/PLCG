/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -88;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = 65272632;
                var_13 = ((-((4229694664 ? var_4 : (arr_1 [i_0] [i_1 - 1])))));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] = ((max(((max((arr_6 [i_0] [i_0] [i_0] [i_0]), 3634340520))), (min(var_1, var_9)))) * (((-(arr_1 [i_1] [i_2 + 1])))));
                    var_14 &= 4229694676;
                    var_15 ^= (min((arr_3 [i_2 + 1] [i_2 + 1] [i_1]), (((arr_1 [i_2 - 1] [i_0]) * (((min(var_0, var_1))))))));
                }
                var_16 ^= (((~var_2) ? -var_7 : 65272654));
            }
        }
    }
    var_17 *= ((((min(-137438953472, ((var_1 ? 137438953468 : var_5))))) ? ((max(var_4, -137438953472))) : (((var_9 & var_4) ? (var_0 / 178) : ((168 ? 0 : var_2))))));
    var_18 = (((((((-137438953468 ? var_7 : 21211))) + 2147483647)) >> (min(var_9, (((188 ? var_3 : var_8)))))));
    var_19 = var_5;
    #pragma endscop
}
