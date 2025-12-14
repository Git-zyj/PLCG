/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157341
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) + (max((1073217536U), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        var_21 = ((((/* implicit */_Bool) ((unsigned short) arr_2 [(unsigned char)3]))) || (((/* implicit */_Bool) max(((-(var_19))), (((/* implicit */long long int) arr_2 [i_0]))))));
        var_22 = ((/* implicit */short) arr_1 [i_0]);
        var_23 = ((/* implicit */unsigned char) min((var_23), (max((((/* implicit */unsigned char) ((_Bool) var_10))), (var_16)))));
    }
    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
    var_25 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_6)))));
    var_26 = ((/* implicit */short) var_7);
}
