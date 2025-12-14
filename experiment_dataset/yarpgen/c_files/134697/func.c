/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134697
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
    var_20 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_21 = arr_3 [i_0 - 2];
        var_22 &= ((/* implicit */unsigned short) arr_1 [4]);
        var_23 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [(unsigned char)8]) : (arr_1 [12U]))) != (((/* implicit */int) ((17592186044415LL) > (-17592186044424LL))))));
    }
    var_24 += ((/* implicit */signed char) var_19);
}
