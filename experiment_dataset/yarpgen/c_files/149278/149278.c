/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((var_5 ? (((arr_3 [i_2 - 1] [i_1] [i_0]) ? (arr_3 [i_2 + 1] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : (max((arr_3 [i_2 + 1] [i_0] [i_0]), (arr_3 [i_2 + 1] [i_0] [i_0])))));
                    arr_8 [i_1] [i_0] [i_0] [i_1] |= ((~((min(-17855, 928)))));
                    var_20 ^= min((((max((arr_1 [i_2]), var_11)))), (min((arr_6 [i_2 - 1]), (arr_1 [i_2 - 1]))));
                    arr_9 [i_2] [i_1] [i_2] = ((var_11 ? 1050600770 : (max(((var_5 ? var_1 : var_12)), (arr_6 [i_1])))));
                }
            }
        }
        var_21 = var_8;
        arr_10 [i_0] = ((max(var_8, (arr_3 [i_0] [i_0] [i_0]))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_22 |= var_0;
        var_23 = ((((min((arr_13 [i_3] [i_3]), (arr_13 [i_3] [i_3])))) ? (((26 ? 913 : -770538792))) : var_5));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] = (~((((min(var_6, (arr_17 [i_4]))) <= (~var_14)))));
        var_24 = (min(var_24, ((min((((~(arr_15 [i_4] [i_4])))), (arr_16 [i_4] [i_4]))))));
    }
    #pragma endscop
}
