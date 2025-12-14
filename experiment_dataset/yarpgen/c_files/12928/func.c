/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12928
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3793525027U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) var_10)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_13)))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (short)17844))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) ((signed char) 6706513528428777939ULL)))))), (4011443000U)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_7)))) : (3793525025U)));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) | (arr_0 [i_0] [12ULL])))) ? (((((var_12) << (((((arr_0 [i_0] [(unsigned char)10]) + (3622901004726573310LL))) - (7LL))))) | (((long long int) arr_1 [(unsigned char)11])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [0ULL] [0ULL])) ? (((/* implicit */unsigned long long int) arr_0 [2U] [(unsigned short)12])) : (18446744073709551594ULL)))) || (((/* implicit */_Bool) arr_0 [i_0] [6U]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_19 += ((/* implicit */short) min((((/* implicit */long long int) (signed char)-99)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [(unsigned char)10]))) : (((((/* implicit */_Bool) 14291847108518132417ULL)) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_0 [(signed char)10] [(signed char)2])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_5 [(signed char)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) arr_1 [i_1])) : (arr_0 [i_1] [i_1])));
        var_20 ^= ((/* implicit */unsigned char) ((arr_1 [i_1]) * (arr_1 [i_1])));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_3 [i_1]))));
        var_21 = ((/* implicit */unsigned short) arr_1 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])) : (arr_4 [i_2] [(signed char)8])))) ? (arr_8 [i_2]) : (((/* implicit */long long int) var_5)))) >= (((((long long int) arr_0 [i_2] [i_2])) ^ ((-(arr_0 [i_2] [i_2]))))));
        arr_11 [(unsigned char)4] = ((/* implicit */signed char) ((max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) min((arr_1 [i_2]), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)190)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_22 *= arr_14 [i_3];
        /* LoopSeq 1 */
        for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
        {
            var_23 -= ((/* implicit */unsigned long long int) (-(var_3)));
            var_24 -= ((/* implicit */_Bool) arr_9 [(_Bool)1]);
            arr_20 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((arr_4 [i_4 - 1] [i_3]) % (((/* implicit */unsigned long long int) arr_9 [(unsigned char)3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3])))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) 7ULL);
            var_25 = ((/* implicit */_Bool) ((signed char) arr_1 [3LL]));
            var_26 = ((/* implicit */signed char) ((unsigned int) 10827673070786382707ULL));
        }
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            arr_26 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_16 [i_3] [i_3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16488)))));
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_3])) ? (arr_0 [i_6 + 1] [i_3]) : (arr_0 [i_6 + 1] [i_3])));
        }
        var_28 ^= arr_19 [i_3] [i_3];
    }
}
