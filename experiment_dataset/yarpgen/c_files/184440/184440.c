/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_0] = (min(var_4, ((max(139, 1)))));
                                var_11 = (((min((arr_10 [i_2] [i_1] [i_1] [i_4] [i_4 + 2]), (arr_10 [i_2] [i_2] [11] [i_0] [i_4 - 2])))) ? (((arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3] [i_4 + 1]) ? var_7 : (arr_11 [i_3 - 1] [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 2]))) : (((var_5 / (arr_10 [i_2] [i_1] [i_2] [12] [i_4 + 3])))));
                                var_12 = (min(var_12, ((min((((arr_8 [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_4] [18]) ? (arr_10 [i_1] [i_4 + 4] [i_1] [i_4 + 4] [i_4]) : (arr_11 [i_4] [i_4 + 4] [i_4] [i_4 + 4] [i_4 - 1]))), (((arr_8 [i_4] [i_4 + 4] [i_4] [i_4 + 4] [i_4 + 4] [i_4]) ? (arr_11 [i_4] [i_4 + 4] [i_4] [i_4 + 4] [i_4 + 4]) : (arr_11 [i_4] [i_4 + 4] [i_4 - 1] [i_4 + 4] [1]))))))));
                                var_13 ^= min((min(9223372036854775807, 159)), var_3);
                                var_14 = (((min(549754765312, 18446743523954786277)) < ((((arr_4 [i_3 - 1] [i_4 + 4] [i_4 + 2]) ? (max(var_7, var_1)) : (!70))))));
                            }
                        }
                    }
                }
                var_15 = (max(((-1596760187372392875 ? 18446743523954786295 : 9)), (((((13 ? -2147483634 : var_10)) * 0)))));
                var_16 = ((!(arr_6 [i_1] [8] [i_1] [i_0])));
            }
        }
    }
    var_17 = var_2;
    var_18 |= (max((var_10 * var_3), var_4));
    var_19 = ((~((max((!var_6), var_1)))));
    var_20 = (max(var_8, var_0));
    #pragma endscop
}
