/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(var_1, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (((8394685517636508347 / -1) > ((max(((var_5 << (((-1810470273 + 1810470298) - 12)))), (arr_9 [i_2] [i_1] [i_0]))))));
                    var_20 = (~var_15);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 += var_12;
                                var_22 = max(((((max((arr_12 [i_3] [i_4] [i_3] [9] [i_0] [i_3]), var_3))) ? 6795367939668755667 : (arr_10 [i_3 + 1]))), (((((max(var_13, var_4))) ? var_3 : var_5))));
                                var_23 = ((((((arr_8 [i_3 - 3]) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 - 2])))) ? ((((max(var_8, -1))) ? (arr_8 [i_0]) : var_2)) : (arr_7 [i_0] [i_2] [i_3] [i_2])));
                                var_24 = (max(var_24, (min(((~(arr_7 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1]))), 3123))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_3;

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_26 += (min(((min(((12 ? var_1 : (arr_16 [i_5]))), ((249 ? var_13 : var_16))))), (max(2859471774970517783, (var_1 | var_3)))));
        var_27 = (max(var_27, ((max((-3 * 96), (((+(((arr_14 [i_5] [i_5]) ? var_6 : var_4))))))))));
        var_28 &= (max(var_11, ((+(((arr_16 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5])))))));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 23;i_6 += 1)
    {
        var_29 &= ((((((arr_17 [i_6]) ? var_0 : var_7))) ? (arr_16 [i_6 - 4]) : var_7));
        arr_20 [i_6] = (arr_15 [i_6 - 1]);
        arr_21 [22] &= 36028522141057024;
        var_30 = (((arr_14 [i_6] [i_6]) | (arr_16 [i_6])));
    }
    #pragma endscop
}
