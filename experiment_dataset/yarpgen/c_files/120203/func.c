/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120203
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
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_4)) : (((var_9) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) ((int) 9599821863240786328ULL))) : (9599821863240786328ULL)))));
    var_13 = 4066983376059598906LL;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((9599821863240786328ULL), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))))))))));
        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((((arr_1 [i_0]) ? (9599821863240786328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 = var_7;
        var_17 |= ((/* implicit */long long int) 0U);
    }
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) ((arr_7 [i_2]) >> (((18446744073709551615ULL) - (18446744073709551598ULL)))));
        arr_9 [(short)11] = ((/* implicit */int) (-(9129715897054534703LL)));
    }
    for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_10 [i_3]);
        arr_12 [i_3] = ((/* implicit */int) var_2);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_3])))))));
        var_21 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) % (((((((/* implicit */int) (unsigned short)11249)) > (((/* implicit */int) var_8)))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [8LL]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (max((arr_10 [i_3]), (((/* implicit */long long int) arr_11 [i_3]))))))));
    }
    var_22 = ((/* implicit */_Bool) ((((((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))) == (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)162)), (var_5)))))) ? (((var_9) ? (((/* implicit */long long int) (-(65535U)))) : (min((((/* implicit */long long int) var_5)), (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
