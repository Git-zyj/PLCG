/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140920
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(131071)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))) || (var_0)));
    var_18 = ((/* implicit */signed char) ((((long long int) min((var_16), (var_16)))) < (((((/* implicit */long long int) var_15)) % (((var_0) ? (((/* implicit */long long int) 2417946627U)) : (var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */long long int) (((~(var_3))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [4U])) ? (arr_3 [i_1] [i_1] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26639)))))))));
                var_20 = ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 2147483648U))) ? (((((/* implicit */_Bool) 1877020668U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((unsigned int) var_1)))))));
            }
        } 
    } 
}
