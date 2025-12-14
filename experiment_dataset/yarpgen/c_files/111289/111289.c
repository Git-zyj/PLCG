/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_10 ? (var_3 | var_3) : (var_5 ^ var_3))) >> (var_12 - 26959)));
    var_15 = ((var_2 ? ((((((var_1 ? var_5 : var_12))) ? (var_8 <= var_11) : ((var_1 ? var_9 : var_1))))) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = (~(((((1787296638 ? -50 : 10068864869148235120))) ? 8711122647769548807 : (var_1 < var_9))));
                    var_16 -= (min((var_13 != var_10), ((var_3 << (((var_9 + 24067) - 46))))));
                    arr_10 [1] [8] [i_0] [i_2] = var_2;
                    var_17 -= (((var_0 > var_3) != ((var_6 ? var_7 : (var_1 || var_0)))));
                }
            }
        }
    }
    var_18 |= (((((var_0 ? (((var_12 ? var_4 : var_7))) : ((var_2 ? var_7 : var_8))))) ? ((0 ? 65535 : 70)) : ((-(((var_9 + 2147483647) >> (var_5 - 10153076768076740903)))))));

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = (((((!var_2) / var_9))) ? ((((((var_2 ? 549755813888 : 1538888985476263246))) ? var_6 : ((var_0 ? var_4 : var_13))))) : (max(((16907855088233288368 ? 1 : 16907855088233288368)), var_0)));
        var_20 = (((((var_11 - ((var_8 ? var_5 : var_10))))) ? ((var_5 ? var_8 : var_0)) : var_11));
        arr_13 [i_3] = (((((((var_8 ? var_7 : var_5)) + (var_4 - var_4)))) ? var_10 : (min((((var_12 ? var_12 : var_0))), var_3))));
        var_21 = ((-(var_8 * var_9)));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((((!(75 <= 1)))) <= var_9));
        arr_17 [i_4] = (((((((min(1, 1))) | ((var_3 ? var_10 : var_4))))) ^ ((var_10 ? (var_11 & var_0) : var_0))));
        var_22 = (max(((min(70, (var_2 & var_6)))), var_5));
        var_23 ^= (min(((!(var_3 / var_8))), (var_8 <= var_1)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 = var_8;
        arr_20 [i_5] [3] = var_2;
        var_25 -= (max(1538888985476263235, 7442));
        var_26 = ((((var_2 ^ var_13) ? ((var_12 ? var_9 : var_5)) : (((var_3 ? var_10 : var_8))))));
    }
    #pragma endscop
}
