/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137488
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
    var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) (unsigned short)5))))) ? (((((/* implicit */_Bool) min((var_0), (var_9)))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (_Bool)0))))) : ((-(var_0))))) : (var_0)));
    var_12 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)11));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 4] [i_0])) && (((/* implicit */_Bool) var_6)))))));
                arr_8 [i_0 + 4] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_0] [i_0]);
            }
        } 
    } 
}
