/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((93 ? ((((63 & var_5) >> (((max(177, -1)) - 162))))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max((~93), ((max((arr_1 [i_0]), (arr_1 [i_1]))))));

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_14 = (arr_1 [i_0]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (arr_7 [i_2 + 3] [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2]);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_16 = (min(var_16, 1));
                            var_17 |= (65535 >= 187);
                            var_18 = ((((-((max((arr_9 [i_0] [8] [i_2] [i_3] [i_4]), (arr_1 [i_0])))))) * 19));
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_19 = (max(var_19, ((max((arr_6 [i_3] [i_2 + 1] [i_1]), var_3)))));
                            arr_14 [i_0] [i_0] [4] [i_0] [i_0] = (max(((var_11 ? (((arr_2 [i_5 - 1] [i_1] [9]) ? (arr_8 [1] [10]) : var_2)) : var_11)), 255));
                        }
                        var_20 &= ((((~(arr_7 [i_0] [i_0] [11] [i_0] [i_0] [i_0]))) > ((255 - (max(9221120237041090560, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [16])))))));
                        var_21 = (~89);
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        var_22 = (((((max((arr_0 [i_1]), 4065956558209225146))) ? (arr_10 [i_0] [i_2 - 2] [i_6 - 3] [i_2 - 2] [6] [i_0]) : ((-(arr_3 [i_0]))))));
                        var_23 = 65535;
                    }
                }
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    arr_20 [13] = (arr_16 [i_0] [i_7] [i_7] [i_7]);
                    var_24 = (max(((((max(17, var_8))) ? (max(var_0, (arr_6 [i_0] [i_1] [5]))) : var_4)), (var_7 ^ 171)));
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_25 = (max(var_25, var_11));
                    arr_23 [i_0] [i_1] [i_8] = 2814793529;
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_26 = (max(1, (((arr_15 [i_0] [i_1] [9] [i_1] [i_1] [i_1]) ? (((var_3 && (arr_22 [i_9] [i_0] [i_0] [i_0])))) : ((1 ? var_4 : (arr_4 [i_0] [i_0] [i_9] [i_0])))))));
                    var_27 = ((~(max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max(224, var_1))))));
                }
                var_28 = (((((arr_8 [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_1]) : (max(1, 34084860461056))))) || ((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_1))));
            }
        }
    }
    var_29 |= var_10;
    var_30 = ((var_1 >= ((((var_2 != (var_6 != var_4)))))));
    #pragma endscop
}
