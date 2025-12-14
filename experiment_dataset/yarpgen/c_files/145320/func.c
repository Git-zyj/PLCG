/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145320
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
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((unsigned int) (!(((/* implicit */_Bool) (unsigned char)2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)60950)) : (arr_4 [i_1] [i_0 + 4] [i_1])))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) - (-142000336)))), (max((var_15), (((/* implicit */long long int) 619348889)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(619348895)))) ? (max((((/* implicit */unsigned int) var_17)), (1000053050U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_10))))))))));
                var_20 = max((((/* implicit */int) arr_3 [(short)0])), (max((((/* implicit */int) max(((short)13068), (((/* implicit */short) (signed char)-1))))), (((1363388472) ^ (arr_4 [i_0 + 2] [i_0] [(signed char)8]))))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 983040)) ? (((/* implicit */int) (short)-7366)) : (((/* implicit */int) var_8))))), (arr_2 [i_0 - 1] [i_0 - 1])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)8])) ? (((/* implicit */long long int) arr_4 [i_1] [i_1] [0ULL])) : (-7654302902716390423LL)))), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_13))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [16])) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_7)))) * (((/* implicit */int) (unsigned char)87))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)158)) ? (3984061072U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (arr_4 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (3069905586U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))))))))));
}
