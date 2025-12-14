/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((~var_1) ? (var_13 ^ 1828380495506589358) : var_0)), var_15));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) || (11864240103870785147 && 1)))) - (((41 && 14992) << (((((arr_0 [i_0]) * (arr_0 [i_0]))) - 2607724716))))));
        arr_3 [i_0] = (min((arr_0 [i_0]), ((min(4133, 1)))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (min((max((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1] [i_1]))), -230120667));
        var_18 = (max(var_18, (arr_5 [i_1 + 2])));
    }

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_19 = (min(var_19, (arr_7 [4])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_20 = (min(1, 1722157776));
                    arr_14 [i_3] [i_3] [1] [i_2] = (((arr_9 [i_2] [i_2 + 1]) || (((arr_9 [i_2] [i_2 + 1]) > (arr_9 [i_2] [i_2 - 1])))));
                    var_21 = ((!(((var_3 ? (max(16011508941713277554, (arr_9 [i_2] [i_2]))) : (arr_13 [i_2]))))));
                    arr_15 [i_2] [i_3] [12] = (56337 % (((var_9 - (~4141)))));
                    arr_16 [i_2] [i_2] [i_4] [i_4] = (((((((arr_10 [i_2]) / var_3)) / (arr_7 [i_2]))) / (max((min((arr_8 [i_3]), (arr_13 [i_2]))), ((16011508941713277562 ? (arr_8 [i_4]) : (arr_11 [i_2] [i_2])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 = arr_19 [5] [5] [i_2] [5];
                    var_23 = (min(19907, (((arr_17 [i_2 + 1] [i_5]) % (arr_7 [i_2])))));
                    var_24 = ((!((((-6655 ^ 33) ? (min(38, (arr_8 [i_2]))) : ((((arr_9 [i_2] [i_6]) ? -75 : 30678))))))));
                    var_25 = ((((max((arr_11 [i_2] [i_2 - 1]), (arr_11 [i_2] [i_2 + 1])))) % ((min((arr_11 [i_2 - 1] [i_2 - 1]), (arr_11 [i_2] [i_2 + 1]))))));
                }
            }
        }
    }
    var_26 = var_11;
    #pragma endscop
}
