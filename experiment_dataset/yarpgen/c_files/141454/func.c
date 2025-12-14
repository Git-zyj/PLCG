/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141454
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
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) ^ (((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((((/* implicit */int) var_4)) + (((/* implicit */int) var_9))))))) : (((/* implicit */int) min(((unsigned short)13), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)14)) >= (((/* implicit */int) (short)-29368))))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_1)))) ? (max((var_11), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)244), (((/* implicit */unsigned char) (_Bool)0))))) || (((/* implicit */_Bool) var_11)))))) : (var_3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_1] [i_1 + 2]))));
            }
        } 
    } 
    var_19 = ((var_3) / (1U));
}
