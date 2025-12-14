/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_3));
    var_15 += ((var_0 ? (max(((56 ? 9875265511427589329 : 7095)), ((min(56, var_8))))) : (((~(~32767))))));
    var_16 = (((((2147483636 ? (((-83 ? -94 : -1202333857))) : -var_5))) ? var_10 : var_1));
    var_17 = ((((32767 <= -65) / 131941395333120)) + 45);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 45;
        var_18 = ((((0 ? (arr_2 [i_0]) : 195)) > var_2));
        var_19 += var_11;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (arr_2 [i_1]);
        var_20 = 3444746253872888586;
        arr_7 [i_1] = var_1;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = var_2;
        var_21 = (-79 <= 76);
    }
    #pragma endscop
}
