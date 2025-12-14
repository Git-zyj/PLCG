/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = (((-17373 ? -17373 : -17373)));
    var_19 = min((var_12 - var_5), (max(((min(12728, 63))), (var_10 - var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = -3841;
                    arr_9 [i_1] = ((var_14 == ((-(8335 >= 12181620348583626734)))));
                    var_21 -= ((var_13 ? ((((((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]) / var_12))) ? (((var_6 ? var_6 : var_11))) : var_4)) : (((var_1 ? var_0 : ((var_13 ? var_14 : -42)))))));
                }
            }
        }
    }
    #pragma endscop
}
