/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138773
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
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16383))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -9223372036854775792LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned char)3])))))));
                    var_15 += (~(((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (1ULL))) : ((-(18446744073709551615ULL))))));
                    var_16 *= ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    }
    var_17 ^= ((/* implicit */unsigned int) var_3);
    var_18 = ((/* implicit */int) (unsigned short)65508);
    var_19 = ((/* implicit */signed char) var_4);
}
