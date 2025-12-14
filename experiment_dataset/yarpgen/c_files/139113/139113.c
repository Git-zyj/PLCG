/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 65520));
    var_21 = ((!((((var_14 + 2147483647) >> (var_0 != var_17))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((!(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 += ((max((arr_0 [2] [i_2]), 1)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_24 = ((((max((arr_9 [i_0] [i_1] [i_1] [i_0] [i_3]), (arr_6 [i_1])))) && ((min((arr_7 [i_0] [i_1] [i_3]), (arr_7 [i_0] [i_1] [i_0]))))));
                        arr_10 [i_0] [0] [i_1] [i_3] = ((((((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]) ^ (((178 ^ (arr_6 [i_0]))))))) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : ((-((max(var_2, var_7)))))));
                        var_25 = (((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_2]) ? var_13 : (arr_5 [i_0] [i_1]))) & (((((arr_5 [i_0] [i_0]) + 2147483647)) >> (((arr_5 [i_0] [i_1]) + 26716))))));
                        var_26 = ((((((arr_7 [i_2] [i_1] [i_2]) ? (((arr_5 [i_2] [i_2]) ? (arr_1 [i_3]) : 229)) : ((-(arr_5 [4] [i_3])))))) ? (((arr_2 [i_2] [i_0]) ? (arr_2 [i_3] [i_2]) : (arr_2 [i_0] [i_1]))) : ((max((min((arr_2 [i_2] [i_3]), var_2)), var_0)))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_27 = ((-(arr_6 [i_0])));
                        var_28 = ((((((1 | -681661712) ? (((19 ? 9223372036854775807 : (arr_14 [4] [i_0] [0] [i_1] [i_1] [i_4])))) : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_4])))) ? ((((arr_12 [i_0] [i_0] [i_2] [i_4] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_1] [i_0] [i_4] [i_0])))) : (max((((12 << (((arr_3 [i_2] [i_1]) - 15))))), (min((arr_12 [i_0] [i_0] [i_0] [i_4] [i_0]), 3706379141))))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_2] [i_4] = (max((((arr_5 [i_0] [i_2]) ? -557009449 : 666989689)), (!-52)));
                        arr_16 [i_0] [4] [i_1] [i_4] = 1497493363;
                        arr_17 [i_1] [i_1] = ((-(max(var_6, (arr_12 [9] [i_1] [i_1] [i_1] [i_4])))));
                    }
                    var_29 -= ((~(arr_11 [i_0] [i_2] [2] [i_2] [i_2])));
                }
            }
        }
        var_30 = (max(var_30, (~7959)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    arr_24 [i_0] [i_6] = (arr_23 [i_6] [9] [i_6] [i_0]);
                    var_31 *= (max(((((((arr_11 [i_0] [i_0] [i_5] [i_6] [i_6]) > 156)) ? var_0 : (arr_14 [i_0] [i_6 + 2] [i_6] [i_6] [i_5] [i_6 + 2])))), (min((arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]), (var_0 >> var_13)))));
                }
            }
        }
        var_32 += (((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_0]))) | (((arr_8 [2] [i_0] [i_0] [2]) ^ (arr_18 [i_0] [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_33 = ((((max((arr_27 [i_7]), (arr_26 [i_7])))) ? (min(896, (arr_27 [i_7]))) : (((max((arr_26 [i_7]), (arr_26 [i_7])))))));
        var_34 = ((!((((arr_25 [i_7]) ? 1 : 224)))));
    }
    #pragma endscop
}
