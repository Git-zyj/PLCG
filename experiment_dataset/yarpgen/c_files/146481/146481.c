/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((max((arr_2 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_1])))) ? ((-((min(var_2, 27150))))) : (((max(var_5, (arr_1 [i_0])))))));
                arr_5 [i_0] [i_0] [i_1] = (min(((~(arr_4 [i_0] [i_0] [i_1]))), ((((((arr_3 [i_0] [i_1]) ? (arr_4 [15] [i_0] [i_1]) : (arr_0 [i_0]))) <= ((var_12 ? var_1 : var_8)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = ((((((max(var_14, (arr_8 [21] [20] [i_2 - 2] [i_2 - 2])))) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (min((arr_10 [i_0] [i_1] [13] [i_2] [i_2] [i_1]), var_13))))) ? ((((((64 ? var_7 : var_6))) ? (arr_8 [i_3 - 1] [i_2 + 1] [i_2 - 2] [i_3]) : 2889))) : (max(((((arr_4 [i_0] [i_1] [i_2]) ? (arr_3 [i_1] [i_3 - 1]) : var_1))), (min((arr_10 [7] [i_0] [i_0] [i_1] [7] [7]), 42623)))));
                            arr_11 [i_0] [i_2] [i_1] [i_2] = ((-2887 ? (-20 - 27143) : (((arr_2 [i_0] [i_1] [i_2]) ? -127 : 62710))));
                            arr_12 [i_2] [i_2] [i_3 + 2] = (min((min((((arr_3 [i_2] [i_2]) / (arr_2 [i_2] [1] [i_2]))), var_8)), ((max((max(62710, (-127 - 1))), 42659)))));
                        }
                    }
                }
                var_19 = (((arr_8 [i_0] [i_0] [i_1] [i_1]) ? ((-((max(-25, 47023))))) : ((min(13, (max((arr_2 [i_0] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_20 = (min((min((((-(arr_15 [i_6])))), (507419534676717748 + var_5))), (((min((arr_9 [i_4] [i_5] [i_5]), -115))))));
                    var_21 = (arr_17 [i_4]);
                    arr_21 [i_4] [i_5] [i_4] = ((-(((arr_3 [i_5] [i_6]) ? (arr_18 [i_4]) : 27150))));
                    arr_22 [i_4] [i_4] [i_6] = (min((arr_9 [i_4] [i_4] [i_6]), (max(var_13, ((var_13 - (arr_9 [i_6] [i_5 + 1] [i_4])))))));
                }
            }
        }
    }
    var_22 = ((38374 ? 4412246602132251422 : 15065149062400369096));
    var_23 = (max((((27143 ? -16 : 35072))), ((((max(289482982, 22899))) ? (((1 ? var_15 : var_16))) : ((var_16 ? 14673086852468802838 : var_8))))));
    var_24 = var_15;
    #pragma endscop
}
