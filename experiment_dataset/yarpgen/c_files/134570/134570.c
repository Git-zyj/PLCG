/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_10 -= (((((var_9 ? (((arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] [i_3 - 1]) ? 1 : 1)) : ((max((arr_5 [i_0]), (arr_1 [i_0]))))))) - ((((max(193, var_8))) ? (max(1, var_4)) : 1))));
                                var_11 = (max(var_11, (((((max(((((arr_12 [8] [i_1] [i_1] [i_2] [i_2] [i_3] [i_4]) ? (arr_3 [i_3 - 1] [i_2 + 1] [i_1 + 3]) : var_2))), ((1 ? var_2 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((1 != (arr_1 [1])))) : ((1 ? 1 : (arr_2 [i_0] [i_0] [2]))))))));
                                arr_14 [0] &= (arr_1 [9]);
                            }
                        }
                    }
                    var_12 = (((21856 * 1) ? (max((arr_9 [i_0] [i_1] [i_2] [i_2]), ((76 ? 0 : 1)))) : 1));
                }
            }
        }
    }
    var_13 &= ((!((max(14, 1)))));
    var_14 = 127;
    var_15 = (min((((var_2 ? 15544 : ((var_9 ? (-2147483647 - 1) : var_6))))), -1662476713762656170));
    #pragma endscop
}
