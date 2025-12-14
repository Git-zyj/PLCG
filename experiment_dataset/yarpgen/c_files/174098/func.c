/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174098
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned short) (signed char)32);
        var_14 = ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29538)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (-8736487846513465381LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
    for (unsigned char i_2 = 4; i_2 < 14; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]);
        var_18 = ((int) ((int) 0ULL));
    }
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)7)) : (-907129720)));
    var_20 ^= ((((/* implicit */_Bool) ((signed char) 9188113518554802685ULL))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned char) var_3);
}
