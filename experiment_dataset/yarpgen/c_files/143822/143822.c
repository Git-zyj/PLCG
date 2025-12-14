/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 ^= (((((93 ? (arr_0 [i_0]) : var_11))) ? 0 : -26838));
        var_19 = 2210924618;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = (((arr_4 [i_1]) ? 26838 : var_6));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_7 [i_1] [i_2] [i_2] = 4239626700;
            var_21 = 4249;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_22 ^= ((-30361 ? (arr_9 [i_1] [i_1] [i_4]) : (arr_9 [i_1] [1] [16])));
                var_23 ^= var_13;
                var_24 = var_11;
                arr_14 [2] [i_1] [i_4] = (arr_8 [i_1] [i_3] [i_1]);
            }
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                var_25 = (((arr_9 [i_1] [1] [15]) ? (!2084042673) : var_9));
                var_26 += var_9;
                var_27 = var_5;
                arr_17 [i_1] [i_1] [i_5 - 2] = ((1 ? 119 : 5870763947619242410));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_28 = (min(var_28, (((!(arr_13 [i_6] [i_6] [i_6] [i_1]))))));
                var_29 = (max(var_29, (((3613038186 ? 12484 : 52)))));
            }
            var_30 ^= (arr_15 [i_3] [i_3] [i_3]);
            var_31 += (!2210924618);
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_32 -= ((var_8 ? 5715398985783407346 : (arr_6 [1] [i_7])));
            arr_22 [i_7] [i_1] [i_1] = arr_2 [i_1] [i_1];
        }
        arr_23 [12] [i_1] = (arr_21 [i_1]);
    }
    var_33 &= var_15;
    #pragma endscop
}
