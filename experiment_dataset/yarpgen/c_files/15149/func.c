/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15149
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) / (var_4)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)))) % (((unsigned long long int) (signed char)101)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))), (((/* implicit */long long int) ((2078807381U) >> (((((/* implicit */int) var_17)) - (137)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (signed char)109);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)19303), (((/* implicit */short) (unsigned char)96)))))) <= (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [11LL])) >= (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) (short)19303)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_7 [i_2] [i_1] [i_0])))))));
                    var_22 = ((/* implicit */unsigned long long int) var_13);
                    var_23 = ((min((17314750766873709828ULL), (((/* implicit */unsigned long long int) (+(1LL)))))) - (min((((((/* implicit */_Bool) var_17)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32751))) : (9223372036854775807LL)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))))), (max(((!(((/* implicit */_Bool) var_12)))), ((_Bool)0)))));
}
