/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135687
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) var_15)), (min((((((/* implicit */_Bool) (short)-12258)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned char) var_9)))))));
    var_20 *= ((/* implicit */int) ((min(((!(((/* implicit */_Bool) (unsigned char)255)))), (((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) var_18)))))) || (var_8)));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_18)) / (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2)))))), ((+(((/* implicit */int) ((unsigned char) arr_0 [i_0 - 3] [i_0 - 1]))))))))));
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)9))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+((+(max((6107933663435343904LL), (((/* implicit */long long int) var_3)))))))))));
    }
}
