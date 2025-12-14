/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158259
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)20636)));
    var_12 |= ((/* implicit */unsigned short) (-(max((1308210149257307853LL), (((/* implicit */long long int) (signed char)16))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 |= ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))))));
        var_15 = ((/* implicit */signed char) min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        var_16 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1] [2LL])))));
        var_17 = ((/* implicit */signed char) 1575288278U);
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) & ((+((-9223372036854775807LL - 1LL))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) ((short) var_10))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13356)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-46))));
}
