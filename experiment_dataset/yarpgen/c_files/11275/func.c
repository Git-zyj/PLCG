/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11275
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
    var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))))), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned int) (_Bool)1)), (var_9)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(var_5)))) ? (((unsigned long long int) (signed char)111)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(unsigned short)22] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)-92)))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_6 [(unsigned char)22] [i_1 + 2]));
                }
            } 
        } 
    } 
}
