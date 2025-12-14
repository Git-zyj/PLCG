/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 + 2]) ? (arr_0 [i_0 - 2]) : (arr_2 [i_0 + 2])));
        arr_4 [i_0] = (((-5879 ? var_2 : var_8)));
        arr_5 [i_0] = ((5890 ? 18446744073709551615 : (((-5879 ? 5462399262073394927 : 780185557)))));
    }
    var_13 -= (((max(((var_0 ? var_8 : -5884)), ((max(var_5, var_4)))))) ? ((var_12 * (!0))) : 213);

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 = ((-8548373120506267383 ? (arr_6 [i_1]) : (arr_6 [i_1])));
        var_15 = ((5904 ? 96 : (arr_8 [i_1])));
        var_16 = ((var_3 ? -var_5 : (((arr_7 [i_1]) ? 0 : (arr_7 [i_1])))));
        var_17 *= (arr_8 [i_1]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 += -2;
        arr_11 [i_2] = ((15949 >> (var_1 - 77)));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (min((arr_13 [i_3]), (min((((~(arr_13 [i_3 + 1])))), (min(-123806367236735721, (arr_13 [i_3])))))));
        var_19 = (((((((var_11 ? (arr_13 [i_3]) : 79))) <= (-1 & 8409887762123167083))) ? (((9223372036854775807 ? (((arr_12 [i_3]) << (255 - 242))) : (arr_13 [i_3 + 2])))) : -1404360710));
        var_20 = ((((((arr_12 [i_3 + 2]) ? (arr_13 [i_3 - 1]) : (arr_12 [i_3 - 1])))) ? (arr_13 [i_3 + 2]) : (((arr_13 [i_3 + 2]) / (arr_13 [i_3 - 1])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 15;i_5 += 1)
            {
                {
                    var_21 -= ((((!((max(2, 1))))) ? (((!(arr_13 [i_3 - 2])))) : (((!(arr_13 [i_5 + 1]))))));
                    var_22 = ((76 ? ((~((163 ? var_12 : (arr_12 [i_5 - 2]))))) : ((((arr_16 [i_5 - 3] [i_5 - 4]) ? (arr_18 [i_5 + 2] [i_5 - 4] [i_3 - 2]) : 159)))));
                    var_23 = (arr_16 [i_3] [i_5]);
                    arr_21 [i_3] [i_4] [i_4] [i_5] = var_7;
                }
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
