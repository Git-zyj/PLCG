/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 *= 29871;
        arr_3 [i_0] = -1100300437;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = 1;
        var_20 |= (((2312397885 ? var_14 : -21816)));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_21 = ((-29872 ? -21816 : ((-126 ? (21837 - -21816) : 1))));
                    var_22 = (~-29872);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_23 = (min(((((!var_12) ? 22818 : (~-32765)))), ((1 ? ((32767 / (arr_0 [i_2] [i_2]))) : (max(2312397873, -21801))))));
                    var_24 = (arr_4 [i_2]);
                }
            }
        }
        arr_20 [i_2] [i_2] = (min(((((21967 ? (-127 - 1) : 1)) ^ (var_10 != 9652))), ((var_9 ? var_11 : (~100)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = 1;
        arr_25 [i_7] = 29885;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_25 = ((-8 | (!2312397874)));
                    var_26 = ((((29867 ? 10394591608115965180 : 1)) | (arr_30 [i_7] [i_7])));
                }
            }
        }
        var_27 = (((~0) ? (((arr_29 [i_7] [i_7] [i_7]) / 2312397882)) : (-22 | var_7)));
        var_28 += ((((((-2038545961 + 2147483647) << (((-2038545975 + 2038545990) - 14))))) ? (-2147483647 - 1) : (((arr_22 [i_7] [i_7]) | 10961993295499066717))));
    }
    var_29 = (max(((0 ? (((3 ? 1 : 7))) : 0)), 1982569408));
    var_30 = 3;
    var_31 = 71;
    var_32 = (max(var_32, 19997));
    #pragma endscop
}
