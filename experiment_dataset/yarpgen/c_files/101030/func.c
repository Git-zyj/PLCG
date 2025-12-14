/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101030
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
    var_12 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(((unsigned int) arr_3 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) || (((_Bool) arr_0 [i_0] [i_0]))));
        arr_6 [(_Bool)1] [6] = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_13 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (signed char)119)), (((((/* implicit */_Bool) 12552187007539260920ULL)) ? (12552187007539260920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))))))) * (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)64)))) / (((/* implicit */int) var_11)))))));
        arr_9 [i_1] = ((/* implicit */signed char) var_11);
        arr_10 [i_1] |= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))) * (((var_7) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (181))))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned char)168)) : ((+(((/* implicit */int) arr_2 [i_1] [i_1])))))) - (154)))));
    }
}
