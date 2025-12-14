/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 ? (min((((var_2 ? var_13 : 60))), var_19)) : 956945628));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (((min(((((arr_2 [i_0] [i_1] [i_1]) ? (arr_1 [i_1]) : var_2))), ((-73 ? (arr_3 [i_1] [i_1]) : var_19)))) * ((max(((0 ? var_7 : var_4)), ((min(-45, var_1))))))));
            arr_6 [i_0] [i_0] [i_1] = (((~39) ? ((~(var_12 | 127))) : ((~(~19)))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_9 [i_1] = var_0;

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_22 = (min(var_22, (~-32)));
                    var_23 = -3739643081;
                    var_24 = var_12;
                    var_25 = (min(var_25, var_0));
                }
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_15 [i_1] = (((arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) ? ((((min(0, var_19))) ? (36 || var_12) : var_9)) : ((-var_12 ? (arr_1 [i_0]) : var_17))));
                arr_16 [i_0] [i_0] [i_0] [i_0] |= (((((~(~var_18)))) ? ((~(arr_4 [i_0] [i_0] [i_4]))) : (min(((var_10 ? var_12 : var_11)), (var_2 & var_17)))));
                var_26 ^= (((arr_4 [i_0] [i_1] [i_1]) ? 31 : ((((min(var_8, var_6)))))));
            }
        }
        var_27 = (min(((-131072 ? (((arr_1 [i_0]) + 3194076507)) : var_6)), (min(-45, 3509139415))));
        var_28 -= ((((max((arr_0 [i_0]), ((var_7 ? var_14 : 4294967281))))) ? ((-var_15 ? ((127 ? var_10 : var_13)) : ((min(-96, 1640))))) : (((((var_18 ? var_8 : var_1))) ? ((min(var_1, var_1))) : ((-25376 ? -1847382038 : -1640))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_19 [i_5] = (min(-1071914044, (max((max(var_19, var_4)), (~3509139415)))));
        arr_20 [i_5] = (((((((arr_2 [i_5] [i_5] [i_5]) ? var_7 : 2046))) ? (~29338) : (arr_5 [i_5]))));
        arr_21 [i_5] = (max((~var_13), (~382427153)));
    }
    #pragma endscop
}
