/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, ((min(var_8, (min((arr_1 [i_0]), (min(995572226105431692, -88)))))))));
        arr_3 [i_0] = ((min(((var_8 ? (arr_2 [6]) : (arr_1 [i_0]))), ((min(875384775, 127))))));
        arr_4 [i_0] [i_0] = (-31233 ^ -125);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_16 ^= (arr_7 [i_1] [6]);

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_17 &= (((arr_6 [i_1]) * (max((max((arr_8 [i_1] [8]), (arr_9 [12] [18]))), ((max((arr_9 [i_1] [10]), var_11)))))));
            arr_10 [i_1] [i_1] = (((min((var_10 | var_8), (arr_7 [i_1 - 3] [i_1]))) < ((max((max((arr_6 [i_2]), (arr_8 [i_1] [i_1]))), (arr_7 [i_1] [i_1]))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_6 [i_1 - 2])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_3] [i_3] [19] [i_1] = (min((max((((arr_15 [i_1] [7] [21] [9]) ? (arr_9 [i_1] [i_1]) : var_1)), var_5)), var_6));
                                arr_21 [i_3] [i_1] = (i_1 % 2 == zero) ? (((((((max(var_5, var_10))) << (((arr_12 [i_1] [i_1] [i_1 - 2]) - 42690)))) != (arr_16 [17] [i_4] [i_5 - 1] [i_6])))) : (((((((max(var_5, var_10))) << (((((arr_12 [i_1] [i_1] [i_1 - 2]) - 42690)) - 21360)))) != (arr_16 [17] [i_4] [i_5 - 1] [i_6]))));
                                var_19 = ((((min(var_3, (arr_17 [i_1 - 2] [i_1 - 2] [8] [i_1 - 2] [18] [i_6] [i_6])))) ? (arr_12 [i_3] [i_1] [i_6]) : (arr_19 [i_1 - 1] [i_3] [11] [i_1] [i_6])));
                            }
                        }
                    }
                }
            }
        }
        var_20 &= (((arr_15 [i_1 - 3] [i_1] [i_1] [i_1 - 3]) ? (~var_7) : ((((var_8 >= (arr_14 [i_1] [12] [i_1] [20])))))));
    }
    var_21 = var_1;
    var_22 = var_4;
    #pragma endscop
}
