/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((9223372036854775798 ? (var_10 || var_7) : var_5)) + var_7));
    var_13 = (((min((3175136432 / var_11), -var_3))) / ((((max(5959928408343628028, var_10))) ? var_4 : (1119830840 / var_7))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 2] = (33554431 >= 1119830840);
        arr_4 [i_0] = ((-(((var_9 || (!var_0))))));
        var_14 = var_7;
        var_15 = var_11;
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_16 = var_9;
                    var_17 = (((5234827218207046182 * 3803672055) == (arr_8 [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 = ((((var_1 == (arr_7 [i_5 - 4] [i_1 + 1] [i_1 - 2]))) ? (((-(((arr_6 [i_1 - 3]) ? 1 : (arr_10 [i_1] [i_1])))))) : (max((arr_15 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_5 [i_1 - 1])))));
                                arr_21 [i_1] [i_2] [i_3] [i_1] [i_1] = ((-((((var_9 ? 140737488093184 : (arr_16 [i_1 - 2] [i_2]))) ^ var_0))));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1 - 1] [i_1] = (max(var_0, (((arr_15 [i_1] [i_1 - 2] [i_1] [i_1 - 2]) / ((2145360319 ? (arr_16 [i_1 - 1] [i_2]) : (arr_17 [i_1 - 2] [i_2] [i_3] [i_2] [i_3] [i_3])))))));
                }
            }
        }
    }
    var_19 -= ((((5271655485904508578 ? (var_9 & var_11) : 491295240)) | ((((var_8 && var_2) & 13175088587805043021)))));
    #pragma endscop
}
