/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122828
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
    var_16 = ((/* implicit */unsigned short) ((int) max((var_15), (var_1))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_2))))) / (((unsigned int) max((var_13), (((/* implicit */unsigned short) (unsigned char)220))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */int) ((min((17043553914511374555ULL), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_1 - 3]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((28ULL) > (841154689135707762ULL)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)220))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) 12761600824325900307ULL);
}
