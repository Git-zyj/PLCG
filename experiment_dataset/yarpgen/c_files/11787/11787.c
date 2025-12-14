/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) || -0));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (arr_1 [i_0]);
        var_17 = 28390;
        var_18 = (((!544954152) / ((2889855462 ? var_9 : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((((-((max(66, (arr_7 [i_1]))))))) ? (arr_7 [i_1]) : 1));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_1] = (~28390);
            arr_12 [i_2] = (~var_3);
            arr_13 [i_1] [i_2] = (((((((-5130648330910841882 ? (arr_1 [i_1]) : 1)) ^ (((var_13 + 2147483647) << (((arr_7 [i_1]) - 127))))))) ? (min(1002042359856564628, (arr_6 [i_1]))) : ((((!((max(var_4, 544954159)))))))));
            var_19 -= (arr_5 [i_1]);
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_3 - 1] [i_3] = var_12;
            var_20 = (arr_1 [i_3 + 1]);
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = arr_19 [i_1] [i_4];
                        var_21 = ((!(arr_0 [i_5])));
                        var_22 |= (var_13 | -43);
                        arr_28 [i_5] [i_5] = ((~(arr_10 [i_4 - 1])));
                        arr_29 [i_1] [i_5] = (arr_10 [i_4 - 1]);
                    }
                }
            }
            var_23 = 52223;
            arr_30 [i_1] [i_1] = (((arr_10 [i_4 - 1]) * -43));
            var_24 = (((arr_10 [i_1]) | (37145 || 43)));
        }
        arr_31 [i_1] = (arr_5 [i_1]);
        arr_32 [i_1] |= -73;
        arr_33 [i_1] [i_1] |= (max(((max(((((arr_10 [i_1]) ? 997020528 : 1))), var_10))), (((!2145042097) ? ((508 ? -20631 : (arr_18 [i_1] [i_1] [i_1]))) : (((1228352458717613585 ? 3750013134 : var_0)))))));
    }
    var_25 = ((var_0 ? -var_14 : ((((var_16 >> (var_11 - 11808)))))));
    var_26 = var_10;
    #pragma endscop
}
