/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((-(~var_16)));
        var_20 = (min(var_20, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_9)))));
        arr_3 [i_0] = (((492581209243648 % -78190353) / (((((arr_1 [i_0]) >= (arr_1 [i_0])))))));
        arr_4 [1] = (var_14 % var_13);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] [i_3] [i_3] = (((((var_3 + (arr_9 [i_2])))) >= (((((-(arr_5 [i_4]))) / (-1994740422 < 60))))));
                                arr_17 [i_2] = (var_7 <= 4294967274);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] [i_2] = (((arr_12 [i_2] [i_2]) == ((((((var_2 ? var_17 : var_0)) < var_11))))));
                    var_21 += (arr_6 [i_2]);
                    var_22 += var_8;
                    arr_19 [i_2] = (~((17943 >> (25809 - 25809))));
                }
            }
        }
    }
    var_23 = (var_0 / var_19);
    var_24 = ((~var_8) / var_13);
    #pragma endscop
}
