/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(29184, ((((min(var_12, 213))) ? (~1) : -256814510))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_16 = (arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0] = ((1750855017 ? -5060152321639406336 : 233));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_17 = var_14;
        arr_7 [i_1] = (((arr_1 [i_1 + 1]) ? 281255031506326890 : (((17592185978880 ? (arr_3 [i_1 + 1]) : -84)))));
        var_18 = ((-((176 ? 13 : 24))));

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_19 = ((-(arr_5 [i_2])));
            var_20 = ((12066505149104738757 ? (((arr_4 [2]) ? 84 : var_2)) : -324808197));
            var_21 = (((arr_9 [i_1 - 1]) ? var_1 : (((arr_4 [i_2]) ? var_10 : 6471536509159080518))));
            var_22 = (max(var_22, (arr_0 [i_2])));
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_23 = (((((arr_0 [i_3]) ? ((var_5 ? (arr_1 [i_3]) : -324808197)) : ((-1414549038 ? 3421 : (arr_0 [i_3])))))) ? (((-4 ? (((min(23, (arr_0 [13]))))) : (max(var_1, var_6))))) : (min(((-513842653 ? 0 : 12066505149104738757)), -84)));
        var_24 = var_1;
    }
    #pragma endscop
}
