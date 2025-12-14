/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143408
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
    var_19 = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) 3188590172U)) ? (((/* implicit */long long int) 992413285U)) : (var_16))) == (var_9))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1106377114U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) : (3302554010U)));
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) 992413281U)), (23ULL))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-6325))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    var_23 |= ((/* implicit */int) max((min((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) 3302554002U)) : (2754638112042627549LL))), (((/* implicit */long long int) 3302554008U)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-8)))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2456736827U)), (var_7)))) ? (min((max((var_1), (var_11))), ((+(((/* implicit */int) var_3)))))) : (((((/* implicit */int) (short)-1)) + (-1797519623)))));
                }
            } 
        } 
    } 
}
