/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        var_11 = ((-(arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = arr_10 [i_2] [i_2] [13] [i_0];
                                arr_18 [i_4] = (max(var_8, (((min(var_10, var_3))))));
                                var_13 = ((var_5 * (arr_3 [i_4] [i_2])));
                                var_14 = (min(var_14, (((arr_2 [i_3]) << (((arr_2 [i_4]) - 10917841235523126669))))));
                                var_15 ^= ((-(((arr_0 [i_1 + 4] [i_1 - 1]) / (arr_0 [i_1 + 1] [5])))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_16 ^= var_2;
                        arr_21 [10] [10] [i_2] [10] [i_0] = (20 ? (max(var_6, 25)) : (max(53, ((-(arr_15 [i_5] [i_0] [i_1 + 4] [i_0] [i_0] [i_0]))))));
                        var_17 = (max(-var_9, (((~11208958938204230478) ? (!18311256891237057636) : (((arr_9 [i_0] [i_2] [i_1 - 1] [i_2]) ? 14 : (arr_2 [i_5 + 2])))))));
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_2] [i_6] [i_6] = (((~(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_18 -= (min((max((arr_12 [i_0] [i_0] [i_2]), (arr_15 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]))), (max((arr_5 [i_6] [i_0]), ((18446744073709551587 % (arr_17 [15] [i_6 - 1])))))));
                        arr_25 [i_6] [i_2] [i_6] = (~29);
                        arr_26 [i_0] [i_0] [i_6] [i_0] = (arr_12 [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
        arr_27 [i_0] |= max(var_6, ((max((!var_1), ((var_4 != (arr_17 [i_0] [i_0])))))));
    }
    var_19 = (max(var_19, 13984069522205891627));
    #pragma endscop
}
