/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min(var_0, var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                    arr_11 [i_0] [3] = (arr_6 [10] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((min((max(((min((arr_14 [i_2] [i_0] [i_2] [i_0] [i_0]), 448689396044300678))), 18446744073709551615)), (((!(arr_15 [i_1 + 1] [i_2] [4] [i_4 + 3] [i_4 - 1])))))))));
                                var_19 = (max(var_19, ((max(4294967295, 17)))));
                                var_20 = ((~(arr_7 [i_0] [i_0])));
                                arr_17 [i_1] [i_4] [i_2] [i_2] [8] [i_4] [i_0] = ((!((((!(arr_13 [i_2]))) && (arr_2 [i_1 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 ^= (((!422116079) ? (arr_0 [i_0]) : ((133 ? ((min(22283, 32526))) : 127))));
                                var_22 = ((~((~(arr_4 [i_1 - 1] [i_1 + 1] [4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
