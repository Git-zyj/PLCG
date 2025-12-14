/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135298
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
    var_10 = var_2;
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) + (((/* implicit */int) (short)4127)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) 48140360830137061ULL);
                    var_13 = ((/* implicit */long long int) (+(var_4)));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4080))) : (var_6)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))), (((/* implicit */int) (short)-1))))) : (var_6)));
                    var_15 = ((/* implicit */unsigned short) arr_2 [i_1] [i_2]);
                }
            } 
        } 
    } 
}
