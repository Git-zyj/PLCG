/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((var_9 ? var_16 : var_6))));
    var_21 = (min(var_21, (((var_11 ? (((~var_16) << (var_15 - 31006))) : (1574746099949125754 > 1))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_22 += ((16871997973760425871 ? (arr_5 [i_1] [i_1]) : 17627));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_23 = (max(var_23, -var_16));
                            arr_14 [12] [i_0] [i_2 + 2] [i_0] [i_0] [i_0] = (arr_10 [i_0] [5] [i_0] [8] [12] [6]);
                            arr_15 [i_0] [1] = -1091;
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_24 = (max(var_24, ((((max(6059, -20)))))));
                            arr_20 [7] [i_0] [3] [i_6] [i_6] [8] = 398742127592243549;
                        }
                        var_25 = ((var_9 ? (((-((max(var_13, var_10)))))) : (min(((var_8 ? (arr_19 [10] [12] [i_2 + 2] [7] [7]) : (arr_5 [1] [i_0 - 2]))), var_4))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_26 = (arr_17 [7] [11] [i_7] [i_7] [i_7] [i_1]);
                        var_27 = var_12;
                        var_28 = (((arr_0 [i_0 + 1]) ? (~var_7) : -15416));
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_29 = (min(var_29, (((+((+(max((arr_5 [15] [i_8]), (arr_13 [i_0] [i_2] [9] [3] [i_2] [i_8 + 1]))))))))));
                        var_30 += (((min((arr_5 [i_0 - 1] [i_0 - 1]), (arr_5 [i_8 - 1] [i_8 - 1]))) > ((-(arr_5 [7] [1])))));
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, (((max(((var_19 << (var_0 - 727627863903268233)), ((var_10 << (var_14 - 4890657797988681861))))))))));
    var_32 += var_10;
    #pragma endscop
}
