/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132985
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
    var_16 = (+(((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_5)), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
    var_17 = ((/* implicit */unsigned int) var_7);
    var_18 = ((/* implicit */_Bool) var_0);
    var_19 = ((((/* implicit */_Bool) var_11)) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))) : (var_1));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))) * (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                arr_5 [i_1] [(signed char)6] [(signed char)6] = ((((min((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_1))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-25118))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? ((-(99939247U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_15), (var_15)))))))));
            }
        } 
    } 
}
