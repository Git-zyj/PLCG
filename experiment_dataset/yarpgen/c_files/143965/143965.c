/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0])));
        arr_4 [i_0] = (((arr_1 [i_0]) >> (var_17 - 8486981261065344645)));
        arr_5 [i_0] = ((var_8 ? var_8 : -var_19));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_20 = 31;
        var_21 = (((!var_14) ? (((var_8 ? var_2 : var_16))) : (arr_6 [i_1 + 1])));
        var_22 ^= (var_0 <= var_1);
        var_23 = (((var_4 + var_13) ? var_18 : (arr_6 [i_1])));
        var_24 = ((var_18 ? (arr_6 [i_1 + 2]) : var_14));
    }
    var_25 &= ((((max(var_11, ((var_14 ? var_15 : var_2))))) ? var_15 : (((min(var_3, 11))))));
    var_26 = (((((((var_13 ? var_3 : var_3))) ? var_3 : var_15)) / ((((min(3, var_11)))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_27 = (((var_14 ? (arr_6 [i_2]) : 30954)));
        var_28 = (34572 == 225);
        arr_11 [i_2] [i_2] = (arr_6 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_2] [i_4] [i_2] = ((var_19 ? (arr_16 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_4]) : (arr_16 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3])));
                    arr_19 [i_2] [i_2] [i_2] = (var_8 != var_17);
                    var_29 += (arr_13 [i_2] [i_3]);
                    var_30 *= (((arr_15 [i_3 - 1] [i_3 - 2] [i_3]) ? (arr_15 [i_3 - 1] [i_3 - 2] [i_3]) : (arr_15 [i_3 - 1] [i_3 - 2] [i_3 - 2])));
                }
            }
        }
        arr_20 [i_2] [i_2] = var_11;
    }
    #pragma endscop
}
