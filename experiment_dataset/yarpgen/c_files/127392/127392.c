/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((10 >= ((10 ? -105 : 1))));
        arr_2 [i_0] = max((arr_0 [i_0]), (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((!((max((((arr_3 [i_1]) * var_16)), var_8)))));
        var_20 = (!2);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_15 [0] [i_1] [i_3] [i_4] [i_2] = ((var_10 ? (((arr_3 [i_1]) ? 62 : 1)) : ((~(arr_6 [i_1] [i_1] [i_1])))));
                        arr_16 [i_1] [i_2] [i_1] [20] [19] [i_4] = (((((18 < (arr_10 [i_1] [i_1] [i_3] [i_4]))))) <= (arr_8 [i_4] [i_3] [i_1]));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_20 [i_1] [15] [i_3] [1] [i_3] = ((((~(arr_7 [i_3]))) - (((((arr_7 [i_1]) <= 196))))));
                            var_21 = ((((((~(arr_10 [i_4] [18] [i_1] [i_1]))) << 2)) * (((arr_7 [i_5]) >> (((arr_7 [i_4]) - 379642192))))));
                            var_22 = ((-(((!(arr_10 [11] [i_4] [1] [i_1]))))));
                            arr_21 [i_5] [11] [i_1] [i_2] [i_1] = ((-(max(-var_12, (((arr_11 [i_1] [i_4] [i_3] [i_3]) ? -106 : (arr_4 [i_1] [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_24 [i_6] = (--23269);
        arr_25 [i_6] = (max(((((79 + (arr_10 [i_6] [i_6] [i_6] [i_6]))))), (min(2110806854, ((min(1, 17)))))));
        arr_26 [i_6] [i_6] &= (!(((~((((arr_22 [i_6]) == var_13)))))));
    }
    var_23 |= var_0;
    var_24 = (min(((~((var_3 ? 16 : var_11)))), var_11));
    #pragma endscop
}
