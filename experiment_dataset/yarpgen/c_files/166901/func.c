/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166901
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) (+((-(434712922U)))))), (var_5)));
    var_19 = ((/* implicit */long long int) var_3);
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18542))) > (-6294738440563110364LL))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)5])), (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (10675017824304626059ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) * (3669551324U)))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
                }
            } 
        } 
    } 
}
