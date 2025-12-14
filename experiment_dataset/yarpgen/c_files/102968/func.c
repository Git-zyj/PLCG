/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102968
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
    var_19 = ((/* implicit */unsigned int) ((((((var_7) >> (0ULL))) * (var_16))) != (((/* implicit */unsigned long long int) ((int) ((var_3) / (18446744073709551604ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) arr_4 [i_0])))));
                    var_21 = ((/* implicit */unsigned short) arr_5 [i_0] [9] [i_2]);
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) <= (var_16)));
    var_23 = ((/* implicit */unsigned long long int) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_4))) || (((/* implicit */_Bool) var_17)))))) : (var_6)));
}
