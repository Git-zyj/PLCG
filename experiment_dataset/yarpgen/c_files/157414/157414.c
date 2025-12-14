/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 &= ((!(((arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [i_0 - 1] [i_4]) && (arr_8 [i_0] [i_1] [i_2 - 1] [i_0] [i_4] [i_0 - 1] [i_1])))));
                                arr_10 [i_2 - 1] &= ((-((-116 ? var_10 : (arr_6 [i_0 + 1] [i_0 - 1] [i_2 + 1])))));
                                arr_11 [i_1] [i_3] [i_2] [i_1] [i_0] &= 12989549449869586675;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_14 [14] [i_1] [i_2] [i_5] &= (arr_13 [i_0 + 1] [i_2] [4] [i_0 + 1]);
                        var_15 &= (((max(var_9, var_1))));
                        arr_15 [i_1] [12] [i_2 - 1] &= (~var_1);
                        var_16 &= var_12;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_18 [16] [1] [1] [1] [i_1] [i_0] &= ((((~(arr_13 [i_0 - 1] [i_2 - 1] [i_2] [i_6]))) > (!116)));
                        var_17 = (max(var_17, (arr_3 [i_0] [i_1] [i_6])));
                    }
                    var_18 = (min(var_18, ((max((min((arr_12 [i_0] [i_1] [i_1] [i_1] [1]), (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_2 + 2]))), ((((var_2 ? var_11 : (arr_4 [i_0]))))))))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_23 [i_7] &= (min(((((max((arr_4 [i_7]), var_4)) >= ((max(var_1, (arr_2 [i_7] [i_7]))))))), (max(1784754988, 37011))));
        var_19 &= ((var_4 ? ((((arr_21 [i_7] [i_7]) << (var_0 - 65194)))) : 2025897252));
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        var_20 &= (((min(((var_4 ? var_13 : (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8 + 2]))), (arr_17 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))) << ((((((var_11 ? var_7 : (arr_26 [3]))) | (arr_13 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 + 2]))) + 8747200545106076071))));
        arr_27 [i_8] &= (min(((((((arr_13 [i_8] [i_8 - 1] [i_8] [12]) & -8143))) ? -1784755003 : (arr_26 [14]))), (min(((32767 ? 109 : (arr_1 [i_8]))), 9))));
    }
    var_21 &= ((var_0 ? ((((max(var_4, var_0))) ? var_11 : ((max(var_3, var_10))))) : (min((var_10 / var_12), var_4))));
    #pragma endscop
}
