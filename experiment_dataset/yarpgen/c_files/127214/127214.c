/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (((((min((arr_6 [i_1]), (arr_3 [i_0] [i_1]))) - (arr_1 [i_1]))) - (((((max((arr_6 [12]), (arr_0 [2] [i_1]))) >= (arr_3 [i_1] [i_2])))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 = (arr_8 [i_2] [i_2] [i_1] [i_0]);
                        var_21 = (max(((4173905479 ? (arr_6 [i_0]) : (((((arr_8 [i_0] [i_1] [i_0] [i_3]) || 12)))))), (min(((max((arr_1 [i_0]), (arr_2 [i_0] [i_0] [i_0])))), (arr_6 [i_3])))));
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] = ((((-(arr_1 [i_1]))) + ((((arr_4 [i_3]) ? (arr_4 [i_0]) : ((max((arr_4 [i_3]), (arr_3 [i_0] [i_1])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_22 = (((max((arr_2 [i_5 - 1] [i_4 - 1] [i_4 - 1]), ((~(arr_4 [i_0])))))) ? (arr_8 [24] [21] [24] [i_2]) : (max(((((arr_12 [i_0] [i_0] [i_1] [i_0] [i_5] [i_1]) ? (arr_13 [i_0] [i_4] [i_2] [1] [23]) : (arr_14 [i_0] [i_0] [i_2] [i_4] [i_0] [i_0] [i_1])))), (arr_0 [i_0] [i_0]))));
                                var_23 = (arr_0 [i_5] [6]);
                            }
                        }
                    }
                    var_24 = ((((((((arr_0 [i_0] [21]) ? (arr_1 [i_1]) : (arr_4 [i_0]))) == (arr_0 [i_2] [i_1])))) & ((max((32767 || 44875), 4872)))));
                }
            }
        }
    }
    var_25 ^= ((var_3 ? var_8 : var_10));
    var_26 &= var_5;
    var_27 &= var_2;
    var_28 = var_0;
    #pragma endscop
}
