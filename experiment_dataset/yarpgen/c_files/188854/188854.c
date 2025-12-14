/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 1032192;
    var_12 = (var_4 % var_8);
    var_13 = (min(var_13, (1032192 & var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 -= ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_3 - 3712681577))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_15 = (min(var_15, var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((var_4 ? (((((var_5 ? 4294967295 : var_6)) + (0 % var_2)))) : (((arr_9 [1] [i_1] [i_2] [i_4] [i_4] [8] [i_0]) ? (arr_2 [8] [12] [8]) : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]))))))));
                                arr_12 [8] [i_2] [i_4] [i_4] [i_4] |= 8589934591;
                            }
                        }
                    }
                    var_17 = min(var_9, 4293935103);
                }
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_18 = 1032192;
                                var_19 += var_9;
                                arr_19 [i_0] [i_0] [i_5] [i_6 + 1] = ((-1032192 - (var_7 <= -47)));
                            }
                        }
                    }
                    var_20 = (max(var_20, 255));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_21 = (min(var_21, 4294967295));
                    var_22 = var_2;
                    var_23 = var_2;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_27 [i_1 + 1] [i_0] = ((arr_14 [i_0] [i_8] [i_9]) ? ((4293935103 * (arr_17 [i_0] [i_0] [i_8] [i_0] [i_8] [i_0]))) : ((((((var_0 ? var_5 : 1032192))) ? var_2 : 4293935103))));
                                arr_28 [i_1] [i_1] [i_1] [i_1] [i_0] = ((4293935103 << (4293935103 - 4293935087)));
                                var_24 -= ((((!0) == (((var_9 + 9223372036854775807) << (var_4 - 3069430708))))));
                                var_25 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((var_4 && (~var_3))));
    #pragma endscop
}
