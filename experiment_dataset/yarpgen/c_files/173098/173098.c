/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = (~var_4);
        var_13 = (max(var_13, (((~(arr_1 [i_0 + 1]))))));
        var_14 += (((arr_0 [i_0 + 1]) ? var_9 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_15 = ((((min(14411, 51118))) ? (((51117 - (!11516692499030887608)))) : ((1 ? ((6930051574678664002 ? var_3 : 11516692499030887590)) : 51125))));
        arr_6 [i_1] = (((((min(var_10, 222544735639896513)) ? (4294967274 < 11516692499030887613) : ((49741 + (arr_3 [i_1] [i_1])))))));
    }
    var_16 = ((var_2 + (max((-2147483647 - 1), var_5))));
    #pragma endscop
}
