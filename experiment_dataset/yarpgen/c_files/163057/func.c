/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163057
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (signed char)75));
                var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)9] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1466918742495227200LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_1])) || (((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_1 + 1]))))))));
            }
        } 
    } 
    var_16 = max((((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)60))))), (((/* implicit */unsigned int) var_9)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1981453782U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned int) (unsigned char)23)), (1371095825U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_14))))))));
}
