/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171500
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) (+(((unsigned long long int) arr_2 [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_9)), (min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0])))))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
                var_18 = ((/* implicit */int) (unsigned short)8192);
                arr_9 [i_0] = ((/* implicit */_Bool) var_10);
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) << (((min((var_0), (var_0))) - (3935720255U))))), (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192)))))))))));
    var_20 = var_14;
}
