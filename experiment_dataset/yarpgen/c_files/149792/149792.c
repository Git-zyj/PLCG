/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_6, ((0 ? 0 : var_14))));
    var_17 = ((min(7603504571376270990, 1)));
    var_18 |= (max(((min(120, -2147483638))), (max((1 | 4), -121))));
    var_19 *= var_14;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [16] [16] &= ((~(((2147483638 || ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0 - 2] [4])))))))));
        arr_3 [i_0] [i_0] = ((var_11 ? (((min((arr_0 [i_0]), 1)))) : ((0 ? (min(var_4, var_5)) : ((((arr_1 [i_0] [i_0]) ? var_0 : var_4)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (7603504571376270990 != ((var_0 ? 7603504571376271004 : -5413)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_21 = (arr_6 [i_1]);
                arr_11 [i_3] = (((~var_12) ^ (var_13 & var_8)));
            }
            var_22 = (arr_6 [i_1]);
            var_23 += ((1 ? var_10 : (arr_1 [i_1] [i_2])));
            var_24 = (max(var_24, (((((var_0 ? var_8 : (arr_7 [i_2]))) % (arr_9 [i_1] [i_1] [i_2]))))));
            arr_12 [i_1] [i_1] [i_2] |= (((arr_6 [i_1]) ? (arr_6 [i_2]) : var_2));
        }
        for (int i_4 = 4; i_4 < 6;i_4 += 1)
        {
            arr_15 [i_4] = (((var_1 <= var_10) < var_4));
            arr_16 [i_1] [i_4] = ((var_4 ? (arr_13 [i_4 + 1] [i_4 + 1]) : (arr_13 [i_4 - 3] [i_4 - 4])));
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_25 = ((var_14 >> (var_4 + 1051373067)));
            var_26 = (((var_11 ? var_7 : 1)));
            var_27 = 1;
        }
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            arr_21 [i_1] [i_6 - 4] = (((arr_8 [i_6 - 1] [i_6 - 1]) ? (1 < var_13) : (arr_4 [i_1] [i_6 - 4])));
            var_28 = (arr_10 [i_6 - 4] [i_6] [i_6 - 3] [5]);
        }
        var_29 = (min(var_29, (arr_5 [i_1] [3])));
        var_30 = (arr_8 [i_1] [i_1]);
        arr_22 [i_1] |= var_10;
    }
    #pragma endscop
}
