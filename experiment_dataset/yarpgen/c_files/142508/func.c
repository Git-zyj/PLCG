/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142508
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
    var_18 = ((/* implicit */signed char) min((var_18), (var_9)));
    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) var_3)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) var_11)))))))))));
    var_20 *= ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_3 [i_0]);
                var_22 = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)18))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-19))))) && (((/* implicit */_Bool) arr_3 [i_0])))))));
            }
        } 
    } 
}
