/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = (arr_9 [i_0] [i_0] [i_0] [i_1]);
                            var_16 *= (min(((((arr_10 [12] [i_3] [12] [12] [i_1]) || 0))), ((~(((arr_1 [18]) - (arr_2 [4])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_14 [i_5] [i_5] [i_5] [i_0]) <= (((arr_10 [i_5] [i_5] [i_4 - 3] [i_5] [i_4]) ? (arr_10 [i_5] [i_5] [i_4 - 4] [i_5] [14]) : (arr_9 [i_0] [i_5] [i_4 + 1] [i_1]))))))));
                            arr_18 [5] [i_1] [i_0] [5] = (((((((arr_16 [i_0] [i_1] [i_0] [i_4] [i_5] [1]) && (arr_8 [i_5]))) ? (arr_9 [i_4] [i_0] [i_4 - 2] [i_4]) : ((3540983600 ? (arr_3 [1] [i_1]) : var_13)))) | ((((((arr_2 [i_0]) ? (arr_14 [i_0] [i_0] [i_4] [i_4]) : var_13))) ? ((~(arr_9 [i_4] [i_0] [i_4] [13]))) : ((~(arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_1])))))));
                            arr_19 [i_4] [i_0] = ((54316 ? (-32767 - 1) : 2763181489));
                            arr_20 [i_0] [i_4] [i_4] [i_1] [i_0] = (+((((((arr_12 [i_5] [i_4 - 1] [i_1]) * (arr_13 [i_0] [i_1] [i_4] [i_5])))) ? (arr_10 [i_0] [i_4 - 4] [i_4 - 1] [i_4 - 4] [i_4 + 1]) : (arr_14 [i_0] [i_0] [i_4] [i_5]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_18 *= ((((3598125036 ? 4690 : ((33373 ? (arr_27 [i_9] [i_8] [i_8] [i_6]) : 4490)))) != 56999));
                            arr_32 [i_6] = (max(((var_0 ? (((arr_25 [i_6] [1] [i_9]) ? (arr_25 [i_6] [9] [i_8]) : (arr_5 [i_6]))) : (((var_3 ? var_11 : 32751))))), (((-(((8695943731951164410 <= (arr_5 [i_6])))))))));
                            var_19 += ((3426293391 ? 77 : 35193));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_20 ^= (min((((((4069545203 ? 4682 : (arr_0 [i_7])))) ? (((max(224, var_13)))) : ((-(arr_27 [i_6] [i_11] [i_6] [i_11]))))), (arr_22 [i_11] [i_6 - 4])));
                            var_21 += (min(((-(arr_37 [i_6 + 1] [i_11] [i_6 - 4]))), (arr_6 [i_11])));
                            var_22 = (((max((29 - 185063927), (((arr_26 [i_6] [i_7] [9]) & (arr_28 [i_6]))))) != ((2696147444179701176 - (((3540983584 ? (arr_15 [i_6]) : 2616276615)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            {
                var_23 = (max(var_23, (arr_17 [i_12] [i_13 + 1] [i_12] [i_12] [i_12] [i_13 + 1])));
                var_24 = var_3;
                var_25 = (arr_38 [i_12] [i_12]);
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
