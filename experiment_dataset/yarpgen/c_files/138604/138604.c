/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_11 = (((((16 ? 9223372036854775807 : var_9))) ? ((((max(1, var_3))) ? ((((arr_1 [i_0] [i_0]) | -30998))) : ((5160701157299294352 ? (arr_0 [i_0] [i_0]) : var_8)))) : ((max((((arr_1 [i_0] [i_0 + 2]) | 47104)), (arr_1 [i_0] [i_0]))))));
        var_12 = (((((+(((arr_1 [i_0] [i_0 + 3]) * var_1))))) ? (max(13286042916410257264, ((max(1, -29))))) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_13 = (~var_6);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_14 = ((~(!0)));
                        var_15 = (1 < 26);
                        var_16 = (max(var_16, (arr_3 [i_3 + 3] [i_2])));
                        var_17 = -var_6;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 = (((arr_16 [i_5] [i_6 - 1] [i_7 - 3]) ? -1 : (((arr_16 [i_5] [i_6 + 2] [i_7 - 1]) ? 1 : (arr_16 [i_5] [i_6 - 1] [i_7 - 3])))));

                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        arr_22 [i_5] [i_5] = ((((max((!var_3), (arr_19 [i_5] [i_5 + 4])))) / (arr_14 [i_5])));
                        var_19 = (min(((var_8 ? (((arr_13 [i_5] [i_5]) ? 762150335623916631 : var_5)) : var_7)), (((((arr_14 [i_5]) ? 229 : var_9))))));
                        arr_23 [i_5] [i_6] [i_7 - 4] [i_7] [i_8] = ((~(max(30, var_3))));
                        var_20 = ((((((!(arr_14 [i_5])))) + 65527)));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] = (((max((~1), (max(-2147483619, (arr_14 [i_5]))))) % 1));
                    }
                }
            }
        }
    }
    var_21 -= (max(0, (var_4 + 133)));
    #pragma endscop
}
