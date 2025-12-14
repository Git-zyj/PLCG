/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_6 ? var_7 : ((~((10 ? -51 : -51))))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_11 = -var_6;
        arr_4 [i_0] [i_0 - 2] = (((min((arr_3 [i_0 + 2]), var_3)) <= -10));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_12 = ((arr_5 [i_1 - 1]) ? -51 : (arr_6 [i_1 + 1]));
        var_13 &= ((((min(28, (((-10 && (arr_7 [10]))))))) ? ((~(62 / var_6))) : (var_6 % var_3)));
        var_14 = 2147483638;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 = ((((0 ? (arr_11 [i_2] [i_2]) : 817437883944667257)) >> ((((arr_10 [i_2] [i_2]) < (~10))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_16 = (((-(arr_12 [i_2]))));
                        var_17 = (~2147483637);
                    }
                }
            }
        }
        var_18 ^= (((arr_15 [i_2] [i_2] [i_2]) ? ((((arr_10 [i_2] [i_2]) <= 817437883944667257))) : ((((((arr_10 [8] [8]) << (var_4 - 3992704274)))) ? ((((arr_18 [16] [i_2] [i_2] [i_2] [i_2]) >= (-2147483647 - 1)))) : (29360128 < var_7)))));
    }
    #pragma endscop
}
