/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111070
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
    var_10 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)0)), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)-24))))) ? (((((/* implicit */_Bool) (signed char)-10)) ? (1475394818160695555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)5] [(signed char)5])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((max((max((2156354738146145124ULL), (18106617839249462480ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)1877)), (9223372036854775795LL)))))) >= (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [7LL] [(unsigned short)2])))) + (((/* implicit */int) max(((unsigned short)63659), (var_6)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((var_7) ? (((/* implicit */int) (unsigned short)1876)) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (signed char)-23))))) ? (((((/* implicit */int) (signed char)15)) * (((/* implicit */int) (signed char)80)))) : (((/* implicit */int) min((var_6), (var_6))))))));
}
