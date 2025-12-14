/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135743
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-74)), (var_7)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) ((18446744073709551606ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_15 *= ((/* implicit */_Bool) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)56966))))))) | (((/* implicit */int) var_4))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */int) ((unsigned char) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(arr_2 [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) min((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) <= (((/* implicit */int) var_8)))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (2LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
            }
        } 
    } 
}
