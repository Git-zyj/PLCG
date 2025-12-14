/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100203
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((signed char) (~((+(((/* implicit */int) (_Bool)1)))))));
                    var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35943))) : (2864167611U)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((min((((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) / (var_6))), (min((((/* implicit */long long int) (unsigned char)255)), (var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-101))))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)27)))) : (((/* implicit */int) var_10)))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) min((min(((unsigned short)23042), (((/* implicit */unsigned short) (short)14079)))), (((/* implicit */unsigned short) ((signed char) (unsigned short)60610)))))))));
}
