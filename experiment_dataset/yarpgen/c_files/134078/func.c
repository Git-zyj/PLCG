/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134078
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
    var_10 = ((/* implicit */_Bool) min((((min((var_1), (((/* implicit */unsigned int) var_4)))) * (max((var_0), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_4)) : (var_0)))))));
    var_11 = ((/* implicit */unsigned short) ((min((max((var_7), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1783253820)) ? (-1783253820) : (((/* implicit */int) (unsigned short)0))))))) >= (min((((/* implicit */long long int) 473707637)), (-4392265666332966481LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) max((-16LL), (((/* implicit */long long int) (_Bool)1))));
                var_12 = ((/* implicit */long long int) (~(((((((/* implicit */int) arr_1 [(signed char)4])) > (var_4))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((max((((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_3)))), (var_3))), (((-718527512) / (-1783253820)))));
}
