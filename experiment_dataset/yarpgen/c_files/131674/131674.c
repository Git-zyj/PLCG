/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 32767;
                arr_7 [i_0 - 3] = (((-(arr_0 [i_1]))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 -= ((((((var_12 * var_4) ? (arr_3 [i_4 + 1] [i_0 - 4]) : (max(var_3, 3564918139831986370))))) ? ((((~var_13) ? (arr_13 [i_0] [i_1] [11] [i_0 + 1]) : (arr_15 [i_4] [i_4])))) : (max(((1 ? -3564918139831986371 : var_0)), ((((arr_9 [i_0] [i_1] [i_2] [0]) - (arr_13 [i_3] [1] [i_1] [i_0]))))))));
                                var_16 = (((((((-(arr_9 [i_0] [i_0] [i_0] [i_0]))) <= ((1 ? (arr_13 [i_0] [i_1 + 3] [i_2] [i_3]) : 30066))))) == (((var_3 != (min(8608014126614140870, 2794264732)))))));
                                var_17 = ((((min((arr_12 [i_0] [i_0 - 4] [i_0] [i_0 - 3]), 1532))) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1])));
                            }
                        }
                    }
                    arr_18 [i_2] = max(8608014126614140870, (arr_15 [i_1] [i_0 - 3]));
                    var_18 -= (((max(1, (arr_3 [i_2] [i_0 - 4]))) ? 1250028892 : ((((!((((arr_16 [i_0 + 1] [i_1 + 3] [i_2 + 2] [i_1] [i_2]) - 1)))))))));
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((var_2 > 65535) != ((1 ? 2147483647 : 1)))))));
                                arr_26 [i_0] [i_1] [i_0] [i_6] [i_5] = (((((0 ? var_11 : var_7))) ? -3564918139831986370 : (((-(arr_9 [19] [i_0 + 1] [i_1 - 1] [i_7 + 1]))))));
                            }
                        }
                    }
                    arr_27 [i_0] &= ((((((-23 - var_13) * (arr_20 [10] [i_0] [i_5 + 1])))) ? (((var_11 > 2147483647) ? ((1500702564 >> (((arr_0 [14]) + 5699)))) : (arr_14 [i_0] [i_0] [i_1] [i_5] [i_1] [1]))) : (arr_19 [i_5 - 1] [i_0] [8])));
                }
            }
        }
    }
    var_20 = ((-((var_0 ? ((1 ? -32753 : 3564918139831986371)) : 1110485824))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            {
                arr_35 [i_8] = ((9223372036854775807 << (!8608014126614140870)));
                var_21 = (max(var_21, (((((!((max((arr_24 [i_8] [i_8] [i_8] [i_9] [i_8] [i_9]), -3564918139831986371))))) ? (arr_28 [i_9]) : ((max(16313, 1))))))));
                var_22 = (max(var_22, ((min((((~(arr_3 [i_8] [i_9 - 1])))), var_2)))));
            }
        }
    }
    #pragma endscop
}
