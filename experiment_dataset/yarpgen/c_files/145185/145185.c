/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_14 ? (((var_7 > -176007307) ? var_14 : var_8)) : (min(-1938329871, -1938329871)))))));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 *= (((((-(arr_0 [i_0])))) ? (((((arr_2 [i_0 + 4]) < (arr_2 [i_0 + 2]))))) : ((~(max(var_12, var_5))))));
                arr_5 [i_1 + 1] = 1938329870;
                var_18 = (~var_10);
                arr_6 [i_1 + 1] = (max(var_4, 32));
            }
        }
    }
    var_19 = ((((((((var_13 ? var_12 : var_13))) ? (var_11 + var_7) : ((max(1938329870, 3440)))))) ? (min((((-1938329871 ? var_2 : var_1))), -var_0)) : var_0));
    var_20 = var_14;
    #pragma endscop
}
