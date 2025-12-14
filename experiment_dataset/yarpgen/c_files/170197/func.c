/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170197
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
    var_19 = ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((8666004435920085262ULL) << (((((/* implicit */int) (unsigned short)14133)) - (14117))))))))), (var_12)));
    var_21 = var_11;
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((unsigned int) (~(var_12))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */int) (signed char)2);
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) var_7)) & (arr_3 [i_0] [i_1]))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((770204692U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                arr_7 [i_0] = ((/* implicit */_Bool) -5LL);
            }
        } 
    } 
}
