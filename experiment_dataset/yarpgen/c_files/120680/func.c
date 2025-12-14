/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120680
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(short)1]))));
        var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)15)) ? (8905869575388538741LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11756)))));
        var_15 *= ((/* implicit */unsigned long long int) arr_2 [(signed char)14] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 ^= arr_2 [i_0] [i_1];
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0])) : (var_8)));
                    arr_9 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_4 [i_2 + 1] [i_2 + 1] [i_2]));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_7 [11ULL] [11ULL] [i_3])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (((arr_11 [i_3] [i_3]) ^ (((/* implicit */long long int) arr_10 [i_3]))))))) : (((((/* implicit */int) (short)23988)) << (((1160770097) - (1160770097))))))))));
        var_19 ^= (~(var_5));
        var_20 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((152815516) + (((/* implicit */int) (unsigned short)65511))))), (var_5)));
    }
    var_21 = ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_3)))) & (((/* implicit */int) ((var_5) > (var_1)))))))));
    var_22 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_11)), (var_12)))), (var_9)))));
}
