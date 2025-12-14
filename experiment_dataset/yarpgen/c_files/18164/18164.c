/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_12 &= min((arr_4 [i_2] [10] [4]), (((((2187192991 ? 2107774304 : 4294967292))) ? var_6 : (max(var_9, 2377136360)))));
                    arr_6 [i_0 + 2] [i_0 + 2] [i_2] [i_1] = max(((((arr_2 [17]) || var_5))), (min((arr_4 [i_1] [i_1 - 2] [i_1 + 1]), (arr_4 [i_1] [i_1 - 3] [i_1 - 2]))));
                    var_13 = (arr_5 [i_0] [i_2 + 2] [i_2] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_14 *= (((((2187193017 % (arr_8 [i_0 + 1] [8] [i_0])))) ? (((!(arr_8 [i_0] [10] [i_0])))) : ((((arr_4 [i_0] [0] [i_3]) || var_6)))));
                    var_15 = (arr_4 [i_3] [i_1] [i_3]);
                    var_16 = (1301015414 || 2107774305);
                    var_17 = ((arr_8 [i_0] [i_3] [i_3]) ? (((arr_1 [i_0]) / 4233102496362221883)) : (arr_7 [i_0 - 1] [i_1] [i_3]));
                    var_18 = ((~(arr_1 [i_1])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_19 -= (((arr_8 [i_1 - 3] [i_4] [i_1 + 1]) ? ((-(arr_10 [i_1] [i_1 - 1] [4] [i_1 - 1]))) : (arr_2 [i_0 - 3])));
                    var_20 += (2107774310 ? ((~(arr_8 [i_0] [i_4] [2]))) : (var_11 <= 4294967281));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_21 = (((max((arr_16 [i_6 - 2] [i_6 - 3] [i_6 - 1] [i_6 + 1]), var_0))) / (max(1393013894, (max(233070289, 1008806316530991104)))));
                            var_22 = (10 ? 18446744073709551597 : 4294967295);
                            var_23 = ((arr_14 [i_1 + 1] [i_6 - 1] [i_0 - 1]) ? (min((arr_1 [i_6 + 1]), var_1)) : (arr_14 [i_1 - 2] [i_6 - 3] [i_0 + 2]));
                            arr_18 [i_6] [i_1] [i_1 + 4] [i_1] = max(42730408, 3618325156);
                            var_24 *= ((arr_4 [13] [i_5] [6]) ? var_0 : ((~(arr_13 [i_6]))));
                        }
                    }
                }
                var_25 = (~var_2);
                var_26 *= ((arr_16 [i_0] [i_0] [i_0] [i_0]) - ((((var_8 ? (arr_11 [0]) : var_5)) ^ (max((arr_11 [i_0]), var_0)))));
            }
        }
    }
    var_27 = var_4;
    #pragma endscop
}
