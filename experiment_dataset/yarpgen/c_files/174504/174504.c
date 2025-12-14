/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((!(((var_7 ? var_8 : 3217215220))))) ? (min((min(var_4, var_2)), (1 / 127))) : 0));
    var_12 = (~(((((-8 ? var_2 : var_1))) ? (~var_0) : ((min(113, var_10))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [1]), ((((-(arr_0 [i_0]))) >> (-8 + 58)))));
        arr_3 [i_0] = (min((~var_0), ((~(arr_0 [i_0])))));
        arr_4 [6] = (((((((min(var_1, var_2))) ? -65535 : (arr_1 [i_0])))) ? (((min(-1, 7)))) : (((946543489 ? var_3 : 127)))));
        var_13 = ((((!(!var_6))) ? (min((min(562949952372736, (arr_0 [7]))), 946543467)) : ((((arr_0 [i_0]) ? (min((arr_0 [i_0]), var_8)) : (min(var_2, (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = (max(var_14, ((((arr_1 [i_1]) >= var_3)))));
        arr_7 [i_1] = (((var_8 ? var_4 : (arr_6 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_15 = (max(var_15, (max((((~((~(arr_8 [i_2])))))), ((((var_10 && (arr_10 [i_2] [i_2]))) ? (min(8243720764066968265, 14984443223547074364)) : (15420494833406203579 & 116)))))));
        var_16 = min(((!(((-7916921894633680259 ? -101 : 65535))))), ((var_4 || (arr_1 [i_2]))));
        var_17 = (((((-4398046511103 ? ((min(-874983571, 921420058))) : (max(9126206863888751594, (arr_0 [i_2])))))) ? (((arr_1 [i_2]) ? 15420494833406203579 : (arr_10 [i_2] [i_2]))) : (((arr_9 [i_2] [i_2]) ? 10203023309642583350 : (arr_9 [i_2] [i_2])))));
    }
    var_18 = var_5;
    #pragma endscop
}
