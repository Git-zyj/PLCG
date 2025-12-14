/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? var_9 : (max(var_11, ((var_13 ? var_9 : -3017011376204557141))))));
    var_17 = var_3;
    var_18 = ((var_15 ? (((!(((-6827701451429813605 ? var_15 : var_7)))))) : (~-13)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [i_0]), (((arr_0 [3]) ? ((32767 ? 1 : (arr_0 [i_0]))) : var_3))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [1] [i_0] [i_0] = var_11;
                    arr_10 [i_0] [i_1] [9] = (min((~var_0), ((((arr_7 [i_0] [i_0] [i_2 - 1]) < var_4)))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((~(((var_12 + 2147483647) << (32767 - 32767)))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        var_19 *= ((((max(var_8, (arr_8 [i_3 + 1] [i_3] [4] [i_3 - 3])))) & ((((arr_5 [i_3] [i_3 + 3]) <= (arr_0 [i_3 + 2]))))));
        arr_15 [i_3] = ((((min(var_15, ((min(var_0, (arr_1 [i_3]))))))) ? (arr_1 [i_3 + 2]) : ((((var_5 ? (arr_4 [i_3 + 3]) : (arr_8 [i_3] [i_3] [0] [i_3])))))));
        arr_16 [i_3] [i_3] = 40047;
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        arr_21 [i_4] = ((((((arr_20 [i_4] [i_4 - 4]) | (arr_20 [i_4] [i_4 - 1])))) ? (((arr_20 [i_4] [i_4 - 1]) ? (arr_20 [i_4 - 2] [i_4 - 2]) : (arr_20 [i_4 - 3] [i_4 - 1]))) : ((~(arr_20 [i_4 - 1] [i_4 - 4])))));
        arr_22 [i_4] = (max(3017011376204557141, ((max((arr_20 [i_4 + 1] [i_4 + 1]), (min((arr_19 [i_4 - 3]), var_13)))))));
        arr_23 [i_4] = (((((((((~(arr_20 [6] [i_4 - 1])))) || var_10)))) | (arr_18 [i_4 + 1])));
    }
    #pragma endscop
}
