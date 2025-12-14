/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((99 ? var_2 : 63));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max((478279316 < 255), ((-(((arr_0 [i_0] [1]) ? var_4 : (arr_0 [i_0] [i_0])))))));
        var_14 = 0;
        var_15 ^= 1;
        var_16 ^= ((0 / ((-112 ? (((~(arr_1 [i_0] [i_0])))) : 9223372036854775807))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 ^= 166;
                    arr_6 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_2 + 1]);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 ^= ((-478279316 / ((-20 ? (arr_1 [i_0] [i_0]) : (max(var_9, 478279316))))));
                        var_19 = ((-((0 ? ((max(255, 1))) : (arr_5 [i_0] [i_0] [2] [i_3])))));
                    }
                    arr_9 [i_0] [i_1] [i_2 + 2] = (min((arr_0 [i_2] [i_1]), ((((((255 ? 255 : 250))) == 1098437885952)))));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_20 = var_4;
        var_21 = (3833044556 ? 255 : ((281474972516352 ? 255 : -73592347005488279)));
        var_22 = (max(var_22, (((max((arr_11 [i_4 + 2]), (arr_0 [1] [5])))))));
        var_23 = (min(var_23, (((0 ? (((((arr_10 [i_4]) * 2437964912)) << (!var_11))) : ((((max(0, (arr_7 [7])))))))))));
    }
    for (int i_5 = 4; i_5 < 8;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (((((arr_14 [i_5 + 1] [i_5] [i_5 + 1]) * (arr_14 [i_5 - 1] [8] [i_5 - 4])))))));
            arr_16 [i_5] [i_5] [i_6] = 68719476672;
            var_25 ^= (max(((((min((arr_3 [i_5] [i_6] [i_6]), 2437964912))) ? var_6 : (((1 * (arr_7 [i_5])))))), 18446744004990074944));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_26 = (((((max(1, 0)) ? (((arr_12 [i_5 + 3]) ? 1 : -12465)) : ((var_0 ? 255 : 0)))) * ((var_10 ? ((0 ? 0 : 1)) : 18))));
            arr_19 [i_5 - 3] [10] = (((!(arr_14 [i_5 - 4] [i_5 - 3] [i_5 - 3]))));
            var_27 = (max(var_27, (arr_1 [i_5 + 2] [i_5 - 3])));
            arr_20 [i_7] = (((0 ? (arr_13 [i_5 - 2] [i_5 - 3]) : (arr_13 [i_5 - 2] [i_5 - 3]))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_28 [i_10] [i_8] [i_9] [i_10] [i_10] = (((((~(arr_12 [i_5 + 3])))) ? (arr_12 [i_5 - 1]) : (((arr_12 [i_5 - 1]) ? (arr_12 [i_5 + 1]) : 9223372036854775807))));
                        var_28 = (max(var_28, (arr_13 [1] [i_5])));
                        var_29 ^= var_11;
                    }
                }
            }
            var_30 ^= (max((max((arr_12 [i_5 - 2]), (arr_21 [i_5 + 2] [i_5 + 1] [i_5 - 2]))), (~4584604976438274884)));
            var_31 = -1442376345;
            var_32 ^= ((+((((arr_3 [i_5] [15] [i_5]) ? 1 : (arr_12 [i_5]))))));
        }
        for (int i_11 = 3; i_11 < 9;i_11 += 1)
        {
            var_33 ^= (min((((((min(0, var_0))) ? -73592347005488279 : 2792993103))), (((!0) ? (arr_17 [i_5] [i_5 + 1]) : var_8))));
            arr_32 [i_5] [i_5] = (((((arr_0 [i_5 - 1] [i_11 - 2]) * ((((arr_1 [i_5] [i_11 + 2]) < var_8))))) << ((((((arr_15 [i_11] [i_5]) << (((arr_3 [i_5] [i_11] [i_11]) - 174))))) * ((93 ? 2992152903 : 0))))));
        }
        var_34 = (max(var_34, (arr_27 [i_5 - 2] [i_5])));
        var_35 = ((1 >> (((arr_1 [i_5 + 1] [15]) - 170839446))));
    }
    #pragma endscop
}
