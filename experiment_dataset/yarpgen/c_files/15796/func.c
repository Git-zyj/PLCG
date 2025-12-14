/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15796
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((min((((/* implicit */int) var_7)), (var_4))) >> (((((/* implicit */int) var_1)) - (28008)))))) & (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) var_12)) : (min((var_2), (((/* implicit */unsigned int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */_Bool) ((unsigned char) (~(-2147483641))));
                var_17 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13173)) ? (var_4) : (-2147483620)))) ? (((((/* implicit */_Bool) var_7)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1668275426) : (((/* implicit */int) (_Bool)1))))))) & (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_13)), (arr_0 [(short)9]))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
            }
        } 
    } 
}
