/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128874
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned short) arr_3 [i_0] [0ULL]);
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)6])) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) max((arr_0 [2U]), (arr_0 [(unsigned char)2]))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (((~(min((arr_4 [i_1] [17U]), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) / (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -9223372036854775807LL)) ? (-9223372036854775807LL) : (9223372036854775807LL))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))) <= (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_1] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_1 + 1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) var_16);
        arr_8 [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (arr_4 [i_1] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_4))))) ? (((9223372036854775807LL) / (9223372036854775807LL))) : (((/* implicit */long long int) ((int) var_18)))))) ? (min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_13)) : (9223372036854775807LL))) > (((/* implicit */long long int) var_4))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            arr_15 [i_2] [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775807LL) : (-9223372036854775807LL)));
            arr_16 [i_2] |= ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */int) arr_13 [i_2] [i_3 - 1] [i_3 - 1])));
            arr_17 [i_2 + 3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_2] [i_2 - 2]))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_3])) : (arr_11 [i_2])))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_3 + 2] [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 2]))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
        {
            var_25 *= ((/* implicit */unsigned char) ((9223372036854775807LL) + (-9223372036854775807LL)));
            var_26 += ((/* implicit */unsigned int) arr_14 [i_2] [i_4] [i_2]);
            arr_20 [13ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_2 - 2] [i_4])) ? (arr_14 [i_2] [i_2] [i_2]) : (arr_14 [i_4] [i_2] [i_4])))) ? ((+(var_13))) : (((((/* implicit */int) var_12)) + (((/* implicit */int) var_6))))));
            arr_21 [(unsigned char)0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [7] [i_4])) ? (((/* implicit */unsigned long long int) arr_11 [i_4])) : (((((/* implicit */_Bool) max((arr_18 [i_2 - 2] [i_2 - 2]), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) arr_19 [i_4])) % (var_16)))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_25 [i_2 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))));
            arr_26 [4ULL] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) arr_23 [i_5] [i_2])) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5])))))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_29 [i_6] = ((/* implicit */int) ((((((long long int) -9223372036854775793LL)) + (9223372036854775807LL))) >> (((max((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6]))) > (arr_14 [i_6] [i_6] [i_6])))))) - (3186829288U)))));
        arr_30 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_6]))) : (var_14)))));
    }
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned char) var_8)))));
}
