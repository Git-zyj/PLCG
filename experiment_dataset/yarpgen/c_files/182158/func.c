/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182158
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 |= ((/* implicit */unsigned int) max((((unsigned long long int) arr_1 [i_0] [i_1])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_0])))));
                var_12 = ((/* implicit */unsigned int) arr_4 [(unsigned short)14] [(unsigned char)15] [(signed char)5]);
                var_13 -= ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) > (arr_2 [(_Bool)1]))))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [(_Bool)1])), (arr_3 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(short)2] [i_1]))) : (((var_4) << (((((/* implicit */int) arr_1 [i_1] [i_0])) - (1359))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) << ((((((~(((/* implicit */int) var_8)))) + (12599))) - (21))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_4);
    var_15 = ((/* implicit */unsigned short) var_2);
}
