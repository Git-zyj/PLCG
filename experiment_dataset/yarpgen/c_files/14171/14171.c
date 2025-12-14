/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(~-290557391337838067)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((41 && (-1 || 0))) && ((!((min(317858728, 7678)))))));
        arr_3 [9] [i_0] = ((-57835 ? ((-(arr_1 [i_0]))) : (((((arr_1 [i_0]) ? 2661829973 : 127))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((2661829973 < ((min((!31), ((2661829973 ? 1 : -1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [11] [14] [i_0] [i_0] = ((((min(50902, ((-(arr_13 [i_2])))))) ? 22 : 72));
                                var_14 = ((~(max((((-125 ? 57868 : 65535))), ((1073741824 ? -4356204792203936874 : 22))))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_0] [i_1] [i_0] = (max((((2 != 5456114089651592697) ? ((max(92, (arr_5 [i_0])))) : (arr_13 [9]))), ((max(51, 3)))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_15 = ((~(arr_17 [i_0] [8] [i_1] [i_5] [i_5] [i_0])));
                        arr_19 [5] [i_0] [i_0] [i_0] = ((-((-10 ? ((min((arr_18 [i_0]), 16384))) : (!-1065137641)))));
                    }
                    var_16 = (((~(~174))));
                }
            }
        }
        arr_20 [i_0] = ((!((max((((arr_13 [i_0]) / 14)), ((32767 << (70 - 54))))))));
        var_17 = (min((min((min(-20111, 0)), (-127 - 1))), ((((((~(arr_10 [i_0])))) ? ((max(89, 0))) : 63)))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((min(-56, (arr_13 [i_6]))));
        var_18 *= ((((((min(-26875, 5304)))) / (arr_12 [6] [6] [4] [i_6] [i_6] [4] [i_6]))));
        var_19 = (max((((arr_6 [12]) ? (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : ((min(23919, (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))), ((min((arr_21 [i_6]), (arr_5 [i_6]))))));
    }
    var_20 = var_4;
    #pragma endscop
}
