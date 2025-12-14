/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139706
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
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) (unsigned short)2838))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)32758)))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) var_10))))))));
                    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */int) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22309)) ? (908471701U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32762)))))), (min((var_11), (((/* implicit */long long int) var_13))))))));
    var_20 *= ((/* implicit */_Bool) max((((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))))), (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_0))))))));
}
