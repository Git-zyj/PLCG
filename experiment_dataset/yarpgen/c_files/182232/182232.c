/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max(((max((83 != 511), (var_14 || var_3)))), (((min(var_11, 24185))))));
    var_19 &= 9223372036854775807;
    var_20 = (-var_3 < var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((((max(32767, 9223372036854775807)) | 24157)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_4 - 1] [i_3] [i_0] [i_1] [i_0] = ((~(min((arr_13 [i_0 + 1] [i_1 - 1]), 1))));
                                var_22 |= (min((((((18275089133873883720 >> (18275089133873883727 - 18275089133873883702)))) ? (arr_6 [i_0 + 2]) : (max((arr_5 [i_1] [i_3]), 171654939835667906)))), 0));
                                var_23 += ((87 && var_16) ? -0 : (arr_14 [i_0] [i_0 - 1] [0] [i_2]));
                            }
                        }
                    }
                }
                arr_16 [0] [i_1 + 2] [6] |= (!var_9);
            }
        }
    }
    var_24 += min(((((max(var_1, var_17))) ? (max(var_3, var_14)) : (!1))), -var_3);
    #pragma endscop
}
