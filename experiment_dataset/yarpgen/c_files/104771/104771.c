/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 62378;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = var_9;
        arr_2 [16] [i_0] = (arr_1 [12] [12]);
        var_15 = ((!(~var_0)));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_16 = (max(var_16, ((max((min(var_3, var_10)), var_4)))));
        arr_5 [i_1] = min((((-(arr_3 [i_1 - 3] [1])))), (min((~2147483647), ((-1110284465 ? var_11 : (-127 - 1))))));
        var_17 = (max((((arr_3 [i_1] [i_1]) & (arr_4 [i_1] [i_1]))), (arr_4 [i_1 + 2] [i_1 + 1])));
        var_18 ^= ((~(arr_4 [i_1] [i_1])));
        var_19 = (((min((-432 && -2147483639), ((var_1 ? var_6 : var_11)))) & -12));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((!(((32765 ? var_7 : (arr_6 [i_2]))))));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_11 [i_2] = (((arr_7 [i_2 - 1]) > -32766));
            arr_12 [i_2 + 1] [i_2] = var_8;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_20 *= ((!(((-439 ? -117 : 2147483641)))));
            var_21 = arr_9 [i_2 - 1] [i_2 - 1] [i_2];
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_22 ^= -1420198339;
                        arr_21 [i_2] [i_2] = (((arr_7 [i_2]) ? (arr_18 [i_2] [i_2 + 1] [i_6]) : (arr_18 [i_2] [i_2 + 1] [i_5])));
                        var_23 = (max(var_23, ((((arr_9 [i_2] [i_2] [i_6]) - (arr_9 [i_2] [i_4] [i_6]))))));
                        arr_22 [i_6] &= ((120 && (arr_16 [i_2 + 1] [i_2 - 1] [i_6] [i_2])));
                    }
                }
            }
            arr_23 [i_2] [i_2] = ((116 ? 110 : ((120 ? 0 : 1246046371))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_26 [i_2] [i_2] = (((arr_9 [i_2 - 2] [i_2 + 1] [i_2]) * (arr_9 [i_2 - 2] [i_2 - 3] [i_2])));
            arr_27 [i_2] = -124;
            var_24 = ((-50 ? -1492661748 : 429));
            arr_28 [i_2] [i_2] [i_7] = (((arr_15 [i_2 - 2]) && (arr_15 [i_2 + 1])));
            var_25 = ((var_1 ^ -2038285867743447140) ? ((2147483647 ? (arr_9 [i_2] [i_7] [i_2]) : 2337257796894965612)) : (arr_24 [i_2 + 1] [i_7]));
        }
    }
    #pragma endscop
}
