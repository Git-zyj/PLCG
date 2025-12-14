/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164614
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 4294967289U)) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (unsigned short)47032))));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_2 [i_1 + 1] [i_1 + 2] [i_1 + 1]) <= (4963409195449177524LL)))), (((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10)))));
            }
        } 
    } 
    var_21 *= ((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) var_6)), (var_10))) & (max((((/* implicit */unsigned long long int) (signed char)15)), (var_10))))), (((/* implicit */unsigned long long int) 430341801U))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18504))) / (10940256970961952989ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 430341788U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18520))) : (3267065791U))))))) ? (min(((~(var_3))), (((/* implicit */unsigned long long int) ((var_6) || (((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_4)))))))));
}
