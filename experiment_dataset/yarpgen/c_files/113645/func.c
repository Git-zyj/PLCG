/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113645
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((var_1) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_1))))) : (((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1])))), (((/* implicit */int) max((arr_5 [i_1 - 2] [i_0]), (arr_5 [i_1 + 2] [i_1]))))));
                var_21 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (6270812877442789119ULL)))), ((-(arr_1 [i_1 - 2])))));
                var_22 ^= ((/* implicit */int) min(((-(0LL))), (((/* implicit */long long int) arr_4 [i_1 - 2] [i_1 + 1]))));
                var_23 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
            }
        } 
    } 
}
