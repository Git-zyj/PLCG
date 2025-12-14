/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152988
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (3577501592118755700ULL))), ((-(var_11)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) var_6)), (var_11)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2]);
                var_19 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)-74))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3272527078U)) ? (var_6) : (((/* implicit */long long int) (~(arr_2 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((-4976389362523066357LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)86)) - (31)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (453336264) : (var_9)))) : ((~(var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((~(750754943))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-27)))), ((((!(((/* implicit */_Bool) var_4)))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_9))))));
            }
        } 
    } 
}
