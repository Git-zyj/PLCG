/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, 1));
        var_17 = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = (var_3 > 14125);
        var_18 = (min(((((max((-32767 - 1), var_3))) && 14)), (!-32760)));
        var_19 -= (((((((9223372036854775789 ? var_15 : 9223372036854775789))) ? -14125 : 7080374729353632004)) <= -14141));
        arr_6 [i_1] = (((arr_4 [i_1]) ? (((min((arr_4 [i_1]), 6558444428268828608)))) : ((-((4095 << (11138223839047957115 - 11138223839047957106)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_20 = (arr_9 [i_2 + 2] [i_2]);
        arr_10 [i_2] = (((arr_8 [i_2 + 2]) ? 1073741823 : 0));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] = ((((((var_13 ? (arr_12 [i_3]) : (arr_7 [i_3]))))) ? (arr_9 [i_3] [i_3]) : (~9223372036854775789)));
        var_21 = ((+(((!-14999) - (arr_13 [i_3])))));
        var_22 = -16762;
    }
    var_23 = var_11;

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] [4] = ((var_11 ? 1 : 8065232235494505788));
        arr_20 [i_4] = -9223372036854775783;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_24 -= (((!(arr_22 [22]))));
        var_25 = (((arr_22 [i_5]) | (~14999)));
        var_26 = ((((-(arr_21 [i_5] [i_5]))) != (((((15 && (arr_22 [i_5]))) && (-32767 - 1))))));
    }
    #pragma endscop
}
