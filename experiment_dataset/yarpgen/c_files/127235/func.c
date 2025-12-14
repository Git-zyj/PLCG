/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127235
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
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) var_13))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 += ((/* implicit */short) ((min((arr_0 [i_0]), (arr_0 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
        arr_2 [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_0 [i_0]), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_9), (var_12))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-6141)) : (((/* implicit */int) (short)-14893)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
}
