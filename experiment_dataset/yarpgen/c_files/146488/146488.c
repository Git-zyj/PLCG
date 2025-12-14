/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min((-2147483647 - 1), var_11)))));
    var_15 = (min(var_15, var_3));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (-2147483647 - 1);
        var_17 = (max(var_17, (((1 ? ((var_3 ? (((arr_0 [i_0] [i_0]) % var_9)) : var_6)) : ((-7905048976089246778 ? ((max(838035810, (-127 - 1)))) : (arr_1 [i_0 - 1] [2]))))))));
        arr_3 [i_0] = (((min((min(7262893642976648104, var_1)), 7262893642976648093)) >> (((~104) + 167))));
        var_18 = (((-((var_8 ? -4740308117555603767 : (arr_1 [i_0] [i_0]))))) - (((110 ? 104 : 69))));
        arr_4 [i_0] = -1782451065;
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = (min(110, -8137959972753978198));
        arr_7 [i_1] = (max(-5, 117));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_20 = ((((min(-164, (((arr_5 [i_2]) ? (arr_6 [i_2] [i_2]) : 1782451064))))) > var_6));
        arr_11 [i_2] [i_2] = (min((((arr_6 [i_2] [i_2 + 4]) & 13234)), var_0));
    }
    #pragma endscop
}
