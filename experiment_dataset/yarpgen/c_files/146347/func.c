/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146347
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
    var_18 = min((min((((/* implicit */long long int) (unsigned short)1)), (-901844054852750125LL))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1087443956U)))), (42298055494096468LL))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = min((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_1])), (max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), ((~(((/* implicit */int) var_12)))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) ? ((~(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_2))))));
                var_19 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (signed char)126)), (((((/* implicit */int) (signed char)101)) & (((/* implicit */int) arr_5 [i_0])))))), (((((((/* implicit */_Bool) arr_5 [(signed char)9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [13LL])))) | ((~(((/* implicit */int) (short)20238))))))));
            }
        } 
    } 
}
