/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171635
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
    var_18 = ((/* implicit */int) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0 + 2] &= ((/* implicit */short) (((_Bool)0) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 1]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_2 [(unsigned char)12] [i_0 + 2]) % (((/* implicit */int) ((1601287197) >= (((/* implicit */int) (short)-32749))))))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0]));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)12)) >= (((/* implicit */int) var_14)))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_1 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) ^ (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((16888712089962239992ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        var_21 |= ((/* implicit */signed char) (unsigned short)20020);
        arr_12 [i_2 - 1] = ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (727101470U)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_3])))) - (((/* implicit */int) var_2))));
        var_23 *= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) arr_14 [i_3])))))));
    }
    var_24 ^= ((/* implicit */unsigned short) min(((-(((-9223372036854775807LL) + (((/* implicit */long long int) var_7)))))), (((long long int) var_8))));
}
