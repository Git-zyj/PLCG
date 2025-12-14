/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114275
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
    var_15 += ((/* implicit */int) var_8);
    var_16 = ((/* implicit */signed char) (((((~(var_10))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2695054502U)))))))) << (((/* implicit */int) ((((2695054503U) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)57))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) % (1683620897)))))))));
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_3 [14])))))))), (max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (2888691558U)))));
                var_19 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((arr_0 [i_0]) / (((/* implicit */int) (short)13794))))) : (((773044292U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)504))))))));
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (short)32762))))))) << (((((_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((((/* implicit */int) arr_3 [i_0])) >> (((var_12) - (15397415747610460918ULL)))))))));
            }
        } 
    } 
}
