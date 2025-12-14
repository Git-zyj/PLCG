/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((((-2147483643 ? var_13 : 65535))))));
    var_19 = ((((!(!var_14))) || ((max((var_1 || var_0), (max(var_9, var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = 127;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [10] [3] [8] [i_3] [i_2] = (arr_0 [i_4] [i_1 + 1]);
                                var_21 ^= (((!1) ? (!var_5) : (arr_10 [8] [i_1 - 1] [i_1 - 3] [i_0] [8])));
                                var_22 = (~24);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 |= (((((((((arr_16 [i_6] [i_5] [i_2 + 3] [i_1 + 1] [i_0]) ? 18 : var_2))) ? (~var_15) : var_9))) ? (arr_7 [9]) : (min(4294967295, ((min((arr_9 [0] [1] [0]), var_3)))))));
                                var_24 = (((arr_3 [i_0]) * (arr_10 [i_2] [i_1] [i_2 + 2] [i_5] [13])));
                            }
                        }
                    }
                    var_25 = ((var_8 / (var_6 / var_16)));
                }
            }
        }
    }
    var_26 = (((min(var_1, (var_16 & 14)))) ? ((~((max(var_17, var_2))))) : var_16);
    #pragma endscop
}
