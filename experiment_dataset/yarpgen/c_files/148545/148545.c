/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min(26514, 151));
        arr_4 [i_0] [i_0] = ((((((var_4 <= var_0) ? (((29 ? 4194303 : 209))) : -var_14))) >= ((var_6 & (((arr_2 [i_0]) ? (arr_2 [i_0 - 1]) : var_19))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = (~(((arr_2 [i_1 + 1]) ? -2070544806 : var_6)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = 193;
                    var_22 ^= ((((((arr_9 [i_1] [i_2]) <= 1))) != (!var_1)));
                }
            }
        }
        arr_13 [i_1] = (((arr_0 [i_1]) ? (((arr_10 [i_1]) & var_1)) : ((~(arr_8 [i_1] [i_1 - 1])))));
        arr_14 [i_1] = (arr_5 [i_1] [i_1 + 1]);
        var_23 = (((((var_10 ? (arr_0 [i_1 - 1]) : (arr_11 [i_1] [i_1 + 1] [i_1])))) ? (arr_10 [i_1 - 1]) : ((var_0 | (arr_0 [i_1])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_24 = var_4;
        arr_18 [i_4] = (((-897326561 ? (arr_16 [i_4]) : var_3)));
        var_25 = ((var_10 != ((18025678646623458221 | (arr_17 [i_4] [i_4])))));
    }
    var_26 = var_10;
    var_27 ^= var_14;
    var_28 = ((var_13 != (((((-3227760139750046201 ? var_13 : var_5))) | var_15))));
    #pragma endscop
}
