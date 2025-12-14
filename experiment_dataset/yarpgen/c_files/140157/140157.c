/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_8 ? 1073741824 : var_4))) ? 0 : 3581498167)));
    var_17 ^= (((((var_4 + (((var_15 ? var_7 : var_15)))))) ? (((((var_3 ? var_5 : 24110))) ? 49 : var_3)) : (((!(~var_8))))));
    var_18 = ((min(var_6, var_5)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] &= ((713469152 ^ (~713469147)));
        var_19 = (max(var_19, ((max(9551097, ((-109 ? 9551097 : 8)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 ^= 44997;
        var_21 = var_7;
        var_22 = ((((((arr_1 [9] [i_1]) ? -23 : ((-(arr_4 [i_1] [i_1])))))) ? (((1237965152 - ((max(103, -10032)))))) : (((arr_1 [i_1] [i_1]) | 1722584462))));
        arr_5 [i_1] [1] &= 713469177;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] [i_3] [i_3] = ((-(((arr_7 [3] [i_3 - 1]) ? (arr_7 [i_1] [i_3 - 1]) : (arr_7 [i_1] [i_3 - 1])))));
                    var_23 ^= (((arr_11 [i_3] [9] [8] [8]) ? 119 : ((((((arr_8 [2] [i_2] [10]) / (arr_7 [i_3] [i_1])))) ? var_4 : (arr_3 [i_2])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_24 = (max(((max((arr_9 [i_4] [7] [3] [i_4]), (arr_6 [i_4])))), var_6));
        var_25 = var_3;
    }
    var_26 = (min(var_26, (((((-38 ? 4611686018423193600 : var_1)) % var_2)))));
    #pragma endscop
}
