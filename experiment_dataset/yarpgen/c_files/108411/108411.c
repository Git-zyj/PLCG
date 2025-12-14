/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_11);
    var_20 = 12;
    var_21 *= ((((4096 ? ((max(var_14, 4095))) : ((4104 ? var_2 : 4075)))) & (var_8 >= var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (min(((max(((4095 ? -4097 : -4068)), (!-4062)))), var_10));
                var_22 = ((((4046 ? (~-4078) : (arr_0 [i_0]))) << (((((((-2147483647 - 1) - -2147483646)) + 26)) - 14))));
                arr_7 [1] [1] &= (+((max((arr_5 [15]), 35431))));
                var_23 = (min(var_23, (((!((((arr_0 [i_1]) ? (((!(arr_4 [i_0] [i_0] [20])))) : (arr_4 [i_1] [5] [0])))))))));
            }
        }
    }
    #pragma endscop
}
