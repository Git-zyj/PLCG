/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158268
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_6))));
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_14)) | (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_14)) - (33810))))))), (((/* implicit */int) ((short) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25285)))))));
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (unsigned short)40250)) * (((/* implicit */int) var_15)))) : (((/* implicit */int) (((+(2049164732U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)29))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0 - 2]))))) ? ((+(((/* implicit */int) (unsigned short)40241)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)90)) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_20 = ((/* implicit */signed char) (~(((((var_7) >> (((((/* implicit */int) arr_1 [i_0])) - (89))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_5)))))))));
    }
}
