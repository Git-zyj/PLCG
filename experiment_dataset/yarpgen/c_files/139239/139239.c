/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_11 = 126;
        arr_4 [i_0] = (126 ? 67108863 : (((((1 ? 1 : (-2147483647 - 1)))) ? 222 : 2)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 |= -1;
        arr_9 [1] |= 0;
        var_13 = 46;
    }
    var_14 = (max(var_14, (((((((((132 ? 0 : 0))) ? ((135 ? 0 : 1)) : 123))) ? (((((127 ? 143 : 1))) ? ((248 ? 126 : 128)) : ((133 ? 0 : -1)))) : ((122 ? 1139588461 : 2143379286)))))));
    #pragma endscop
}
