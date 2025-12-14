/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174450
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
    var_11 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 7603311780499132239LL)) && (((/* implicit */_Bool) 6333905760293514447ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20969))) : (var_0))), (min((92518443U), (((/* implicit */unsigned int) (signed char)127))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_0]) : (4265689872U)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_0))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_2 [i_1]))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) >= (((unsigned int) 4294967295U))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_2);
    var_13 *= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
}
