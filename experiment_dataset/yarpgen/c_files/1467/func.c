/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1467
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) var_1);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_11);
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 + 2] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [(_Bool)1] [i_0 - 4])) : (((/* implicit */int) arr_9 [1ULL] [i_3 + 2] [11ULL] [i_3 + 2] [15LL] [i_4] [i_4]))))) && (((/* implicit */_Bool) 384211416))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 13; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_18 [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_5 + 1]), ((signed char)45)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5 - 2] [i_5 + 1]))))) : (((/* implicit */int) max(((short)-124), (((/* implicit */short) var_8)))))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_5 - 2])) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) arr_4 [i_5 - 2])))), (((/* implicit */int) max((arr_14 [i_5 - 2] [i_5 - 2]), (arr_14 [i_5 - 2] [i_5 - 2]))))));
                    /* LoopSeq 4 */
                    for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) (~((~((-(((/* implicit */int) var_17))))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) (!((_Bool)0)));
                            var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8 - 2] [2LL] [i_9] [i_9])))))));
                            arr_23 [i_5 + 1] [i_7] [(unsigned char)11] [i_9] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_5)))), (((max((((/* implicit */unsigned long long int) var_1)), (arr_19 [i_9] [i_6] [i_5 - 2]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_26 = (+(((((/* implicit */_Bool) arr_2 [i_5] [i_8 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))));
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                        {
                            arr_26 [i_5] [i_7] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_10] [(signed char)10] [i_7])) ? ((-(((/* implicit */int) (unsigned char)25)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5] [i_7])))))));
                            arr_27 [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-124))))) ? (((arr_12 [i_8 - 2] [i_5 - 1]) + (arr_12 [i_8 + 1] [i_5 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)25)) && (((/* implicit */_Bool) (signed char)-75))))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_11 = 2; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        arr_32 [i_5] [i_5 - 1] [i_7] = ((/* implicit */long long int) ((int) arr_25 [i_11 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2]));
                        arr_33 [i_7] [(unsigned char)11] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 - 2] [i_7] [i_7] [i_5 - 2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (var_14)));
                    }
                    for (long long int i_12 = 2; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) arr_6 [i_5] [(short)13] [i_7] [i_12]);
                        arr_37 [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5] [i_7] = ((/* implicit */short) var_6);
                        var_28 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (var_12) : ((+(((/* implicit */int) (unsigned char)116))))))), ((~(((4293800506625919777LL) & (((/* implicit */long long int) var_12))))))));
                    }
                    for (long long int i_13 = 2; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_20 [i_7] [i_6] [i_7] [i_7])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_28 [i_5]))) || (((/* implicit */_Bool) arr_10 [i_13]))))) : ((-(arr_8 [i_7] [i_7] [i_7])))));
                        var_30 = (((!(((/* implicit */_Bool) (unsigned char)116)))) ? (17773137143289631591ULL) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [(unsigned char)7] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_15 [i_7] [i_7]), (arr_15 [i_5] [i_7])))) ? (((((/* implicit */_Bool) arr_15 [i_7] [i_7])) ? (max((var_5), (((/* implicit */unsigned long long int) (short)20767)))) : (((/* implicit */unsigned long long int) var_10)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) << (((((/* implicit */int) (short)-17476)) + (17484)))))), (var_5)))));
                        arr_40 [i_7] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_13 - 1] [i_13 + 2] [i_7] [i_5 - 1])))))));
                        var_32 += ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_22 [i_13] [i_13 + 2] [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_6]), ((signed char)-38)))), (((((/* implicit */_Bool) (short)-22239)) ? (((/* implicit */int) arr_28 [9LL])) : (((/* implicit */int) arr_28 [i_7]))))));
                    }
                    var_33 = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_14 = 4; i_14 < 9; i_14 += 2) 
    {
        arr_43 [i_14 - 4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_17)) - (16))))), (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (3224475960U))) ^ (((/* implicit */unsigned int) min((var_12), (-1586715203))))))) && (((/* implicit */_Bool) (~(max((var_11), (((/* implicit */int) var_3))))))))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (unsigned int i_16 = 2; i_16 < 9; i_16 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))));
                    arr_50 [i_14 - 4] [i_14 - 4] = ((/* implicit */_Bool) 16518175975929052536ULL);
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_8)), ((~(((((/* implicit */_Bool) var_12)) ? (var_16) : (var_16)))))));
    var_37 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (-1266645190)));
}
