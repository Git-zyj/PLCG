/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171621
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
    var_15 = ((/* implicit */unsigned short) var_3);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-1024)) || (((/* implicit */_Bool) var_5)))) || ((_Bool)1)))) + (var_13)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_17 = (+(((/* implicit */int) (unsigned short)65535)));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (9223372036854775807LL) : (((((/* implicit */_Bool) 1040384)) ? (-2184876865560735133LL) : (2184876865560735158LL)))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) var_11);
    }
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_4))));
}
