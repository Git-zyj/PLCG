/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((!var_12), var_14)) ? (+-15) : 27862));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((max(((min(var_9, (arr_1 [i_0])))), (arr_0 [8] [i_0]))))));
        var_17 *= ((((max(1, -27862))) ? (max(var_10, 3430887884)) : var_8));
        var_18 += ((+((27849 ? (arr_1 [i_0 + 1]) : (arr_0 [9] [i_0])))));
        arr_2 [0] [i_0] = ((max(3430887895, -27851)));
        var_19 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_7))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (((arr_4 [i_1] [i_2 - 1]) ? var_14 : var_5));
            arr_11 [i_1] [i_1] [i_1] = (arr_8 [i_1] [i_2 + 2]);
            var_20 = ((var_0 ? var_3 : var_6));
            var_21 *= (max(var_3, (arr_9 [i_1] [i_1 - 3] [i_2 + 1])));
            var_22 = (min((((var_2 ? var_2 : var_13))), ((var_3 ? 8298472529258683995 : ((min(var_5, 3566754698178014269)))))));
        }
        var_23 |= ((0 ? ((min(11, -29889))) : 85));
        var_24 = (max(var_24, (((max(((var_8 ? (arr_9 [i_1] [i_1] [i_1]) : 2129971230)), var_2))))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_25 = ((!(((var_4 ? var_5 : 864079401)))));
        var_26 -= ((~(((min((arr_7 [6]), var_9))))));
        var_27 &= (max(((max((arr_5 [i_3]), (arr_1 [6])))), (min(3430887884, (arr_5 [i_3 - 1])))));
        var_28 -= (min(var_1, var_2));
    }
    #pragma endscop
}
