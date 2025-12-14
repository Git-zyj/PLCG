/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((((var_9 ? var_2 : var_7))) ? var_12 : var_11))));
    var_14 = (max(var_14, (~242)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 ^= (~var_9);
                arr_6 [i_0] [i_1] [i_1 + 1] = (max(var_4, ((((((!(arr_4 [i_1] [i_0])))) < (((!(arr_1 [10])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 -= ((42 ? 42 : 42));
                    var_17 = (255 ? (arr_9 [i_2 - 3]) : 1);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [10] [10] [i_3] [i_4] [1] [6] = ((var_2 / (((arr_5 [i_3] [i_4]) ? (~13) : var_5))));
                                var_18 |= (4222 >= 1);
                            }
                        }
                    }
                    var_19 = (max((arr_4 [i_2 + 2] [i_3]), (1 ^ 121)));
                }
            }
        }
    }
    #pragma endscop
}
