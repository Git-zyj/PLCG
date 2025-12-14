/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((var_3 && var_12) ? 1046528 : 6204128846155948338));
        arr_2 [8] &= (((var_10 != 6204128846155948338) >= var_4));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 *= ((((((min((arr_3 [i_1]), 4293920768)) | var_9))) & (max(var_12, -4331103067348428818))));
        var_16 *= 123;
        arr_5 [5] [i_1] = ((+(min((var_9 != 41162), (arr_4 [i_1])))));
        var_17 = (max(((1587231272 ? ((max(var_5, 168))) : 1)), (((arr_4 [i_1]) ? var_3 : (arr_3 [i_1])))));
        var_18 = var_2;
    }
    var_19 = 88;
    var_20 |= ((min((4654975481451373515 || 506489278), 1)));
    var_21 += (min((max(var_7, (!var_9))), var_2));
    #pragma endscop
}
