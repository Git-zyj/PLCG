/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168257
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */unsigned int) max((((long long int) min((((/* implicit */unsigned short) (unsigned char)49)), ((unsigned short)8)))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_2))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_8)))) && (((/* implicit */_Bool) 9223372036854775807LL))))) & ((((+(((/* implicit */int) var_3)))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) & (18446744073709551615ULL)))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_7))))) <= ((~(((/* implicit */int) arr_3 [i_0] [(signed char)8])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_8)))), (((unsigned long long int) var_0))))))))));
            }
        } 
    } 
}
