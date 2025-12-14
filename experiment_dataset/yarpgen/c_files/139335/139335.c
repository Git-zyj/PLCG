/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? (((!(!0)))) : ((var_4 ? ((19 ? 7029 : 7030)) : (7030 == 7029)))));
    var_14 = ((~((((max(-1, 127))) ? var_0 : (!var_8)))));
    var_15 = (max(var_15, 1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(63, (((arr_0 [i_0] [i_0]) ? 7030 : 119))));
        var_16 = (max(var_16, ((((((arr_1 [i_0] [i_0]) ? 1993 : (arr_1 [i_0] [i_0]))) ^ (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1] &= ((7035 ? ((var_11 ? var_9 : 240)) : (((!((min(31, var_5))))))));
        var_17 = (min(var_17, (((max(((max((arr_0 [8] [8]), 67108863))), (max(7028, (arr_4 [i_1])))))))));
    }
    #pragma endscop
}
