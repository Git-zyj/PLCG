/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14602
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(min(((_Bool)1), ((_Bool)1))))))));
        var_11 = ((/* implicit */int) var_7);
        var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (arr_1 [i_0] [i_0])))) && (var_10))), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [8LL] [i_0])))))))));
    }
    var_13 = ((/* implicit */unsigned short) var_6);
}
