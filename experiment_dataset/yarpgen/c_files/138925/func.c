/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138925
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
    var_19 ^= ((/* implicit */short) max((((/* implicit */long long int) max(((unsigned short)29972), ((unsigned short)21979)))), ((+(((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) 2805455114U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) 1401820553U)) : (-7440215782311177775LL)));
        var_20 -= (~(((/* implicit */int) arr_0 [i_0])));
        var_21 = ((/* implicit */unsigned int) (_Bool)0);
        arr_3 [i_0] = (+(((/* implicit */int) (unsigned short)65535)));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) (unsigned short)20);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) -8277791986887763069LL))));
        var_24 &= ((/* implicit */_Bool) arr_1 [i_1]);
    }
}
