/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129395
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
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30983)) + (var_7)))) ? (min((var_10), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7336))) == (var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_1 - 2] [i_0]), ((short)-7336)))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 13520650987842103929ULL)) && (((/* implicit */_Bool) 4887272868383593058LL))));
                var_15 *= var_11;
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) ? (var_0) : (((/* implicit */long long int) var_10)))) < (max((6907071644648142067LL), (-6907071644648142067LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_11);
}
