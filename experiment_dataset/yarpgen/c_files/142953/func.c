/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142953
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
    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) var_5))))), (((/* implicit */int) ((((/* implicit */_Bool) 1552127310U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2742840010U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) var_0);
                arr_4 [i_0] = ((((/* implicit */_Bool) var_1)) ? (((var_13) ? (((/* implicit */unsigned long long int) var_9)) : (min((var_3), (((/* implicit */unsigned long long int) (signed char)120)))))) : (((/* implicit */unsigned long long int) (-(4294967288U)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1610660573U), (0U)))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) - (((((/* implicit */unsigned int) -183664903)) + (11U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1552127310U)) ? (2742839999U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58)))))) ? (((((/* implicit */_Bool) 393216U)) ? (1598556492U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))))) : (arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) max((4294574079U), (((/* implicit */unsigned int) var_7))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */unsigned long long int) var_5)) & (0ULL)))))) ? (((long long int) (-(((/* implicit */int) var_2))))) : (((/* implicit */long long int) 1552127293U))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_13))));
}
