/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116376
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 1])))) ? (min((max((((/* implicit */unsigned int) (short)7936)), (arr_4 [i_0 + 1] [i_0] [i_0]))), (((/* implicit */unsigned int) ((int) var_14))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_2)))), ((((_Bool)1) ? (arr_2 [i_1 + 2] [i_0] [1ULL]) : (arr_3 [(short)14] [8]))))))));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) 2147483639);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned long long int) var_0)) : (((min((var_8), (var_3))) - (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_2)))))))));
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65520))))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */unsigned long long int) var_12)) : (var_3))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(12823229888373295357ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65522)))) : (((/* implicit */int) var_5)))))));
}
