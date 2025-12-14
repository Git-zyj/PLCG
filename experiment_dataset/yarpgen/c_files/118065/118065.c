/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 + ((((65535 | -1) / (var_7 - 0))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 |= ((45 ? (arr_0 [i_0] [14]) : (((arr_1 [14] [14]) * (arr_1 [6] [6])))));
        arr_2 [i_0] = 2147483634;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 = arr_7 [i_0] [i_0];
                                var_23 = (max(var_23, ((min(((((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_8 [i_1]) : (arr_3 [i_4]))) == (min((arr_5 [i_0] [i_0]), (arr_6 [15] [i_1] [i_4])))))), ((~(arr_0 [i_2] [i_2]))))))));
                                var_24 = (max(var_24, ((max((((6447480283734995880 > (arr_6 [i_2 + 2] [i_3] [i_4 - 1])))), (arr_6 [i_2 + 1] [i_2 + 1] [i_4 + 4]))))));
                                var_25 |= ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) >= -970891970)));
                            }
                        }
                    }
                    var_26 = (max(var_26, ((((((((~(arr_11 [i_0] [16] [i_1] [i_2])))) / (min(4294967280, 2148340167)))) | (max((arr_9 [i_2] [10] [i_2 + 2] [i_2] [i_2] [4]), (arr_5 [i_0] [i_1]))))))));
                    var_27 = ((((min((arr_5 [8] [8]), (arr_7 [12] [i_0]))) < (arr_13 [12] [i_0] [i_2 + 1] [i_2]))));
                    arr_14 [i_0] [i_1] [i_0] = ((max(((-(arr_4 [i_0])), (max((-2147483647 - 1), (-2147483647 - 1)))))));
                }
            }
        }
    }
    #pragma endscop
}
