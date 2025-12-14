/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180523
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
    var_11 = (((-(min((7ULL), (3138766429171936804ULL))))) ^ (var_6));
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23396))))) ? (((/* implicit */long long int) (+(4294967287U)))) : (var_5)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)11351)) : (((/* implicit */int) var_10)))))) : (min((((((((/* implicit */int) var_8)) + (2147483647))) << (((16955648272217339399ULL) - (16955648272217339399ULL))))), (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) (+(3045043133169784904LL)))) ? (((((16170549790424003590ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) ? (-8442103511940167591LL) : (min((5530768304485410971LL), (6972862592383222065LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (0U))))));
    }
}
