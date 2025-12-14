/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119141
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
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2295260052U))))) : (((int) var_14)))));
                var_18 = ((/* implicit */unsigned int) ((signed char) min((2295260052U), (((/* implicit */unsigned int) arr_2 [i_0 + 4] [i_0 + 1])))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (((((/* implicit */_Bool) 1999707243U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22591))) : (3706366591013532158ULL))))))));
                var_20 &= ((/* implicit */unsigned char) 2295260052U);
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned long long int) var_11);
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-((~(max((1999707260U), (1999707259U))))))))));
}
