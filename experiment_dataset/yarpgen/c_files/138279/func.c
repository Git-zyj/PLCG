/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138279
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_13)))))) ? (min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) : (((/* implicit */unsigned long long int) max((((277263525U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) -1058101635)))))));
                arr_8 [6LL] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0]), (arr_6 [i_0]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * ((-(var_13)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_17);
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)255);
}
