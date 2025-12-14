/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162869
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (6633757070371747464ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_4) : (6633757070371747449ULL))) < (arr_0 [i_0]))))) : ((+(469229564U)))));
        var_13 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [2U])) == (((/* implicit */int) arr_1 [4U])))))));
        arr_2 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) - (((/* implicit */int) (short)17444))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) : (11812987003337804152ULL)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)-2063)) * (((/* implicit */int) (unsigned char)241)))), (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned char)140))))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (short)-2049)) : (((/* implicit */int) (short)2070))));
}
