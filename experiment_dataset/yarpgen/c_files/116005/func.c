/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116005
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
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) / ((~(((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_0] [2ULL] [i_1] &= ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [(unsigned short)2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) >= (var_4))))));
                var_20 = var_11;
            }
        } 
    } 
}
