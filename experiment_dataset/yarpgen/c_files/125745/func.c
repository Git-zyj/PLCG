/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125745
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) max((277765767U), (var_18))))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned int) (!((_Bool)1)));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_17))));
        var_21 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) -471533237))));
        var_23 -= ((/* implicit */unsigned char) max((((/* implicit */int) (short)12462)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (4611404543450677248LL) : (var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) (short)28702)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) (short)20780))))))));
        var_24 = ((/* implicit */unsigned char) ((unsigned int) var_0));
    }
}
