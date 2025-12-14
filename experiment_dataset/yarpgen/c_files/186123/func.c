/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186123
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -635261672)) ? (2259456725U) : (((/* implicit */unsigned int) 635261671))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_8)))) ? (min((var_10), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = ((/* implicit */long long int) (~(((((/* implicit */int) var_2)) + ((-(635261651)))))));
    var_15 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (635261649)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (-635261672) : (-635261672)))))));
                    var_16 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -635261672)) ? (8917982731811003491LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9130))))), (((/* implicit */long long int) 635261671))))), (max((((((/* implicit */_Bool) arr_7 [(unsigned char)6] [i_1 + 1] [i_0] [(unsigned char)6])) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
}
