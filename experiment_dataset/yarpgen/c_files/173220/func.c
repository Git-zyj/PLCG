/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173220
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (((((unsigned int) (unsigned short)7)) << (((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((unsigned char) var_2)), (((/* implicit */unsigned char) (signed char)7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(6667679627090607622LL)))) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) ? ((+(((/* implicit */int) ((unsigned short) 1970504207))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = var_2;
                    var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))));
                    var_21 = ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) - ((+(((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (var_1))) & (((/* implicit */int) arr_8 [i_1]))));
                }
            } 
        } 
        var_22 -= (-(((/* implicit */int) arr_5 [(unsigned char)9])));
        var_23 = ((/* implicit */unsigned char) ((max((min((((/* implicit */long long int) arr_5 [i_0 - 2])), (-7834257684820110304LL))), (((/* implicit */long long int) ((unsigned short) arr_9 [i_0 - 1] [i_0 - 1]))))) << ((((~(((/* implicit */int) var_0)))) + (53864)))));
    }
}
