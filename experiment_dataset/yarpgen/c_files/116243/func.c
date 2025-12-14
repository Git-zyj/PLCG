/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116243
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) 17670468722178965164ULL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(17670468722178965164ULL)))) ? ((+(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0]))))) : ((+(arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((776275351530586452ULL) == (776275351530586452ULL))));
    }
}
