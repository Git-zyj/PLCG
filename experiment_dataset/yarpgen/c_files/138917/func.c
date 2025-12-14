/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138917
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_16))));
    var_19 = var_9;
    var_20 = ((/* implicit */long long int) -2062736252);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((max((min((-1846686640), (2062736252))), (min((((/* implicit */int) (signed char)-50)), (-186890000))))), (((((/* implicit */_Bool) (short)21699)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_0]))))));
                    arr_9 [i_1] = arr_7 [i_0] [i_1] [i_1];
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) | (min((min((((/* implicit */unsigned long long int) 186890000)), (16177897399730170028ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
    }
    var_23 = ((/* implicit */signed char) max((var_9), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)39)) & (((/* implicit */int) var_12))))) ? (-186890000) : (((((/* implicit */int) (signed char)-64)) ^ (var_16)))))));
}
