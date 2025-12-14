/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110641
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
    var_20 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) ((signed char) 2))), (var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = max((((/* implicit */unsigned long long int) min(((signed char)28), (arr_4 [i_1] [i_1] [i_0])))), (min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0])), (4673244945244894895ULL))));
                arr_6 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) >> (((((/* implicit */int) var_4)) - (48918)))))))) ^ (((((/* implicit */_Bool) ((3039462618U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) ? (((unsigned long long int) (signed char)-100)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)0), (arr_1 [i_0])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((1019886734U) * (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) << (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) var_5)), (var_2))) >= (((/* implicit */long long int) ((/* implicit */int) min(((short)7), (((/* implicit */short) (_Bool)1))))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_14)))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) >= (var_2))))))));
    var_23 = ((/* implicit */unsigned long long int) (signed char)4);
    var_24 = ((/* implicit */long long int) var_3);
}
