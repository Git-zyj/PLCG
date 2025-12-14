/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150536
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
    var_20 *= ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [(unsigned short)9])) || (((/* implicit */_Bool) 14834788629066542649ULL)))) ? ((~(((/* implicit */int) var_19)))) : (((/* implicit */int) ((_Bool) arr_3 [i_1 + 2] [i_0 - 1])))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-16404))))), ((~(((var_8) << (((((/* implicit */int) arr_3 [10] [i_1])) + (134)))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) 1675319074U);
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_9))))))));
    var_25 |= ((/* implicit */short) var_10);
}
