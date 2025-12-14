/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_5;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_12 += (((((8388592 ? 65535 : 65524))) ? ((((~22) ? -4095 : (arr_2 [i_2])))) : ((var_6 / (((min((arr_6 [i_2] [i_2] [i_2] [i_0 + 1]), var_6))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((12052 ? 54 : (-32767 - 1)));
                            arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_0] [i_0] = var_6;
                            arr_15 [i_0 - 2] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4 - 1] = (~var_4);
                            var_13 = ((96 ? (((arr_1 [i_0]) ? (arr_4 [i_0 + 1] [i_0] [i_0]) : ((var_5 ? (arr_6 [i_3] [i_0] [i_0] [i_0]) : 8062589573682224539)))) : var_0));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_1] [2] = (min(((20 ? 9 : (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0 + 1]))), ((max((arr_2 [i_0]), ((var_4 / (arr_2 [i_0]))))))));
            arr_17 [i_0] = ((var_5 ? ((((max((arr_0 [i_0]), (arr_7 [i_1]))) >= (~var_0)))) : ((((arr_7 [i_0 - 2]) >= (arr_7 [i_0 - 1]))))));
            var_14 += (((max((arr_3 [10] [10]), (arr_9 [20]))) >= (arr_9 [12])));
            arr_18 [i_0] = (arr_8 [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_1]);
        }
        arr_19 [i_0] = (((((110 | (arr_12 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0])))) ? ((((arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) ? var_5 : (arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0] [i_0])))) : 25));
        var_15 ^= (((((-(arr_0 [i_0])))) >= ((min(((var_9 ? var_1 : (arr_8 [i_0 - 1] [i_0] [i_0 - 3] [i_0] [i_0] [i_0]))), var_4)))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_16 = (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                {
                    var_17 = 255;
                    var_18 = (~6);
                    var_19 = (((arr_4 [i_6 - 1] [i_6 + 1] [i_6 + 1]) ? (max(-765336128, (arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 1]))) : (((arr_4 [i_6 + 1] [i_6 - 1] [i_6 - 1]) ? (arr_4 [i_6 - 1] [i_6 - 1] [i_6 + 1]) : (arr_4 [i_6 - 1] [i_6 - 1] [i_6 + 1])))));
                    var_20 = var_7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_31 [i_9] [i_5] [i_5] [i_9] = (max((~var_4), 22));
                    arr_32 [i_9] [i_9] [i_5] = (((arr_8 [i_5] [i_8] [i_8] [i_5] [i_9] [i_9]) * ((((((var_8 / (arr_2 [i_9])))) ? (~12) : (arr_3 [i_9] [20]))))));
                }
            }
        }
    }
    #pragma endscop
}
