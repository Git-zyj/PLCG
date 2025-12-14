/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = ((!((3353 < (237 == var_12)))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = ((((31420 ? (arr_7 [i_0 + 2] [i_2 - 1] [i_2] [i_2]) : var_15)) * 0));
                        var_22 = (arr_2 [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_23 = (((arr_2 [i_0]) ? (((0 | 0) * (min(var_6, (arr_12 [i_0] [i_1] [7]))))) : var_12));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((~(arr_8 [i_0] [1] [i_0])));
                        var_24 = (max(var_24, 3353));
                        var_25 = (max(var_25, (((986 <= ((((var_9 < (arr_10 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2 - 3]))))))))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_26 = ((var_7 ? (((-3353 >= -102) ? (var_3 <= -3354) : (arr_1 [i_2 + 2]))) : (min((arr_1 [i_2 - 2]), var_7))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_27 = (arr_8 [i_1] [i_1] [i_6]);
                            var_28 += (max((var_16 % -1189387230), var_15));
                            arr_21 [i_0] [i_1] [i_1] [i_5] = (((((var_5 == (var_17 * 127)))) <= 1));
                            var_29 = (min((-1183 || 4398046511103), (max(((max(255, var_11))), (var_1 + -93)))));
                            arr_22 [i_0] [i_0] [i_0 + 3] [i_1] [i_0] [i_0 - 1] [3] = (((((var_17 - (arr_3 [i_1] [i_1] [i_5])))) ? (((var_11 ? var_15 : (arr_7 [i_0] [i_2 + 1] [i_0 + 3] [i_5])))) : 12331702239782987642));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_7;
    var_31 *= -var_6;
    var_32 = var_15;
    var_33 += var_17;
    #pragma endscop
}
