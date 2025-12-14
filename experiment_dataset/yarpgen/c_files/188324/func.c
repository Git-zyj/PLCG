/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188324
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = min((((arr_2 [i_0]) / (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), (arr_1 [i_0])))))), (((/* implicit */int) min((min((((/* implicit */unsigned char) arr_0 [i_1])), (arr_1 [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_0 [i_1])))))))));
                var_10 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (-7786290659505025293LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))), (var_7)));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((var_7) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (var_7) : (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (unsigned char)90)) | (((/* implicit */int) (signed char)-125)))))))));
    var_12 = ((/* implicit */signed char) var_0);
}
