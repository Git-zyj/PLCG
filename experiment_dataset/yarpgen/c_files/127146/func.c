/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127146
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 *= arr_3 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0]) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483647)), (1103889246U))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 262143)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1))) >> (((max((2112297766U), (((/* implicit */unsigned int) var_9)))) - (2112297756U))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_21 |= ((/* implicit */int) 9802053748096069089ULL);
        var_22 = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_6 [i_1])));
    }
    var_23 = var_5;
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? ((-(1543984858489591213LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))) ? (var_15) : (3222669426982820824ULL)));
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_18)))) ? (var_17) : (((/* implicit */long long int) (-(var_12))))))))))));
}
