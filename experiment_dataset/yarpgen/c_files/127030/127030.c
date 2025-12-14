/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = (min((arr_6 [i_0] [i_1 - 1] [i_0] [i_3] [i_0] [i_2 + 1]), (((var_1 ? (((!(arr_5 [i_0] [i_1])))) : (arr_7 [i_0] [i_0] [i_2 - 2] [i_3] [11] [i_0]))))));
                            var_20 = ((-(arr_4 [i_0] [i_2])));

                            for (int i_4 = 4; i_4 < 13;i_4 += 1)
                            {
                                var_21 = arr_7 [12] [i_1 - 2] [i_1 - 2] [12] [i_1 - 2] [1];
                                var_22 = (min(var_22, (((~((min((arr_7 [i_0] [1] [i_2 + 1] [i_1 - 3] [i_3] [i_4 + 1]), 0))))))));
                                var_23 = (((arr_6 [11] [11] [i_2 - 3] [i_3] [i_0] [i_0]) < (((~(arr_7 [i_4 - 1] [i_1 - 3] [i_1] [i_3] [i_2 - 1] [i_1]))))));
                                arr_12 [i_3] [6] [i_3] [i_3] [i_3] [i_3] = (+(min((arr_3 [i_1 + 2] [i_2 + 1] [i_1 + 2]), (arr_9 [i_0] [i_1] [1] [6] [5]))));
                                var_24 = 2907779169;
                            }
                            for (int i_5 = 4; i_5 < 10;i_5 += 1)
                            {
                                var_25 = (max((((~(arr_11 [i_5 + 3] [i_2 - 1] [i_2 + 1] [i_1 + 2] [i_1 + 2])))), ((((0 ? 1387188126 : 246)) << (((arr_5 [3] [3]) - 188))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_2 - 1] [i_2] &= (-((~((var_1 ? (arr_9 [6] [i_1 + 2] [i_2] [i_5] [i_5]) : 4294967272)))));
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                arr_19 [i_2] = ((4095 ? 0 : 139));
                                var_26 = (max(var_26, (((+(((arr_16 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 3]) ? 252 : (arr_2 [i_2 + 1] [i_2 - 2] [i_2 + 1]))))))));
                            }
                        }
                    }
                }
                var_27 = 212;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_28 &= arr_11 [6] [i_8 - 2] [10] [10] [i_1 - 2];
                            var_29 = (max(var_29, ((((~156) ? (arr_25 [6] [i_7] [i_1] [i_1] [7]) : (((-(arr_14 [i_1 - 3] [i_7] [2] [i_8 + 2] [4] [i_1 - 3])))))))));
                            var_30 = (max(var_30, (((~((min(170, (arr_14 [i_1] [i_7] [i_1 + 1] [10] [i_7] [i_1 - 2])))))))));

                            for (int i_9 = 0; i_9 < 14;i_9 += 1)
                            {
                                var_31 = (!-101);
                                var_32 = (max(var_32, ((86 ? (min((min((arr_17 [i_0] [9] [i_0] [10] [i_7] [10] [i_0]), (arr_6 [4] [i_8] [i_7] [i_7] [i_1 - 1] [4]))), -249)) : (min(((((arr_24 [i_9] [i_0]) > 2015224528))), 3673284981))))));
                            }
                            arr_29 [i_0] [i_0] [i_0] [i_7] = ((+((~(((arr_11 [10] [3] [5] [7] [7]) * (arr_28 [i_7] [i_1] [i_1])))))));
                        }
                    }
                }
                var_33 = (((arr_3 [12] [i_1 - 1] [8]) ? 255 : ((min((arr_22 [i_1 - 2] [i_1 - 1] [i_1 - 3] [i_1]), var_5)))));
            }
        }
    }
    #pragma endscop
}
