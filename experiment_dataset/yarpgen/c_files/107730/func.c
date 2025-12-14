/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107730
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 -= ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) % (min(((~(410075612))), ((+(((/* implicit */int) (signed char)-70)))))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((520192ULL) << (((((/* implicit */int) arr_0 [i_0])) - (9749)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3569840177863213943ULL)) || (((/* implicit */_Bool) (unsigned char)234))))) : (((/* implicit */int) arr_0 [i_0]))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((520192ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((520192ULL) << (((((((/* implicit */int) arr_0 [i_0])) - (9749))) - (19466)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3569840177863213943ULL)) || (((/* implicit */_Bool) (unsigned char)234))))) : (((/* implicit */int) arr_0 [i_0]))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((520192ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) var_10);
        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
    }
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        var_15 |= ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)7955))))));
        var_16 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((_Bool) 18446744073709031423ULL))), (min((18446744073709031423ULL), (((/* implicit */unsigned long long int) (unsigned char)248))))))));
        arr_8 [i_2] = ((/* implicit */int) ((short) (~(((/* implicit */int) var_8)))));
    }
    var_17 ^= ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */long long int) ((signed char) var_1));
}
