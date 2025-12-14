/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ? var_10 : var_9));
    var_14 = ((-(min(var_9, var_2))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((872874905 ? 241 : 45023));
        arr_3 [i_0] [i_0] = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = max((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))), ((max((arr_4 [i_1]), (arr_4 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_15 += ((((max((((arr_5 [i_1] [i_2]) ? (arr_7 [i_1] [i_2] [i_3]) : (arr_11 [i_1] [i_1] [i_3]))), ((((arr_10 [i_1] [i_2] [i_3] [i_3]) ? (arr_9 [i_2] [i_3]) : var_3)))))) ? (((arr_11 [i_3] [i_3] [i_3]) ? ((min(45004, -1975616359))) : ((241 ? (arr_5 [i_1] [i_3]) : var_1)))) : ((((arr_11 [i_1] [i_1] [i_3]) ? ((max(1, 1))) : (var_10 && 20521))))));
                    arr_12 [i_3] = (((-19743 + (arr_10 [i_1] [i_2] [i_2] [i_3]))));
                    var_16 = ((((((arr_8 [i_2]) * (arr_8 [i_1])))) ? (arr_11 [i_1] [i_1] [i_1]) : (((-(arr_7 [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
