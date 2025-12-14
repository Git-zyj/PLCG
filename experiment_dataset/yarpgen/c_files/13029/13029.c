/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((3 ? (((arr_2 [1] [i_1]) * (arr_2 [i_1] [i_1]))) : (((arr_2 [i_0] [i_0]) * 255))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (min(var_21, ((((arr_0 [i_2]) & (arr_1 [i_1] [i_0]))))));
                    var_22 = ((var_14 ^ (var_16 >= var_10)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_0] [9] [9] [i_0] = (arr_2 [i_0] [10]);
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] = (((arr_8 [i_0] [i_0] [i_2] [i_3] [i_4]) ? var_8 : var_6));
                                var_23 = (min(var_23, (((((((arr_8 [5] [5] [6] [i_3] [i_4]) ? (arr_3 [i_0] [i_0]) : 255))) ? var_18 : (arr_4 [i_0] [i_3] [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_18 [i_1] [i_1] = ((!(min((arr_11 [i_1] [i_1] [i_5 + 1] [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_1])))));
                    var_24 = (min((((((var_15 << (1262982410021629119 - 1262982410021629114)))) ? ((-4338135478957351128 ? (arr_6 [i_0] [i_0] [4] [i_5]) : (arr_14 [i_1] [i_1] [i_5 - 1]))) : (var_5 || var_1))), ((((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_16 [i_1])))) ? (((arr_17 [i_5] [i_1] [i_1] [i_5]) ? -4338135478957351128 : (arr_6 [i_5 + 1] [17] [17] [i_0]))) : (~var_4)))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_25 = ((+(min((arr_11 [i_1] [i_1] [i_6] [i_7]), (arr_6 [i_0] [i_1] [i_5 + 1] [i_6])))));
                                var_26 = (min(var_26, ((((((var_4 ? var_17 : ((var_15 ? var_5 : var_1))))) ? (arr_8 [i_0] [i_0] [i_0] [i_6] [i_7]) : ((((min(var_15, var_18))) ? (~13) : ((min((arr_14 [18] [i_5] [i_6]), (arr_11 [i_0] [1] [i_6] [i_7])))))))))));
                                arr_23 [i_1] [i_1] [i_5] [i_6] [i_7 + 1] [i_5] [5] = (arr_6 [i_0] [1] [i_0] [1]);
                                var_27 = (min((((arr_14 [i_6 - 1] [i_5 - 1] [i_5]) ? (arr_14 [i_6 - 1] [i_5 - 1] [i_5]) : var_7)), ((((arr_14 [i_6 - 1] [i_5 - 1] [2]) >= var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_18;
    var_29 = (min((min(var_5, var_0)), var_11));
    var_30 = var_7;
    #pragma endscop
}
