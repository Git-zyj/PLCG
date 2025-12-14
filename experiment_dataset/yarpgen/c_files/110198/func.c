/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110198
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-3690))))), (((/* implicit */long long int) ((unsigned char) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_5))))) : (var_11)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 735114300)) ? (((/* implicit */int) (short)30325)) : (((/* implicit */int) arr_7 [i_1] [i_1])))))), ((+(2281185485805133244ULL)))));
                    var_14 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_9)))) >= (((/* implicit */int) arr_4 [(signed char)18] [i_1] [i_2 - 1]))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (short)-21385))))) ? (-1049581410) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)250)), (var_5))))))));
                    var_15 = ((/* implicit */short) max((((unsigned long long int) arr_4 [i_1] [i_2 - 2] [i_0])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)9846)))))));
                }
            } 
        } 
    } 
}
