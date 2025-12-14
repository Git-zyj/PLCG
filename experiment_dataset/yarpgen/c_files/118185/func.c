/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118185
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1337187405105591657ULL)) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) (signed char)-80)))) & (((/* implicit */int) var_2))))) ? (max(((+(var_5))), ((((_Bool)0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)39572)))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) (unsigned short)65524))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) min((2324297217U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) : (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))))));
        var_20 = ((/* implicit */long long int) arr_2 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) ((unsigned short) var_5))) - (32507)))));
    }
    var_21 = ((/* implicit */long long int) var_11);
    var_22 = ((/* implicit */signed char) var_11);
}
