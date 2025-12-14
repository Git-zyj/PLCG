/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((21360 && (((((((arr_3 [1] [1] [i_2]) ? 4209879827 : (arr_5 [2] [i_1] [i_2] [9])))) ^ (max(85087469, var_0)))))));
                    var_21 = ((((((var_15 ? (arr_3 [i_0 - 1] [7] [i_2]) : var_13)) >> ((1 ? (arr_3 [i_0 + 1] [16] [i_2]) : var_5)))) < 4209879818));
                    var_22 = (65535 + var_10);
                }
            }
        }
    }
    var_23 = (((((((min(1, 1464668747))) ? (min(4294967295, var_9)) : (~var_6)))) ? ((((~601279320) & var_16))) : (((~0) ? ((var_10 ? 18446744073709551597 : var_13)) : var_16))));

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_24 ^= ((-(((arr_6 [1]) ? (((arr_5 [i_3] [i_3] [i_3] [i_3]) & 37263)) : (arr_3 [i_3] [i_3] [i_3])))));
        arr_8 [i_3] = (min(((min((((arr_6 [i_3]) + (-32767 - 1))), 1))), 18446744073709551608));
        var_25 = ((((((((arr_1 [i_3]) + -83))) & var_0)) ^ ((((!(arr_2 [i_3] [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 ^= (arr_10 [6] [6]);
        var_27 -= 85087466;
        var_28 ^= (((((arr_1 [i_4]) || 4209879827)) ? 57734 : (min((arr_4 [i_4]), (arr_4 [i_4])))));
        var_29 = -5677457090309721999;
        var_30 = (max(6, var_10));
    }
    #pragma endscop
}
