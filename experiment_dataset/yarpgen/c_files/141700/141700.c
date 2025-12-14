/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 + 2] [1] = (arr_4 [i_2] [1] [i_0]);
                    var_11 = ((((-32766 ? (min((arr_4 [i_2] [10] [10]), (arr_4 [4] [i_1 - 2] [i_1 - 2]))) : ((var_9 ? (arr_4 [i_0] [i_1 + 1] [i_1 + 1]) : -1264099649)))) / var_9));
                    var_12 -= (((((max(-874510919, -25202)) < ((((arr_4 [i_0] [i_1] [i_2]) || 4336978887471522978))))) ? var_3 : ((((min(18183584455846140342, var_0))) ? (arr_0 [i_0] [i_1 - 2]) : var_8))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1 - 2] [i_1 - 2] &= ((max((arr_0 [i_1 + 2] [i_3]), (arr_0 [i_1 - 1] [i_3]))));
                    arr_11 [i_0] [i_0] [i_0] = ((!(((((min(var_5, var_6))) ? var_3 : 0)))));
                    arr_12 [i_3] [i_1] [i_1] [i_0] |= (min(-25618, (arr_3 [i_0])));
                    var_13 = (max(((((1 ? 25201 : (arr_6 [i_0] [i_1] [2] [i_1]))))), ((((((arr_6 [i_1] [i_1] [i_1] [i_0]) ^ (arr_1 [10])))) ? (min(var_9, (arr_2 [i_0] [3]))) : (~6147)))));
                    var_14 ^= (((arr_3 [i_0]) ? (((arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (min(var_6, (arr_2 [i_0] [i_3]))) : -4753623394754907919)) : var_3));
                }
                var_15 -= 6147;
            }
        }
    }
    var_16 = (max(var_16, ((((min(var_6, -24752)))))));
    var_17 = (max(var_17, (~14109765186238028632)));
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            arr_26 [i_4] [1] [i_6] [i_7] [i_8] = (min((((arr_23 [i_4 - 4] [i_4] [i_6] [i_5]) ? (arr_16 [i_4]) : (arr_23 [i_5] [i_4] [i_7] [i_8]))), (arr_16 [i_4])));
                            var_18 = (min(var_18, (arr_18 [i_8] [i_6])));
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_8] = -6154;
                            arr_28 [i_8] [0] [i_6] [10] [10] [i_8] [i_8] |= ((-(((arr_17 [i_4] [i_8]) | var_0))));
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 19;i_9 += 1)
                        {
                            var_19 |= (arr_30 [i_4]);
                            var_20 = var_1;
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            arr_35 [i_4] [3] [15] = (~var_7);
                            arr_36 [i_4] [i_7] = (((arr_16 [i_4]) & (arr_22 [i_4] [i_5] [i_6] [i_5] [i_10 + 2] [i_4])));
                            var_21 = (max(var_21, (((((((arr_25 [9] [i_5] [i_6] [i_7] [i_10 - 1]) + var_1))) && (arr_31 [i_4] [i_5] [i_6] [i_5] [i_10 + 3]))))));
                            var_22 = (min(var_22, ((((-115218184 % 18183584455846140343) > (arr_18 [i_5] [i_10 - 2]))))));
                        }
                        var_23 = (max(var_23, ((min((arr_17 [i_4 - 3] [i_5]), (((((arr_30 [16]) >= (arr_17 [10] [i_5]))))))))));
                    }
                    arr_37 [i_4] [i_4] = (((arr_30 [i_4 + 2]) | 14109765186238028634));
                }
            }
        }
    }
    #pragma endscop
}
