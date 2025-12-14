/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (min(var_20, (((var_13 && ((((!var_11) | var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [19] = var_18;
                arr_7 [i_0] [i_1 - 1] = (((max(-2419921196794100522, 168)) * ((((arr_3 [2] [i_1 - 3]) ? (arr_2 [i_1 - 3]) : ((max(var_8, var_10))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 = (!var_15);
        arr_10 [i_2] [i_2] = (-32750 / 170);
        arr_11 [i_2] = (((-2419921196794100519 ? -2419921196794100519 : 157)));
        var_22 = (~var_8);
        var_23 = ((((min((arr_2 [i_2]), (arr_2 [i_2])))) ? (arr_0 [i_2]) : var_10));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        arr_16 [i_3 - 1] = ((!((((arr_8 [i_3 + 1] [i_3 + 1]) * (arr_8 [i_3 + 1] [i_3 + 1]))))));
        arr_17 [i_3] |= (!var_9);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_23 [10] [10] [i_5] &= (min(((-((((arr_9 [i_3]) >= var_2))))), ((((var_8 ^ var_2) && (((var_11 ? var_16 : var_16))))))));
                    var_24 -= var_2;
                    var_25 |= var_18;
                    var_26 -= ((~((max((arr_1 [i_3 - 2]), (arr_1 [i_3 - 1]))))));
                }
            }
        }
        arr_24 [i_3 - 1] = (((arr_8 [i_3] [i_3 + 1]) && (var_12 + var_15)));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_28 [i_6] = (((min(var_4, var_7)) ? (var_4 > var_16) : var_7));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_32 [i_6] = var_18;
            var_27 = ((((max((arr_3 [i_6] [i_7]), (arr_15 [i_6])))) ? ((var_8 ? (arr_15 [i_7]) : var_9)) : ((var_9 ? var_7 : var_18))));
        }
    }
    var_28 = ((((((var_3 | var_15) && var_3))) - var_2));
    #pragma endscop
}
