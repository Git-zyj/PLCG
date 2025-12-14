/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((-(3 * var_11)))), ((19 << (4503599627368448 - 4503599627368443)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (!2231592992);
        arr_4 [6] |= ((!(arr_2 [10])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_20 = ((var_11 << (((((arr_0 [i_1]) | var_18)) + 31))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 += (((arr_8 [i_1 + 1] [i_1 - 4]) / (arr_8 [i_1 + 1] [i_1 - 3])));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_14 [i_1] [i_2] = var_10;
                arr_15 [i_1] [i_1] [i_3] &= (((arr_6 [i_1 - 4] [i_1]) - (~-5429409833322243408)));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_18 [i_1] [i_2] [i_4] = ((-var_16 ? var_2 : -var_3));
                var_22 = ((-(arr_5 [i_1 + 1])));
                var_23 -= ((~((2231593000 ? (arr_13 [i_1]) : var_17))));
                arr_19 [i_2] = var_3;
            }
            arr_20 [i_2] [i_2] [i_1 - 1] = ((2231592998 ? 576460752303423487 : 11174));
            arr_21 [i_2] [6] [i_1 + 1] = ((((((-2374 + 2147483647) >> (7950284450998630303 - 7950284450998630281)))) ? -4 : (arr_9 [i_1] [i_1 - 1] [i_1 - 1])));
            var_24 = (((arr_6 [i_1 - 2] [i_1 - 1]) ? ((7 ? 2063374333 : var_4)) : var_4));
        }
    }
    #pragma endscop
}
