/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16531
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
    var_15 += var_4;
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((int) var_11)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)4845)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)43209)) == (1908693676)))))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8195877485720952797ULL))))) : (((/* implicit */int) var_1))))));
    var_18 = ((/* implicit */unsigned short) -2147483631);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_0))))) : (144115188075855871ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4838)))));
        var_19 = ((/* implicit */unsigned int) min(((short)2715), ((short)4095)));
        var_20 &= ((/* implicit */signed char) var_0);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_21 = ((((/* implicit */_Bool) var_14)) ? (max((((((/* implicit */_Bool) var_6)) ? (-2147483625) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_6)))) : (((/* implicit */int) max((var_6), (var_4)))));
        arr_8 [i_1] = arr_2 [i_1];
    }
}
