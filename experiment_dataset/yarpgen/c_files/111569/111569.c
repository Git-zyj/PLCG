/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((var_0 ? (((18446744073709551615 ? 2035060641 : -25871))) : (var_15 & var_9)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 += (18446744073709551615 && -148114958744731270);
                                arr_13 [i_4] [i_3 + 1] [i_2] = (((((1484608510 || 0) ? (16 | 18446744073709551615) : var_9)) / ((((((max(var_6, 0))) && (4680150109297687557 ^ 6)))))));
                                arr_14 [i_0] [2] [i_2] [11] [i_4] [i_2] [i_3 - 1] = ((var_8 & ((var_2 ? 0 : var_11))));
                                arr_15 [i_2] [i_1] [i_2] [i_3 + 1] [i_4] = ((((-538294335844531988 ? 238 : -1778536412))));
                                arr_16 [2] [i_1 + 4] [i_0] = (var_7 - -2503367011);
                            }
                        }
                    }
                }
                arr_17 [9] [i_1] [i_1] = 1778536419;
            }
        }
    }
    var_17 = var_11;
    var_18 += 17076651501564304604;
    var_19 |= var_11;
    #pragma endscop
}
