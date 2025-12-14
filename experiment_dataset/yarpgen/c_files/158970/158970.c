/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158970
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
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = ((((max((max(37, 459496932035108939)), (arr_0 [i_0])))) || (((((11117 ? (arr_0 [20]) : (arr_6 [i_0] [i_2]))) * (((var_9 ? var_8 : -31776))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((-((~(max((arr_7 [i_0] [i_1] [i_2]), 124))))));
                }
            }
        }
    }
    var_15 = ((~(min(-var_1, var_5))));
    var_16 = 6648330866815423201;
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_5 + 2] [i_5] [i_5] = ((max((arr_6 [i_3] [i_3]), (((11064 ? (arr_15 [i_3] [i_3] [i_3] [i_5]) : var_2))))));
                    var_17 = (((-17 ? (var_6 + 0) : var_6)) - (((!(((arr_10 [9]) > (arr_10 [i_4])))))));
                }
            }
        }
    }
    var_18 &= (min((((52309 - var_13) + var_12)), (((-((10 ? var_9 : var_4)))))));
    #pragma endscop
}
