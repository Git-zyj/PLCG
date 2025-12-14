/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (max(var_13, 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (3150287042 / 6984)));
                        arr_10 [i_0] [i_0] [i_2] [9] = ((-((((arr_8 [i_0] [i_1] [i_2] [i_3] [1]) > var_10)))));
                    }
                }
            }
        }
        var_15 = var_4;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_16 = 127;
        var_17 = (max((((((255 || (arr_6 [i_4]))) ? (((!(arr_3 [2] [i_4])))) : (arr_9 [16] [i_4] [i_4] [16] [i_4] [4])))), (((!1189) ? (min(18446744073709551615, 1189)) : (((((arr_7 [i_4] [i_4]) || var_3))))))));
        var_18 = (max(var_18, (6984 / var_11)));
        arr_13 [i_4] = (!13);
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_19 = (min((~1), ((((arr_2 [i_5 - 2]) | 1)))));
        var_20 = ((((arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 1]) ? (arr_4 [i_5 + 1] [i_5 + 3] [i_5 + 2]) : (arr_4 [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
        var_21 = ((!(((((!(arr_15 [i_5 + 2] [10]))) ? var_9 : (arr_14 [i_5 - 1]))))));
        var_22 = (+-1);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((((arr_17 [i_6 + 2]) << 0)))));
        var_24 &= ((-1 ? ((~(arr_15 [i_6 - 1] [i_6 - 1]))) : (((var_7 + 2147483647) >> (((arr_0 [i_6]) + 2051469293))))));
    }
    var_25 = -715629459016833472;
    #pragma endscop
}
