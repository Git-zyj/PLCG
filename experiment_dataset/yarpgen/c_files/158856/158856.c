/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 *= ((((((arr_2 [i_0]) >= 12737)) ? (var_4 < var_2) : (min((arr_0 [i_0] [i_0]), 13240)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = ((((((((7065301273084019609 ? (arr_2 [5]) : (arr_1 [i_0] [i_1])))) ? ((min((arr_2 [10]), 202))) : -4806))) * (min(var_6, (arr_4 [13] [i_1] [i_1])))));
            arr_7 [3] [i_1] [i_1] |= ((((min((arr_3 [i_0] [i_0] [i_1]), var_1))) ? (13906607226424804719 + var_5) : (arr_3 [i_1] [i_1] [i_0])));
            var_11 = (min((((((7065301273084019609 ? var_0 : 11381442800625532006))) ? (arr_1 [i_0] [i_0]) : var_3)), (((arr_5 [i_0] [i_1]) >> (((arr_4 [i_1] [i_1] [i_0]) + 84))))));
            arr_8 [i_0] [i_1] = min(((((arr_5 [i_0] [i_1]) == (arr_5 [i_1] [i_0])))), (((arr_5 [i_1] [i_1]) ? 11381442800625532007 : var_4)));
        }
        var_12 = (min(var_12, 136));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_13 = (min(var_13, (min(((7065301273084019609 | (((226 ? 42722 : (arr_5 [9] [i_2])))))), ((min(var_0, 127)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_2] = (((!(arr_4 [i_2] [i_2] [i_2]))));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = (((arr_3 [i_4] [3] [i_2]) & (arr_0 [i_3] [i_4])));
                    arr_19 [i_2] [2] = (arr_12 [i_2] [i_2]);
                    var_14 *= ((((min((min(11381442800625531991, -637173959145340883)), (((!(arr_9 [8]))))))) ? ((((min((arr_12 [14] [14]), var_3))) ? 511 : var_8)) : (((-15375 && (arr_15 [i_4] [i_3] [i_2]))))));
                    var_15 = (max(var_15, ((((min(((min((arr_2 [i_4]), var_3))), -var_6)) & (((637173959145340857 ? (((arr_14 [i_2] [i_3] [i_3] [10]) ? var_5 : (arr_2 [i_2]))) : var_3))))))));
                }
            }
        }
        arr_20 [i_2] = ((4294967295 / ((((min(140, 127)))))));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_24 [i_5] [i_5 + 1] = ((!((min(((var_2 ? (arr_22 [i_5] [i_5]) : var_0)), 65024)))));
        var_16 = ((((arr_10 [i_5 - 1] [2]) > (((min(var_3, var_5)))))));
        var_17 = (var_1 << 38);
    }
    var_18 = var_1;
    var_19 = ((((min(var_2, 83))) ? ((var_8 ? ((min(var_8, var_3))) : 255)) : var_9));
    #pragma endscop
}
