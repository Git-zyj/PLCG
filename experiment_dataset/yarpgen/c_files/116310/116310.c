/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 = (((((((var_5 ? 42268 : (arr_0 [i_0 - 2] [i_0])))) ? 2047 : (max(var_6, 4294967278)))) & (((17 || var_4) ? 9 : 4294967287))));
        arr_2 [i_0] [i_0 - 2] = 4294967289;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (var_4 ? -var_8 : ((-4294967275 ? (var_9 / var_0) : 17)));
        arr_7 [i_1] [i_1] &= (max(((min((arr_1 [2]), ((var_10 ? 16776192 : 29))))), ((~((56125 ? 8259213497617793578 : 4294967289))))));
        arr_8 [i_1] = (min(-1584612403, (((arr_0 [i_1 - 1] [10]) ? ((2315313393 ? (arr_1 [18]) : (arr_1 [16]))) : 217))));
    }
    var_13 = ((((min(((15 ? 4294967287 : 549914529)), var_10))) ? -114 : ((28991 ? (((8 ? -548033894 : 7))) : ((4294967295 ? 0 : 9223372036854775785))))));
    var_14 = 19149;
    #pragma endscop
}
