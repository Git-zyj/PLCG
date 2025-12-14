/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119575
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 -= min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [4LL])) : (arr_4 [i_0])))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) 1939928166U))))))));
                var_11 *= ((/* implicit */unsigned long long int) (unsigned short)43028);
            }
        } 
    } 
    var_12 -= ((/* implicit */signed char) var_3);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((67108864), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 67108864)) || (((/* implicit */_Bool) var_9))))) : (67108864)))) ? (((/* implicit */int) (!(var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (var_6)))) || (((/* implicit */_Bool) ((unsigned long long int) var_8)))))))))));
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */int) var_4)) >> (((-8321142894529835976LL) + (8321142894529835983LL))))))))));
    var_15 = ((/* implicit */long long int) (!(((((/* implicit */int) var_9)) != (((/* implicit */int) var_8))))));
}
