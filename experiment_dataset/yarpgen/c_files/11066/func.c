/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11066
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))), (max((((arr_4 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned long long int) var_0))))));
                var_19 = ((/* implicit */unsigned char) min((max((((arr_4 [i_1]) >> (((arr_2 [i_0 + 2]) - (3575972395U))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33132)) % (((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((var_2) - (var_17)))))), (var_3))))));
    var_21 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))) | (var_14)))) && (((/* implicit */_Bool) max((((var_6) << (((/* implicit */int) var_10)))), (((/* implicit */unsigned long long int) var_12))))));
}
