/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120499
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] [i_1] = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1]))))), (((unsigned short) arr_7 [i_0])));
                arr_9 [i_0] [0LL] [i_1] = ((/* implicit */unsigned short) 281474976448512LL);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)10393)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((var_7), (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7091930949387616136LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_8)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) : (max((7091930949387616135LL), (-7091930949387616114LL)))));
    var_20 *= var_14;
}
