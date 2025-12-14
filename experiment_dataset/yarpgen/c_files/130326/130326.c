/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_0 + 1] [12] = (((arr_5 [i_0 + 1]) <= (arr_8 [i_0])));
                            var_13 = (((arr_13 [i_0] [3] [i_2] [i_1] [i_0] [i_0] [3]) - (arr_11 [i_3] [i_1] [i_2] [10] [i_3])));
                            var_14 = ((-(arr_10 [i_0 - 1] [i_1] [11] [i_3] [i_4])));
                            var_15 += 12637558672977927359;
                            arr_15 [i_1] [6] = ((-(arr_9 [i_4])));
                        }
                        var_16 = ((-(arr_6 [5] [6])));
                        var_17 = (max((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))), (((!(arr_0 [i_0 + 1]))))));
                        arr_16 [i_0] [i_1] [i_3] = (arr_12 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [3] [i_1] [2] = (127 ^ 7947809003886903341);
                        arr_20 [i_0 - 1] [i_1] [i_2] [i_1] = (arr_17 [i_0 + 1] [i_1] [i_2] [i_5]);
                        var_18 = (-(arr_18 [i_5] [i_2] [i_1] [9] [9]));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [12] [12] [i_2] [1] = (!127);
                        arr_24 [i_0] [i_1] [i_2] [i_6] = ((((((arr_21 [i_0] [i_0] [0] [i_6] [i_0 - 1]) > (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0 - 1])))) / ((((arr_17 [i_0] [i_1] [i_2] [i_1]) < (arr_12 [13] [13] [i_2] [i_2] [i_0 - 1]))))));
                        var_19 += (((max((arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0]), (arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0]))) - 18446744073709551605));
                    }

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_20 = (((max((max(10, 127)), (((-(arr_8 [i_7])))))) > (((min(127, (arr_7 [i_0] [i_1] [i_2] [i_7])))))));

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            var_21 = ((-((max((arr_25 [i_0] [i_0] [13] [i_2] [i_7] [i_8]), -100)))));
                            var_22 = (max((((!(arr_25 [i_8 + 1] [i_8] [13] [i_8] [i_8] [i_8])))), (arr_22 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                            var_23 = -105;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_24 = (((((127 + (-105 % 2380621672094288193)))) ? ((max(0, (arr_17 [i_0 + 1] [i_2] [i_7] [i_7])))) : ((max((!104), (min(127, var_6)))))));
                            arr_32 [i_0] [i_0 + 1] [i_0] [i_0] = ((((((arr_25 [i_9] [i_7] [i_2] [i_0] [i_0] [i_0]) <= ((min(-106, 127)))))) & ((((arr_5 [i_0 - 1]) != (arr_5 [i_0 + 1]))))));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_25 -= (max(((6 > (arr_18 [i_1] [i_1] [i_2] [i_0] [i_10]))), (!0)));
                            var_26 = 6484422647242590624;
                            arr_35 [8] [i_1] [i_1] [i_1] [i_1] [i_1] = 127;
                            var_27 = min(104, (arr_6 [i_0 - 1] [i_1]));
                            var_28 = (max(8021823856650607860, 127));
                        }
                    }
                }
            }
        }
    }
    var_29 = 125;
    #pragma endscop
}
