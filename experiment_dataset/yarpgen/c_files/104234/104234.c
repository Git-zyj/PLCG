/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_10 = (((arr_5 [i_0]) ? (arr_5 [i_3]) : ((((arr_5 [i_1]) || (arr_5 [i_1]))))));

                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_11 += (arr_12 [i_0] [i_0] [i_0] [16] [i_0]);
                                var_12 = (min(var_12, (-2147483647 - 1)));
                                var_13 = (min(var_13, (((~(((arr_13 [i_4] [i_3] [i_3] [7] [i_1] [1]) << (var_8 - 39499))))))));
                            }
                            var_14 = (max(var_14, ((((min(((min((arr_4 [i_3] [i_2]), var_1))), ((var_3 ? var_6 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (arr_7 [i_0] [i_0] [i_1] [i_0]))))));
                            var_15 = (max(var_15, (((!(arr_8 [i_1]))))));
                            var_16 = (i_2 % 2 == zero) ? ((((((arr_6 [i_2] [i_2] [i_0]) + 9223372036854775807)) << (((((min((min(var_3, (arr_8 [i_2]))), ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_2]) < (arr_5 [i_0])))))) + 125)) - 17))))) : ((((((arr_6 [i_2] [i_2] [i_0]) + 9223372036854775807)) << (((((((min((min(var_3, (arr_8 [i_2]))), ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_2]) < (arr_5 [i_0])))))) + 125)) - 17)) - 44)))));
                        }
                    }
                }
                var_17 = (min((arr_2 [i_0]), (min((arr_7 [i_0] [i_0] [i_0] [i_1]), (max((arr_3 [i_1]), (arr_9 [16] [i_1])))))));
                var_18 = (max((min(((((arr_9 [i_0] [i_1]) > (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [1] [i_1])))), (arr_3 [i_1]))), ((((var_0 * 166) || ((max((arr_13 [i_1] [16] [11] [i_0] [11] [i_0]), 34344))))))));
                arr_14 [i_1] [i_0] = ((!(arr_2 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 ^= (min((((-2147483647 - 1) ? (((arr_7 [i_5] [i_5] [i_5] [i_5]) * (arr_19 [8]))) : (~-21003))), ((max(((((arr_18 [i_5] [i_7]) != var_0))), (arr_11 [i_6] [i_6] [i_6] [i_6] [4] [i_5] [i_5]))))));
                    arr_22 [i_6] [i_7] = (arr_9 [i_6] [i_7]);
                }
            }
        }
    }
    var_20 = (max(var_20, ((max((min(var_4, (max(var_1, var_3)))), (((var_9 ^ ((min(var_4, var_4)))))))))));
    #pragma endscop
}
