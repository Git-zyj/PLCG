/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (arr_0 [i_0 - 2]) : (((arr_0 [i_0 + 1]) / (arr_0 [i_0 - 1])))));
        var_20 = (min((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0] [i_0 - 2]) : 7684529224376286565)), ((((arr_0 [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (max((((((arr_0 [i_0 - 2]) ? 10762214849333265041 : -106)) / (arr_0 [i_0 + 1]))), (arr_0 [i_0])));
        arr_4 [i_0 - 2] = ((!(arr_0 [i_0 - 1])));
        var_21 = ((((max(-1887414627, (arr_1 [i_0] [i_0 - 2])))) ? ((min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 + 1])))) : (arr_1 [i_0] [i_0 + 1])));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_22 = (arr_11 [i_1] [16] [i_1] [i_1]);
                            arr_15 [i_1] [i_1] [i_3] [i_3] = ((max((arr_12 [i_1 + 1]), (arr_12 [i_1]))));
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_23 [i_1] [i_2 - 1] [i_1] [i_6] [i_6] [i_2 - 1] [i_1] = (arr_13 [i_1] [i_1] [i_6] [i_7]);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_9 [i_1]) ? (!1) : (((((1 ^ (-32767 - 1)))) & (((arr_5 [i_1 - 1] [i_1]) & (arr_19 [i_1] [i_2 - 1] [i_5 - 1] [i_6] [i_7])))))));
                        }
                        arr_25 [i_1] [10] [i_1] = -32762;
                        arr_26 [i_6] [i_1] [i_5 - 1] [i_1] [i_1 + 2] = (((arr_11 [i_1] [i_2] [i_5 + 1] [i_1]) >= ((-(arr_5 [i_2 - 1] [i_1])))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_5] [i_5] [i_1] = ((((arr_14 [i_1] [i_5 - 1] [i_2 - 1]) ? (arr_10 [i_1] [i_2]) : (arr_21 [i_8] [i_8] [i_5 - 1] [i_2 - 1]))) > (arr_7 [i_1]));
                        arr_32 [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3] [i_5 - 1] [i_2 - 1] = (~3560);
                    }
                    arr_33 [i_2] [i_1] = (max(((~((10762214849333265041 | (arr_18 [i_1] [i_2] [i_1] [i_2 - 1]))))), ((((((0 ? -34 : (arr_17 [i_1] [i_2] [i_5])))) ? ((34 & (arr_18 [i_1] [i_2] [i_5 + 1] [i_1 - 1]))) : (((arr_20 [i_1 + 3] [1] [i_1 + 1] [i_1]) ? (arr_27 [i_1 + 1] [i_1 + 1] [i_5] [i_1] [i_1 + 1] [i_1]) : (arr_6 [i_1]))))))));
                }
                var_23 = min((arr_17 [i_1] [i_1] [i_1]), (((arr_17 [i_1] [i_1] [i_1]) ? (arr_17 [i_1] [i_1 + 2] [i_1]) : (arr_17 [i_1] [i_1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
