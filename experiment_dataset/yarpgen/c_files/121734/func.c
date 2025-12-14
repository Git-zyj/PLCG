/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121734
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-16)) ? (4294967295U) : (((/* implicit */unsigned int) -1170877542)))))) ? (min((((var_1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), ((-(var_12))))) : (((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_13))))) : (max((((/* implicit */unsigned int) var_10)), (4294967285U)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (arr_1 [i_0 + 1] [i_0 - 4]) : (arr_1 [i_0] [i_0 - 4])))) ? (((arr_5 [i_0] [i_0 - 4] [i_0 + 2] [i_0 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 4] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4])))))));
                    var_16 = ((/* implicit */signed char) var_7);
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (unsigned short)65535))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_1] [i_1] [i_0 - 2] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? ((-(644701839613960942ULL))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_0]))) >= (var_4)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_12))))));
}
