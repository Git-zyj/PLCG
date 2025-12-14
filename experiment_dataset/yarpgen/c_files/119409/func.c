/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119409
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned char) min((2714812284078843558LL), (((/* implicit */long long int) 1764755082U)))));
        arr_2 [i_0] [i_0] &= ((unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) arr_1 [(unsigned char)1])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_3);
}
