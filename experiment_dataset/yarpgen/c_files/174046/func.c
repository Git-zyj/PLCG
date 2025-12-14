/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174046
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
    var_20 = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) ((signed char) (short)-9294)))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) var_6));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32748)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (9061348511985894156LL)));
    }
}
