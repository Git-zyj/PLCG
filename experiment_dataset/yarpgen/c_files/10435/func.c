/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10435
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) var_9);
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)57263)))), (((((/* implicit */_Bool) min((((/* implicit */short) arr_4 [i_1] [i_1])), (var_12)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((max((var_7), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) var_12)))))));
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - ((-(((/* implicit */int) var_10))))));
    var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_0)))), (var_10)))))));
}
