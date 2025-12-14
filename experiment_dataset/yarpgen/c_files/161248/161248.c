/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((-((var_11 ? -var_1 : var_0))));
    var_19 = ((var_15 ? -var_15 : ((var_13 ? var_11 : (((min(23092, 32767))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = ((13923010600151447747 ? -1666995908 : (((arr_2 [5]) ? (max(9014519356589957015, 9014519356589957036)) : 1))));
        var_21 = (max(var_21, ((max((min(1666995907, 511)), 188)))));
        arr_4 [i_0] |= (arr_1 [3]);
        var_22 += (~70);
        arr_5 [i_0] [i_0] = max((arr_0 [i_0]), (max(((1666995892 ? 1155707537 : var_11)), (((0 & (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 += (51 ? ((19 | (((arr_2 [i_1]) ? -36967297 : (arr_0 [i_1]))))) : ((-((~(arr_3 [i_1] [i_1]))))));
        var_24 *= min(0, (15 == 144115188075855871));
        arr_9 [i_1] = -0;
    }
    var_25 = min((((((var_12 ? 1 : var_2)) ^ ((1 ? var_2 : var_2))))), ((1 ? ((11486072804927784812 ? var_16 : -3733)) : 9223372036854775790)));
    #pragma endscop
}
