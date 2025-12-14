/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163263
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0]) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((long long int) 3058608773U));
        var_17 ^= ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) -381238967)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [11LL])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)19])) ? (((/* implicit */long long int) 0U)) : (arr_5 [14U])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)23))) > (arr_5 [i_1]))))) : (arr_5 [i_1]))))));
    }
    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12696142276231879ULL)))))) : (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)0)))))));
}
