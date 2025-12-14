/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((min(((65521 ? 1 : (arr_6 [i_0] [1] [18] [22]))), (((~(arr_3 [i_0] [i_0 + 1] [i_0])))))))));
                    arr_7 [i_0 - 1] [i_2] = var_9;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] [i_3] = 8278160082801138046;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_17 [i_3] [9] = arr_6 [i_3] [i_4] [4] [3];
                    arr_18 [i_3] [0] [i_3] = (((~((~(arr_3 [i_3] [i_3] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_17 = (arr_14 [i_4 - 1] [i_5] [i_4 - 1]);
                                arr_24 [i_7] [7] [2] [i_3] = ((~((((67108863 ? (arr_0 [i_5]) : var_3)) * ((((arr_13 [i_3] [0]) != 64)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_3] = (((arr_11 [i_3] [i_3]) ? ((var_14 ? var_0 : (arr_15 [3] [i_3] [i_3] [8]))) : (arr_3 [2] [i_3] [13])));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_18 = ((~(arr_3 [i_8] [i_8] [i_8])));
        var_19 = (((max((arr_4 [i_8] [i_8] [21]), 65533)) > 1));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    {
                        var_20 = var_7;
                        arr_36 [i_8] = (((~((min(var_1, (arr_8 [2])))))));
                    }
                }
            }
        }
        arr_37 [i_8] = ((18446744073709551615 + ((65533 ? (arr_27 [i_8]) : (((max(24, 65533))))))));
    }
    var_21 = ((var_4 ? ((((min(46040, 1))) ? var_5 : var_15)) : var_14));
    var_22 = var_6;
    #pragma endscop
}
