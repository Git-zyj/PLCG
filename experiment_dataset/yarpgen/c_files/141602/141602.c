/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1 - 1] [i_1] [8] [16] &= ((~(((arr_5 [i_0] [i_2 + 1] [i_2 - 2]) ? (arr_5 [i_2] [i_2 + 1] [6]) : 27442))));
                    arr_8 [i_0] [12] = (max(27436, 108));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [6] [6] [i_0] = ((!((((arr_10 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0]) ? ((6845491258997775319 ? var_16 : var_8)) : (((1589959479 ? 5 : 50))))))));
                                arr_16 [i_0] [1] [i_2 - 2] = ((-10859119992180811588 ? 18446744073709551601 : (((((arr_4 [2] [i_3 + 1] [i_3] [2]) > (arr_4 [16] [i_3 + 2] [14] [16])))))));
                                arr_17 [2] [i_1] [2] [i_3] [i_3] [i_4] = ((~(!1)));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_17 * (((arr_1 [i_0] [i_1 - 1]) / -var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((-1373665058682940381 ? var_9 : 1660757931)) >> (var_7 - 958137231351349844));
    #pragma endscop
}
