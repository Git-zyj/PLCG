/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109927
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((1766713048U), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) ((unsigned char) var_14))) : (((/* implicit */int) var_10)))) - (((/* implicit */int) var_14))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_1 [(unsigned char)3] [i_0]))), ((~(((/* implicit */int) var_12))))))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((var_5) ? (2528254249U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
        var_17 = ((/* implicit */long long int) arr_1 [7U] [i_0]);
        var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) & (var_3))));
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))) << (((((2528254227U) - (((/* implicit */unsigned int) 0)))) - (2528254215U)))));
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_20 ^= ((/* implicit */unsigned char) arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1] [(unsigned char)7]);
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_1]) : ((-(((/* implicit */int) var_10))))));
                var_22 = ((((/* implicit */_Bool) 1766713047U)) ? (arr_7 [0U] [i_1] [i_2]) : (var_4));
            }
            for (short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                var_23 = ((/* implicit */short) 4294967283U);
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [6ULL]))) : (arr_5 [i_4 - 1] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) var_11)))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_25 -= ((/* implicit */int) ((long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)2]))) ^ (10075854686231461894ULL)))));
                var_26 -= ((/* implicit */short) max((var_2), (((/* implicit */signed char) (_Bool)1))));
            }
            arr_15 [(unsigned char)0] &= ((/* implicit */signed char) arr_9 [i_1] [i_2]);
            arr_16 [i_1 - 1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [9ULL] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) - (((arr_14 [(unsigned char)10] [(unsigned short)2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))))) ? (((arr_14 [i_1] [i_2] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (2528254260U)));
        }
        arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((2528254251U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) ? (((((/* implicit */int) (_Bool)1)) / (arr_7 [i_1 - 1] [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
    {
        arr_20 [i_6 + 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) || (((/* implicit */_Bool) arr_2 [i_6]))));
        var_27 = ((/* implicit */short) ((arr_13 [i_6] [i_6 + 1] [i_6] [i_6 - 1]) << (((arr_13 [i_6] [(short)11] [i_6] [i_6 - 1]) - (2774834197U)))));
        var_28 += ((/* implicit */int) var_13);
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (-(1766713018U)))) && (((/* implicit */_Bool) 1766713046U)))))));
    }
    var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) ((short) var_6))) : (var_4))))));
}
