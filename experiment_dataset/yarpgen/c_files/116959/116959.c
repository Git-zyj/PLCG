/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((min(96, 132))), ((max(21, 206)))));
    var_20 = (min(var_20, ((((min((((-187206804 ? var_6 : 66))), 15)) + ((((((var_6 >> (var_11 - 17750)))) ? var_6 : (!var_13)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_21 = ((arr_0 [i_0] [i_1]) ? ((((8804725116619444224 / (arr_9 [i_0] [2] [i_2] [i_1]))) / (((187206802 ? (arr_3 [i_1]) : (arr_0 [i_2] [i_3])))))) : ((((((arr_2 [i_0] [i_0] [i_3]) & 206)) % 1240160729))));
                        var_22 = ((((((0 ? 45882 : 12)))) - (max(((0 ? (arr_6 [i_1] [4] [i_2]) : var_0)), 15288776))));
                        var_23 = -30;
                        var_24 = (((~-187206803) && ((max((arr_3 [i_1]), 13484180805150250039)))));
                    }
                    arr_10 [i_0] [i_1] = (((((!-187206804) == ((max(var_16, 57595))))) ? (max(((max(var_17, (arr_6 [i_1] [7] [i_1])))), (arr_7 [i_0] [i_1] [i_1] [i_2]))) : (((((arr_2 [i_0] [i_0] [i_0]) + 2147483647)) >> (var_11 == 6401515947326353115)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_4] [i_1] = (arr_14 [i_5] [i_4] [i_1]);
                                arr_19 [i_4] [i_1] [i_2] [i_4] [i_1] = ((((((arr_14 [i_0] [i_1] [i_2]) ? (arr_14 [i_0] [i_1] [i_2]) : (arr_14 [i_1] [i_2] [i_1])))) ? (max((arr_14 [i_5 + 1] [i_4] [i_1]), var_4)) : ((~(arr_14 [i_4] [i_2] [i_0])))));
                                var_25 *= var_5;
                            }
                        }
                    }
                    var_26 |= var_12;
                }
            }
        }
    }
    var_27 = (((max(96, var_6)) | (((-(~22))))));
    #pragma endscop
}
