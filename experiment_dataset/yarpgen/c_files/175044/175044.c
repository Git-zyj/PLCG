/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -0;
        var_16 ^= (arr_0 [1]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_17 ^= ((~(((!(arr_5 [6]))))));
        arr_6 [i_1] [i_1] = (i_1 % 2 == zero) ? ((((18446744073709551615 ? (arr_5 [i_1]) : var_10)) >> (((arr_5 [i_1]) - 710621904266595773)))) : ((((18446744073709551615 ? (arr_5 [i_1]) : var_10)) >> (((((arr_5 [i_1]) - 710621904266595773)) - 2088602304357353989))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_18 = ((-(arr_8 [i_2 - 1])));
            var_19 = 127;
        }
        arr_9 [i_1] [i_1] = var_9;
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_20 = ((var_8 ? (var_5 ^ var_13) : ((~(((arr_8 [i_3]) ? var_7 : var_7))))));
        arr_13 [i_3] = (min(11755, (arr_5 [i_3])));

        for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_17 [i_3] [i_3] = ((((min(2, ((var_7 ? (arr_5 [i_3]) : var_12))))) ? (((11755 ? var_1 : var_15))) : ((((var_12 % var_9) * (!var_0))))));
            var_21 ^= ((+(max((min((arr_14 [i_3]), var_14)), (arr_7 [i_3] [i_4] [i_3])))));
            var_22 ^= (((((min(53806, -1317324168)) % var_5)) * ((min(var_12, (9223372036854775807 && var_11))))));
        }
        for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_23 = (((arr_12 [i_3] [i_5 - 1]) << ((((~(!var_5))) + 58))));
            arr_20 [i_3] [i_3] [i_3] = ((!((!((((arr_16 [7] [7] [1]) * (arr_12 [i_3] [i_5]))))))));
            arr_21 [7] [i_3] [i_5] = (max(var_5, (((arr_0 [i_3]) ? var_1 : var_3))));
            var_24 = ((-(((min(11773, (arr_12 [i_3] [i_5]))) * ((-(arr_12 [i_3] [i_3])))))));
        }
        for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_24 [2] [2] &= 4095;
            arr_25 [i_3] = ((var_8 ? (arr_2 [i_3] [i_3 + 2]) : ((((0 ? 53780 : (arr_19 [14] [i_3 + 3] [i_3]))) | (arr_2 [i_3 + 3] [i_6 - 1])))));
            var_25 *= ((((-(arr_7 [i_3] [i_3 - 1] [10]))) <= ((((arr_7 [i_3] [i_3 + 2] [i_3]) < var_11)))));
            arr_26 [i_3] [i_6] = ((((((var_4 ? var_13 : var_0))) ? var_1 : (!var_9))));
            var_26 = (max(var_26, (((-(arr_19 [i_6 - 1] [i_6 - 1] [4]))))));
        }
    }
    var_27 = 13268;
    #pragma endscop
}
