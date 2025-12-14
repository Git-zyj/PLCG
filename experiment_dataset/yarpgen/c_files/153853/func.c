/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153853
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((unsigned int) ((0) <= (((/* implicit */int) (_Bool)1)))));
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) (short)-16384))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) / (1127147066U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((unsigned int) (unsigned char)45)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 13222954896936390333ULL))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((int) var_13))) <= (((var_18) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_7)) + (((/* implicit */int) var_1))))));
    var_22 = ((/* implicit */unsigned char) var_11);
}
