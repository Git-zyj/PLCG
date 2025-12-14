/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(var_0, var_7)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_14 += ((!(arr_2 [i_1 - 1])));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_15 ^= ((!(arr_2 [i_1 + 2])));
                var_16 = (((arr_0 [i_1 + 2] [i_1]) ? 5216829107877405856 : (arr_7 [i_0] [i_1 - 1])));
                var_17 = (((arr_5 [i_1 + 2]) ? ((4867944830661654688 ? var_10 : var_3)) : (arr_5 [i_1 - 1])));
            }
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_1] = (((arr_7 [i_1 - 1] [i_3 + 2]) || (arr_3 [i_1 - 1] [i_3 + 2])));
                var_18 = var_0;
                arr_13 [i_1] [i_1] = (((!(arr_10 [i_1]))) && ((var_2 == (arr_0 [i_0] [i_1 - 1]))));
                arr_14 [i_0] [i_1] [i_1] = (arr_1 [20]);
            }
            var_19 += ((((var_5 ? (arr_5 [i_0]) : var_11)) == (((arr_11 [i_1]) ? (arr_6 [i_0]) : (arr_1 [i_0])))));
            var_20 = arr_7 [i_1] [i_1 - 1];
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_21 = (min(var_21, ((((-(arr_9 [i_4 - 1] [10] [i_4 - 1] [i_4 + 1])))))));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_20 [i_5] [i_5] &= ((~(arr_17 [i_0] [i_4 + 1] [i_0])));
                var_22 = (arr_2 [i_5]);
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_24 [i_0] [i_0] [i_0] [i_0] = 14668485010539203298;
                var_23 |= ((!(arr_1 [i_0])));
            }
        }
        arr_25 [i_0] = ((((((arr_2 [i_0]) / (arr_9 [i_0] [18] [18] [i_0])))) | ((((max((arr_16 [i_0]), -21349))) % (min((arr_3 [i_0] [i_0]), (arr_5 [i_0])))))));
        arr_26 [i_0] = (max((((!(arr_18 [i_0] [i_0] [i_0])))), (((arr_18 [i_0] [i_0] [i_0]) | (arr_18 [i_0] [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_24 = (min(var_24, (min((arr_10 [1]), (((!12301534529656624420) * (arr_28 [i_7])))))));
        var_25 = ((53 ? ((((arr_3 [i_7] [i_7]) ? (arr_21 [i_7] [i_7] [i_7]) : (arr_21 [i_7] [i_7] [i_7])))) : (max((arr_18 [i_7] [1] [i_7]), (arr_3 [i_7] [i_7])))));
        var_26 ^= (min((arr_8 [i_7]), (arr_8 [i_7])));
        arr_29 [i_7] = ((+(((((var_5 ? (arr_11 [i_7]) : (arr_5 [i_7])))) ? (((arr_16 [i_7]) << (((-126 + 186) - 60)))) : ((min(255, var_2)))))));
        arr_30 [i_7] = (((-9223372036854775807 - 1) - 0));
    }
    var_27 += ((((((!var_5) ? ((var_5 ? var_6 : var_7)) : ((13186933218096168325 ? var_0 : 228))))) ? ((((min(var_5, var_4))))) : var_5));
    #pragma endscop
}
