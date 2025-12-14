/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_13 ? (((((16383 ? var_5 : var_9))) ? (-13363 ^ 0) : (((0 ? var_5 : var_13))))) : (max(-22665, var_0)));
    var_16 = ((-13363 ? (!4294967295) : ((11315 ? var_4 : 9223372036854775807))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] &= var_1;
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = (((((-(((arr_12 [i_0] [i_2] [i_3]) ? (arr_4 [i_4] [i_1]) : -9223372036854775807))))) ? ((-11315 ? (arr_7 [17] [i_2 - 1] [i_4]) : var_8)) : ((max(((var_14 ? (arr_8 [7] [i_2] [i_3]) : (arr_9 [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_4]))), var_12)))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [8] [i_1] = ((-((31709 ? 1407858641 : (((var_5 ? 33827 : 0)))))));
                var_17 = (((((((144115187807420416 ? (arr_3 [i_0] [12] [i_0]) : -1540009725)) << (var_0 - 18297)))) ? (((8481 ? (~var_0) : (~13359)))) : ((0 ? (~-7504559954546922225) : ((11323 ? 626198272 : -5280932506131649744))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] [i_6] = (((~(arr_10 [i_0] [0] [i_6] [i_0] [i_1]))));
                            arr_21 [i_6] [i_6] [i_1] = ((((((arr_18 [i_0] [i_1] [i_5] [i_6]) ? (var_13 && -5280932506131649741) : ((var_10 ? -4 : 4))))) ? (min((min((arr_5 [i_0] [16] [7]), 4095)), ((((arr_17 [i_6] [i_5] [i_1] [i_0]) ? var_7 : 13362))))) : ((((!-4) ? var_14 : (var_14 / -28135))))));
                            arr_22 [i_0] |= 50;
                            arr_23 [i_0] [i_1] [i_5] [i_6] [i_6] [i_1] = ((((arr_11 [i_0] [9] [i_5] [i_6] [i_6]) ? ((-(arr_1 [i_5]))) : 813338084)));
                        }
                    }
                }
                arr_24 [i_0] [21] [i_1] = ((~(((((-2 ? (arr_12 [i_0] [i_0] [i_0]) : var_11))) ? (arr_7 [i_1] [i_0] [i_0]) : (arr_8 [i_1] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
