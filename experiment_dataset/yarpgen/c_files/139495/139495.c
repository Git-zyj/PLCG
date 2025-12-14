/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 <= (((var_14 ? var_8 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 *= (1 < 1);
                var_17 = ((441634192 << (!230)));
                var_18 = (min(((1 ? 10872974336245443281 : 1)), 1039497337));
                var_19 -= (~var_3);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 |= ((((((min(0, (arr_4 [i_0])))) ? (arr_2 [i_0 - 1] [i_1]) : (arr_11 [i_0] [10]))) * ((min((((arr_10 [13] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [12]) ? var_2 : (arr_9 [i_0] [11] [i_2] [i_3] [i_4 + 1]))), (arr_8 [i_0] [i_0] [7] [i_0] [i_0 - 2] [i_0 - 2]))))));
                                var_21 = ((((min(1, var_8)))));
                                var_22 = (((((((94 >> (arr_3 [i_4])))) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [1] [i_0]) : var_13)) >> (((min(((var_4 ^ (arr_1 [i_2]))), (((arr_5 [i_0] [i_1]) ? 0 : var_1)))) + 1004008412))));
                                var_23 = ((((min(1, 7))) - (((arr_2 [i_1 + 2] [i_4 + 1]) ? ((min((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]), var_12))) : 819656933))));
                                var_24 = ((((((arr_9 [i_0 - 2] [i_1] [i_1] [i_3] [i_4 + 1]) > (arr_0 [i_3]))) ? (((max(-41, 1)))) : (max(874805812, 233)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (!var_14);
    #pragma endscop
}
