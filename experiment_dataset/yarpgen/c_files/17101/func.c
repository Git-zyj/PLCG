/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17101
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) arr_2 [(unsigned char)7] [i_0] [i_0]))))) : (8351185809093409003LL))));
                        var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((265497893609995193LL), (((/* implicit */long long int) arr_2 [i_2 - 2] [i_2] [i_2])))))));
                        arr_11 [i_2] [i_2] [i_1 - 2] [i_2] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8351185809093408983LL)) ? (-7737901837772117082LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (var_14)))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_14 [i_0] [(short)0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (unsigned short)37578);
                            arr_15 [9U] [i_1 + 1] [7ULL] [9U] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1 - 2] [i_0] [(_Bool)1] [(signed char)2] [i_1] [i_1])) == (((/* implicit */int) (unsigned short)5980))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (arr_6 [3LL] [i_1 + 1] [i_0])))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_10)) : (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((int) arr_8 [i_1] [i_2] [i_3] [i_0])))))) ? ((+(max((((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2] [i_0])), (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [7ULL] [i_0])) : (min((arr_3 [i_0]), (((/* implicit */int) var_11)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_6] [i_3] [3LL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [1ULL])) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)81)) : (arr_2 [i_0] [i_0] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_16 [2] [i_0] [i_3] [i_0] [i_0] [i_0]))))))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (((((/* implicit */_Bool) var_2)) ? (arr_17 [8LL] [i_0] [i_2] [i_2] [i_6] [i_0]) : (arr_21 [i_0] [5U] [(unsigned short)5]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))))) && (((/* implicit */_Bool) var_5))));
                            arr_23 [(signed char)1] [i_0] [(signed char)1] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_9 [i_0] [9] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_0] [i_2 + 1] [i_0] [i_1 - 1] [i_0])))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 2] [i_2 - 1])) ? (min((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [(unsigned char)7] [i_0])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0] [i_1 - 1] [i_0]), (((/* implicit */short) var_3)))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_2 - 2])) + (512U)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_26 [i_2 - 2] [i_0] [i_2 - 2] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1])))) ? (((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_2 - 1])) | (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2] [i_2 - 2])))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_2 + 2]))))));
                            var_19 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (short)25675))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0]))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [9] [6ULL]))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                arr_29 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25644))) : (max((((/* implicit */unsigned long long int) -265497893609995195LL)), (var_14)))));
                arr_30 [i_0] [i_1] [i_1] [4LL] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_28 [0U] [0U])) + (arr_12 [i_8] [i_0] [9] [i_0]))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                arr_31 [i_0] = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) arr_12 [i_1] [i_1 - 2] [i_1 - 1] [i_1])), (arr_21 [i_8] [i_0] [i_0]))));
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0]))) : (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                arr_35 [i_0] [i_0] [(signed char)7] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (+(var_12)))) == (((((/* implicit */_Bool) arr_12 [4U] [i_1] [i_1] [i_1])) ? (-8351185809093409004LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [(short)2] [i_0] [i_0] [i_0] [i_0] [(short)2])))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_0] [i_9] [i_0] [i_1])))) < (((unsigned int) var_13))));
                /* LoopSeq 2 */
                for (signed char i_10 = 4; i_10 < 9; i_10 += 2) 
                {
                    var_22 &= ((/* implicit */short) (+(arr_19 [i_10] [i_1 - 2] [i_9] [i_1 - 2] [i_9])));
                    arr_38 [i_0] [i_1] [i_9] [i_10] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_11))))));
                }
                for (short i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    arr_42 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11] = ((/* implicit */int) ((22LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)97)))));
                    var_23 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
                }
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_34 [(unsigned char)2] [(_Bool)1] [i_9] [i_1 - 2])) : (((/* implicit */int) arr_34 [2U] [i_1] [i_9] [i_1 - 2])))))));
                var_25 = ((/* implicit */int) (((~(4091397788U))) % ((-(var_8)))));
            }
            arr_43 [i_0] [(short)4] [i_0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_27 [i_1 - 2] [i_1 - 2]), (((/* implicit */signed char) var_11)))))));
            arr_44 [i_0] = ((/* implicit */unsigned short) 1874353018130845986LL);
            arr_45 [i_0] [i_0] [3U] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_0 [(short)7]))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_13))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_8)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))))))));
        }
        for (unsigned char i_12 = 3; i_12 < 6; i_12 += 3) 
        {
            arr_48 [i_0] [i_0] [i_0] = (-(((long long int) ((((/* implicit */_Bool) 22LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))));
            var_26 = ((/* implicit */int) ((long long int) max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((var_12) > (((/* implicit */int) var_9))))))));
            var_27 = ((((/* implicit */_Bool) max((max((((/* implicit */short) var_9)), ((short)0))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))))) && (((/* implicit */_Bool) min((max((((/* implicit */unsigned char) (_Bool)1)), (var_2))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [9U] [i_12] [3LL])))))))));
            arr_49 [i_0] [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_41 [8LL] [i_0] [i_0] [i_12 - 3] [i_12 - 1]))));
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            var_28 = ((arr_21 [i_0] [i_13] [i_0]) << (((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_13])) ? (arr_21 [i_0] [i_0] [4LL]) : (arr_21 [(short)3] [i_13] [(short)3]))) - (1943093713033631486LL))));
            arr_52 [(short)8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_7), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)5]))))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_46 [0LL])))))) : ((~(((((/* implicit */_Bool) arr_16 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_13] [i_0])) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [6LL] [6LL])) : (((/* implicit */int) var_11))))))));
        }
        arr_53 [8LL] |= ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_20 [4LL] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (unsigned char i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((((((-1915449851957229252LL) + (9223372036854775807LL))) << ((((+(arr_3 [i_14]))) - (1832937327))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_14] [(short)6])) | (var_0)))) ? ((-(((/* implicit */int) arr_5 [i_15] [i_15] [i_15])))) : (((/* implicit */int) arr_16 [i_15 - 1] [i_14] [i_15] [i_15] [i_15 - 1] [6LL]))))))))));
                    arr_59 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_40 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_0] [i_15 + 1])))), (((((/* implicit */int) arr_40 [i_15 + 1] [i_15 + 1] [(unsigned char)7] [i_0] [i_15 + 1])) - (((/* implicit */int) (unsigned char)66))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) var_0)) : (var_13))), (((/* implicit */unsigned long long int) ((var_10) <= (((/* implicit */int) arr_62 [i_0] [(short)0] [i_15] [i_14] [i_15]))))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_20 [i_14] [i_17]))))))))))));
                                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2333234439U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)7])))))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_17] [i_14] [i_17]))) : ((+(((arr_13 [i_15 - 1] [2LL] [(short)0] [i_15] [i_15] [i_15 - 1]) << (((((/* implicit */int) arr_40 [i_0] [i_14] [i_15] [i_14] [i_16])) - (67))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
        var_33 = ((/* implicit */signed char) max((var_33), (((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_62 [i_18] [i_18] [i_18] [(unsigned short)2] [(_Bool)1])), (var_2))))) | (((((/* implicit */_Bool) 4294967295U)) ? (4130804559U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [6LL] [i_18]))))))))));
        arr_68 [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((long long int) var_14))))) ? (max(((-(((/* implicit */int) arr_46 [0])))), (((/* implicit */int) (short)-6180)))) : (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) arr_0 [i_18])) : (((/* implicit */int) arr_40 [i_18] [i_18] [i_18] [(_Bool)1] [i_18]))))));
    }
    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_50 [i_19] [(short)4]))))))) << (((max((arr_39 [i_19] [i_19] [i_19] [(_Bool)1]), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (arr_37 [i_19] [(signed char)8] [i_19] [i_19] [(signed char)8] [i_19])))))) - (732328252))))))));
        arr_71 [i_19] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_19] [i_19] [i_19])) ? (arr_2 [i_19] [i_19] [i_19]) : (arr_2 [4LL] [i_19] [i_19])))));
    }
    var_35 |= ((/* implicit */unsigned short) max((((var_10) / (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
    /* LoopSeq 2 */
    for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        var_36 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_20])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) <= (var_5)))) : (((/* implicit */int) min((arr_72 [(_Bool)1]), (((/* implicit */unsigned short) (short)15)))))))) ? (((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_73 [i_20]))) + (265497893609995216LL)))) : (max((min((((/* implicit */long long int) var_11)), (var_1))), (((/* implicit */long long int) ((((/* implicit */int) arr_72 [i_20])) < (((/* implicit */int) arr_72 [i_20])))))))));
        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((((((/* implicit */int) arr_73 [3LL])) >= (((/* implicit */int) arr_73 [i_20])))) ? (((/* implicit */int) arr_72 [i_20])) : (((/* implicit */int) (signed char)91)))) < (((/* implicit */int) arr_73 [i_20])))))));
    }
    /* vectorizable */
    for (signed char i_21 = 0; i_21 < 21; i_21 += 3) 
    {
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((long long int) arr_75 [i_21])))));
        arr_76 [i_21] = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) arr_74 [i_21]))));
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 16; i_22 += 1) 
    {
        for (unsigned long long int i_23 = 3; i_23 < 13; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                {
                    arr_87 [9] [i_23] [i_24] = ((/* implicit */signed char) ((_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_22] [i_22])) || (((/* implicit */_Bool) var_9))))), (((long long int) var_1)))));
                    arr_88 [(unsigned char)6] [0ULL] [i_22] [(_Bool)1] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)255)) != (((/* implicit */int) ((((/* implicit */int) arr_81 [(_Bool)0])) == (((/* implicit */int) arr_75 [i_23])))))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
                    arr_89 [i_23] [i_23 - 2] [i_24] [(short)10] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_85 [i_23 + 3] [i_23 - 2] [i_23 - 2])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_81 [10])) || (((/* implicit */_Bool) 511U)))))))) << (((/* implicit */int) ((_Bool) 1642805217327485837LL)))));
                }
            } 
        } 
    } 
}
