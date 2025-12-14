/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124817
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
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (unsigned short)19111)))))), (((((((/* implicit */_Bool) (unsigned char)177)) ? (2448387156U) : (1738445182U))) - (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((((/* implicit */_Bool) max((((signed char) (unsigned short)6)), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-19575)))))))) ? (((923198118U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [2ULL]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) * (((((/* implicit */_Bool) ((signed char) (short)-20535))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)-19575))))))));
    }
    var_21 = (~(min((((var_8) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))))), (((/* implicit */unsigned long long int) var_16)))));
}
