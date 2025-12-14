/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_8, ((-(arr_0 [i_0 + 3])))));
        var_18 = ((123 | var_4) | ((((2047 || (arr_1 [i_0 + 4]))))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_3] = 255;
                    arr_15 [i_1 - 2] [i_2 + 1] [i_3] = ((-(((var_3 || (!var_12))))));
                }
            }
        }
        arr_16 [i_1 + 2] = var_11;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_23 [i_4] [i_4] = (min(4353330467717167506, ((min((arr_17 [i_4]), var_11)))));
            arr_24 [i_4] [i_4] [i_5] = (((var_16 & var_16) ? var_11 : var_16));
            arr_25 [i_4] [i_4] [i_4] = ((((arr_20 [i_4] [i_4] [i_4]) / 725900954)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_19 = (var_8 | 550228855);
            var_20 ^= ((arr_20 [i_4] [4] [i_6]) == (arr_22 [i_4] [i_4] [1]));
            var_21 = (min(var_21, ((255 / (arr_20 [i_4] [i_6] [i_6])))));
            arr_29 [i_4] [i_4] = -742481879;
        }
        var_22 = (max((1497848110 && var_15), (arr_18 [i_4] [i_4])));
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        var_23 ^= var_8;
        arr_34 [i_7 + 1] &= (((!var_0) ? (min((arr_7 [i_7 + 1] [i_7 - 2] [i_7 - 3]), (arr_18 [i_7 + 1] [i_7 - 1]))) : var_5));
    }
    var_24 ^= (~var_0);
    var_25 = (min(var_25, ((~(min(9624, -var_15))))));
    var_26 = ((((var_14 ? var_16 : var_1))) + (min(-var_7, (var_4 + -1))));
    var_27 = var_8;
    #pragma endscop
}
