/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((625162972 && 15177) ? var_17 : ((var_12 ? 15169 : 1))));
    var_19 = (min(var_6, ((106 ^ ((1 ? -4336739086379276034 : var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (min((arr_7 [i_1]), (((arr_1 [i_2]) - (((arr_10 [1] [i_1] [i_1]) ? 1735585093 : var_16))))));
                        var_21 &= 15177;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_22 -= (max((arr_6 [i_1] [i_1] [0] [i_4]), ((99 + (~1)))));
                        arr_13 [i_4] [i_1] [i_4] = ((~((min((arr_8 [i_0] [i_1] [i_2] [i_4]), (arr_8 [i_0] [i_1] [i_2] [i_4]))))));
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_23 = ((~(((arr_4 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_24 = (((arr_14 [i_0] [i_0] [i_0] [i_0]) && ((max((arr_14 [i_1] [i_1] [i_1] [i_1]), 1)))));
                            var_25 = (~-53);
                            var_26 += (arr_8 [i_0] [i_1] [i_5] [i_6]);
                        }
                    }

                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        var_27 = (arr_7 [i_1]);
                        arr_22 [i_1] = -19;
                        var_28 = ((((27207 ? 1 : 0))));
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        var_29 = -var_3;
                        arr_26 [i_1] [i_2] [3] = 123;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_30 = (arr_30 [i_1]);
                        arr_31 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = (max(123, 2052659915));
                    }
                    var_31 = (max(0, 253517318));
                }
            }
        }
    }
    #pragma endscop
}
