/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (((~-3657170977) ? (((21333 ? var_15 : ((38521 ? 0 : 127))))) : -7084222149639601897));
        var_18 = -30217;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_19 = (min(var_19, var_11));
        arr_6 [i_1] [i_1] = ((((((536870848 ? 60 : 5574))) && (var_15 != var_6))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 = ((2735449262 ^ (max(263760042, 262143))));
            var_21 = var_6;
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_22 ^= (((max(var_10, var_12))));
            var_23 ^= ((-((-((4025822020 ? var_15 : var_2))))));
        }
        arr_12 [i_1] = (((!3) ? ((1 ? var_15 : 1)) : ((((536870911 ? 32 : var_6)) * ((max(1, -54)))))));
        var_24 = (max(var_24, ((max((((!8391942) || -18966)), (!var_6))))));
    }
    #pragma endscop
}
