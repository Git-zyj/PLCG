/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120652
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
    var_12 = ((/* implicit */unsigned long long int) 0LL);
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > ((-((-(var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)28))))) > ((-(var_10)))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((min((((/* implicit */long long int) ((1918510345) > (((/* implicit */int) (signed char)124))))), (var_10))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (1703316381) : (((/* implicit */int) (signed char)113)))) : ((-(var_5)))))))))));
                }
            } 
        } 
    } 
}
