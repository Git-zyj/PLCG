/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157065
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18)))) >= (((/* implicit */int) min(((unsigned char)109), ((unsigned char)103))))))), (var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [19LL] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((1782353988) | (((/* implicit */int) (unsigned char)130)))) >> (((((/* implicit */int) var_7)) - (13823)))))), (566767031U)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)144), ((unsigned char)126)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_2)))))) : (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_7))))) & (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_17)))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (_Bool)1))));
                var_21 *= ((/* implicit */unsigned char) var_12);
                var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((7057996985593837936ULL), (((/* implicit */unsigned long long int) 3142488300U))))) ? (((/* implicit */long long int) var_5)) : (((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52460)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-81)), ((unsigned char)134)))))))));
            }
        } 
    } 
}
