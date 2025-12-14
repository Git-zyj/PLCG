/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-0 == 6517477699407933162) ? (min(var_11, (65535 / var_8))) : var_5));
    var_14 = ((254 ? ((((-8496304175522941813 - var_4) / (((max(1, var_2))))))) : (((((var_12 ? 131 : -6658))) ? (((max(0, 1)))) : ((var_5 ? var_7 : -8496304175522941833))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 *= ((var_4 ? (((arr_3 [i_0] [8]) ? (arr_5 [i_0 - 1]) : (arr_5 [2]))) : var_10));
                var_16 ^= (arr_6 [i_0 - 1] [i_1]);
                var_17 = (min(var_17, (((((((arr_3 [i_0 - 1] [1]) / (arr_3 [i_0 - 1] [14])))) ? 0 : ((((arr_3 [i_0 - 1] [i_0 - 1]) == (arr_3 [i_0 - 1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
