/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_8 || (((var_9 ? (1 && 2519846617306852900) : 1)))));
    var_21 = ((!((max((((var_8 ? 0 : 593830215497359990))), ((0 ? var_19 : var_19)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = ((346928802432769798 ? 19758 : 1174423393));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) * ((((19771 ? var_18 : var_2)) / (35691 * var_7)))));
        arr_3 [i_0] = ((-60 ? (arr_1 [i_0]) : ((1 ? -593830215497359990 : (!var_16)))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_23 = ((-((((min(9370585641809333658, 4977))) ? (var_1 & -2606159560200443284) : -7))));
        var_24 = ((((((((-593830215497359992 ? var_18 : var_9))) * ((var_14 ? (arr_4 [i_1]) : var_11))))) ? 3120543878 : (((((var_19 ? var_9 : var_17))) ? ((-909831841396638391 ? (arr_6 [i_1 - 2]) : -90)) : ((((arr_6 [i_1]) ? var_3 : 593830215497360005)))))));
        var_25 ^= var_3;
    }
    var_26 = (max(var_26, (24672 || 861133554)));
    #pragma endscop
}
