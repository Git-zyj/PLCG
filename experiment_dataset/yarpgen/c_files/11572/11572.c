/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max(1, 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((((((var_0 || 11) ? ((((arr_0 [i_0]) > (arr_1 [i_1] [i_0])))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 2])))) ? (arr_8 [i_0] [i_0 + 2] [i_2]) : ((((arr_0 [i_0]) + 7)))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_3] [i_0] [i_3] [i_3] = 1174231337;
                        var_18 = (min(var_18, (((155 ? ((48627 + (arr_0 [i_2]))) : ((min((arr_10 [i_1] [i_2] [i_0 - 1] [i_0 - 1] [i_2] [i_3]), (arr_10 [i_0 - 1] [i_3] [i_0 - 1] [i_2] [i_0] [i_2])))))))));

                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = (min(((((arr_5 [i_0] [i_0] [i_0]) - 24374))), (((arr_14 [i_0 + 3] [i_4 - 3] [i_4 - 2]) ? (arr_4 [i_4]) : 1961643179))));
                            var_19 = ((((arr_10 [i_0] [i_0] [12] [i_4 - 3] [i_4] [i_4]) & -169080079)));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] = 11599322514187556004;
                        }
                        var_20 = (((((((-169080079 & (arr_3 [i_0]))) & ((~(arr_4 [i_0])))))) ? var_8 : (max(16910, 1110192912))));
                    }
                    var_21 &= (min((((max(var_2, var_11)))), (((arr_15 [i_0] [i_0 + 2]) ? (arr_15 [i_2] [i_0 - 2]) : (arr_15 [i_0] [i_0 + 1])))));
                    arr_19 [14] [i_0] [i_0] [i_0] = (min((((arr_5 [i_2] [i_1] [i_0]) ? 6847421559521995612 : (((var_6 + (arr_16 [i_0] [i_1] [i_0] [i_1])))))), ((((arr_10 [i_0 + 1] [i_0] [i_2] [i_2] [i_1] [i_1]) || (945948137 & 18446744073709551615))))));
                }
            }
        }
        var_22 -= 11654727339412003661;
    }
    var_23 = ((((var_7 ? 2375245628 : 169080079))));
    #pragma endscop
}
