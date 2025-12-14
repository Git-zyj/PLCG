/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (max(var_12, var_10));
        var_13 = (max(var_13, (max(((max(2958234690, -16977))), (((arr_1 [i_0 + 2] [i_0 - 1]) & var_3))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] = arr_9 [i_0] [i_1] [i_2] [i_3];
                        var_14 = (max(var_14, ((((((-var_0 << (((max((arr_5 [i_0 + 2]), 387635499623077118)) - 387635499623077094))))) / (arr_6 [i_0] [i_0] [i_3]))))));
                        arr_14 [i_0] [i_0] [i_0] [5] [i_3] [i_3] = (arr_3 [i_2] [i_0]);
                        var_15 = (max(var_5, (((arr_9 [i_0] [i_0 + 2] [i_0] [i_3]) + (var_3 - var_6)))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_16 ^= ((~(((arr_7 [i_0 + 1] [i_1] [i_0 + 2] [i_0 + 1]) | (arr_7 [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 2])))));
                            arr_17 [i_0] [4] [i_1] [i_1] [3] = ((((max(var_1, (arr_2 [i_0 + 2] [i_1])))) ? var_6 : -16964));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((((((((var_2 ? (arr_15 [i_0]) : var_7))) ? 63656 : (var_10 && 51425)))) || -66));
                            var_18 ^= ((-1745944330 ? (((-(max((arr_19 [i_0] [i_1] [i_2] [7] [i_5]), -1070827907))))) : (max(((2147482624 ? var_8 : var_3)), var_8))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_22 [i_6] = ((arr_19 [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_11 : var_0);
        var_19 ^= var_10;
        var_20 = (((arr_8 [i_6] [i_6] [i_6]) == (arr_8 [i_6] [i_6] [i_6])));
        var_21 ^= ((((((arr_6 [i_6] [i_6] [1]) ? (arr_20 [i_6] [i_6]) : var_7))) != var_10));
    }
    var_22 = 2958234696;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_23 ^= ((16975 ? ((((var_3 ? (arr_24 [i_7]) : 5283048448258620335)) / (arr_26 [i_8]))) : (((((max(var_4, 16975))) & (arr_24 [i_8]))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_24 = ((var_5 ? 4127187114800590737 : (arr_29 [i_7] [i_10] [i_8])));
                            var_25 = (max(var_25, (((~(-225069522963828730 > 102))))));
                            var_26 = (124 * 53);
                        }
                    }
                }
                var_27 = (min(var_27, (-16383 < var_8)));
            }
        }
    }
    var_28 = ((((((2938346629 / -1745944339) ? -var_3 : var_5))) || ((((88 ? var_7 : 16981)) > (9454793969717729899 == -8607652335713746214)))));
    #pragma endscop
}
