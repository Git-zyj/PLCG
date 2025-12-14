/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 << (var_3 - 276175671)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) + 2147483647)) << (((-1 + 17) - 16))));
        arr_3 [10] |= ((((((max(1, 1)) ? ((var_0 ? var_6 : 6386899578595555480)) : ((((225 == (arr_0 [i_0])))))))) ? 43597 : (min(3194711285, (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((arr_4 [i_1] [7]) / (arr_5 [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {

                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        arr_14 [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] = (max((64297 || var_2), (((((var_6 ? (arr_4 [i_1] [i_1]) : (arr_1 [i_4 + 3])))) && (((var_3 ? var_8 : (arr_7 [i_1]))))))));
                        arr_15 [i_1] [i_3 - 1] [i_2] [i_1] [i_1] [i_1] = (((((((arr_13 [i_1] [i_1] [4]) ? var_4 : 2187504999)))) ? ((-(arr_12 [i_3 - 1] [i_1] [i_4 - 4]))) : (min(((max(var_1, 17510))), (((arr_5 [i_2]) ? (arr_10 [i_4] [i_3] [i_2]) : (arr_4 [i_2] [i_2])))))));
                        arr_16 [i_1] [i_1] = (((max((arr_12 [i_3 + 1] [i_1] [i_4 + 2]), (arr_12 [i_3 + 1] [i_1] [i_4 + 2]))) - (arr_12 [i_3 + 1] [i_1] [i_4 + 2])));
                    }
                    arr_17 [i_1] [i_2] [i_2] [i_2] = ((~(max((max(8191, 3349523648)), var_10))));
                    arr_18 [i_1] [i_1] [i_3] = (((min(var_2, (arr_12 [i_1] [i_1] [i_3 + 2]))) / ((-(arr_12 [i_1] [i_1] [i_1])))));
                    arr_19 [i_1] [i_2] [i_1] = 255;
                    arr_20 [i_1] [i_1] [i_1] = (max(1132669453, ((((((arr_8 [6] [6] [i_3 + 1]) ? (arr_7 [i_1]) : (arr_1 [i_3 + 1])))) ? ((10229 ? (arr_4 [i_2] [7]) : var_11)) : var_2))));
                }
            }
        }
        arr_21 [i_1] [i_1] = (min(2102474222, var_2));
    }
    var_13 = min((((var_7 <= (-6663542944005931720 + 3130)))), (((max(var_1, 65535)) << (((-1975684443782331151 + 1975684443782331174) - 22)))));
    var_14 = var_2;
    #pragma endscop
}
