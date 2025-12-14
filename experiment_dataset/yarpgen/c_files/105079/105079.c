/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = (((min(var_7, (arr_1 [i_0 + 1]))) < (!var_11)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 *= ((((-var_5 & (!var_4))) << (((min(226053277, var_6)) - 226053266))));
            var_14 = (min(-7956812491161166629, var_8));
            var_15 = (~3186039436);
            var_16 *= (((((~((33 ? 4611123068473966592 : var_3))))) ? var_9 : ((var_2 + (arr_0 [i_0 + 1])))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_17 -= (-(((arr_1 [i_2]) ? (arr_1 [i_2]) : var_4)));
            arr_9 [i_0] [i_0 - 1] [i_2] = (((-((var_2 ? (arr_5 [i_0] [i_0] [i_0]) : var_3)))));
        }
        var_18 = ((119 ? 4611123068473966607 : -23515));
        arr_10 [10] = ((((((min((arr_7 [i_0] [0] [i_0]), var_8))) ? var_9 : var_6)) != (((((var_7 ? var_4 : 262143))) ? ((min(-4067506756094169747, -7841603035893826312))) : var_2))));
        arr_11 [i_0 + 1] = 65528;
    }
    var_19 = ((var_4 % (min(((var_1 ? var_7 : 35015)), (((var_5 + 2147483647) << (var_6 - 1699799240481455901)))))));
    var_20 = (min(((7841603035893826311 ? (var_7 != var_2) : (min(var_11, -121)))), ((-301858603 ? -var_4 : (var_7 != var_8)))));
    var_21 = (min(((min(var_11, (!var_11)))), var_6));
    var_22 = var_7;
    #pragma endscop
}
