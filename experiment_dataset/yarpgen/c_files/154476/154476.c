/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 = (!0);
        var_14 = ((-(arr_1 [i_0 - 3] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = -var_9;
        var_15 = (min(var_15, (((var_6 / ((0 ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))))));
        var_16 = (0 % 17278);
    }
    var_17 ^= ((((min(((min(var_10, -19))), 2316177264))) ? var_9 : ((min(((1 ? 23053 : 17278)), (200 * var_6))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 ^= ((0 + (arr_4 [i_2] [i_2])));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((var_7 | (arr_12 [6] [6] [i_2] [i_6]))) - -1)))));
                                arr_18 [i_3] [i_3] [8] [8] = ((~(min(var_11, (~-13639)))));
                                var_20 = 0;
                            }
                        }
                    }
                    var_21 = (min((arr_8 [i_2] [i_4]), (-329179852 || -1)));
                }
            }
        }
    }
    var_22 = ((+((max((!var_8), var_2)))));
    #pragma endscop
}
