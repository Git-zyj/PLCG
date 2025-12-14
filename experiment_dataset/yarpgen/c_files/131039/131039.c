/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= 576782595;
    var_14 = (var_9 % (((((16625220196690058928 ? 13 : 13))) ? (((1821523877019492702 ? -5637844335442598541 : 3444999115564176441))) : (max(147448151, 16625220196690058913)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 *= ((16625220196690058913 ? 3 : (13 << 0)));
        arr_2 [2] [2] = 10418;
        var_16 = ((13 ? 251 : 1));
        var_17 *= 13;
        var_18 = (max(var_18, (((((127 ? 1 : 72)) / (-42 * 109))))));
    }
    #pragma endscop
}
