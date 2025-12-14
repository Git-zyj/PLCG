/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103932
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)71)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) arr_1 [i_2])) : (((((/* implicit */int) min((var_12), (((/* implicit */short) var_14))))) + (((((/* implicit */int) arr_1 [i_2])) % (((/* implicit */int) var_12))))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) arr_1 [i_1])) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) > (((/* implicit */int) var_13))))))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) var_12))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (991437934U)))) ? (435112614U) : (((/* implicit */unsigned int) 2003259721)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) -6413710420479561603LL);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (short)24358))));
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)33941)), (-21564557)));
}
