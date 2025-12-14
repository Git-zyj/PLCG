/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130424
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
    var_11 *= ((/* implicit */short) (-((~(359149807)))));
    var_12 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)176))));
    var_13 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967291U) : (2520544853U))))));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_5 [i_0] [(unsigned char)11] = (_Bool)0;
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)111))));
    }
}
