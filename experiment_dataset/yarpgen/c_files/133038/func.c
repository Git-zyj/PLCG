/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133038
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_1 [3ULL])))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((short) var_5))), ((-(((/* implicit */int) var_0))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16878))) & (min((((/* implicit */long long int) (unsigned short)44409)), ((-9223372036854775807LL - 1LL))))))));
                var_11 = ((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)0)), ((short)(-32767 - 1))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned short) (signed char)127);
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)49))) > (((((/* implicit */_Bool) 917504U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (0LL))))));
    var_14 |= ((/* implicit */unsigned char) (_Bool)1);
}
