/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134772
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
    var_20 = ((/* implicit */signed char) var_7);
    var_21 = ((/* implicit */unsigned short) var_11);
    var_22 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((13533532505096205355ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) var_5);
                var_23 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)45540))))), (((((/* implicit */int) arr_2 [i_0 - 3])) | (var_16)))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_19)) ? ((-(var_12))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) var_15)))))));
}
