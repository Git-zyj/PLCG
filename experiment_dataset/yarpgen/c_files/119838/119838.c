/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((var_3 / 18) ? ((var_11 ? (arr_0 [i_0]) : (arr_2 [i_0]))) : ((-2147483625 ^ (arr_2 [i_0])))));
        arr_3 [i_0] = (((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) > ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 = (((arr_1 [i_0] [i_0]) <= (((((var_3 ? var_6 : 2147483647))) ? ((0 ? var_4 : 17180847029901585116)) : (((var_0 ? (arr_1 [i_0] [i_0]) : 65535)))))));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (min((((65529 != (arr_0 [i_1])))), 0));
        var_14 &= (((-32743 && 8904949479731745186) - 65535));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_15 = ((-((-(arr_1 [i_2] [i_2])))));
        arr_10 [i_2] = (min((min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2]))), 2422142573));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = ((+((min((arr_4 [i_3] [i_3]), (-127 - 1))))));
        var_16 += 65535;
        var_17 = (((((65529 ? (arr_1 [i_3] [i_3]) : 1))) ? (((arr_1 [i_3] [i_3]) ? -79 : (arr_1 [i_3] [i_3]))) : (((!(arr_1 [i_3] [i_3]))))));
    }
    #pragma endscop
}
