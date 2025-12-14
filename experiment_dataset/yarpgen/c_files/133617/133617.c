/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((1098618996200887134 + (arr_0 [i_0] [i_0])));
        arr_2 [11] = var_0;
        var_13 = (((2294937084 + 3131735548) ? 4294967281 : (((0 ? var_10 : 1)))));
        var_14 ^= ((1098618996200887134 ? ((var_8 ? 0 : var_10)) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = ((-var_7 ? (((-12541 % (arr_1 [i_0])))) : (arr_3 [i_0])));
            var_15 = (((arr_1 [i_0]) ? (arr_1 [0]) : (((-1 + 9223372036854775807) >> (var_4 + 272594845862182431)))));
            var_16 = ((arr_1 [i_1]) / (((arr_1 [i_1]) ? var_8 : var_8)));
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 -= (max(var_7, (((9223372036854775786 ? 0 : 0)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_18 += var_5;
                    var_19 = (min(var_1, ((max((arr_10 [i_3]), (((1048575 ? var_11 : (arr_12 [i_2] [1])))))))));
                }
            }
        }
        arr_15 [i_2] = 3429078153178483669;

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_20 *= (arr_13 [i_2] [i_5]);
            arr_18 [18] [i_5] [i_5] = var_6;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_21 = (max(var_4, 2305843009213693952));
            var_22 = (min(var_22, (min(((0 ? (arr_8 [i_2] [i_6]) : (arr_8 [i_2] [0]))), (((arr_8 [2] [i_6]) ? (arr_8 [i_2] [i_6]) : (arr_8 [i_6] [i_2])))))));
            arr_21 [1] [i_6] [2] |= var_8;
        }
    }
    var_23 = (((893275833641666059 | 114) < (((((max(var_0, var_9))) ? (max(1104394907, var_8)) : 251464104)))));
    #pragma endscop
}
