/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 1548392863));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = 1;
                var_14 = (max(var_14, ((((((((((arr_2 [i_0] [i_1]) | (arr_2 [i_0] [1])))) ? (((1 ? 101 : var_11))) : (arr_4 [i_0] [i_1])))) ? var_5 : (min(((1 ? var_10 : 1)), (var_11 & var_2))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_17 [7] [i_2 - 1] [i_2 - 1] = ((min(var_7, (min(var_9, var_5)))));
                                var_15 = ((-1 ? (arr_11 [i_2 - 3] [i_3] [i_2 - 3]) : (((arr_11 [i_2] [5] [i_2 - 2]) >> (arr_12 [i_2] [i_3] [i_2 - 3] [i_6])))));
                            }
                        }
                    }
                    var_16 = -1511607494;
                    arr_18 [i_4] [10] [i_3] [i_2 - 2] |= ((((-var_0 ? 1 : (((arr_8 [i_2] [1] [i_2]) ? -80 : 65535))))) ? var_2 : (((var_10 - 1) & (var_8 - var_1))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_23 [i_2 - 3] [i_2 - 3] [i_4] [1] [i_8] [i_7] [i_3] = (((((((65535 ? var_5 : 5930)) ^ var_9))) | ((((((arr_6 [i_7]) ? 132 : (arr_20 [i_2 + 1] [i_3] [i_4] [2])))) % var_4))));
                                arr_24 [i_2] [i_7] [i_7] [i_7] [i_7] = ((var_9 ? (((-4460211873299790074 == (((min(1, var_0))))))) : ((132 ? (var_7 - 0) : 246))));
                            }
                        }
                    }
                    arr_25 [i_4] [i_3] [i_2 + 1] [i_2 + 1] &= (arr_13 [i_4] [i_3] [i_4] [1]);
                }
            }
        }
    }
    var_17 = ((((((var_8 ? var_8 : var_9))) ? 1695568343 : var_6)) ^ ((((((var_5 ? var_1 : var_6))) ? ((max(var_1, var_6))) : (var_10 % 9065275758825161300)))));
    var_18 = ((var_6 ? var_10 : (((var_11 * 0) ? ((2316500876 ? var_9 : 0)) : (0 % -9640)))));
    #pragma endscop
}
