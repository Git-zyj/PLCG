/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 17189;
        var_14 = ((var_13 ? 17198 : (max(0, 1104245437))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_15 ^= (1104245452 != (max((8688400663239947809 == 17189), -7661427779748486240)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_15 [i_3] [i_1] [9] [i_1] = (((((var_12 < 17160) ? 113 : 8321276677687790909))) ? (((arr_14 [i_1] [i_2] [i_3]) ? (arr_9 [i_1] [i_1] [i_3]) : ((3869718485363609267 ? var_12 : var_11)))) : (min(((var_7 ? (arr_10 [i_3] [10] [i_3]) : (-32767 - 1))), (((var_10 < (arr_2 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_4] [i_4] [i_4] [i_4] [17] [i_4] = (max(((2281025806487293019 * (arr_0 [i_3]))), ((((arr_17 [i_1] [i_1] [13] [i_4]) ? (((min(1, var_11)))) : (-3869718485363609275 + 181))))));
                                var_16 = arr_9 [12] [i_4 - 3] [i_5];
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (3869718485363609267 && 7661427779748486241);
    var_18 = ((var_8 ? (min(((((-2147483647 - 1) ? 1 : 181))), (var_3 % var_2))) : (!1)));
    #pragma endscop
}
