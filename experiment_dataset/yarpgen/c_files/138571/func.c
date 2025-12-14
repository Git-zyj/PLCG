/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138571
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max(((+(min((var_9), (var_1))))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) / (var_2))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0]))))))) * (((max((((/* implicit */unsigned long long int) (unsigned char)208)), (arr_3 [i_1] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)45867)))))))));
                var_17 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (-(var_8)))), (max((var_12), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned char)253)), (var_2))), (((/* implicit */unsigned int) min((var_13), (((/* implicit */short) (unsigned char)3))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_9))));
}
