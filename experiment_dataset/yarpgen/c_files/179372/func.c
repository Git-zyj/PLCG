/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179372
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */short) var_9))))))))))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min(((~(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_6)), (var_0)))))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) var_6);
        var_13 = ((/* implicit */_Bool) var_4);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_1)))) - (((((/* implicit */_Bool) (signed char)48)) ? (2544838286404446886LL) : (((/* implicit */long long int) 4141613731U))))));
    }
    var_15 = ((/* implicit */unsigned char) var_3);
}
