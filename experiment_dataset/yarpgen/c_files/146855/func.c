/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146855
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
    var_16 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) max((var_11), (3299579718U)))) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (1915895428U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) == (33554428U))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((min((((4818683574775483918LL) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (2158578623U)))))) << (((var_4) - (260938321U)))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((signed char)-84), (((/* implicit */signed char) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (((unsigned int) (unsigned char)54)))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4))), (((/* implicit */unsigned int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_7 [i_2] [i_0])))))))));
                    var_18 -= ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
}
