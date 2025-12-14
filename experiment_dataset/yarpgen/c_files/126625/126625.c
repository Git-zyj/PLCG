/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 *= ((var_13 ? (min(1, 14)) : ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_20 = (min((max((2954708191 - 78813871), ((var_11 ? (arr_2 [i_0]) : var_12)))), ((((((arr_2 [i_0]) ? var_10 : var_15)) > (!var_13))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((-(arr_4 [i_0] [i_0])));
                    arr_7 [i_1] [i_1] [i_2] = (var_14 ^ var_12);
                    arr_8 [0] [0] &= (((((~(arr_1 [6] [i_1 + 2])))) ? ((((!var_1) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_2 - 1] [i_1 + 2])))) : ((~(var_6 - var_12)))));
                    var_22 = (max(var_22, (((max((arr_1 [i_1 + 1] [i_2 - 1]), var_17))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((!(((14539 ? 31981 : 4270483752386592276)))));
        arr_12 [i_3] = (((arr_2 [i_3]) ? ((var_4 ? (arr_1 [i_3] [i_3]) : var_2)) : (arr_4 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = (min((((min(var_8, var_1)) ^ (var_16 * var_6))), ((((arr_13 [i_4] [i_4]) ^ var_6)))));
        arr_15 [i_4] = (max((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])));
    }
    var_24 = var_10;
    #pragma endscop
}
