/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = ((((arr_1 [i_0 - 1] [i_0 - 1]) >= (arr_1 [i_0 + 1] [i_0 + 2]))));
        arr_3 [i_0 + 1] = ((((max((arr_0 [i_0 + 2]), 14232831124455955320))) && (arr_1 [i_0 - 1] [i_0 + 1])));
        arr_4 [i_0 + 2] = (((((((19 == (arr_0 [i_0 + 1])))) > var_13)) ? 7 : ((((!var_5) ? (arr_0 [i_0 + 1]) : ((((arr_1 [i_0 + 1] [i_0 + 2]) > (arr_0 [i_0 + 2])))))))));
        arr_5 [i_0 + 2] = (((max((var_3 % var_12), (max(var_5, -16)))) >> 0));
        arr_6 [i_0 + 2] = ((min(var_14, (arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_19 = (max((arr_1 [i_1 + 1] [i_1 + 2]), (((!(arr_0 [i_1 - 1]))))));
        var_20 = (((arr_8 [i_1 - 1] [i_1 - 1]) + (max((arr_7 [i_1 + 1] [i_1 + 2]), (arr_7 [i_1 + 2] [i_1 - 1])))));
    }
    var_21 -= ((((1966782805 > var_9) % var_18)));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = (max((((-9223372036854775807 - 1) ? (arr_9 [i_2] [i_2]) : 999620851)), (max((((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : var_1)), ((min(var_10, 63517)))))));
        var_22 = (min(var_22, ((((((((((arr_10 [i_2]) && (-2147483647 - 1)))) * (((!(arr_10 [i_2]))))))) <= ((((max(var_7, 63517))) ? (arr_10 [i_2]) : (max(-29, var_18)))))))));
        var_23 -= max((((!(var_6 >= 45205)))), (arr_9 [18] [18]));
        var_24 += ((-1 ? (max(2147483647, ((var_9 ? 1163791534 : (arr_9 [2] [i_2]))))) : (((19577 ? (arr_10 [i_2]) : (arr_10 [i_2]))))));
        var_25 = (((max((arr_9 [i_2] [i_2]), (var_5 * -126))) != (((-(68 < 4294967294))))));
    }
    #pragma endscop
}
