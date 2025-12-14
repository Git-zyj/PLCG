/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128773
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) 1775460944U)))), ((~(var_6))))) : (((max((10278464960486092564ULL), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) > (var_2))))))))))));
    var_12 -= ((/* implicit */unsigned int) ((unsigned long long int) ((7017370655722059539ULL) * (11429373417987492074ULL))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) max((var_10), (var_6))))))))));
    var_14 += ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 |= ((/* implicit */long long int) arr_2 [i_0] [18LL]);
                var_16 = ((((/* implicit */_Bool) (-(arr_2 [i_1 + 1] [i_0])))) ? (((((/* implicit */unsigned long long int) var_3)) - (arr_3 [i_0] [i_1 + 1]))) : (arr_2 [i_1 + 1] [i_0]));
            }
        } 
    } 
}
