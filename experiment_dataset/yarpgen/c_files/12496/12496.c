/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = (min(var_14, ((((((-(!var_2)))) ? (((var_8 ? var_6 : var_11))) : (((var_2 || var_3) ? -var_3 : ((var_12 ? var_6 : var_5)))))))));
    var_15 = (max(var_15, ((((~var_6) >> (127 - 115))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 += (((((arr_8 [i_0] [i_3]) <= (((arr_2 [i_0] [i_0]) >> (((arr_6 [i_2] [i_0]) - 145)))))) ? (((-(((var_11 <= (arr_0 [i_0]))))))) : (((arr_0 [i_1]) ? (arr_2 [i_1] [i_3]) : var_4))));
                        var_17 = arr_2 [i_0] [i_3];

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_12 [i_4] [22] = var_10;
                            var_18 = (min(var_18, ((((arr_4 [i_0] [i_3] [i_4]) - (((arr_7 [i_4] [i_3] [i_2] [i_1]) ? (((min((arr_1 [i_4]), (arr_8 [19] [19]))))) : ((-(arr_10 [i_1] [i_2]))))))))));
                        }
                        var_19 = ((-(((((arr_0 [i_2]) + 2147483647)) << (((arr_9 [i_0] [i_1] [i_2] [i_3]) - 24))))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [i_0] = (((var_1 >> ((((~(arr_8 [i_0] [i_1]))) + 33896)))));
                        var_20 = (min(var_20, ((((((((-(arr_3 [i_0] [1])))) ? (((arr_7 [i_0] [i_1] [i_2] [i_5]) ? var_10 : var_3)) : (((var_0 ? var_7 : var_12))))) != ((-(((arr_0 [i_0]) ? var_4 : (arr_7 [i_0] [i_1] [i_2] [i_5]))))))))));
                    }

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_6] [i_2] [i_2] = (((+(((arr_16 [i_0] [i_0] [i_0] [i_6]) ? var_7 : (arr_1 [i_0]))))));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_21 = (max(var_21, (((var_10 ? (!0) : ((((arr_15 [i_0] [i_1] [i_0] [i_6] [i_1] [i_2]) % var_7))))))));
                            arr_25 [i_0] [i_1] [i_1] [i_0] [i_1] &= ((~((min((arr_24 [i_0] [i_1] [10] [8] [i_7]), (arr_24 [i_0] [i_1] [i_2] [i_6] [i_7]))))));
                            var_22 = var_8;
                        }
                    }
                }
            }
        }
    }
    var_23 = ((-((((var_10 ? var_1 : var_5)) << ((((var_2 ? var_8 : var_9)) - 63627))))));
    #pragma endscop
}
