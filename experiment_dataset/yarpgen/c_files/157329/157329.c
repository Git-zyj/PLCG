/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((var_4 ? var_5 : (((1 ? -19507 : 1)))));
    var_13 = ((((((((var_10 ? var_10 : var_8))) ? var_6 : var_10))) ? (((14733320956213927356 ? -19507 : 19507))) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (arr_3 [19] [i_2] [19]);
                    var_14 = (arr_5 [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = ((((((arr_0 [2]) ? (arr_1 [i_0] [i_0]) : (((arr_5 [i_0]) ? (arr_1 [15] [15]) : (arr_5 [i_2])))))) ? (arr_7 [i_0] [i_0]) : (((((72 ? -1570490324 : 1))) ? (((arr_1 [i_1] [i_0]) ? (arr_0 [i_2]) : (arr_3 [i_0] [i_1] [i_2]))) : (((arr_1 [2] [i_2]) ? (arr_3 [i_2] [i_1] [3]) : (arr_7 [i_2] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
