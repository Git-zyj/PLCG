/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149486
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((-2707551513768991360LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)253))))) / (var_16))))));
                    var_20 ^= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) arr_1 [(signed char)10] [i_2])) ? (115027773U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) < ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-64)), (3332838565U)));
}
