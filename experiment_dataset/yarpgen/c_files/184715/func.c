/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184715
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)52048))));
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (var_7)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (signed char)127)) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 11054423298743791942ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (17ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : ((~(var_8)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) 11)))) ? ((~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))) : (((/* implicit */int) ((18446744073709551615ULL) != (arr_4 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) 11889395931983592689ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))));
            }
        } 
    } 
}
