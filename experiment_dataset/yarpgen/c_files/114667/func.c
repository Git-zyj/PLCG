/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114667
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_11))))) : ((-(((/* implicit */int) (unsigned short)62373)))))));
    var_21 = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))))))) == (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_16)))) - (((/* implicit */int) var_7))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 5862244448311000317LL))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_5)) - (6265))))) < (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)59991)) : (((/* implicit */int) var_10))))))) >= (((((/* implicit */int) (unsigned short)5557)) - (((/* implicit */int) var_11))))));
}
