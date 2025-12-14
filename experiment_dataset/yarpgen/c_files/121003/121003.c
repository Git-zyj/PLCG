/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((~((((min(2941597630, var_9))) ? ((var_14 ? 12187803946064207248 : 18446744073709551608)) : 6258940127645344367))));
    var_18 = (max(var_18, ((min(var_14, var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((((21033715 ? 18446744073709551608 : 384)) & var_14));
        arr_2 [i_0] = (((((2048498275 ? 2048498275 : 5011912357686785064))) && var_8));
        arr_3 [i_0] |= ((arr_0 [i_0]) == var_16);
        var_20 = 12187803946064207249;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [3] = (6258940127645344352 && var_10);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_21 = ((((((arr_5 [i_1] [5]) ? 9035543324388202142 : (((var_6 ? -11640966 : var_13)))))) > (arr_11 [i_3 - 1] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_22 = (min(((((min(var_13, (arr_15 [i_5] [i_5] [i_5 + 1]))) ? (6258940127645344381 == 0) : ((((arr_4 [i_3]) || var_13)))))), (max(((((arr_1 [i_4]) && 24983))), (((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]) ? -11640966 : 13434831716022766555))))));
                                var_23 = ((((((min(var_7, var_7))) ? var_12 : (arr_14 [i_1] [7] [9] [1])))) ? ((((var_12 < 13434831716022766552) == 13433))) : ((min((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) || 6258940127645344367)), (arr_9 [i_3 - 1] [i_4] [i_4])))));
                                arr_18 [i_1] [i_3] [i_3] [i_4] [i_5 - 1] [i_5] = (min((((arr_1 [i_3 - 1]) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1]))), (max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_24 = ((+((1922934628574994267 ? (arr_19 [i_6]) : -1427844605))));
        var_25 = ((~(var_2 + 255)));
        arr_21 [4] |= var_16;
        var_26 = (min(((18446744073709551601 & (arr_0 [i_6]))), (((((((((arr_0 [i_6]) + 9223372036854775807)) << (var_4 - 54)))) ? var_5 : (((arr_19 [10]) / (arr_0 [i_6]))))))));
    }
    #pragma endscop
}
