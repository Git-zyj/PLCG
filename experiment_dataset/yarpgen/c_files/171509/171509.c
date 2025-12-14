/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = var_9;
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (-428003208 / 13);

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (((((((max((arr_9 [i_3] [1] [i_2] [1] [i_1]), 428003236))) && (arr_0 [i_0])))) << (428003220 - 428003209)));
                        var_20 = (min(var_20, ((max((arr_9 [i_1] [6] [i_2] [2] [8]), ((((arr_9 [i_2] [i_1] [i_3 - 1] [i_3 - 1] [i_2]) || (arr_2 [i_0])))))))));
                        arr_11 [i_0] [i_3] = (max(((((arr_7 [i_0] [i_1] [i_2] [i_3]) >= (arr_0 [i_3 - 1])))), (arr_9 [i_3] [3] [3] [i_3] [9])));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_21 = (~-6685);
                        var_22 = (arr_13 [i_4] [9]);
                        arr_15 [i_4] [i_2] [0] [i_1] [i_4] = (((2168601524 && 8658826941397656756) || (arr_9 [i_4] [i_4 + 1] [i_4 + 1] [i_2 - 1] [i_4])));
                        arr_16 [i_4] [2] [i_2] [i_2] = ((424838049 / (-2147483647 - 1)));
                        var_23 &= (-16384 & -17198);
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_24 = ((((arr_19 [i_2 - 1] [10] [i_5 + 2]) * ((((arr_5 [i_0] [i_1] [i_2]) >= (arr_1 [i_0])))))));
                        var_25 &= 0;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_24 [1] [i_6] [i_6] [i_6] [i_5] = max((max((arr_20 [i_6] [i_5 - 1] [i_1] [i_1] [i_1] [i_0]), ((((arr_8 [i_0] [10] [i_2] [i_5 + 2]) <= 89))))), (arr_17 [i_0] [i_0] [i_5] [i_5]));
                            arr_25 [i_0] [i_1] [7] [i_5] [i_5] = (((arr_5 [i_1] [i_5 - 1] [i_2 - 4]) | (arr_12 [i_0] [i_1] [i_2] [i_5] [3])));
                            var_26 = (max(var_26, (arr_3 [6])));
                        }
                        arr_26 [i_0] [0] [i_2] [i_2] [4] &= ((16 ^ (arr_6 [i_0] [2])));
                    }
                    var_27 = (-32767 - 1);
                }
            }
        }
    }
    #pragma endscop
}
