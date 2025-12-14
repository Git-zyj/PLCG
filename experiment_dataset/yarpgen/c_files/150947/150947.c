/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = var_1;
                var_12 = (min(((((((arr_3 [i_0] [i_1 - 2] [5]) * var_5))) ? ((((arr_0 [i_0 - 3]) && var_0))) : -32767)), (~17837)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((~(((arr_10 [i_2] [i_3] [i_3] [i_4]) ? (((arr_7 [i_2] [3] [i_4]) ? (arr_4 [i_3]) : (arr_10 [i_4] [i_2] [i_2] [i_2]))) : (((~(arr_5 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = ((arr_12 [i_2] [i_2]) - (((((var_3 ? (arr_4 [i_6]) : var_4))) ? ((((arr_9 [i_2] [i_5] [i_6]) < 8239))) : (arr_12 [i_2] [i_2]))));
                                var_14 = ((max(var_9, (arr_10 [i_2] [i_2] [i_2] [i_2]))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_15 = ((!(((+((var_0 ? (arr_12 [i_2] [i_3]) : 11932)))))));

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_22 [i_3] = ((-((-(var_6 - var_1)))));
                        var_16 = var_6;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_17 = (((((arr_6 [i_2]) & 12926)) & 11932));
                        var_18 = (arr_7 [i_2] [i_2] [i_2]);
                        var_19 = (((arr_16 [i_2] [i_3] [i_7] [i_3]) == (var_0 & var_2)));
                        var_20 = 11932;
                        var_21 = (max((((var_0 > (arr_24 [i_3] [i_3] [i_3] [i_3] [i_3])))), var_0));
                    }
                    arr_25 [i_7] [i_7] [12] [i_2] = var_5;
                }
                var_22 = (((((~(arr_7 [i_2] [12] [i_2])) ^ var_1))));
            }
        }
    }
    #pragma endscop
}
