/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146354
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
    var_17 = ((/* implicit */unsigned int) (unsigned char)160);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-114)) < (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)160))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_2 [i_0])))));
        arr_3 [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_2 [i_0])))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */int) (unsigned char)213)) >> (((arr_2 [(unsigned char)8]) - (708132450))))) << (((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */short) (_Bool)1);
    }
    var_21 = ((/* implicit */_Bool) (((+(((((/* implicit */int) (_Bool)1)) << (((var_1) - (862782300U))))))) << (((/* implicit */int) (_Bool)1))));
}
