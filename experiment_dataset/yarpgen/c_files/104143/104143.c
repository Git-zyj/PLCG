/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((((-362944495 ? var_10 : var_18))) ? ((1921387105 ? 1921387105 : 2839100870477844040)) : ((3050224414 ? 10391327093843639524 : -1513039482)))))));
                                arr_12 [i_1] [i_1] [i_2] [7] [i_4] = (((((((((arr_3 [i_0]) ? var_6 : (arr_7 [i_1] [i_1])))) ? (((var_6 ? 2373580190 : (arr_5 [3])))) : var_17))) ? ((((((arr_1 [i_4]) ? (arr_6 [i_1] [4] [i_1]) : 2373580173))) ? (((arr_5 [2]) ? 2839100870477844039 : var_12)) : (arr_11 [i_1]))) : (((((((arr_10 [1] [1] [i_2] [i_3] [i_4]) ? 4 : 445581348))) ? ((var_10 ? (arr_8 [i_0] [3] [1] [0] [i_3] [i_4]) : (-2147483647 - 1))) : ((var_2 ? (arr_7 [i_1] [4]) : (arr_7 [i_1] [i_3]))))))));
                                arr_13 [8] [9] [i_0] [i_3] [8] [i_1] = ((((var_16 ? (arr_6 [i_1] [i_2] [4]) : 1056927936))) ? (((-1661467739 ? 2147483647 : -475842726))) : (((arr_6 [i_1] [i_1] [i_2]) ? (arr_0 [i_3] [i_2]) : 872686633)));
                            }
                        }
                    }
                }
                arr_14 [i_1] = (((((2373580213 ? (arr_0 [i_0] [i_0]) : var_0))) ? ((((arr_4 [i_0]) ? var_2 : 3867817430))) : ((((((arr_0 [i_0] [i_1]) ? -1092295488 : 2147483647))) ? (((1 ? 1921387101 : 2093861599))) : ((var_1 ? (arr_0 [5] [6]) : (arr_4 [1])))))));
            }
        }
    }
    var_20 = var_9;
    var_21 = (((((var_10 ? ((2147483647 ? var_1 : var_10)) : var_3))) ? var_12 : var_7));
    var_22 = var_15;
    #pragma endscop
}
