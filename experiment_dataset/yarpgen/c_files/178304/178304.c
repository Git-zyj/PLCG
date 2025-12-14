/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = ((min(0, (arr_2 [i_0 - 1]))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_13 = 0;
            arr_6 [i_0] [i_1] [2] = (((arr_0 [i_0 + 1]) ? var_4 : (arr_0 [i_0 + 3])));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_14 = (arr_2 [i_0 + 2]);
            var_15 = ((0 ? (arr_2 [i_0 - 3]) : ((16 ? 0 : 0))));
        }
        var_16 = ((((min(((max(53081, (arr_2 [i_0])))), (max(var_5, 26))))) ? ((9223372036854775807 / (arr_4 [i_0 - 3] [i_0 + 1]))) : ((((!(arr_0 [i_0 - 2])))))));
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((-(((arr_5 [i_3 + 3]) ? (arr_5 [i_3 + 2]) : 2126079998)))))));
        var_18 = ((-(min(3278163777882267436, (50400 > var_0)))));
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        var_19 = ((~(-2147483647 - 1)));
        var_20 = (((((50396 ? var_10 : (1 != var_5)))) ? (max(4450890967736884848, 15120)) : ((~(arr_12 [i_4 - 4])))));
        var_21 ^= var_2;
        var_22 = (((7753254385795253017 | 29488) < (min((arr_11 [1] [i_4]), 2126079992))));
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        arr_16 [1] |= 1;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_23 [i_5 + 1] [i_5 + 1] [20] [i_7] [3] = ((((min((arr_15 [i_5 - 1]), (arr_15 [i_5 - 1])))) ? (arr_15 [i_5 - 1]) : ((max(1, (arr_15 [i_5 - 1]))))));
                        var_23 = (min(var_23, ((((arr_22 [i_5 + 1]) * 29488)))));
                        var_24 = (min(((-12589 ? 4271601080215290957 : -29489)), ((min(29488, 22005)))));
                        arr_24 [i_5] [i_7] [i_7] [i_8] [i_5] [i_7] = -1263738777933468502;
                    }
                }
            }
        }
        var_25 = (min(var_25, ((max((min(13565, (arr_14 [i_5 - 2]))), ((var_4 ? (-26584 <= var_0) : 0)))))));
    }
    #pragma endscop
}
