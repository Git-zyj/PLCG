/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136012
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
    var_11 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (min((var_10), (((/* implicit */unsigned long long int) (unsigned short)7493)))))));
    var_12 = ((((/* implicit */int) (signed char)25)) + (((/* implicit */int) (unsigned short)0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (short)5863)) >> (((((/* implicit */int) (short)1965)) - (1950)))))));
    }
}
