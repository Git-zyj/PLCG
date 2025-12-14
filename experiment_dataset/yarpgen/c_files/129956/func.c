/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129956
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8)))) && (((((/* implicit */_Bool) -2133529361)) && (((/* implicit */_Bool) var_5)))))))) - (((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-22)) + (2147483647))) << (((((/* implicit */int) var_0)) - (18026)))))) + (((1785011868U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35)))))))));
    var_19 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)22)) == (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (var_8)))) != (((946132611U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [7] [i_1]))))))) && (((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 15347610928018463004ULL)))) || (((((/* implicit */_Bool) var_3)) || ((_Bool)0)))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (arr_2 [i_0] [i_1 + 2])))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((946132611U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) <= (((arr_2 [i_0] [i_1 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))))))))));
            }
        } 
    } 
}
