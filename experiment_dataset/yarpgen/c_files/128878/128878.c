/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_9) * 1));
    var_13 += -var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((arr_0 [i_0] [i_0]) ^ (((arr_0 [i_0] [i_0]) ? 8155604332967440393 : (arr_0 [11] [23]))))));
        var_14 = (min(var_14, (((((((((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0]))) ? ((((arr_1 [i_0]) * var_1))) : (arr_1 [i_0])))) ? ((((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0])))) : (((arr_0 [i_0] [i_0]) * 1)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = ((var_5 ? (((((var_4 ? var_11 : 2576))) ? (((2 && (arr_5 [i_1])))) : -17261)) : ((min((min(62, (arr_5 [14]))), ((((arr_5 [i_1]) || var_2))))))));

        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = ((((16383 * ((var_9 ? var_3 : -7683931753137320764))))) ? var_4 : ((((arr_1 [i_2]) ? (arr_1 [i_1]) : var_5))));

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_1] [i_2] [i_2] = ((var_1 ? 1 : (var_4 / -1644362396)));
                arr_13 [i_1] [i_2] [i_2] [i_1] = (-(-2837100034931662882 != 923812409));

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_16 = (min(var_16, (arr_4 [i_2] [i_1])));
                    var_17 = (arr_1 [i_2]);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_18 = ((((arr_7 [i_2] [i_2]) ? (171 != var_3) : (min(var_8, (arr_11 [i_2] [i_2] [i_3]))))));
                    var_19 = (var_1 ? ((var_5 / (arr_8 [i_2] [i_2]))) : ((var_11 / (arr_8 [i_2] [i_2]))));
                }
                var_20 = (min(var_20, ((((((arr_17 [i_1] [4] [i_3 - 3] [i_1] [i_3 - 2]) != (arr_17 [i_1] [i_2] [i_1] [i_1] [i_3 - 2]))) ? (((arr_7 [i_1] [i_2 - 3]) / (arr_18 [i_1] [i_1] [12] [i_2 - 3] [i_3 - 4] [0]))) : ((~(arr_17 [i_1] [i_2] [i_3 - 1] [i_3] [i_3 - 2]))))))));
                var_21 = (max((arr_19 [i_3 + 1] [i_2] [i_2] [i_3] [i_3 + 1]), (min(7, (arr_17 [i_2] [7] [1] [i_2] [i_3 - 1])))));
            }
        }
        var_22 = (((var_10 ? 77 : (arr_10 [i_1]))));
        var_23 = (max(var_23, ((((((12 * var_9) ? (arr_11 [i_1] [i_1] [i_1]) : -var_3)) != ((((min(var_6, var_8))) ? (-9239 != var_10) : ((var_1 ? var_0 : 12041936)))))))));
    }
    var_24 = (((min((var_3 != var_8), (7683931753137320766 / var_6))) * var_5));
    #pragma endscop
}
