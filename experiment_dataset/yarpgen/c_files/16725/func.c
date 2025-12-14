/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16725
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
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2875107058U))))) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_12))));
    var_19 *= ((/* implicit */short) var_9);
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((0ULL) | (18446744073709551615ULL))))) & (((((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), ((unsigned char)193))))) : (min((18446744073709551610ULL), (0ULL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) max(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (min((((/* implicit */int) (!(((/* implicit */_Bool) 9675836140823210681ULL))))), ((+(((/* implicit */int) (short)-22521))))))));
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || (((/* implicit */_Bool) var_16))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)6))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (-(max((var_1), (((/* implicit */unsigned long long int) var_13))))));
                    }
                } 
            } 
        } 
    }
}
