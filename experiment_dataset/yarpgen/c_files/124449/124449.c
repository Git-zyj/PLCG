/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, 3968));
                    var_18 *= (max((arr_3 [i_0 - 1] [i_2]), (arr_4 [i_1] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 *= ((((arr_9 [i_0 - 1] [i_1] [i_1 - 1] [i_3]) ^ var_11)));
                                var_20 = (arr_4 [i_0 + 1] [i_1 - 1] [i_1 - 1]);
                                arr_11 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2] = var_12;
                                arr_12 [i_2] [i_3 - 3] [8] [i_2] [i_2] [i_2] = (max(15111372861359983061, (18446744073709551615 >= 56)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 *= (min(var_4, var_9));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_22 *= ((!(arr_15 [i_5])));
                arr_18 [2] [7] &= var_10;
                arr_19 [3] = var_11;
            }
        }
    }
    var_23 *= var_5;
    #pragma endscop
}
