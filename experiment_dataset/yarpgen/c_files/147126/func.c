/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147126
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)12])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_17)))))))))));
                var_21 -= ((/* implicit */unsigned char) ((var_19) ? ((-(((/* implicit */int) (signed char)14)))) : (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) var_0)))) > (((((/* implicit */_Bool) arr_1 [(unsigned char)12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17)))))))));
                arr_6 [(unsigned char)2] [(unsigned char)14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_19) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((signed char) var_13))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1]))))))) || (((/* implicit */_Bool) var_11))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned char)106))) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_18)))))) : (((((/* implicit */int) (unsigned char)113)) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) < (((/* implicit */int) var_5)))))))));
}
