/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= (max(((((32744 / 8738083507840163738) >= var_8))), 115));
        arr_3 [i_0] = ((((((arr_0 [i_0] [i_0]) << (((arr_0 [i_0] [i_0]) - 30484))))) ? (((((arr_0 [i_0] [i_0]) >> (((arr_1 [i_0]) - 28591)))) & (~-32744))) : (min((~32727), (arr_0 [i_0] [i_0])))));
        var_19 = (max(var_19, ((((((((arr_1 [i_0]) ? (arr_0 [4] [i_0]) : 0))) ? ((9223372036854775796 ? var_16 : -1)) : (arr_1 [14])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 ^= ((((((((var_16 ? -6309146135243441379 : 32767))) ? var_6 : (~35413)))) ? var_13 : var_8));
        var_21 = ((-28 ? var_14 : (((arr_1 [i_1]) ? (arr_0 [i_1] [i_1]) : var_0))));
        arr_7 [i_1] [i_1] = ((!((min((((!(arr_6 [i_1])))), 2147483647)))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_22 = (1 || 0);
        arr_11 [13] = 3;
        var_23 *= (((((+(((arr_0 [1] [i_2]) ? (arr_1 [i_2]) : 62))))) ? ((var_3 ? (arr_4 [i_2]) : 35418)) : (arr_10 [i_2])));
    }
    var_24 = (min(((((var_7 / var_13) ? -154132471 : var_6))), (((((var_2 ? var_11 : var_9))) ? var_12 : var_13))));
    var_25 = (((((var_7 * ((4741 ? -118 : var_14))))) ? ((-41384 ? var_18 : var_14)) : 10));
    #pragma endscop
}
