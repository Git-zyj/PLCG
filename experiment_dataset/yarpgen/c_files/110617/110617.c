/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_12);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = (((arr_3 [i_0]) <= (max(((max(1, var_9))), (min(-26499, (arr_0 [i_0] [i_0])))))));
        var_21 = ((((1 == ((max(var_8, var_4)))))) % var_6);

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_22 = (max(var_22, ((((((arr_2 [i_0]) ? (max(var_12, var_8)) : var_7)) <= (arr_2 [i_0 - 1]))))));
            var_23 |= 53;
        }
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_24 = min((((min((arr_0 [7] [i_2]), var_18)) % (var_7 & -4))), ((((var_8 * 38) - (29 * 1)))));
        var_25 ^= var_6;
        var_26 = var_10;
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_27 = ((!(((3 ? (arr_8 [i_3 - 2] [i_3 - 2]) : (arr_4 [i_3 - 1]))))));
        var_28 = (arr_2 [i_3 - 2]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_29 = (((arr_5 [i_3 - 2] [5] [i_3 - 1]) == ((((max(var_11, 227))) % (((arr_0 [i_3 - 2] [i_3]) ? 4 : 11487))))));
            var_30 = (max(var_30, ((((((~((3 ? var_13 : var_3))))) ? ((((((127 ? 252 : -5642951959141523891))) ? (arr_3 [16]) : var_16))) : ((var_16 ? var_17 : 16488859120045446347)))))));
        }
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_31 = 3396659657;
        var_32 = ((((max((arr_2 [i_5]), (((arr_4 [i_5]) >> (arr_11 [i_5 - 1])))))) ? (((((var_18 < (arr_13 [i_5 + 1] [i_5] [i_5])))) << (var_3 + 174050763))) : ((((var_6 ? var_10 : (arr_10 [i_5]))) - (max((arr_0 [i_5] [i_5]), 5))))));
    }
    #pragma endscop
}
