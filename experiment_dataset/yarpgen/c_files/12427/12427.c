/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((((var_3 ? var_7 : 18))) ? var_10 : ((18446744073709551590 ? var_6 : 30006))))) ? ((((var_2 ? var_9 : var_6)) - var_8)) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_1 - 1] [i_2] = ((((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))) ? (arr_0 [i_1 + 1]) : (((arr_0 [i_1 + 1]) ? 735146856 : (arr_0 [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2 - 3] [i_2 - 3] [i_4] = (arr_0 [i_2]);
                                var_12 += ((((((arr_9 [i_0] [i_0] [i_3 + 2] [i_0]) ^ var_9))) ? -6442429831096986755 : var_7));
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [0] [5] [i_4] = 69;
                                var_13 = (((arr_10 [i_1 + 1] [i_1] [i_2 + 1] [i_3]) & 29998));
                                var_14 = (max(var_14, var_3));
                            }
                        }
                    }
                    var_15 = (~var_1);
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_16 *= ((-(((arr_8 [i_1 + 1] [i_1 + 1] [i_5] [i_1 + 1]) ? (arr_8 [i_1 + 1] [13] [7] [i_1 + 1]) : (arr_8 [i_1 + 1] [i_1 + 1] [i_5] [i_5])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [13] [i_0] = (min((((((max(-26575, 11))) ? 0 : (((arr_8 [i_7 - 2] [i_6] [i_1] [8]) + 51535))))), 169435201932517853));
                                var_17 |= ((var_8 ? (((arr_14 [i_0] [i_0 - 1] [i_0 + 1]) ? var_0 : var_3)) : (((((-26575 ? (arr_0 [7]) : var_1)))))));
                                var_18 *= arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [6] [i_0 + 1] [i_0];
                                var_19 = ((-0 ? ((max(17637, 51535))) : -12500));
                            }
                        }
                    }
                }
                var_20 = -6;
            }
        }
    }
    #pragma endscop
}
