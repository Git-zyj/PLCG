/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149161
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) var_4)), ((short)24578)))) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_4 [i_1]))))), (min((min((arr_6 [i_0]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) max(((signed char)-93), (((/* implicit */signed char) var_3)))))))));
                var_20 ^= ((/* implicit */unsigned long long int) 2135387072);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)16434)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))) ? (((((var_17) * (((/* implicit */unsigned int) arr_7 [i_0])))) << (((((/* implicit */int) (short)-16170)) + (16173))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) max((var_0), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    var_23 = ((/* implicit */_Bool) var_7);
}
