/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181803
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
    var_11 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 214259883)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)10)))) > (var_0))), ((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_5))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))) : (var_1))), ((-(1479866636U)))));
                var_13 = ((/* implicit */int) (+(max((((long long int) arr_1 [i_1] [i_1])), (((/* implicit */long long int) max((var_6), (((/* implicit */short) (unsigned char)10)))))))));
                var_14 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) -214259884)) ? (594397710) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-9314)))))));
}
