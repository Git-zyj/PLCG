/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105661
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61580))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3956))))) : (((/* implicit */int) arr_2 [i_0]))));
        var_11 ^= arr_2 [i_0];
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((int) ((unsigned short) (~(var_9)))));
        var_12 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (1U)))), (((((/* implicit */_Bool) (unsigned short)16)) ? (var_4) : (((/* implicit */unsigned long long int) -2437662978376724319LL)))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2425535249U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_5 - 1] [(signed char)4] [i_5] [i_4]))) : (arr_17 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_2] [i_1])))) ? (max((((/* implicit */unsigned int) (unsigned short)3945)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [i_5 - 1] [i_5 - 1] [(short)15] [i_4] [(short)7]))))));
                            var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-16)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (1224843434) : (((/* implicit */int) arr_19 [i_1] [1ULL] [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4]))))) : (17007135597107429237ULL)));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [i_4] [i_4] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) var_9))))) ? (((arr_16 [i_4] [i_4] [i_4 - 1] [i_4 - 1]) & (9759018178082928435ULL))) : (((unsigned long long int) (signed char)0))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((arr_13 [i_1]) ? (((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_4))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (unsigned short)33921)) : (785531244)))))))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                arr_23 [i_1] = ((/* implicit */short) var_7);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((4294967294U) << (((((/* implicit */int) arr_22 [i_1] [i_1] [0LL])) - (43827))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1575329827) : (((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) arr_20 [i_1] [i_1]))))))))));
                var_18 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_19 = 3063853302571786227ULL;
            }
            arr_24 [i_1] [i_2] [7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_4 [i_2])), (((arr_13 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) : (var_6)))));
        }
        arr_25 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */unsigned long long int) 1U)) % (17487339172144522296ULL))))) != ((-(arr_12 [i_1])))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_5), (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) max((arr_4 [i_8]), (((/* implicit */int) (signed char)-30))))) ? (((arr_29 [15ULL] [(short)3] [(signed char)16]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31601))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27190))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */int) 66584576U);
                                var_22 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)3955)) >= (((/* implicit */int) (unsigned char)80)))))));
    }
    for (short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) max((arr_16 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) (signed char)-16)))))), (((arr_16 [i_11] [i_11] [i_11] [i_11]) << (((134217216) - (134217194))))))))));
        arr_42 [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) var_0))))) * (max((((/* implicit */unsigned int) var_1)), (var_9)))));
    }
    var_25 &= ((/* implicit */unsigned char) var_5);
    var_26 = ((/* implicit */short) var_7);
}
