/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140017
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_2)) >= (var_1))) ? (arr_1 [i_1 + 2]) : (max((((/* implicit */unsigned long long int) (unsigned short)2)), (arr_3 [i_2]))))), (((/* implicit */unsigned long long int) ((max((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65503)) ? ((-9223372036854775807LL - 1LL)) : (arr_6 [i_0])))))))));
                    arr_11 [i_0] = ((/* implicit */int) arr_0 [i_0]);
                    arr_12 [i_0] [(short)2] [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2] [i_0]))))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + ((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) (unsigned char)65)) ? (((18446744073709551598ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8537)) + (((/* implicit */int) var_10)))))))));
    }
    var_19 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */long long int) var_9)) : (70231305224192LL))))) < ((-9223372036854775807LL - 1LL))));
    var_20 ^= max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) max((var_14), (((/* implicit */short) var_13))))) : (((/* implicit */int) (short)25791)))));
}
