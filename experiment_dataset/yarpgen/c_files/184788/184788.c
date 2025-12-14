/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 *= (((8034845080459003677 > 3789323696517568570) && (18446744073709551612 | 6832089937473645527)));
                                var_15 = (max((~6832089937473645530), ((min(var_13, (((~(arr_8 [i_0] [i_0] [17] [i_0])))))))));
                                arr_12 [7] = (min(-1073741824, ((max(4, (arr_2 [i_0]))))));
                                var_16 = (arr_10 [i_3] [i_2]);
                            }
                        }
                    }
                }
                var_17 = (((((((1 ? 3789323696517568578 : 1)) > (((var_0 << (14657420377191983045 - 14657420377191983044))))))) % ((~(((!(arr_4 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_18 [i_5] = ((-(arr_13 [18] [i_1] [i_5] [i_5])));
                            var_18 = ((((((arr_13 [1] [i_6] [i_6 - 2] [i_6 - 2]) ? ((min(31923, var_1))) : ((~(arr_8 [i_0] [i_1] [i_0] [i_6])))))) - 7909163837503095939));
                            var_19 = (((1 ? (arr_17 [i_1]) : (arr_17 [i_0]))) == 3789323696517568552);
                        }
                    }
                }
                var_20 = ((~(~25578)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 = 22452;
                            arr_26 [i_0] [10] [7] [i_0] &= ((1 ? 0 : var_12));
                            var_22 = (((((1 ? (arr_9 [i_8 + 2]) : 5153))) ? var_5 : (((((22457 ? (arr_2 [i_7]) : (-127 - 1)))) ? (arr_25 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 + 2]) : ((125 ? (arr_14 [i_0] [15] [i_0]) : (-127 - 1)))))));
                            var_23 = ((((min((arr_13 [i_1] [i_8 - 1] [i_1] [i_8]), (arr_13 [1] [i_8 - 2] [i_0] [i_8])))) <= ((min((arr_11 [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1] [4]), (arr_17 [i_8 + 1]))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((((-(((arr_22 [i_0] [2] [i_0] [14]) << (((arr_15 [i_8] [i_8] [i_1] [i_1] [i_1] [i_0]) - 8352776590069180287)))))) + ((min(5153, (arr_9 [i_8 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (((var_10 ? var_2 : 0)))));
    #pragma endscop
}
