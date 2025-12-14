/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16035
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
    var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) % (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (var_7))))) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */unsigned int) min((5070527254918239545ULL), (((/* implicit */unsigned long long int) min((2781851641U), (((/* implicit */unsigned int) ((13376216818791312071ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79)))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_0 - 2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (arr_4 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1])))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((arr_1 [i_0 - 1] [i_1]) >> ((((-(arr_1 [i_0] [i_0]))) - (4198145074U))))) << ((((((_Bool)1) ? ((~(5070527254918239538ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) - (13376216818791312059ULL)))));
                arr_8 [i_0] [(signed char)2] = arr_4 [i_1];
            }
        } 
    } 
    var_20 = var_1;
    var_21 = ((/* implicit */unsigned long long int) var_13);
}
