/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126082
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
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((4847418430210822711LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_3))))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_14 = var_7;
    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2072388415)) ? (((/* implicit */int) (_Bool)1)) : (-168671223)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) max((((unsigned char) var_0)), (((/* implicit */unsigned char) var_1))));
                var_16 = ((/* implicit */int) arr_3 [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (var_5)))) || (((/* implicit */_Bool) var_8))));
}
