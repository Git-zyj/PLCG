/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((-var_12 ? (min(((16810 ? var_0 : 16223166666040552331)), ((max(var_10, var_12))))) : var_12));
    var_16 = ((var_2 + (max(var_1, ((var_10 ? var_2 : var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= arr_0 [i_0];
        var_17 = (2418666620144737326 ^ var_14);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = ((arr_6 [i_1]) ? var_7 : (arr_6 [i_1]));
            var_18 = ((~(2053862666035776515 ^ var_7)));
            var_19 += (((((~(arr_3 [i_2])))) && (((-366356202 ? var_5 : 10298567200686928788)))));
            var_20 = (min(var_20, (((366356202 ? (arr_6 [8]) : (!var_3))))));
        }
        var_21 = (-2147483647 - 1);
        var_22 = ((~(((arr_4 [i_1 + 2]) ? (arr_3 [i_1]) : var_5))));
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_23 = (max((((arr_0 [i_3]) ? -var_7 : (((((arr_10 [i_3]) + 9223372036854775807)) << (((arr_9 [i_3]) - 25245)))))), (((~((max((arr_9 [i_3]), (arr_9 [i_3])))))))));
        arr_11 [i_3] = ((arr_0 [i_3]) ? (((arr_10 [i_3]) + (arr_0 [i_3]))) : -2147483639);
        var_24 = -2744933776220601956;
    }
    #pragma endscop
}
