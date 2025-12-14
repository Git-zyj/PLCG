/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187136
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
    var_16 -= ((/* implicit */short) var_9);
    var_17 = ((/* implicit */long long int) (-(min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 2147483636)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) var_6))))))));
    var_18 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((int) 1014766201U))) : (min((2342813079U), (((/* implicit */unsigned int) (_Bool)1))))))), (((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) (_Bool)1)), (-7580008141849567261LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    var_19 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (((var_3) / (((/* implicit */unsigned long long int) 513987849U)))))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_0])))));
                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_3 [i_0] [i_1] [i_1 + 1])));
            }
        } 
    } 
}
