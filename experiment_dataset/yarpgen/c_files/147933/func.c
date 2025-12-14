/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147933
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (max((var_4), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-24087)), (var_2)))) & ((+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) var_12);
        var_17 = var_6;
        var_18 = ((/* implicit */short) (+(5627541270093921965ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)));
        arr_6 [i_1] = ((/* implicit */signed char) (short)20861);
        var_19 *= ((/* implicit */signed char) arr_2 [i_1]);
    }
    var_20 = ((/* implicit */short) (+(((((((/* implicit */int) (signed char)15)) >= (((/* implicit */int) (_Bool)1)))) ? (min((648083322U), (((/* implicit */unsigned int) (signed char)-46)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3712499036U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))));
}
