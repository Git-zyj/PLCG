/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108401
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [(short)10] [i_0])) ? (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (short)3)))) : (max((arr_2 [8]), (18446744073709551607ULL))))), (max((18ULL), (((/* implicit */unsigned long long int) (short)16256))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_5), ((-(23ULL)))));
                    var_16 = ((/* implicit */unsigned char) 18446744073709551603ULL);
                    var_17 ^= 2147483646;
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [i_2 - 1] [i_0])), (((((/* implicit */_Bool) -7488314573706017580LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (var_6)))))) ? (3581447074460580480ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9223372036854775807LL)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) (signed char)104)))))));
                }
            } 
        } 
        var_19 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) arr_1 [11LL] [11LL]))), (min((var_7), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]))))))), (max((arr_2 [(unsigned short)2]), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_3))));
}
