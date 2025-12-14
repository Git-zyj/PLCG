/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((((9042123798367925446 | var_7) ? var_0 : (var_11 / var_4)))), (min(var_9, (var_8 + -782179926))));
    var_13 = (((((-var_5 >= ((var_11 ? var_11 : -99))))) * var_5));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, (((+(((min((arr_1 [9]), -2061868418)) / (arr_0 [i_0]))))))));
        var_15 = ((min(15688, (((arr_0 [i_0]) ^ (arr_1 [i_0]))))) | var_1);
        arr_2 [i_0] [i_0] = (((-(arr_1 [i_0]))));
        var_16 = ((-(((~(arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_17 |= (((arr_0 [12]) | (((arr_3 [i_1 - 2]) | ((~(arr_3 [i_1])))))));
        arr_5 [i_1 + 2] [i_1 + 2] = max((max((arr_4 [i_1 - 2]), (arr_3 [i_1 - 1]))), (((arr_0 [i_1 + 2]) / (arr_3 [i_1 - 2]))));
        var_18 -= (arr_4 [i_1 - 1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_19 = (min(var_19, (((arr_10 [1] [i_2] [i_2]) << (((!(((1 ? (arr_3 [i_1 + 2]) : (arr_9 [i_1] [i_1])))))))))));
                    var_20 = ((~(min((8658654068736 / -1261407643), (((arr_3 [i_1]) * var_0))))));
                    var_21 -= (-(((min((arr_1 [i_1]), 14779661097872861912)) | (arr_0 [i_1 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
