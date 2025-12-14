/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114606
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967293U)) ? (2382024884056659490LL) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((-977986066) + (977986090))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (short)9569))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9557)) ? (((/* implicit */long long int) ((12) ^ (((/* implicit */int) (short)-9558))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))))));
        arr_4 [12] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-9553)) ? (((/* implicit */int) var_5)) : (12))) + (((/* implicit */int) (unsigned short)45289))));
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)20254)))))))) ? (((/* implicit */int) (unsigned short)45293)) : (((max((-2076931268), (((/* implicit */int) (unsigned char)15)))) / (((/* implicit */int) ((unsigned short) (signed char)48)))))));
    var_15 = ((/* implicit */_Bool) var_10);
    var_16 *= ((/* implicit */signed char) ((unsigned int) ((((var_8) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20274))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) var_11))))))));
}
