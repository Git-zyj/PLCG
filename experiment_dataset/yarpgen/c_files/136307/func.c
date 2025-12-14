/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136307
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_17)) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14002620149961274015ULL)) || (((/* implicit */_Bool) -863049621))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_16))))))) || (((/* implicit */_Bool) 2933322286U))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 4444123923748277601ULL))));
                arr_5 [i_1] [i_1 - 1] = min((var_2), (((/* implicit */unsigned char) var_8)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_14);
}
