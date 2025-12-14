/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(var_9, -1987405803610592166)), (((var_12 * (66 && var_3))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 |= (((((32763 ? var_13 : (arr_1 [6])))) ? (1987405803610592169 && 208) : var_11));
        arr_2 [i_0] [i_0] = ((1 ? 8488300217594444156 : var_1));
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = ((var_11 ? (min(66, var_12)) : 163));
        var_17 = ((-3485484126932374967 ? 0 : (arr_4 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (((arr_6 [20] [20] [16]) ? var_13 : (((var_4 ? 66 : -364265488)))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_19 = var_5;
                var_20 = (~-1987405803610592184);
            }
            var_21 = var_5;
        }
    }
    #pragma endscop
}
