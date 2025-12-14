/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 *= ((((var_2 != 562949953404928) + (((arr_3 [8]) >> (arr_6 [10] [i_0] [i_1]))))));
                arr_7 [i_1] = (arr_6 [i_1] [i_1] [i_0]);
                var_19 = (max((min((var_12 + var_16), var_14)), 2672835437));
                arr_8 [i_1] = ((min(2294474704, (min(4297702623119052329, -3362279223679395716)))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_12 [i_1] [i_1] [5] [i_2] = (35 >= 562949953404929);
                    arr_13 [0] [i_1] [i_1] = (min((max(var_0, 14149041450590499286)), var_3));
                    var_20 = (arr_9 [i_1] [i_1]);
                }
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    arr_16 [i_0] [i_1] [i_1] = 14149041450590499289;
                    var_21 = (min(var_10, (max((arr_9 [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_3 - 3])))));
                }
            }
        }
    }
    var_22 = var_8;
    var_23 = -var_9;

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_21 [i_4] = max((((4680960833999007284 >= (arr_19 [i_4])))), (max((var_14 - 16496915904323178401), 0)));
        arr_22 [i_4] = min(1, (arr_18 [i_4]));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_26 [i_5] [i_5] = (((((var_3 ? (arr_24 [i_5]) : var_3))) ? ((((arr_23 [i_5] [10]) ? 106 : (arr_25 [6])))) : ((-8841951629971391327 ? var_6 : var_14))));
        var_24 = (max(var_24, (((!(arr_25 [i_5]))))));
        var_25 = (((1287158175 ? (arr_24 [i_5]) : (arr_25 [20]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_26 = (((arr_27 [i_6]) ? -7944245125520242437 : var_4));
        var_27 = ((var_8 & (arr_27 [i_6])));
    }
    #pragma endscop
}
