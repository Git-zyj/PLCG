/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120139
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
    var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) var_5))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)17)) || (((/* implicit */_Bool) var_17))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) var_5);
            arr_6 [0LL] &= ((/* implicit */unsigned long long int) arr_4 [8LL] [0U] [i_0]);
        }
        var_22 = ((/* implicit */unsigned long long int) var_15);
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */long long int) min((max((16113832755995350109ULL), (((/* implicit */unsigned long long int) arr_12 [i_3] [i_2])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 511LL)) ? (-5600010273070975811LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))))) : (((/* implicit */long long int) ((0U) + (4294967295U)))))))));
            var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3)))) + (min((((/* implicit */unsigned long long int) 0LL)), (var_1)))))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 21LL))));
            var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) var_17)) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3] [i_3])) * (((/* implicit */int) arr_0 [i_3] [i_3])))))));
        }
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((14LL), (arr_2 [i_2])))) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_8 [i_2]))));
        var_27 &= ((/* implicit */unsigned int) var_16);
        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((arr_2 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))))), (var_15)));
    }
    var_29 = ((/* implicit */int) var_3);
}
