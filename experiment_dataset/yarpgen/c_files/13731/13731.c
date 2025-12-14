/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 = ((((-7207995689933706330 ? (arr_3 [i_1]) : -1))) ^ (arr_5 [i_0] [i_0]));
                        var_21 = (3377699720527872 ^ var_15);
                        var_22 = 827837637;
                        var_23 = (min(var_23, -3377699720527873));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_24 = (arr_7 [i_1] [i_2] [i_1]);
                        arr_15 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
                        var_25 = (arr_0 [i_1] [i_1]);
                        var_26 = -8035894018010769102;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_27 = (min(var_27, (arr_13 [i_0] [i_2])));
                        var_28 = var_9;
                        var_29 = var_19;
                    }
                    var_30 = (((((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))) % (max((arr_5 [i_0] [21]), var_8))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_25 [15] = ((((1 || -3377699720527872) ? ((var_6 ? -1 : var_0)) : (-827837637 && -3377699720527880))));
                    var_31 = (min(var_31, (+-294472579135866013)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_32 = ((var_6 ? (min((arr_22 [i_7 + 1] [i_7 + 1] [i_7]), (arr_18 [i_10] [i_10] [i_7 + 1] [6] [i_10] [i_7 + 1]))) : (((~(arr_21 [i_6] [i_6]))))));
                                arr_33 [i_8] [i_8] [9] [i_10] = ((var_5 ? ((100 >> (-3377699720527873 + 3377699720527898))) : (arr_2 [i_6] [i_10])));
                                var_33 = (((var_11 ? var_19 : 76)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
