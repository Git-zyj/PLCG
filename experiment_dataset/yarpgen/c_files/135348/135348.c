/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(min(2283209854, 1732952968))));
    var_15 = (min((min(var_0, 274877890560)), ((var_12 ? ((var_11 ? var_2 : 274877890560)) : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((!(((51987 ? (arr_0 [i_0 + 1]) : 274877890565))))))));
                var_17 = ((((~(min((arr_5 [i_0] [i_1 + 1]), var_4)))) > (((arr_4 [i_1 - 1] [i_1]) >> (((arr_4 [i_1 + 3] [i_1 + 3]) - 2581470478))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 *= (min((((arr_6 [i_2]) & (arr_6 [i_2]))), ((~(arr_6 [i_2])))));
        var_19 = (((~274877890577) < (arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 = (min(var_20, 57344));
        var_21 *= var_2;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_16 [i_4] [i_5] = min(((((~var_4) > ((((arr_6 [i_4]) || 18446743798831661055)))))), (arr_6 [7]));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_22 = (-((12568 & ((45801 ? 57323 : 4150819863128669195)))));
                arr_20 [i_4] [i_5] [i_6] [i_6] = var_10;
            }
            arr_21 [i_4] = (min((((arr_19 [i_4] [i_4] [i_5] [i_5]) * (arr_3 [i_5]))), (arr_13 [i_4])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_23 = var_13;
            arr_26 [i_7] [i_7] |= var_2;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_24 ^= (min(var_4, var_1));
            var_25 = (min((((arr_6 [i_8]) == var_0)), (((arr_22 [i_4]) || var_10))));
            var_26 *= (min((arr_1 [i_4]), (28405 && var_4)));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_27 *= (min((arr_10 [5] [i_9]), (((-(arr_10 [i_4] [i_9]))))));

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                arr_36 [i_9] = ((((min(var_5, 52988))) < (min((min(8195, var_0)), (!var_10)))));
                var_28 = (arr_22 [i_4]);
                arr_37 [8] = var_0;
                arr_38 [i_4] [i_10] = (min(((((arr_11 [i_4]) * (arr_23 [i_4] [i_9] [i_10])))), ((var_5 ? (((var_2 >> (var_1 - 646739642)))) : (min((arr_15 [i_4] [5]), (arr_32 [i_9] [i_9])))))));
            }
        }
        arr_39 [i_4] = ((((389271683 ? 8214 : 16745247971044627502))));
        var_29 = 57321;
    }
    #pragma endscop
}
