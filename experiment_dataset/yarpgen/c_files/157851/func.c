/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157851
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_4 - 1] [i_4 - 1] [i_0 + 4] = ((/* implicit */unsigned long long int) 1131078814);
                                var_17 = ((/* implicit */short) (unsigned short)8191);
                                var_18 = ((/* implicit */signed char) ((((unsigned long long int) (-(arr_4 [(unsigned char)9] [(unsigned char)9] [i_3])))) >> (((max((((/* implicit */long long int) (-(1518885833)))), (arr_6 [i_0] [i_1] [i_0] [i_3]))) - (5795808049598108975LL)))));
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((long long int) max((var_16), (((/* implicit */long long int) var_1)))))));
                    var_21 = ((/* implicit */_Bool) (-((+(max((((/* implicit */unsigned long long int) var_8)), (arr_8 [i_2] [i_0 + 3] [i_0 + 3])))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_5] [i_2] = ((/* implicit */_Bool) var_12);
                                arr_21 [i_1] [i_0] = var_15;
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            var_22 |= ((/* implicit */unsigned char) var_16);
                            arr_28 [i_8] [i_7] [i_2] [i_1] [i_0 + 3] = ((/* implicit */long long int) arr_19 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8]);
                            arr_29 [i_0 + 4] [i_2] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_7))))) / (((var_3) * (var_13)))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0 + 4] [i_1] [0U] [i_2] [i_2] [i_7] [i_8 + 2])) <= (((((/* implicit */int) arr_1 [i_1] [i_2])) % (((/* implicit */int) (unsigned char)247)))))))));
                        }
                        var_24 = (-(2147483647));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [(unsigned short)3] [1ULL] [i_2] [i_9]);
                        arr_32 [i_9] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1 - 1] [i_0] [i_9] [6]))) : (arr_17 [9ULL] [i_1] [i_2] [i_9] [i_9])))));
                        arr_33 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_15)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_24 [i_0] [i_0] [i_1] [i_1] [i_9])))));
                    }
                    for (long long int i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        var_26 = ((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_2))))) >> (((((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 1])) - (165))));
                        arr_36 [i_10 - 2] [(unsigned char)6] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                        arr_37 [i_10 + 1] [i_1 - 1] [i_2] [i_10] [i_2] = ((/* implicit */unsigned char) var_14);
                        arr_38 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 8166671670573447281LL)) ? (((/* implicit */int) arr_2 [i_2] [i_1 - 1] [i_0 + 3])) : (var_8)))));
                        arr_39 [i_2] [i_1] = ((/* implicit */unsigned char) arr_26 [i_10] [i_2] [i_2] [i_0] [i_1] [i_0]);
                    }
                    for (long long int i_11 = 2; i_11 < 11; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_27 = max((-6685063586886734545LL), (((/* implicit */long long int) (_Bool)1)));
                            var_28 = ((/* implicit */unsigned short) ((-7571946439433808906LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-23344)))));
                            arr_44 [i_0] [i_1] [i_2] [i_12] [i_12] [4ULL] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (var_15))))), ((+(20ULL)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (var_0)));
                            arr_48 [i_0] [i_1] [i_2] [i_11] [5] = ((/* implicit */unsigned long long int) (unsigned char)81);
                            arr_49 [i_13] [i_11] [i_2] [0LL] [i_0 - 1] = max((((/* implicit */long long int) (signed char)-3)), (9223372036854775807LL));
                            var_30 -= ((((/* implicit */_Bool) arr_3 [i_0] [i_13])) ? (arr_7 [i_13] [i_11 - 2] [i_2] [i_1] [i_0 + 4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36872)) ? (var_1) : (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (arr_25 [i_0] [i_0] [i_1] [i_1] [i_11] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                        }
                        var_31 = ((/* implicit */long long int) (+((-(max((((/* implicit */unsigned long long int) (unsigned char)63)), (15097913944891925925ULL)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (short i_15 = 2; i_15 < 8; i_15 += 2) 
        {
            for (unsigned int i_16 = 4; i_16 < 9; i_16 += 3) 
            {
                {
                    arr_57 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned short)62600))));
                    var_32 = arr_9 [i_15] [i_16];
                    arr_58 [i_16] [i_16 - 2] [i_16 - 3] &= ((/* implicit */int) -3484467967691325014LL);
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) arr_0 [i_14])) ? (arr_0 [i_14]) : (((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_17 = 2; i_17 < 10; i_17 += 1) 
        {
            arr_61 [i_17] = ((/* implicit */unsigned char) (+(arr_0 [i_14])));
            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)48)), (arr_27 [i_17 - 2] [i_17 + 1] [i_14] [i_14] [i_17] [i_14] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_11))))) : ((-(var_4))))) << ((((+(-1872125206))) + (1872125219)))));
        }
        for (short i_18 = 2; i_18 < 10; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 2; i_20 < 9; i_20 += 4) 
                {
                    for (unsigned short i_21 = 2; i_21 < 10; i_21 += 3) 
                    {
                        {
                            arr_74 [i_14] [i_18] [i_19] [i_20 - 1] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)71)))))));
                            var_35 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (max((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_14])) / (((/* implicit */int) arr_2 [i_21] [i_18] [i_14])))))))));
                        }
                    } 
                } 
            } 
            arr_75 [(signed char)6] [i_18] = ((/* implicit */long long int) min((arr_18 [i_14] [i_14] [i_14] [i_18] [3LL] [i_18 - 2] [(signed char)11]), (((/* implicit */int) var_7))));
        }
        arr_76 [i_14] = ((/* implicit */long long int) min(((+(((/* implicit */int) ((arr_65 [i_14] [i_14] [(signed char)10]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)504)))))))), (((/* implicit */int) ((unsigned char) ((unsigned int) arr_52 [i_14] [i_14]))))));
    }
    /* LoopNest 2 */
    for (long long int i_22 = 1; i_22 < 16; i_22 += 1) 
    {
        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
        {
            {
                arr_82 [i_23] [(_Bool)1] [i_22] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_78 [i_22] [i_22 + 1])) ? (arr_81 [i_22]) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (+(var_3))))));
                arr_83 [i_22] [i_22] = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
}
