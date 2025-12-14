/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((~(max((arr_2 [i_0 + 2] [1] [i_0 + 1]), (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_2 [6] [i_0] [6]) : var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_16 = ((((max(((var_5 ? (-9223372036854775807 - 1) : (arr_10 [i_0] [i_1] [11] [i_3] [i_0] [i_4]))), (arr_7 [i_0] [i_4] [i_1])))) ? ((23362 ? var_6 : (arr_8 [i_4 - 2] [i_4 + 2] [i_4] [7] [i_4 + 1]))) : ((max((arr_11 [i_2 + 1] [i_1] [i_2] [i_3 - 2] [i_4 + 1]), (max(0, (arr_5 [i_1]))))))));
                                var_17 = (min(var_17, (((((max(((((arr_8 [i_3] [9] [i_3] [16] [i_3]) != var_11))), (arr_7 [i_2 + 1] [i_3 + 4] [i_3 + 1])))) ? ((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (min(var_13, (arr_2 [i_2] [i_2] [i_2])))))) : (min((arr_2 [i_1] [i_1] [i_4]), var_13)))))));
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                var_18 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [0] [i_1] [5] [i_1] [0] [i_1] = min((max((arr_3 [i_5 - 1] [i_2 + 1] [i_0 + 1]), (arr_2 [i_5 - 1] [i_2 + 1] [i_0 + 1]))), (max((arr_3 [i_5 - 1] [i_2 + 1] [i_0 + 1]), var_2)));
                            }
                            for (int i_6 = 3; i_6 < 16;i_6 += 1)
                            {
                                arr_18 [i_0] [i_6] [i_6] [i_0] [i_0] = ((!(((((((arr_9 [i_0] [1] [12] [i_3] [i_3]) ? (arr_9 [i_0] [12] [16] [12] [i_0 + 1]) : (arr_7 [i_0] [i_2 + 1] [i_2 + 1])))) ? var_4 : var_4)))));
                                var_19 = ((+(max((arr_10 [i_6 + 2] [i_6] [1] [i_6] [i_6 + 2] [i_6 - 3]), (arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 + 4])))));
                            }
                            arr_19 [i_0 - 1] [i_0 - 1] [i_2] [i_2 + 1] = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_26 [11] [i_1] [i_1] [i_1] [i_7] = (min((arr_13 [i_8 - 1] [i_8] [i_8 + 3] [i_0 + 2] [i_0 + 2]), ((max((max((arr_12 [i_8 - 1] [i_7] [i_7] [i_1] [i_1] [i_0] [i_0]), var_3)), (-32767 - 1))))));
                            arr_27 [9] [i_7] [9] [14] = ((((((arr_10 [7] [10] [7] [i_7] [7] [7]) ? 9223372036854775807 : (arr_15 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1])))) / ((min((arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2]), (min((arr_16 [i_0] [0] [i_0 + 1] [i_0] [i_0 - 1]), (arr_9 [i_0] [i_0] [i_0] [1] [2]))))))));
                            var_20 += (max((((!(((159 ? (arr_7 [i_0] [i_0] [i_0]) : var_0)))))), (max((((arr_1 [i_0 + 2]) ? 9223372036854775785 : 9007061815787520)), (((32613 ? (arr_3 [3] [i_1] [i_7]) : (arr_7 [i_0] [1] [i_7]))))))));
                            var_21 -= (((min((max(-1851560025, (arr_2 [12] [i_1] [14]))), var_8)) & ((~(arr_0 [i_0] [i_0 + 1])))));
                            var_22 = (max(2028629436, 32743));
                        }
                    }
                }
                arr_28 [15] [i_1] = (max(((+(((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_16 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) : -9223372036854775807)))), (min(var_0, var_0))));
            }
        }
    }
    var_23 = (min(var_23, (!var_4)));
    #pragma endscop
}
