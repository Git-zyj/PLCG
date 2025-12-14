/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125487
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) & ((~((~(3475487785U)))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (18446744073709551591ULL)))));
    }
    var_14 &= ((((/* implicit */int) var_6)) ^ (((/* implicit */int) min((var_11), (((/* implicit */short) var_7))))));
    var_15 = min((min((max((3744106001U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_7)));
}
