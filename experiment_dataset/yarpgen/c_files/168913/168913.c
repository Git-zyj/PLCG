/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 || var_2);
    var_13 = ((var_0 >> (var_11 - 44)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_1] [i_2] = ((((-(((arr_0 [i_1]) - var_4)))) - ((7971222919051145476 & (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    arr_8 [i_2] = ((7971222919051145476 + (((7971222919051145476 ? (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1]))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_11 [i_0 + 1] [i_0 - 2] [i_3] = (((max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2]))) ? (-32767 - 1) : (arr_4 [i_0 + 1] [i_0 - 2])));
            var_14 = (((max(-0, (arr_3 [i_0 + 1] [i_0 - 1] [4])))) ? var_5 : (((~((1 << (((arr_1 [i_0] [i_0 - 2]) - 341677238))))))));
            arr_12 [i_0] [i_3] = ((((min((arr_0 [i_0 - 1]), var_11))) >> (((!(arr_0 [i_0 + 1]))))));
        }
        arr_13 [i_0] [1] = (min(((((arr_0 [i_0 - 2]) - (arr_6 [i_0 - 2] [i_0] [i_0 - 1])))), 7971222919051145484));
        var_15 = (min(var_3, ((8146338765913148511 ? 0 : 47145))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_16 = (((((10475521154658406153 >> (var_10 - 1990399929)))) ? var_7 : (!var_3)));
        var_17 ^= 0;

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_4] = (-6168726425968350575 ? 524245072883239762 : 4722);
            arr_21 [i_4] [i_4 + 3] [i_4] = ((8146338765913148511 ? 624023837921284124 : 27076));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_24 [i_4] [i_4] [i_6] = ((var_10 ? (((arr_18 [3]) ? var_2 : var_6)) : var_7));
            var_18 = -256180912;
            var_19 = var_1;
        }
        var_20 = (arr_18 [i_4 + 3]);
    }
    var_21 = var_5;
    #pragma endscop
}
