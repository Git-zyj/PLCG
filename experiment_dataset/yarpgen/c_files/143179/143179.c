/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] &= 20476;
                var_12 = ((!((((arr_0 [i_0]) ? 4082227195 : (2979970862 + 0))))));
            }
        }
    }
    var_13 -= 256288520;

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 = (max(var_14, ((min(((((!2023625264) && (~4045752401991547500)))), (max(((min(1421246757, (arr_6 [i_2])))), (min((arr_0 [i_2]), (arr_6 [i_2]))))))))));
        arr_7 [i_2] |= min((min(4095, (max(-2023625264, -4847639905547029005)))), (arr_2 [i_2] [19] [i_2]));
        var_15 = ((~((((-(arr_3 [20]))) % (1 >= 1)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = 30068;
        var_16 = ((+((((arr_10 [11] [i_3]) && (arr_2 [2] [i_3] [2]))))));
        var_17 -= (arr_9 [i_3]);
        arr_12 [13] = (arr_8 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_15 [i_4] = var_3;
        var_18 = (!var_3);
        arr_16 [i_4] [i_4] &= ((var_9 / (arr_14 [i_4])));
        var_19 = (min(var_19, ((((arr_1 [i_4 + 3] [i_4 + 1]) / ((var_2 ? (arr_13 [i_4]) : -2023625264)))))));
        arr_17 [i_4] = (arr_13 [i_4 - 1]);
    }
    var_20 = (max((35468 + -74), var_2));
    var_21 = ((var_2 ? ((var_8 / ((min(var_2, 25))))) : ((-44408 ? var_0 : (var_0 + var_8)))));
    #pragma endscop
}
