/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] |= (1 || 21421);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 |= 81;
                        arr_11 [i_0] [i_0] [1] [i_0] [4] = (((((max(101, (arr_5 [i_1]))))) == (max((((var_10 << (((arr_10 [i_3] [i_3] [2]) + 29321))))), (min(var_14, (arr_6 [7] [i_0])))))));
                        var_18 = (~var_15);
                    }
                }
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    var_19 = (arr_7 [i_0] [i_1] [i_4 + 2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] = (var_13 <= -2047);
                                arr_20 [i_0] [i_0] [i_4] [i_4] [10] |= ((((max(var_7, (!var_16)))) ? (((var_10 || 1) ? ((1 ? var_16 : 81)) : (!var_9))) : var_15));
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    var_20 |= var_11;
                    var_21 -= 1;
                    var_22 = (7492 < 28);
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_23 = (((!var_16) < var_5));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_24 = (((~18446744073709551615) << (((var_8 & -81) - 1017922133))));
                        arr_27 [i_8] = (((var_9 << (((((arr_13 [i_1] [i_8]) + 1459950830659152993)) - 15)))));
                        var_25 -= (arr_23 [i_0] [i_0]);
                        arr_28 [i_8] = ((((((arr_13 [i_0] [i_1]) ? var_16 : ((min(var_6, var_13)))))) + (max(-1, (min(-18214, var_7))))));
                    }
                }
                var_26 = (min((-32767 - 1), -1763751340743653501));
            }
        }
    }
    var_27 = ((var_4 ? var_0 : (max(((18 >> (227 - 227))), var_4))));
    #pragma endscop
}
