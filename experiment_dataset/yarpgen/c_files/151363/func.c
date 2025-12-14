/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151363
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
    var_10 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_3 [i_1] [(unsigned short)3])), (((((/* implicit */unsigned long long int) 120U)) & (18446744073709551615ULL)))));
                    arr_6 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)0)), (143974450587500544LL)));
                    var_12 = ((((/* implicit */_Bool) var_1)) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1ULL) % (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) ((_Bool) 120U))), (max((11952066507086774015ULL), (((/* implicit */unsigned long long int) 120U))))))));
}
