/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154589
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */long long int) arr_4 [i_1] [i_0] [i_0])) - (max((-808138931081505677LL), (((/* implicit */long long int) arr_3 [(_Bool)1] [i_1])))))))))));
                var_19 &= ((/* implicit */unsigned int) max((-699553398687669704LL), (((/* implicit */long long int) min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [(short)11]))))));
                var_20 = ((/* implicit */unsigned int) ((((-7338881339153929416LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-21900)) + (21903)))));
                var_21 = ((/* implicit */short) min((((unsigned long long int) ((3477320596U) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                var_22 *= ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_5)) ? (8587154851733621068LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)6343)) ? (((/* implicit */int) (unsigned short)42657)) : (((/* implicit */int) (short)32763)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max(((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22414))) : (var_9))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((_Bool) max((var_0), (((/* implicit */short) (_Bool)0)))))));
}
