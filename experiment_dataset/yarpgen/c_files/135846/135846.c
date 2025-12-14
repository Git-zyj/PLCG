/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (var_3 || -var_11);
    var_13 = ((((min((!-1801075974228798972), 14))) || var_0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_14 = (max(var_14, (((1 ^ (var_3 || -2015385902))))));
                        arr_11 [i_0] [18] [i_2 + 1] [i_2 + 1] [i_2 + 1] [18] = (220 || 1);

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_15 *= 11860539191476647888;
                            arr_14 [i_0] = (214 && 1);
                            var_16 ^= (((arr_4 [0] [i_3] [i_2 - 2] [i_0 + 1]) + 1));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [11] [i_3] [i_4] = 0;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_17 = (max(var_17, (((((arr_6 [i_0] [2] [22] [i_5]) || (arr_7 [20] [i_0 - 2] [i_0])))))));
                            var_18 &= (arr_5 [i_0] [i_1] [i_2 - 2]);
                            arr_18 [i_0] [i_3] [i_0 - 1] [i_1] [i_0] = ((-896457842 ? 131 : 254));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_19 = (((arr_4 [i_0 - 1] [i_2 - 1] [i_6 - 1] [i_0 - 1]) - (arr_4 [i_0 - 1] [i_2 + 2] [i_6 - 1] [1])));
                            var_20 = (max(var_20, ((((arr_8 [i_2]) ? ((var_9 ? var_11 : (arr_7 [i_0] [i_0] [i_3]))) : var_4)))));
                            arr_21 [9] [i_0] = (((var_7 ? var_0 : var_0)));
                            var_21 = (((arr_4 [i_2 + 4] [1] [i_6 - 1] [i_2 + 2]) ? (arr_4 [i_0] [i_3] [i_6 - 1] [i_2 + 2]) : (arr_4 [i_0 - 2] [i_1] [i_6 - 1] [i_2 + 2])));
                            var_22 = (arr_16 [i_0]);
                        }
                        var_23 += ((arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_3]) || 1);
                    }
                    var_24 = (((6003616857432260133 ? 241 : 131)) * 20);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_27 [22] [i_1] [i_2] [i_7] [i_1] &= (~1297231554354196798);
                                arr_28 [6] [6] [i_0] [3] [3] [3] [6] = (((arr_23 [8] [i_7 + 1] [8] [i_1]) ? ((((1 ? 399622885298298682 : 2345767557303359806)) | (min(241, 5676163304921285070)))) : (((~(arr_4 [i_0 - 1] [i_2 - 2] [9] [i_0 - 1]))))));
                                var_25 = (var_2 ? ((var_11 ? var_5 : ((((-2147483647 - 1) || var_3))))) : var_11);
                                arr_29 [i_0 - 3] [i_0] [i_7] = (((arr_20 [i_0 + 1] [11] [21] [14] [i_0 - 3] [0] [i_1]) ? (((((max(var_4, 127)))) | 503316480)) : (((min((arr_2 [i_2 - 1] [i_0 - 1]), var_6))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
