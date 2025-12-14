/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136623
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_6))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((9223372036854775807LL) != (((/* implicit */long long int) 694253406U)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) var_4);
                    arr_7 [i_2] [i_1 + 1] [6LL] |= ((/* implicit */unsigned int) ((min(((~(arr_4 [i_1 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3167595490U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) : ((-9223372036854775807LL - 1LL))))))) << (((((/* implicit */int) var_7)) + (38)))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (signed char)-28))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) 2048756488U)) ? (16886679049218857843ULL) : (((/* implicit */unsigned long long int) -1046625171984443913LL)))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(((((-1046625171984443896LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (110))))))))));
    }
    var_17 = ((/* implicit */long long int) (_Bool)0);
}
