/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108445
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
    var_10 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) min(((unsigned char)180), (var_4)))) * ((+(((/* implicit */int) var_9))))))));
    var_11 = ((/* implicit */unsigned short) ((signed char) var_4));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                var_12 = ((/* implicit */unsigned char) var_5);
                arr_7 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [11LL] [11LL] [i_0 + 1])) ? (((((((/* implicit */long long int) var_5)) > (3751301149127908596LL))) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)13] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_1] [i_1]))) : (min((((/* implicit */long long int) var_9)), (2028876313334011837LL))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1130372213U)) <= (10578743228031340826ULL))))) * (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (arr_6 [i_0] [i_2 - 3] [i_0])))))));
                var_13 = ((((arr_3 [i_0] [4ULL]) + (9223372036854775807LL))) << ((((-(arr_3 [i_0 - 3] [12LL]))) - (3529277829151205329LL))));
                arr_8 [6LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1])) && (((/* implicit */_Bool) arr_2 [i_2]))));
            }
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_11 [i_1] [i_1] [i_3] = min((((min((arr_6 [i_0 + 1] [i_1] [i_0 + 1]), (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_3]))))) : (min((15032385536LL), (((/* implicit */long long int) var_7)))))));
                arr_12 [i_0] [i_0] [i_1] = var_7;
            }
            var_14 = ((/* implicit */unsigned short) 3164595061U);
            var_15 = ((/* implicit */unsigned char) var_7);
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_16 = var_3;
                var_17 = ((/* implicit */long long int) arr_0 [i_0]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 + 3] [i_1] [i_4]))) <= ((-(min((((/* implicit */unsigned int) (signed char)35)), (arr_2 [4ULL])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_17 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 3]))));
                    var_19 |= ((/* implicit */unsigned char) var_8);
                }
            }
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                arr_20 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */long long int) arr_16 [i_0] [i_1 + 1] [i_1] [i_1] [i_6] [i_6]);
                arr_21 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_5)))))) * (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_3 [i_0] [i_1])))));
                var_20 = ((/* implicit */unsigned long long int) arr_5 [(unsigned short)4] [i_1 + 1] [13U]);
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 68652367872LL)) ? (-6680650157293991207LL) : (((/* implicit */long long int) arr_14 [i_1 + 1] [i_1 + 1])))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)45169)))) || (((/* implicit */_Bool) arr_9 [i_0 - 1] [10ULL] [i_6] [i_6])))))));
                    /* LoopSeq 4 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((min((var_8), (((/* implicit */unsigned int) var_2)))) == ((+(arr_14 [i_1] [i_1 + 3])))));
                        var_23 = ((/* implicit */unsigned short) arr_6 [i_1] [i_7] [i_6]);
                        arr_27 [i_1] [i_6] [i_8] = ((/* implicit */long long int) 3164595049U);
                    }
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) min(((+(((/* implicit */int) ((unsigned short) arr_6 [i_9] [i_1 + 1] [i_9]))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_9])))))) > (((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_23 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_7])))) && (((/* implicit */_Bool) min((arr_23 [i_0 - 3] [i_0 - 3] [i_1 + 1] [i_1 + 1]), (arr_23 [i_0 - 1] [i_0 - 2] [i_1 + 1] [i_1 + 1])))))))));
                        var_26 = ((/* implicit */unsigned int) var_3);
                    }
                    for (signed char i_10 = 2; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) var_7);
                        var_28 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_6]);
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))));
                    }
                    for (signed char i_11 = 2; i_11 < 15; i_11 += 4) /* same iter space */
                    {
                        arr_36 [i_0 - 1] [i_0] [i_1] [i_1] [i_6] [i_1] [i_11 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_1 + 2] [(unsigned char)2] [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_1))))) : (((long long int) (unsigned char)217)))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1 + 3]) >= (((/* implicit */long long int) arr_30 [i_1] [i_1 + 1] [i_0 + 1] [i_0] [i_6]))))))));
                        arr_37 [i_0] [i_1] [i_1] [i_6] [(unsigned char)3] [i_11] [i_11] = var_3;
                        arr_38 [i_7] [i_1] = ((/* implicit */long long int) min((arr_13 [i_0 - 3]), (((/* implicit */unsigned long long int) (unsigned short)10437))));
                    }
                    arr_39 [i_6] [i_1 + 3] [i_6] [i_7] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6]))) : (((243583364798033362LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47287)))))))));
                }
                var_30 = ((/* implicit */unsigned int) ((unsigned short) ((signed char) var_4)));
            }
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) ((min((arr_29 [i_0 - 2] [i_1 + 2] [i_1] [9U] [i_12]), (((/* implicit */unsigned int) (unsigned char)0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_29 [i_1] [i_1 + 3] [i_12] [i_12] [i_12]))))));
                var_32 = ((/* implicit */signed char) arr_6 [i_0 - 3] [(unsigned short)9] [i_12]);
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_0] [i_1 + 2] [i_1] [(unsigned short)12] [i_12])) ? (((/* implicit */int) (unsigned short)32752)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [7LL] [i_12])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
            }
            /* LoopSeq 3 */
            for (signed char i_13 = 3; i_13 < 15; i_13 += 2) 
            {
                arr_45 [i_1] = ((/* implicit */unsigned char) arr_35 [i_0] [i_1] [i_1] [i_0] [i_13 - 1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_14 = 3; i_14 < 15; i_14 += 2) 
                {
                    var_34 = ((/* implicit */unsigned char) 1130372235U);
                    arr_48 [i_0] [i_0] [i_1] [i_13 - 1] [i_1] = ((/* implicit */unsigned char) (-(arr_29 [i_1] [i_13 + 1] [i_1] [i_13 - 1] [i_14 - 2])));
                    arr_49 [i_1] [6LL] [i_13 - 3] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_13])) || (((/* implicit */_Bool) arr_14 [i_0] [i_1 + 3]))));
                    var_35 = ((/* implicit */unsigned char) arr_4 [i_1 + 3] [i_13 + 1] [i_14 - 2]);
                    var_36 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_34 [i_0 - 2] [i_1] [i_14 + 1] [i_14] [i_14]))));
                }
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    arr_52 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [(unsigned short)10] [i_0 - 2] [i_13 - 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_15] [i_15] [i_0 - 3] [i_13 + 1])))));
                    var_37 = ((/* implicit */unsigned char) 1479983865U);
                    arr_53 [i_1] [i_1] = ((/* implicit */long long int) arr_18 [i_15]);
                    var_38 = ((/* implicit */long long int) var_2);
                    arr_54 [i_0] [i_1] [(unsigned char)5] [i_13] [i_1] [i_15] = ((/* implicit */unsigned int) ((unsigned short) arr_15 [(unsigned short)12] [i_0] [i_0 + 1] [i_1 + 2]));
                }
                var_39 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_13] [i_13 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-36))))) ? (((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_1] [10LL] [i_1] [i_1 + 3])))))) : (((/* implicit */int) (unsigned short)65535))));
            }
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (((arr_28 [i_1] [i_1] [i_1] [(unsigned char)8] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0])))))));
                arr_57 [i_0 - 2] [i_1] [i_16] = ((/* implicit */unsigned char) (~(var_5)));
            }
            for (unsigned short i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */long long int) var_2);
                arr_61 [(unsigned char)14] [i_1] [i_1] = ((/* implicit */signed char) arr_29 [i_0] [i_0] [i_0 - 3] [i_1 + 3] [i_17]);
            }
        }
        /* vectorizable */
        for (unsigned short i_18 = 4; i_18 < 13; i_18 += 4) 
        {
            var_42 = ((/* implicit */unsigned char) arr_28 [i_18] [i_18] [i_18] [(unsigned short)0] [i_0 + 1]);
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3751301149127908594LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_18 + 3] [i_18 - 1] [i_0]))) : (arr_42 [i_18] [i_18] [6LL])));
        }
        for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 16; i_20 += 1) 
            {
                for (unsigned char i_21 = 1; i_21 < 12; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        {
                            arr_73 [i_19] [i_19 + 3] [i_20] [i_21] [i_22] = ((/* implicit */long long int) min((min((arr_14 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47826)) && (((/* implicit */_Bool) arr_41 [i_19] [i_21] [(unsigned char)9]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */_Bool) arr_43 [i_19] [i_19] [i_20])) || (((/* implicit */_Bool) 3164595061U)))))))));
                            arr_74 [i_0] [i_0] [i_20] [i_21] [i_19] = min((((/* implicit */long long int) (+(((/* implicit */int) arr_56 [i_0] [i_0 + 1] [i_21 + 1]))))), (min((-3751301149127908594LL), (((/* implicit */long long int) var_9)))));
                            arr_75 [i_0 - 3] [i_19] [i_19] [i_21] [i_19] [i_21 + 1] = 1239075585U;
                            var_44 = ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_23 = 2; i_23 < 15; i_23 += 2) 
            {
                for (long long int i_24 = 1; i_24 < 15; i_24 += 2) 
                {
                    for (unsigned char i_25 = 1; i_25 < 15; i_25 += 1) 
                    {
                        {
                            var_45 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_83 [i_19 + 4] [i_23 - 2] [i_24 - 1] [i_25 + 1])) << (((((/* implicit */int) ((unsigned short) (signed char)-36))) - (65493)))))), (((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) : (arr_23 [i_0] [i_19 + 4] [i_19] [i_25 - 1])))))));
                            var_46 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [(unsigned short)14] [i_23] [i_25 + 1])) ? (((/* implicit */int) arr_82 [i_0 + 1] [i_19 + 4] [i_23] [i_24] [i_25 - 1] [i_25])) : (((/* implicit */int) arr_56 [i_0] [i_23 - 1] [i_25 + 1]))))) ? (((/* implicit */unsigned long long int) ((4530240351208400471LL) << (((arr_0 [i_23 - 1]) - (5674650149519488014ULL)))))) : (((((/* implicit */_Bool) arr_82 [i_0 - 3] [i_19] [i_23] [i_0 - 3] [i_25 - 1] [i_25])) ? (((/* implicit */unsigned long long int) 8015005362897027086LL)) : (arr_0 [i_25]))));
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((arr_13 [i_0]), (((/* implicit */unsigned long long int) arr_69 [i_0 - 3] [i_19 - 1] [i_23 - 2] [i_19 - 1] [i_25])))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_24]) : (3751301149127908596LL))))))) > (((/* implicit */int) arr_32 [i_0 - 1] [i_23 - 2]))));
                        }
                    } 
                } 
            } 
            arr_86 [i_19] = ((/* implicit */signed char) var_1);
        }
        var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_69 [i_0] [i_0] [i_0 + 1] [(unsigned short)2] [i_0 + 1]))))) ? (min((((/* implicit */long long int) arr_69 [i_0] [i_0] [i_0 - 3] [i_0 + 1] [i_0 - 1])), (3751301149127908596LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-15)) % (((/* implicit */int) arr_69 [i_0] [i_0 + 1] [i_0 - 2] [7U] [i_0 + 1]))))))))));
    }
}
