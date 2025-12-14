/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_11 > var_14), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((194 && ((((arr_0 [i_0]) - ((min(28748, var_16))))))));
                var_22 = ((-(((255 < 46) << (255 - 224)))));
                var_23 ^= ((var_5 && ((max((0 >> 1), ((min(var_10, (arr_1 [i_0])))))))));
            }
        }
    }
    var_24 = ((var_4 ? (min((var_11 > var_15), ((1112 ? var_17 : var_15)))) : ((max(var_16, var_18)))));
    var_25 = (var_14 < 0);
    #pragma endscop
}
