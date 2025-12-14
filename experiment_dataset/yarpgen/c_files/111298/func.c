/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111298
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
    var_19 = ((9111059506835958629ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))));
    var_20 &= ((/* implicit */long long int) (((((~(var_14))) <= ((-(((/* implicit */int) var_11)))))) ? ((~((+(137907989U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) (-((-(var_13)))))) <= (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)247)), (var_10))))) / (max((var_3), (((/* implicit */long long int) var_7)))))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (signed char)99))))) ? (max((arr_2 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1]))) : (arr_2 [i_0 - 1] [i_0 - 1])));
                arr_7 [i_0] [i_1] [16ULL] &= ((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned long long int) var_13)), (18446744073709551599ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (var_1)))))), (arr_2 [i_0] [i_1 + 1])));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9111059506835958629ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) <= (((((/* implicit */_Bool) (short)3)) ? (9111059506835958629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28706)))))))) == (((/* implicit */int) (signed char)64))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) & ((+(var_18)))));
}
