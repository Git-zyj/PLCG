/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_4;
    var_21 = ((var_14 ? ((((!((max(360264573, 0))))))) : ((min(var_9, var_19)))));
    var_22 = (max(((((var_13 % var_17) ? var_15 : (max(var_9, var_1))))), (max(((max(360264570, var_10))), ((var_2 ? var_17 : 117))))));
    var_23 = var_10;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_24 = (min(var_17, ((((35578 & 1004464821) < (min(360264594, 3934702723)))))));
        var_25 = (((max((~3934702705), (max(var_13, 4294967288)))) | (((3290502463 << (var_12 - 106))))));
        arr_2 [i_0] [12] = ((((3934702723 >> ((((var_10 ? (arr_0 [22]) : var_14)) - 49042)))) >= (((3934702703 - 360264573) - -1208345891))));
        var_26 = 1004464821;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (~110);
        arr_7 [i_1 - 2] [i_1] = (min(((max(((max(127, 139))), (max(var_7, 360264573))))), ((min(24808, (arr_0 [i_1]))))));
        arr_8 [8] = ((-1 ? var_5 : -15450));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (min(((((var_12 ? 11306 : var_7)) + (360264573 + 3934702702))), var_7));
        arr_12 [i_2] [i_2] = ((!(arr_10 [i_2 + 1])));
    }
    #pragma endscop
}
