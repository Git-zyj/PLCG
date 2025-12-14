/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((min(1, 32753)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = ((~(arr_1 [i_0])));
        var_19 = (((arr_0 [i_0]) >= -54146));
        var_20 = (var_6 - 1536);
        var_21 = (min(var_21, var_3));
        var_22 = 9223372036854775785;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_23 = (!(((-((var_14 ? var_4 : (arr_3 [i_1] [i_1])))))));
        var_24 = (var_14 | 65535);
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_25 = (min(var_25, var_0));
        var_26 = (((arr_1 [i_2]) ? ((((-8799649146165545914 ? var_6 : var_15)) - ((max(1590054762, var_0))))) : (max(((var_0 ? (arr_4 [i_2] [i_2]) : var_7)), (arr_3 [i_2] [i_2])))));
        arr_7 [i_2 - 1] = (((((((max(2366263231465997495, 4294967284))) ? (~-32753) : 32757))) ? -22870 : -15688));
        var_27 = (min(var_27, ((min((max(-32767, -var_2)), 65528)))));
        var_28 = (max(((max((arr_4 [i_2 + 1] [i_2 + 3]), (arr_4 [i_2 + 3] [i_2 + 1])))), (((arr_3 [i_2] [i_2]) ? (arr_2 [i_2 + 2]) : var_9))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_29 = (((65464 * ((((arr_9 [i_3]) > 1))))));
        var_30 = -31288;
    }
    #pragma endscop
}
