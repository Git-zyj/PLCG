/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148812
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
    var_19 = ((/* implicit */int) 598449897484207855LL);
    var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3424970467U)))))))) ? (((/* implicit */unsigned long long int) max((3424970467U), (((/* implicit */unsigned int) 21))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) var_7)) : (0ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (-(((long long int) ((3424970457U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (3424970457U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 3424970467U))))))));
                var_21 = ((/* implicit */_Bool) 2147483616LL);
                var_22 ^= ((/* implicit */signed char) (-((-(((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-22980)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_13);
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)7)), (3424970475U)));
}
