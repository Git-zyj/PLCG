/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108940
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1])) ? ((~(((/* implicit */int) (signed char)68)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) -8425986917095903675LL)) ? (arr_2 [(unsigned char)8] [(unsigned char)8]) : (arr_0 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)21))))))));
    }
    var_16 |= ((/* implicit */int) 3938169133262739910LL);
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */unsigned long long int) var_7)) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) 9223372036854775807ULL)) ? (17184970021261102579ULL) : (((/* implicit */unsigned long long int) 956128020U))))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1916666013U)) ? (11073479458917246972ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
}
