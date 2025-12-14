/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168459
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_16) << (((4396972769280ULL) - (4396972769251ULL)))))) ? (((var_6) ^ (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2 + 1])))) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) -477686817))))))), (min((((/* implicit */unsigned long long int) var_5)), (arr_4 [i_0 - 1] [i_1 - 3])))));
                    var_18 = ((/* implicit */int) 18446739676736782322ULL);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))) : (min((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (arr_0 [4LL]))))))));
        arr_9 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) == (var_11))))) ^ (min((var_13), (((/* implicit */unsigned long long int) arr_6 [1LL])))))) % (((/* implicit */unsigned long long int) var_4))));
    }
    for (short i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45923))))))) % (((/* implicit */int) (signed char)28))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((unsigned short) 358412293U));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned long long int) arr_0 [i_4 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) ^ (726597317U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_3 + 4] [i_4 + 1] [5U] [i_8])) : (var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (((unsigned int) ((((/* implicit */_Bool) (short)-21610)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (short)15)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) (unsigned short)65526)), (((/* implicit */unsigned long long int) arr_22 [i_8] [i_5] [i_4] [i_4 + 2] [i_3]))))) ? (((int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) 1495815183U))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8]))) != (arr_0 [i_4 - 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (arr_6 [i_3])))))))));
                    }
                }
            } 
        } 
    }
    for (short i_9 = 2; i_9 < 9; i_9 += 4) /* same iter space */
    {
        arr_28 [i_9 - 2] = ((/* implicit */unsigned int) max((arr_27 [i_9] [i_9 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_9 - 2]))));
        var_24 = ((/* implicit */unsigned short) var_5);
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_25 = ((/* implicit */signed char) (unsigned short)12616);
            arr_32 [0ULL] [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_9 + 1])) ^ (((/* implicit */int) arr_11 [i_9 - 2])))));
            arr_33 [i_9] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) << (((8673240667934938656ULL) - (8673240667934938655ULL))))) | ((+(((/* implicit */int) arr_3 [i_10]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21010)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_29 [i_9] [i_10] [i_10]))))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */short) arr_15 [i_9])))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_16 [9ULL])))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned char i_12 = 3; i_12 < 11; i_12 += 1) 
                {
                    {
                        arr_41 [(unsigned char)0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_16) << (((((/* implicit */int) (unsigned short)21586)) - (21529))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) arr_12 [i_11])) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((var_3) != (((/* implicit */unsigned long long int) arr_2 [i_9 + 4]))))))));
                        arr_42 [i_12] = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
        {
            arr_46 [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (10812880495035214546ULL)));
            arr_47 [i_13] [i_9] = ((/* implicit */unsigned short) ((unsigned int) (signed char)110));
            /* LoopSeq 3 */
            for (short i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                arr_51 [i_9 + 1] [i_13 + 1] [i_14 - 1] [i_9 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (var_7) : (var_6)))));
                arr_52 [i_9] [(unsigned char)11] [i_9] = ((/* implicit */short) var_0);
            }
            for (short i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                arr_56 [i_9] [i_15] = ((/* implicit */int) (-(2010405836U)));
                arr_57 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) var_9)) ? (var_4) : (2147483647)))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) var_2))) | (((((/* implicit */_Bool) (short)15033)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
            }
            for (int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                var_27 |= ((/* implicit */unsigned char) 0);
                var_28 = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_4)) ^ (var_11))) >> ((((~(var_16))) - (17856460236014797054ULL)))));
            }
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)93)) ^ (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) (unsigned short)18569)) : ((+(((/* implicit */int) arr_21 [i_9 - 1] [i_13 + 2] [i_13])))));
            var_30 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (var_3))));
        }
        var_31 = var_16;
        /* LoopNest 2 */
        for (long long int i_17 = 1; i_17 < 12; i_17 += 2) 
        {
            for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 11; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 2; i_20 < 11; i_20 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 0ULL))))));
                                arr_70 [i_9] [i_17] [i_18] [5ULL] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) 241138923))));
                                var_33 = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (-(var_5))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned char) var_10);
}
