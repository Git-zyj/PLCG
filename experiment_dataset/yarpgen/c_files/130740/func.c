/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130740
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) var_8);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_12)))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))) : (((((/* implicit */int) var_14)) | (((/* implicit */int) var_3)))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((min((((/* implicit */short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_2))))), (min((var_3), (((/* implicit */short) var_19)))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_1))))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((((/* implicit */int) var_13)) - (var_11))) / (((var_4) % (var_11))))) - (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (max((var_10), (var_18))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_3))))))))))));
    }
    var_26 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) ((unsigned short) var_17)))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_17)))) ? (((var_11) | (((/* implicit */int) (unsigned char)223)))) : (var_4))));
}
