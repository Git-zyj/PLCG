/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121114
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
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 2362183389U))) ? (((/* implicit */unsigned long long int) 8930859674482866223LL)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)22276)) : (((/* implicit */int) (short)22279))))), (((unsigned long long int) (signed char)63))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((short) 339910609U))));
        var_19 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
    }
}
