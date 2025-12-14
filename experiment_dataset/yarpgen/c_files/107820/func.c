/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107820
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (max((var_7), (((/* implicit */long long int) var_0))))));
    var_17 = ((/* implicit */long long int) (((_Bool)1) ? (305216358U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) var_6);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (unsigned char)87))))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (2391695532U)))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [10U] [(_Bool)1]))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_20 += (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
        var_21 = ((/* implicit */unsigned short) (!((_Bool)1)));
        var_22 = ((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */long long int) max((var_11), (var_1))))));
        arr_4 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-4202881823608646184LL)));
    }
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) arr_6 [i_2 + 2]);
        arr_7 [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
    }
    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
    {
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)218))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) 4156985953053106794LL);
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) arr_10 [i_3 + 3]))), (((((/* implicit */_Bool) arr_10 [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_3 - 1])) : (((/* implicit */int) var_9))))));
    }
    var_26 = ((/* implicit */signed char) var_10);
}
