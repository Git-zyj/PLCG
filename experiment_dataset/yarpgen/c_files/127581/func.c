/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127581
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) var_4);
        var_11 = ((/* implicit */_Bool) var_9);
        arr_3 [4ULL] [4ULL] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_4 [18LL] &= ((unsigned short) ((short) (~(((/* implicit */int) var_3)))));
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (((unsigned char) 3117548585U))));
    }
    var_13 = ((/* implicit */unsigned short) max((var_4), (((/* implicit */long long int) 1177418706U))));
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9))))))));
}
