/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176420
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((var_16) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (max((((/* implicit */long long int) var_11)), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) : (877131963U))))))) >= ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (arr_1 [i_0])))) + (var_4))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [3LL] [i_1] [(short)7]))) : (arr_3 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63441))) : (arr_3 [i_1])))))));
                    arr_11 [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [10ULL])), (arr_3 [i_0]))) << (((var_3) - (7429156371534649817ULL)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (signed char)0))), ((~(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) 694346650U)) ? (694346650U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (max((((((/* implicit */_Bool) 877131993U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)7061)))), (((/* implicit */int) var_15))))));
                }
            } 
        } 
    } 
}
