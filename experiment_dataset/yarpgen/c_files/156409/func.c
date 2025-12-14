/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156409
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (min((var_11), (((/* implicit */int) max((((/* implicit */short) var_12)), (var_1))))))));
    var_19 = ((/* implicit */unsigned int) var_2);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)24393)) ? (2394456763U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1832))))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 + 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) var_8))));
}
