/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136535
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 ^= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 117440512)) ? (-117440513) : (66846720)))) ? (((((/* implicit */_Bool) var_7)) ? (var_15) : (-1754275817))) : (((((/* implicit */_Bool) var_12)) ? (-251865424) : (var_17))))), (max((min((var_16), (var_1))), (min((var_8), (-309632855))))));
    var_20 = min((min((((((/* implicit */_Bool) var_15)) ? (-117440507) : (var_3))), (min((var_4), (var_4))))), (max((max((var_7), (var_1))), (min((117440512), (66846701))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = min((((((/* implicit */_Bool) max((66846716), (arr_0 [14])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 + 1]) : (var_13))) : (max((-1807933821), (var_5))))), (max((min((arr_1 [i_0]), (1822567184))), (max((var_11), (-117440512))))));
                arr_5 [i_0 + 1] &= max((min((max((536346624), (-66846714))), (1807933821))), (2147221504));
            }
        } 
    } 
}
