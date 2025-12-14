/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127111
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned char) ((max((arr_0 [i_0]), (arr_0 [i_0]))) >= (((/* implicit */int) ((short) arr_0 [i_0])))));
        var_17 = ((/* implicit */short) (unsigned char)33);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_1 [i_0])))) > (((/* implicit */int) ((short) arr_2 [7U])))));
        var_19 = arr_2 [i_0];
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 15833332571657668708ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_8))))))) - (((max((((/* implicit */int) (short)-12198)), (var_0))) - (((((/* implicit */_Bool) 11828998596787021943ULL)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) var_11)))))))))));
}
