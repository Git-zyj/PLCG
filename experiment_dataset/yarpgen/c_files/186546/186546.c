/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 = (min((arr_1 [i_0]), (min((arr_1 [i_0]), ((-(arr_1 [i_0])))))));
        arr_2 [i_0] = (((var_3 % var_1) ? (((arr_0 [i_0 + 1]) ? var_3 : -var_2)) : (((arr_0 [i_0 + 1]) ? (var_8 <= var_4) : var_2))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_11 = (min(var_11, var_9));
        var_12 *= (((((!((max(114, 114)))))) != (arr_1 [16])));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_13 -= (arr_6 [18]);
        arr_10 [i_2] [i_2] = var_0;
        var_14 = (((max(var_8, (arr_9 [20] [i_2]))) == ((((3632067948472652459 || (arr_7 [7] [i_2])))))));
    }
    var_15 = (min(var_15, (max((((max(var_2, var_3)))), (max(((var_1 ? var_4 : var_1)), ((max(var_0, var_3)))))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_16 = (max(((var_0 ? (arr_11 [i_3] [i_4]) : (arr_12 [i_4]))), ((max(((~(arr_12 [i_4]))), ((max(var_3, var_9))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_5] [i_5] [i_5] [i_3] = (!var_8);
                                var_17 &= var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (!-5338643331915976320);
    #pragma endscop
}
