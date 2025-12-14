/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140999
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))))))) ? (min(((+(var_9))), (((/* implicit */long long int) ((signed char) arr_3 [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39319)))))));
                var_17 = ((/* implicit */signed char) ((min((7567813473187686383ULL), (((/* implicit */unsigned long long int) (signed char)-106)))) >= (((/* implicit */unsigned long long int) -1LL))));
            }
        } 
    } 
    var_18 += ((/* implicit */signed char) 393216U);
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (~(393216U)))), (((((/* implicit */_Bool) -186254371029151445LL)) ? (8909263385930995571ULL) : (((/* implicit */unsigned long long int) var_9)))))) * (((/* implicit */unsigned long long int) 632589813U)))))));
}
