/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169610
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
    var_12 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)9)), (-1095813534)));
    var_13 = ((/* implicit */unsigned short) (unsigned char)21);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = var_6;
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))));
    }
    var_15 = ((/* implicit */_Bool) (-((-(((((/* implicit */int) var_0)) & (((/* implicit */int) var_4))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((((/* implicit */signed char) var_2)), (var_11))))) - (((((/* implicit */_Bool) max((5241198791415880865ULL), (15957045933044306124ULL)))) ? (((((/* implicit */_Bool) -1562803050)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) var_0))))))));
}
