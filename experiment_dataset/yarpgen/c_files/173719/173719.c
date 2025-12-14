/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 *= (((((29 < (arr_3 [i_1])))) <= 113));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((-(max(((max(var_8, var_7))), (((arr_12 [i_0] [i_3] [16] [2] [16]) ? (arr_7 [i_0] [i_2] [17] [i_4]) : 5085131089823092741)))))))));
                                arr_14 [i_0] [16] = ((((min(((-103 ? (arr_3 [i_0]) : var_9)), 7839295087806814696))) || (arr_7 [10] [18] [10] [17])));
                                var_13 = var_3;
                                arr_15 [7] [4] [5] [i_0] [i_4] [i_4] = (max(43567, (-43 < 124)));
                                arr_16 [16] [16] [11] [4] [16] [i_0] = (min(((((arr_0 [1] [0]) <= (((min(119, (arr_8 [i_0])))))))), var_0));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_14 = (arr_4 [i_0] [6] [i_1]);
                        var_15 = (arr_7 [i_0] [1] [i_2] [i_5]);
                        arr_19 [i_0] [i_0] [1] [i_1] |= (111 * 3447164900);
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_16 *= ((!(arr_13 [12] [0] [0] [i_6] [16] [i_1] [i_1])));
                        arr_23 [i_0] [i_1] [i_2] [9] = ((((var_8 <= (arr_1 [i_2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] = 21970;
                                var_17 ^= (min(13547973473474508796, (((0 ? (arr_17 [i_1] [i_1] [i_1]) : (min(9, -32759)))))));
                                arr_30 [i_0] [7] [1] [1] [10] [15] = -9223372036854775798;
                            }
                        }
                    }
                    var_18 += ((var_3 ? ((max((arr_17 [i_1] [0] [i_2]), (arr_17 [i_1] [i_1] [i_1])))) : (12345673049114843865 / var_7)));
                }
            }
        }
    }
    #pragma endscop
}
