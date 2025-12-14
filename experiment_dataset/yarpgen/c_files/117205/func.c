/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117205
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((var_6), (arr_2 [i_0] [i_1 - 1])))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                var_11 *= ((/* implicit */short) ((max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) ((2138932577U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : ((-(2646836179U))))) - (110U)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((max((((/* implicit */int) arr_4 [i_2 - 1])), ((~(((/* implicit */int) arr_1 [i_2 + 3] [i_2 + 3])))))), (((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */int) arr_7 [i_2] [5ULL])) >= (((/* implicit */int) arr_4 [i_2]))))), (((((/* implicit */_Bool) ((var_9) / (3111710838U)))) ? (arr_0 [i_2 + 3] [(signed char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_2])), ((unsigned char)244)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_2 [i_2 + 2] [i_2 - 3]), (var_2)))), (((arr_8 [i_2 - 3]) ? (1183256457U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 2])))))));
                    arr_14 [i_2] = ((/* implicit */int) var_1);
                    arr_15 [7] [7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) max((((/* implicit */short) arr_2 [i_2 - 1] [i_2 - 1])), (arr_9 [(unsigned char)3] [i_3] [i_4])))) : (((/* implicit */int) max(((_Bool)1), (var_1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2 + 1] [i_3] [i_3] [i_4])) - (((/* implicit */int) arr_3 [i_2 + 3]))))) : ((+(min((((/* implicit */unsigned int) arr_3 [i_3])), (var_8))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        var_15 *= ((unsigned int) ((_Bool) arr_3 [i_2 + 1]));
                        var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (var_9) : (arr_12 [i_2] [i_3] [(unsigned char)4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_3]))))) : (max((((/* implicit */unsigned int) (unsigned short)2047)), (var_3))))))));
                        arr_20 [i_2 - 3] [i_2 - 3] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)16524)))));
                        var_17 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)61426)))) ^ (((/* implicit */int) (_Bool)1))))) ^ ((~(var_7)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_18 = max((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))), ((unsigned char)15));
                        var_19 *= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) 0)) <= (4294967293U)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 2) 
                        {
                            arr_25 [i_2] [i_2] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((int) var_8)))) ^ (min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (-996040773))), (((/* implicit */int) arr_4 [i_7 - 1]))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [i_3]))) <= (var_3)))) << (((((/* implicit */_Bool) (unsigned short)61426)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))))) >= (3714096690U)));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (9)))) << (((unsigned int) 24ULL))));
                            arr_26 [i_2 - 2] [i_3] [i_3] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */int) (signed char)0);
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((int) ((4294967291U) | (arr_24 [i_2 + 2] [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 - 3]))));
                            arr_29 [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((signed char) -289143847));
                            arr_30 [i_2] [i_6] = ((/* implicit */short) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((unsigned int) 9396707329503951907ULL)))));
                            var_23 *= ((/* implicit */unsigned int) (_Bool)0);
                        }
                        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)16642))));
                            arr_34 [i_2] [i_2] [i_2] [i_6] [i_6] = var_4;
                            var_25 = ((/* implicit */_Bool) max((arr_23 [i_2] [i_2 - 1] [i_6] [i_9 + 4]), (((/* implicit */unsigned int) ((short) arr_10 [i_2 + 2] [i_9 + 1])))));
                        }
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 2) 
                    {
                        arr_38 [i_2 - 3] [i_2] [12U] [i_4] [(unsigned char)10] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_17 [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 + 4] [i_10 + 1])) || (((/* implicit */_Bool) arr_17 [i_10 + 4] [i_10 + 4] [(signed char)10] [i_10 + 3] [i_10] [1U]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 3; i_11 < 12; i_11 += 2) 
                        {
                            var_26 *= ((/* implicit */unsigned short) max(((-(262143ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19600)) ^ (((/* implicit */int) arr_33 [i_10] [i_10 - 2] [i_11 - 1] [i_11])))))));
                            var_27 = ((/* implicit */_Bool) ((unsigned int) (+(var_9))));
                            arr_43 [(short)5] [7] [i_4] [7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967281U)))));
                        }
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        var_28 = var_0;
                        var_29 *= ((/* implicit */int) ((unsigned long long int) var_6));
                    }
                    var_30 *= ((/* implicit */_Bool) (~(min((max((((/* implicit */unsigned int) (short)25803)), (1603497776U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_14 = 3; i_14 < 21; i_14 += 1) 
        {
            arr_51 [(short)9] [(short)9] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_14 + 1] [i_14 + 4] [i_14 + 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [12U]))) : (arr_49 [(unsigned char)8] [18U] [i_14 + 3]))) : (var_0)));
            var_31 = ((var_3) == (((unsigned int) var_7)));
            var_32 = ((/* implicit */unsigned int) (short)-25803);
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                for (short i_16 = 3; i_16 < 23; i_16 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) ((signed char) 80390363U));
                        /* LoopSeq 3 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 27U)) ? (8569239000879180471ULL) : (((/* implicit */unsigned long long int) 31U))));
                            arr_61 [i_13] [i_17] [i_15] [i_16 - 2] [i_17] [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_60 [7] [i_14 + 1] [i_17]) < (4294967295U))))));
                            arr_62 [i_13] [i_17] [(_Bool)1] [i_14] [i_15] [i_16 + 2] [i_17] = ((/* implicit */signed char) ((arr_56 [i_13] [i_14] [(short)18] [(short)18] [i_17]) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((var_3) - (4019666828U))))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_15]))) <= (var_8)))) >> (((/* implicit */int) var_4))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL))) || ((!(((/* implicit */_Bool) arr_58 [i_13] [12U] [i_15] [i_16 - 1] [i_18]))))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_8)));
                        }
                        for (unsigned int i_19 = 1; i_19 < 24; i_19 += 2) 
                        {
                            arr_71 [i_13] [i_14 + 3] [9U] [i_13] [i_16 + 1] [i_19] = ((/* implicit */unsigned short) ((((unsigned int) 15U)) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))));
                            arr_72 [i_13] [i_13] [i_15] [i_16 + 1] [i_19] = ((/* implicit */_Bool) ((arr_63 [i_14 - 1] [i_16 - 1]) << (((4294967265U) - (4294967237U)))));
                        }
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) (short)26203)) - (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_63 [i_13] [i_14 - 1]))));
        }
        arr_73 [i_13] [i_13] = ((/* implicit */signed char) (_Bool)1);
        arr_74 [i_13] [17] = ((((((/* implicit */_Bool) 1305479085U)) ? (((/* implicit */unsigned long long int) 1305479097U)) : (var_0))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (1ULL))));
        arr_75 [i_13] = ((unsigned short) var_10);
        var_40 = ((/* implicit */short) ((var_4) ? (arr_60 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    var_41 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)81)) * (((/* implicit */int) (short)-266))))));
    var_42 = ((/* implicit */short) (+(var_8)));
}
