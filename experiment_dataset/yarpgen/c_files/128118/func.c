/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128118
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
    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) ((signed char) var_3))) ? (max((3647661052U), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (short)5174)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1301552888) : (-575771934)))) : (((unsigned long long int) (unsigned char)105))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) var_7);
    }
    var_13 = ((((/* implicit */_Bool) var_5)) ? (575771944) : (((((/* implicit */int) (unsigned char)139)) - (-575771945))));
}
