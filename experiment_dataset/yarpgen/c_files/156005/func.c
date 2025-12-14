/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156005
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
    var_12 = ((/* implicit */signed char) var_7);
    var_13 = ((/* implicit */int) (signed char)-113);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))) + (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22867))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (2874028187U))))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8149237565370644886LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_8)) ? (-6193538793573842670LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33588)))))))) ? (var_1) : (var_6)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) -6193538793573842670LL);
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 4])) - (((((/* implicit */_Bool) arr_4 [i_0] [7U] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [3ULL] [8LL])))))))));
                }
            } 
        } 
    } 
}
