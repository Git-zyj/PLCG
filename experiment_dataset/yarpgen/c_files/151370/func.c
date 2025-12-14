/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151370
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) (unsigned char)255)), (arr_0 [i_0] [i_1]))))) ? (((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) var_6))))) / (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)7])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) / (((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max(((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7061409886898554781LL)) ? (13889848193595167857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173)))))) ? (min((1LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((1014428221U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
}
