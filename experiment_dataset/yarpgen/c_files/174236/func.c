/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174236
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26705)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_0)))), (max((1692830071), (((/* implicit */int) (unsigned char)90))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1692830086)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned char)186)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [2LL] = min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4164121691U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_3 [i_0 - 1])))), (((((/* implicit */_Bool) 4164121696U)) ? (803837681) : (((/* implicit */int) arr_0 [i_1]))))))), ((-(((arr_5 [i_0] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                arr_7 [i_0] [i_0] [5] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (min((((/* implicit */long long int) 1285942U)), (0LL))) : (((/* implicit */long long int) max((4294967281U), (2700999031U)))))), (((/* implicit */long long int) (-(var_8))))));
}
