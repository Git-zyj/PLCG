/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127696
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
    for (int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_8)))), (max((((-7570838196444174413LL) | (-7570838196444174419LL))), (((/* implicit */long long int) ((short) 3504214009U)))))));
                arr_5 [i_0] [i_1] [(short)3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [(short)9] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2])))) / (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)3] [(unsigned short)8]))) <= (arr_3 [(short)4])))))));
            }
        } 
    } 
    var_21 = var_7;
}
