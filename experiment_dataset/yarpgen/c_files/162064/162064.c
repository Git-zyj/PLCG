/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (var_7 <= var_7);
    var_20 = (max((((max(0, var_0)) + (max(var_3, var_4)))), var_13));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 = (var_4 ? (((min(9, 1121501860331520)))) : (max((0 - var_7), ((var_7 ? (arr_0 [i_0]) : var_3)))));
        var_22 = (var_17 ? var_15 : (((((arr_1 [i_0]) <= 1)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_23 = (max(((max((!var_15), (var_10 ^ var_16)))), (max(var_15, (max(var_2, 9223372036854775807))))));
        var_24 = (min(var_24, (~8663)));
        var_25 = ((var_6 ? ((-(arr_1 [i_1]))) : (((((min(-23669, 11)))) * (((arr_1 [i_1]) ? 18445622571849220093 : var_15))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_26 |= ((max(var_13, (arr_1 [i_1]))));
            arr_7 [24] [i_1] [i_1] |= ((~(((2 != 1857181472) - var_11))));
            var_27 = (max((~-24), (var_0 || var_16)));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_11 [i_1] [i_3] = ((!((max((arr_5 [i_3] [i_3]), var_11)))));
            var_28 -= (max((arr_0 [i_1]), (min(7, (arr_0 [1])))));
            var_29 = 18445622571849220095;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_30 = var_15;
                arr_16 [16] = max(((max(127, 11))), (((arr_1 [i_5]) + 12653149360856335353)));
                arr_17 [i_1] = max((((var_8 ? var_11 : ((0 ? 129 : -59))))), ((((var_18 ? 19679 : (arr_6 [10] [10]))) >> ((((159 ? var_17 : var_8)) - 449307279)))));
                var_31 |= (((arr_4 [i_1]) & var_1));
                arr_18 [i_1] [i_1] [i_1] = (max(((~(arr_4 [i_4]))), ((var_5 & (arr_4 [i_1])))));
            }
            var_32 = (arr_12 [i_1] [i_4]);
            var_33 = ((var_2 >= (arr_10 [i_1])));

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                var_34 = ((((~(arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 2])))) && 8642792340232362051);
                var_35 = var_14;
                var_36 = ((~((~(arr_9 [20])))));
            }
        }
        var_37 = (min(var_37, ((((max(var_0, var_2)) >> (var_8 + 28685))))));
    }
    #pragma endscop
}
