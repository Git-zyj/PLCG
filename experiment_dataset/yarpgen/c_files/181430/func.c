/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181430
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) (unsigned short)4);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_1 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_9 [i_0] [i_1] [i_1 - 1] [i_2] = ((long long int) (-(min((arr_8 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_14 = ((unsigned short) ((arr_8 [i_1] [i_1] [i_1 - 4] [i_2]) / (arr_8 [i_0] [i_0] [i_1 - 2] [i_2])));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_16 [i_1 + 1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_8 [8ULL] [i_1] [i_2] [8LL]);
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)36057)))) + (max((((/* implicit */long long int) arr_4 [i_0])), (arr_8 [i_1 - 1] [i_2] [i_1 - 1] [i_4]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 2] [i_2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_3])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 4] [i_2])))))));
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)3])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_2]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1 + 1] [i_1 - 2])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_5]))) : (arr_18 [i_0] [i_3] [i_2] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_1 - 3] [i_5])), (arr_6 [i_0] [i_1] [i_2] [i_3])))))))) ? (((/* implicit */long long int) 1879048192U)) : (((long long int) arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 1]))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_2)) << (((((/* implicit */int) var_0)) + (114)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_1 - 1])));
                        var_18 = ((/* implicit */unsigned short) arr_11 [i_0] [i_2] [i_5]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [i_1] [i_1 + 1] [i_3]))) >= (arr_14 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 - 2] [i_1 - 2]))));
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_6] [0ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_13 [i_0] [i_0] [i_0] [i_0])))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_19 [i_0] [i_1] [i_2] [i_3] [i_2]), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (max((((/* implicit */long long int) arr_2 [i_6])), (arr_18 [i_0] [i_1] [i_2] [i_0] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_6])))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_3])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_1 - 3] [i_1] [i_2]))))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 2415919097U))) * (((/* implicit */int) min((arr_13 [i_1] [i_1] [i_3] [i_3]), (((/* implicit */unsigned short) var_9)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45110)) >> (((8964828326103182085LL) - (8964828326103182056LL)))))) && (((/* implicit */_Bool) arr_1 [i_1] [i_1])))))) : (((((/* implicit */_Bool) ((unsigned short) arr_6 [i_3] [i_2] [i_1] [i_0]))) ? (((((/* implicit */_Bool) var_6)) ? (2415919097U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_6]))))) : (((/* implicit */unsigned int) max((0), (((/* implicit */int) (signed char)-120)))))))));
                    }
                }
            }
            for (int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                arr_27 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_7]);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
            arr_28 [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) arr_15 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]));
            var_22 = ((/* implicit */signed char) max((var_22), ((signed char)-45)));
        }
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 1; i_9 < 8; i_9 += 4) 
            {
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) max((arr_0 [i_9 - 1]), (((/* implicit */unsigned long long int) ((signed char) arr_21 [i_0] [i_0] [i_8] [i_8] [i_9] [i_9 + 2])))))) ? (((/* implicit */int) max((arr_10 [i_9] [i_9] [(signed char)2] [(signed char)2] [i_9 + 4]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)52)) || (((/* implicit */_Bool) -1443299872)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9 + 3] [i_9 + 3] [i_0])) && (((/* implicit */_Bool) arr_34 [i_9 + 3] [i_8] [i_0])))))))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_8]))))), (min((min((((/* implicit */long long int) arr_4 [i_8])), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9] [i_8])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_8]))))))))))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_12 [i_0] [i_9 + 2] [i_9 + 2] [i_9 + 1]))) ? (((((/* implicit */int) arr_12 [i_9] [i_9 + 3] [i_9 + 1] [i_9 - 1])) >> (((((/* implicit */int) arr_12 [i_9] [i_9 + 4] [i_9 + 2] [i_9 + 2])) - (31))))) : (((((/* implicit */_Bool) arr_12 [i_8] [i_9 + 4] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_12 [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 2])) : (((/* implicit */int) arr_12 [i_8] [i_9 + 1] [i_9 - 1] [i_9 + 4]))))));
            }
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_0] [i_0] [i_0] [i_8] [i_8]))) ? (((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */long long int) var_3)) : (arr_36 [i_8]))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_8])) ? (arr_18 [i_8] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
            arr_37 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_8] [i_0] [i_0] [(unsigned short)0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((long long int) arr_20 [i_0] [i_0] [i_8] [i_8] [i_8]))) ? (((/* implicit */int) min((arr_31 [i_0] [i_0]), (((/* implicit */unsigned short) arr_21 [i_8] [i_8] [i_8] [i_8] [i_0] [i_0]))))) : (((/* implicit */int) arr_12 [i_0] [i_8] [i_0] [i_0])))) : (((/* implicit */int) arr_31 [i_0] [i_8]))));
            arr_38 [i_8] = ((/* implicit */unsigned short) arr_20 [i_0] [i_8] [i_8] [i_8] [i_8]);
            arr_39 [i_8] [i_8] = arr_25 [i_0];
        }
        arr_40 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 4138512457U)), (8964828326103182085LL)));
    }
    for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            arr_46 [i_10] [i_10] [i_11] = arr_43 [i_11];
            arr_47 [i_10] = ((/* implicit */signed char) arr_42 [i_10]);
            arr_48 [i_11] = ((/* implicit */unsigned short) 0);
        }
        for (int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            arr_53 [i_12] [i_12] [i_10] = ((/* implicit */unsigned short) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_10] [i_10] [i_12]))) / (arr_50 [i_10] [i_10]))) + (((((/* implicit */_Bool) arr_50 [i_10] [i_10])) ? (arr_45 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) -385754722))))))));
            var_27 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) -1262139401)))));
            /* LoopSeq 2 */
            for (unsigned int i_13 = 3; i_13 < 13; i_13 += 4) /* same iter space */
            {
                var_28 ^= ((/* implicit */int) arr_42 [i_13 - 3]);
                arr_58 [i_10] [i_12] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)8))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_10]))))) ? (((/* implicit */int) arr_55 [3U])) : (((/* implicit */int) arr_52 [i_10] [i_12] [i_13]))))) : ((~(arr_56 [i_10] [i_10] [i_13 - 3])))));
                arr_59 [i_10] = ((/* implicit */unsigned short) max((((arr_56 [i_13 - 2] [i_13] [i_13]) ^ (arr_56 [i_13 - 2] [i_13] [i_13]))), (((/* implicit */long long int) arr_43 [i_13 + 1]))));
            }
            /* vectorizable */
            for (unsigned int i_14 = 3; i_14 < 13; i_14 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_45 [i_12] [i_12] [i_14])))) ? (2717822617255632431ULL) : (arr_42 [i_14 - 2])));
                /* LoopSeq 3 */
                for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_30 -= ((/* implicit */signed char) ((arr_56 [i_14 + 1] [i_14 + 1] [i_14 - 1]) >= (((/* implicit */long long int) -2))));
                        var_31 = arr_45 [i_10] [i_12] [i_15];
                    }
                    arr_68 [i_10] [i_12] [i_12] [i_12] [i_14] [i_15] |= ((/* implicit */signed char) arr_56 [i_12] [(signed char)1] [i_15]);
                    var_32 = arr_52 [i_10] [i_14 - 2] [(unsigned short)7];
                    var_33 = ((/* implicit */signed char) var_8);
                }
                for (int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_18 = 2; i_18 < 12; i_18 += 3) 
                    {
                        var_34 = (+(((/* implicit */int) arr_63 [i_10] [(signed char)9] [i_10] [i_18 - 2])));
                        arr_76 [i_18] [i_12] [i_14] [i_17] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) -12)) ? (2672431432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_10] [i_14] [i_18])) ? (arr_66 [i_10] [i_10] [i_10] [i_10] [i_10]) : (var_1)))) ? (((((/* implicit */_Bool) arr_66 [i_10] [i_12] [i_14] [i_14] [i_18])) ? (arr_70 [i_14]) : (((/* implicit */long long int) arr_73 [i_17] [i_18])))) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [i_18 + 1] [i_14 - 1] [i_14] [i_14] [i_12] [i_12])))));
                    }
                    var_36 = ((/* implicit */int) arr_64 [i_14]);
                }
                for (unsigned long long int i_19 = 1; i_19 < 13; i_19 += 3) 
                {
                    arr_80 [i_19] [i_14 - 2] [i_12] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (unsigned short)0))))) ? (arr_66 [i_19] [i_19 + 1] [i_14] [i_14 - 2] [i_12]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_43 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))))));
                    arr_81 [i_10] [i_10] [(signed char)10] [i_19] = ((/* implicit */int) var_6);
                }
            }
        }
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_52 [(signed char)0] [i_10] [i_10])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_10] [i_10] [i_10])) ? (arr_75 [0U] [0U] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_10] [i_10] [(unsigned short)3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_43 [i_10])))) : (((((/* implicit */_Bool) var_2)) ? (arr_56 [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
    }
    var_38 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */_Bool) max((-9007199254740992LL), (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)43936)))) - (485479799)))));
}
