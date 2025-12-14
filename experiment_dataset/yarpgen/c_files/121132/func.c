/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121132
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
    var_11 = ((/* implicit */int) var_5);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) 1774982742))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (var_7))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_9)))) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (min((var_7), (((/* implicit */unsigned long long int) 8U)))))));
        var_14 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max(((signed char)-81), ((signed char)82)))) ? (((((/* implicit */_Bool) (short)24364)) ? (var_2) : (var_5))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_5))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((_Bool) var_9))), (((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2])))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (unsigned short)65535)), (631129884491050527ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5915))) : ((((~(17317308137472ULL))) & (631129884491050538ULL)))));
                    var_16 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                arr_14 [(_Bool)1] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((int) var_3)));
                arr_15 [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5 - 1] [i_5 + 1] [i_5 + 1]))));
            }
            for (unsigned int i_6 = 1; i_6 < 24; i_6 += 3) 
            {
                var_17 = ((/* implicit */unsigned int) (!(((_Bool) arr_12 [i_3] [(signed char)21] [i_3] [20U]))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3])))) >> ((((-(17317308137469ULL))) - (18446726756401414084ULL))))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_19 = ((((/* implicit */int) var_8)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [(signed char)13])) != (18446744073709551615ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_3] [i_3] [i_3] [(unsigned short)7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned int) var_3)) : (((((/* implicit */_Bool) 17317308137472ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [17ULL] [17ULL] [17ULL] [17ULL]))) : (arr_24 [i_3] [i_3] [i_7] [i_7] [i_7])))));
                            arr_26 [i_9] [i_4] [i_8] [i_7] [i_4] [i_3] = ((/* implicit */unsigned short) arr_23 [8LL] [i_8 + 2] [i_7] [i_7] [i_4] [i_3]);
                        }
                    } 
                } 
                var_20 += ((/* implicit */unsigned short) arr_17 [i_3] [(short)15]);
                var_21 = ((unsigned long long int) var_9);
            }
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-69)) / (arr_17 [i_3] [23])));
            arr_27 [i_4] = ((/* implicit */_Bool) ((arr_9 [(signed char)1]) - (((arr_13 [i_3] [18U] [i_4]) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_8))))));
        }
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) (((-(arr_16 [i_3]))) - (max(((-(arr_9 [i_3]))), (((/* implicit */int) arr_8 [i_3]))))));
            arr_31 [(unsigned char)9] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_17 [i_3] [i_3]) + (2147483647))) >> (((var_3) - (1596088906)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)85))))) : (((/* implicit */int) ((unsigned short) var_1)))))), (((((/* implicit */_Bool) (unsigned short)50798)) ? (((((/* implicit */_Bool) 18446726481523507200ULL)) ? (((/* implicit */unsigned long long int) 103732956621143133LL)) : (var_4))) : (min((var_4), (((/* implicit */unsigned long long int) (unsigned char)13))))))));
        }
        var_24 = ((/* implicit */unsigned long long int) (-((~(((unsigned int) arr_9 [i_3]))))));
    }
}
