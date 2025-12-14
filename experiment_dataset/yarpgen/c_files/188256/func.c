/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188256
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */unsigned long long int) -1936764065)) : (var_10))))), (var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28045))) == (var_6)))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))))))) & (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                    arr_8 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}
