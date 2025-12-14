/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178333
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_5) - (((/* implicit */unsigned long long int) 1199461197U))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9597436995892165991ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))))) : (0)));
    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 8849307077817385640ULL)) && (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 4031020596241907724ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_6))))))))) ? ((+(var_0))) : (var_18)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((var_6) - (-2109067996)));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [6]))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1587197561) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_0 [i_0] [i_0]));
    }
}
