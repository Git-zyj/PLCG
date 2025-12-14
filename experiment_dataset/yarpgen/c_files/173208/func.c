/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173208
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
    var_11 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((short) (_Bool)0)), (((/* implicit */short) var_8)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 771995289)) ? (((/* implicit */int) (short)5013)) : (((/* implicit */int) (unsigned short)34383))))))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((unsigned long long int) var_8)))) << (((max((((/* implicit */int) (short)5)), ((-(-771995289))))) - (771995288)))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : ((+(((((/* implicit */int) var_7)) / (var_3)))))));
        arr_3 [(_Bool)1] [(unsigned short)13] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) -771995309))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) -771995288)))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
}
