/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142491
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
    var_20 += ((((/* implicit */_Bool) (unsigned char)47)) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))));
    var_21 *= ((/* implicit */unsigned char) (unsigned short)49152);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_22 = ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_8))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((-8795677281268893346LL) | (((/* implicit */long long int) 4294967278U))));
        arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */long long int) 4294967286U)) : (2308393144341745798LL)))) ? (arr_0 [i_1] [i_1]) : (((((/* implicit */_Bool) (signed char)110)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) var_2)))));
        var_23 = ((/* implicit */unsigned short) ((int) arr_1 [i_1]));
    }
    var_24 = ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) var_18)), (0LL))) < (((/* implicit */long long int) ((/* implicit */int) var_14))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65508)) && (((/* implicit */_Bool) var_14)))))))))));
    var_25 = (unsigned char)207;
}
