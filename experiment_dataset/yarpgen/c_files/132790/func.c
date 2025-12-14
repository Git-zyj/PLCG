/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132790
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1541307476U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 601076408U))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))))) : (((((long long int) (_Bool)0)) % (((/* implicit */long long int) (-(var_7))))))));
        arr_5 [i_0] = ((/* implicit */signed char) (-(3072195052U)));
        arr_6 [i_0] = ((/* implicit */_Bool) min((781391220U), (((/* implicit */unsigned int) (short)-16282))));
        arr_7 [i_0] = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    }
    var_11 = ((/* implicit */long long int) ((1541307476U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)16260)))));
}
