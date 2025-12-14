/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_21 = (min(var_21, 253));
                    var_22 = 1;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_23 -= var_15;

                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_24 += ((((((var_7 ? 30 : var_19)))) ? 34951 : 1));
                        var_25 = (((((arr_1 [i_4 + 1] [i_1 + 1]) ? (arr_4 [i_1 - 1]) : (arr_1 [i_4 - 2] [i_1 + 1]))) >= ((max((arr_5 [i_4 + 2] [i_1 + 1]), (arr_1 [i_4 - 1] [i_1 + 1]))))));
                    }
                    arr_12 [i_3] [i_0] [i_0] = (arr_1 [i_1 - 1] [i_3]);
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_1] [i_0] [i_6] = (((arr_2 [i_1 - 1]) / 60643));
                        arr_18 [i_0] [i_0] [i_5] = ((var_9 ? var_19 : (arr_5 [i_1 + 1] [i_1 - 1])));

                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] = (((-(arr_10 [i_0] [i_1] [i_5] [i_5]))));
                            arr_23 [i_0] [i_5] [i_1] [i_5] [i_6] [i_7] = (((((79 ? 4294967293 : 92))) ? (arr_20 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7] [i_7 - 2]) : 64587));
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] = 63;
                            var_26 = ((var_0 ? 7494539631453328515 : (arr_20 [i_8 + 4] [i_8] [i_8] [i_6 + 1] [i_6 + 2] [i_1 - 1] [i_0])));
                            var_27 = (min(var_27, (((var_14 ? ((256796652 ? 1823008218 : 1946243933)) : -1)))));
                            arr_27 [i_1 + 1] [i_5] [i_6 + 1] = (arr_6 [i_6 - 1] [i_8 + 1] [i_6 - 1]);
                        }
                        arr_28 [i_0] [i_1] [i_5] = ((~(arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                    }
                    arr_29 [i_5] [i_5] [i_0] = ((-(-6192071269820918541 >= var_6)));
                }
                var_28 = (max(var_5, 127));
                var_29 = ((((!2021251524) ? -787628616 : 7)));
                var_30 = ((!(((~((1 ? 28393 : (arr_6 [i_0] [i_0] [i_1 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
