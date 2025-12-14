/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131254
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
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [(signed char)9] [(signed char)9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_1 [i_0 - 3] [i_0 - 1]), (((/* implicit */long long int) arr_2 [i_0 + 1]))))), (((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) >> (((var_9) - (15046557955653249669ULL)))))) & (((4312025217171299147ULL) << (((15757884409642177939ULL) - (15757884409642177901ULL)))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((arr_1 [i_0 + 2] [i_0 - 2]), (((arr_1 [i_0 + 3] [i_0 - 3]) >> (((3969251727U) - (3969251673U)))))));
                arr_6 [i_0] = ((/* implicit */signed char) var_15);
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) 3969251737U)), (2688859664067373669ULL))))) ? (((/* implicit */unsigned long long int) (~(325715550U)))) : ((-(var_10)))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)43485)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 3969251746U)) : (var_6)))) ? (13916575405369000093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13))))))))));
}
