/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161693
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(max((((/* implicit */int) ((short) (unsigned short)59695))), ((~(((/* implicit */int) var_12)))))))))));
    var_16 = ((/* implicit */unsigned char) (short)32767);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -1)) : (18446744073709551602ULL)));
        arr_2 [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_4))) * ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) (unsigned short)1)) ? (13ULL) : (3ULL))))) << (((((((/* implicit */int) ((short) var_14))) * (((int) arr_0 [i_0] [(short)6])))) - (727320967)))));
        var_19 -= ((/* implicit */short) (+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_20 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (4433013272391138351ULL)))))));
}
