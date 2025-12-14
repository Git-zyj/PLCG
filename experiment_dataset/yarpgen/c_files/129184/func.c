/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129184
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((var_10), (((/* implicit */short) ((signed char) var_3)))))), (var_11)));
    var_21 = ((/* implicit */unsigned long long int) 4283979556U);
    var_22 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) (short)-7938))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)58365)) >= (((/* implicit */int) (_Bool)1))))))) >= (((int) min((((/* implicit */unsigned long long int) var_4)), (2900986849129617306ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_23 += ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [9ULL] = ((/* implicit */unsigned long long int) ((((2900986849129617306ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(short)10])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_13)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (-(arr_3 [i_0] [i_0])));
    }
}
