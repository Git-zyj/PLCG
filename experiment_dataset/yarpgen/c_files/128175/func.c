/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128175
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)28027))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_8))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (762920620U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((((-4950469542103605873LL) + (9223372036854775807LL))) << (((((-5916488711052532122LL) + (5916488711052532179LL))) - (56LL)))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) var_7)) : (var_5)))), (((((/* implicit */_Bool) 4526301981618698489LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))) ? ((-(((/* implicit */int) ((var_5) < (((/* implicit */int) var_12))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)16247)) ? (-2549773979105682645LL) : (-5299249057174480299LL)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) (unsigned short)3436)) ? (((/* implicit */unsigned long long int) -1302861235)) : (396751280440737108ULL))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)113)))), (((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)98)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = max(((~(((/* implicit */int) var_0)))), ((+(((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1])))));
                    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)38)), (((15U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))))));
                }
            } 
        } 
    } 
}
