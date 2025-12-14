/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189098
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 258619976)) ? (((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) (unsigned short)39040))))) : ((-(((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) / (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1158430105U)))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (max((1ULL), (((/* implicit */unsigned long long int) (unsigned short)280)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1158430105U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31)))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1173234390)) < (0ULL)));
                }
            } 
        } 
    } 
}
