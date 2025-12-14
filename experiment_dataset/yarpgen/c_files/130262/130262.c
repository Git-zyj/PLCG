/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!916756515);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= ((var_0 ? (1145824598 - -16) : (min((arr_7 [i_1 + 2] [2]), 6707))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_0] = (((var_4 == var_5) ? ((((18446744073709551614 + -4871379966556946682) ? (arr_2 [i_0 + 3]) : var_7))) : (((((-22 ? -18 : 5854223536339966185))) ? var_16 : 16376))));
                                var_20 = ((var_9 ? 88 : (((((-14 ? var_11 : var_17)) < (((((arr_0 [i_1]) < (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4]))))))))));
                                var_21 = (arr_7 [i_0] [i_1]);
                            }
                        }
                    }
                    arr_15 [7] [i_0] = (((((((arr_3 [i_0 + 2]) + 2147483647)) >> (((arr_3 [i_0 + 4]) + 18292))))) ? (~var_4) : (arr_3 [i_1 + 1]));
                    var_22 = (max(var_22, (arr_2 [i_2])));
                    arr_16 [i_0] = -var_15;
                }
            }
        }
    }
    #pragma endscop
}
