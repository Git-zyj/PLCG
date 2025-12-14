/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (!13);

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((((-(arr_8 [22] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 + 1]))) - (((arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) + (arr_8 [3] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 1]))))))));
                        var_19 = (max(var_19, (((+((((((arr_6 [16] [i_0]) ? 30720 : (arr_6 [i_0] [14])))) ? (((-58387893277386767 || (arr_0 [i_2])))) : (((4294967282 || (arr_4 [i_0] [i_1] [i_2])))))))))));
                        arr_9 [i_0] = ((~(min(-30740, (arr_7 [i_0])))));
                        var_20 = ((((2047 == 33554431) == 223965457)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = (((arr_5 [i_0]) / (arr_4 [i_2] [i_2] [i_2])));
                        var_22 = 24576;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_23 -= ((~(arr_12 [i_0] [i_1] [i_0] [1])));
                            var_24 -= (arr_10 [20] [i_2] [i_2] [i_2]);
                        }
                    }
                    var_25 = ((((576460752269869056 ? (arr_0 [i_1]) : ((~(arr_8 [i_0] [i_0] [i_2] [i_0] [i_1]))))) / ((((arr_7 [i_2]) ? 1 : (((arr_2 [i_1]) ? (arr_7 [i_1]) : (arr_6 [i_0] [i_0]))))))));
                    var_26 = ((+(max((arr_2 [10]), 13))));
                }
            }
        }
    }
    var_27 -= (var_7 * -var_2);
    var_28 = -var_11;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            {
                var_29 = (((~9223372036854775807) == ((-((16 ? (arr_16 [9] [i_6]) : 3338429510457769595))))));
                var_30 -= (max(1, -33554435));
                arr_21 [i_6] = ((~((((arr_14 [i_6] [i_6] [i_6] [i_7 + 2] [i_7 + 2] [i_6] [i_7 - 1]) || (arr_12 [i_6] [i_7 - 1] [i_7 - 1] [i_7]))))));
            }
        }
    }
    #pragma endscop
}
