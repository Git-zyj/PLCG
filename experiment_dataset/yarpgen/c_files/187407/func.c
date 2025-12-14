/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187407
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((var_9), (var_2))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-51)), ((unsigned short)355)))))))));
    var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) -102793412))))), (min((var_2), (var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((min((min((var_7), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned int) (signed char)50)), (1561731671U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-74))))))), (min((max((((/* implicit */unsigned int) (unsigned char)42)), (2733235624U))), (((/* implicit */unsigned int) min((var_10), (arr_0 [i_0] [i_0]))))))));
    }
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(0U))))))), (min((min((var_0), (((/* implicit */unsigned int) -933841948)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))));
    var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) (+((+(var_15)))))), (min((((/* implicit */long long int) min((var_12), (var_13)))), (max((((/* implicit */long long int) (signed char)-101)), (6985964978038409486LL)))))));
}
