/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131230
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
    var_19 = ((/* implicit */long long int) max((var_4), (((/* implicit */short) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)131))))) || (((/* implicit */_Bool) arr_2 [i_1])))))));
                arr_7 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((_Bool) ((arr_3 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((unsigned int) (signed char)33));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((short) ((long long int) (signed char)-82))))));
}
