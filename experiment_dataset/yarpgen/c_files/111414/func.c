/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111414
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_4 [(short)1] [(short)1])), (arr_5 [(short)8])));
                var_20 = (signed char)121;
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((((/* implicit */_Bool) (signed char)76)) ? (((((/* implicit */_Bool) (signed char)8)) ? (2993841152U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : ((-(2993841157U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-109)))));
}
