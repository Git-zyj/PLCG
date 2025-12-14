/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13828
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) var_19))))), (((var_4) ? (var_9) : (var_3))))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_3 [i_0] [(unsigned short)7]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 971279301)) ? (((/* implicit */unsigned long long int) 1843078845)) : (7072671525530605762ULL))))))))));
}
