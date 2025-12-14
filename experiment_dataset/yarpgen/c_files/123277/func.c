/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123277
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = max((((/* implicit */unsigned int) ((signed char) var_4))), (max((((/* implicit */unsigned int) (_Bool)0)), ((+(arr_3 [i_0] [i_0]))))));
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(min((arr_3 [i_0] [i_1 + 4]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]))))))), ((-(var_2)))));
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_1 + 1] [i_0]))) + (arr_6 [(unsigned short)8] [i_0 - 4] [(unsigned short)3] [i_2 + 2]))) - (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_7)))) ? (var_5) : (max((var_16), (var_5)))))), (((unsigned long long int) (signed char)-68))));
}
