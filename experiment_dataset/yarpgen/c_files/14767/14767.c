/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 - ((~(max(var_15, var_5))))));
    var_21 = (min(8911746471734025413, (((5756090362793147099 ? (!var_1) : (128 == 36033))))));
    var_22 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_23 = var_16;
            var_24 = (((((2147483647 ? 14 : 65527))) <= 7));
        }
        var_25 = (max((max((arr_5 [i_0] [i_0] [i_0]), (18158513697557839872 * var_2))), (~9829)));
        var_26 = (max(var_26, (((((max(((min(var_4, (arr_2 [i_0])))), (min((arr_2 [i_0]), 0))))) & (((max(13, 1285833505055310590)) << (((max(var_18, var_17)) - 14453283369333976716)))))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = (min((arr_5 [i_2] [1] [i_2]), (((arr_2 [i_2]) + ((max(-40, -1)))))));
        arr_11 [i_2] = 0;
        arr_12 [1] &= -110;
        arr_13 [i_2] [2] = (arr_4 [i_2]);
    }
    var_27 = 4294967273;
    #pragma endscop
}
