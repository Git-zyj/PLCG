/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = (((max(((max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_1] [i_1] [i_1])))), 18446744073709551615)) * (arr_11 [i_4] [i_1] [i_1] [i_0] [i_0 + 2])));
                                var_19 = (min((max(var_13, (arr_7 [i_0] [i_0] [i_0] [i_0]))), ((max((arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_0]), (arr_6 [7] [7] [i_1] [i_4]))))));
                                var_20 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = (arr_0 [i_0]);
                                arr_18 [i_0] [0] [i_2] [i_0] [i_1] [0] [i_0] = 1617618127;
                                var_22 = ((!((max((arr_12 [i_0 + 1] [i_1] [i_2] [i_5] [i_6]), ((((arr_10 [6] [i_1] [9] [i_1] [i_1]) && (-9223372036854775807 - 1)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_17;
    var_24 = 1;
    var_25 = var_15;
    var_26 = (((((((23 ? 1 : var_16)) > ((min(34691, 27581)))))) > var_7));
    #pragma endscop
}
