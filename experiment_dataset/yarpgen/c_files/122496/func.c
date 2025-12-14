/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122496
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_19 = ((unsigned short) ((2742228726U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024)))));
        var_20 = ((/* implicit */long long int) (+(((4091512224U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6005)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_21 = (short)32767;
        var_22 ^= max((min((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_3 [i_1])), ((signed char)22)))), (((203455072U) % (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))), (((/* implicit */unsigned int) min(((-(arr_0 [i_1] [i_1]))), (((((/* implicit */_Bool) 203455054U)) ? (((/* implicit */int) (unsigned short)6003)) : (((/* implicit */int) arr_6 [4U] [6]))))))));
    }
    var_23 = (~(var_14));
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_8)), (var_10)))))), (((((((/* implicit */_Bool) (short)30290)) ? (3630297043657173232LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18752))))) | (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))));
}
