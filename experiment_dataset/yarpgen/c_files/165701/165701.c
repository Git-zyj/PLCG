/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_14 *= (min((arr_1 [8]), (min((((12813081649128913702 ? -114 : 65533))), (((arr_1 [10]) ? 15659849800630410335 : (arr_0 [i_0])))))));
        var_15 *= (((var_11 != (arr_2 [6]))));
        var_16 += ((15094255556297755574 * (!-114)));
        var_17 *= var_6;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_18 *= ((+(((arr_4 [i_1] [i_1]) ? (max(var_12, -1050400395)) : 2013265920))));
        arr_6 [i_1] [i_1] = ((185 << (31468 - 31453)));
        var_19 = (max(var_19, ((((((96 ? var_4 : (arr_4 [i_1] [i_1])))) ? ((((arr_3 [i_1] [i_1]) < var_10))) : var_5)))));
        var_20 -= (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_10 [22] [i_2] = -32757;
        arr_11 [i_2] = (((((41235 || 2013265935) ? (2013265920 + 30) : ((var_6 << (var_6 - 5962773995536815699))))) | (max(((max((arr_5 [7] [7]), 0))), (arr_3 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = 10;
        var_21 = (min(var_21, (((var_9 ? ((((!var_8) ? (var_10 / 1) : (min(-728097362, -93))))) : (max((max(256, var_6)), (-15634 && 18749))))))));
    }
    var_22 = var_11;
    #pragma endscop
}
