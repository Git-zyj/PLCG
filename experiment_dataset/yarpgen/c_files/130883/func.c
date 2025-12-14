/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130883
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
    var_19 = ((/* implicit */unsigned char) var_15);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) var_17)) ? (min((var_10), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (signed char)64)))) : (((/* implicit */int) ((unsigned char) ((unsigned int) 9223372036854775797LL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) min((7884109612764162529LL), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)0)), (-1591066968))))));
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [2U]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (var_17)));
}
