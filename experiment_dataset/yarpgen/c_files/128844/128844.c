/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 = (((min((arr_1 [i_0 + 1]), var_1))) ? ((var_7 ? (((4041241079 ? (arr_0 [i_0] [i_0]) : var_3))) : 4041241093)) : var_2);
        arr_2 [i_0] = (arr_1 [i_0 + 1]);
        arr_3 [i_0] = ((((var_5 ? (arr_1 [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))) ? ((-118 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : (arr_1 [i_0 + 1]));
        var_11 = ((-((((max((arr_1 [i_0]), 253726200))) ? (arr_0 [i_0 + 1] [3]) : (((arr_1 [i_0]) ? (arr_1 [8]) : 32512))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, ((((((-((min(var_6, 77)))))) ? var_2 : -var_9)))));
                        var_13 |= (max((arr_8 [i_2 + 1] [i_2 + 3] [i_0 + 1]), (((arr_0 [i_2 + 2] [i_0 + 1]) ? (arr_8 [i_2 + 3] [i_2 + 3] [i_0 + 1]) : (arr_8 [i_2 + 2] [i_2 + 2] [i_0 + 1])))));
                        arr_13 [i_0] [i_2] = (((((((min((arr_9 [i_0] [i_0] [i_0]), var_8))) ? var_8 : (arr_0 [i_2] [i_2])))) ? var_7 : ((var_0 ? (arr_8 [i_0] [2] [2]) : 134217726))));
                        arr_14 [i_3] [i_2] [i_2] [i_0 + 1] [i_2] [i_0 + 1] = var_3;
                        var_14 = ((var_4 ? ((((((1266551777 ? var_9 : (arr_0 [i_3] [i_2])))) ? var_8 : ((max(32516, var_4)))))) : (min((((var_7 ? var_8 : var_4))), (arr_8 [i_0] [i_0 + 1] [i_0 + 1])))));
                    }
                }
            }
        }
    }
    var_15 = var_5;
    var_16 = var_1;
    var_17 &= (((var_0 && var_4) ? ((((min(var_1, 4041241079))) ? ((var_4 ? var_7 : var_1)) : var_9)) : var_1));
    var_18 = ((var_4 ? (((-var_7 ? (var_2 || var_4) : var_2))) : ((var_7 ? var_2 : var_5))));
    #pragma endscop
}
