/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145541
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) arr_1 [i_0]))));
        var_11 = ((/* implicit */unsigned short) arr_0 [4]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((-7653285843925879719LL) + (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((arr_1 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    }
    var_12 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4175453305187942454ULL));
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_0), (var_0)))))), (((/* implicit */int) ((unsigned char) ((14271290768521609162ULL) ^ (4175453305187942454ULL)))))));
}
