/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123695
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
    var_14 = ((signed char) ((max((var_13), (((/* implicit */int) var_11)))) >= (((/* implicit */int) var_8))));
    var_15 -= ((/* implicit */unsigned int) ((short) max(((+(281474976710655LL))), (((/* implicit */long long int) (unsigned short)61589)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((var_6) ? (((/* implicit */long long int) 4196610672U)) : (4398046511103LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((_Bool) (short)22438))))) : (((unsigned int) var_10))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_17 += ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)104)) && (((/* implicit */_Bool) var_3))))));
        arr_3 [i_0 - 1] [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22438))) : (max((((/* implicit */long long int) (_Bool)1)), (var_5)))))) ? (((/* implicit */long long int) ((((-4967049592501156602LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3072))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!((_Bool)1))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (short)8))) ^ (var_5))), (((/* implicit */long long int) (unsigned char)0)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)4064))))));
        var_18 = ((/* implicit */int) ((unsigned char) (short)-2));
        arr_8 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) -4398046511103LL))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3795074463590933237LL))));
    }
}
