/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_4 < var_10);
    var_18 = ((((101 || (var_5 || 1))) ? (-9223372036854775807 - 1) : (min(var_6, ((var_2 ? 156 : var_7))))));
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) - (((min(var_9, var_5)) - 4294967295))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_20 = (max(var_6, var_4));
            arr_5 [i_0] [i_1] = (arr_1 [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_0] [9] [i_2] [9] = (min((((!(arr_4 [i_1] [i_1] [i_1])))), 201));
                var_21 = var_4;
            }
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_22 ^= var_15;

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_1 + 2] [i_1 + 3] |= ((min(var_2, var_8)));
                    var_23 &= (((!1) ? ((-((var_8 ? 1 : var_9)))) : (((arr_7 [i_3 - 1] [i_1 + 2] [i_1 + 2]) ? var_10 : (arr_7 [i_3 - 1] [i_1] [i_1 - 1])))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = (max(var_24, ((((((((var_13 ? var_11 : var_6)) || (((13010204024620519614 ? var_9 : 1)))))))))));
        var_25 = 1;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = (((((~(arr_21 [i_6])))) & (~-1)));
        var_27 -= ((min((-3337774545267658505 >= var_6), ((0 ? (arr_3 [8] [i_6] [i_6]) : (arr_1 [i_6] [i_6]))))));
        var_28 = (((((~((var_4 ? var_14 : var_9))))) ? ((((var_7 ? var_14 : 0)) & var_15)) : var_14));
    }
    var_29 = var_2;
    #pragma endscop
}
