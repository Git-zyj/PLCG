/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    var_11 = ((var_8 ? ((((!var_0) ? ((127 ? 2 : -18)) : (!var_8)))) : ((var_6 ? (var_7 / var_2) : -25503))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((-127 - 1) ? ((((arr_4 [i_1 + 1] [i_1]) > (arr_4 [i_1 - 2] [i_1])))) : (((arr_0 [i_0 - 1] [i_1 - 2]) ? var_5 : (arr_4 [i_0 - 1] [i_1 + 2])))));
                var_13 = 7;
                var_14 ^= ((((var_9 ? var_1 : ((-478275645010785850 ? (arr_3 [9] [16]) : 478275645010785850)))) == 0));
                var_15 = ((-82 ? 2088960 : 478275645010785850));
                var_16 = (arr_0 [i_0] [i_1 - 1]);
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
