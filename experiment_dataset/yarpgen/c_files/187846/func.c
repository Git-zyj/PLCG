/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187846
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
    var_20 -= ((/* implicit */_Bool) (unsigned char)21);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33990))))) + ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34031)))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-16))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29804))) | (1457260605847660255ULL)))) ? (((/* implicit */int) ((1457260605847660255ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : ((~(((/* implicit */int) arr_4 [i_1] [i_1])))))))));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)11))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)255))))) : (((((/* implicit */_Bool) (signed char)69)) ? (((4503599627370495ULL) & (var_1))) : (((((/* implicit */_Bool) (short)-11146)) ? (4503599627370495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)38)) ? (15920733586216020145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
    }
}
