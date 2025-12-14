/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114052
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
    var_10 |= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_1)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)29774)) : (((/* implicit */int) (unsigned short)29774))))));
        var_12 *= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29774))) : ((-9223372036854775807LL - 1LL))))) ? (6175576770524016029ULL) : ((~(0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)14]))))) < (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))))));
    }
}
