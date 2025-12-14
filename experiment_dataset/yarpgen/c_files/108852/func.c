/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108852
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
    var_19 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned char)63), (((/* implicit */unsigned char) (signed char)-30))))) <= (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_14)))))))) == (122865429)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (~(min((min((((/* implicit */long long int) arr_1 [i_0] [i_1])), (var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23283)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1 - 2])))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)42253)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((min((((/* implicit */int) var_8)), (var_10))) != (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)100))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23283))) & (var_14))) : (((/* implicit */long long int) (~(((((((/* implicit */int) (signed char)-53)) + (2147483647))) << (((var_16) - (2367464169341165314ULL))))))))));
    var_22 = ((/* implicit */unsigned short) var_4);
    var_23 += min(((+((~(var_13))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (max((var_14), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23268))) / (2109627054U)))))));
}
