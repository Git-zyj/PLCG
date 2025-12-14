/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187095
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
    var_16 = ((/* implicit */unsigned short) 13845043779440480160ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [(signed char)6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 562949953421311LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-25))))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (4601700294269071455ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)11] [i_1]))) : (13845043779440480160ULL)))));
                var_17 = ((/* implicit */unsigned short) (((-(var_2))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (13845043779440480140ULL))) : (4601700294269071456ULL)))) ? (((((((/* implicit */int) (unsigned char)54)) < (((/* implicit */int) (_Bool)1)))) ? (4294967271U) : (((((/* implicit */_Bool) 3702444074U)) ? (1336797105U) : (592523203U))))) : (((/* implicit */unsigned int) ((int) (signed char)-42)))));
            }
        } 
    } 
}
