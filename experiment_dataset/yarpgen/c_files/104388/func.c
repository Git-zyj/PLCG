/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104388
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_7))));
    var_18 = ((/* implicit */long long int) (+(12182182534862444059ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(signed char)9] [i_0 + 2] = ((/* implicit */int) min((((/* implicit */long long int) arr_2 [i_0 + 1] [i_1])), (-1LL)));
                var_19 = ((/* implicit */int) -1LL);
                arr_6 [4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)34))))))) < (min((((((/* implicit */_Bool) var_2)) ? (2495706562058704209ULL) : (0ULL))), (((((/* implicit */_Bool) var_8)) ? (2495706562058704209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0])))))))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_0 - 4])) + (-1653494878))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) max(((unsigned char)227), ((unsigned char)245)))))) : ((+(var_0))))))));
}
