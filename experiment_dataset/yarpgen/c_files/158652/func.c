/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158652
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */long long int) var_0)) | (min(((-(9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
        var_11 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (min((((/* implicit */long long int) (unsigned char)130)), (var_8))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0 + 2])) % (((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [0LL] [i_2] [i_2] [i_2] [i_2] [(unsigned char)14])) ? (arr_7 [i_0] [i_2] [i_0]) : (((/* implicit */int) (short)5330))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [0U])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1])))))))));
                                var_13 = ((/* implicit */unsigned short) ((int) (_Bool)1));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) max(((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), (arr_3 [i_0] [i_1 + 1])))))), (((/* implicit */int) min((arr_16 [i_1] [i_1] [i_2] [i_1] [i_1 - 2] [i_0] [i_2]), ((_Bool)1))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0 - 1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 ^= ((/* implicit */long long int) (-(24ULL)));
                            arr_23 [i_0] [i_1 + 4] [i_0] [i_5] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_6 [i_0]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_17 ^= ((/* implicit */signed char) ((((((/* implicit */int) var_1)) + (var_0))) + (((/* implicit */int) (short)-4))));
                            arr_27 [i_0] [i_0] [i_2] [i_2] [i_5] [(signed char)7] = var_8;
                            arr_28 [i_7] [i_0] [i_0 - 1] [(_Bool)1] [15] [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) 3221225472U)) || (((/* implicit */_Bool) -1760751822))));
                            var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [14] [i_1 + 2] [i_0 - 1] [14]))));
                        }
                        arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 606225182U)) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                        arr_30 [13ULL] [13ULL] [i_2] [i_0] = ((/* implicit */int) (!((_Bool)1)));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((arr_4 [i_0 + 2] [i_0 - 1] [i_0]) ^ ((~(255LL)))));
                            arr_37 [i_9] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) -5817685758868084490LL);
                        }
                        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_34 [i_10] [i_8] [i_0 + 1] [i_1 + 2] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (short)-23339))))))));
                            var_20 = (!(((_Bool) arr_25 [i_8] [i_1 - 2] [i_8] [i_8] [i_8])));
                            arr_42 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */long long int) -1246228000)) : (var_8)));
                        }
                        var_21 = ((var_8) < (((/* implicit */long long int) ((/* implicit */int) (signed char)26))));
                    }
                    for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) min((max(((unsigned short)47237), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) (signed char)42))))) + (((/* implicit */int) (unsigned short)65528)))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_3) ? (var_8) : (var_2)))))) <= ((-(1061907282840834172ULL))))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_0] = ((/* implicit */unsigned char) min((4800341323485001908ULL), (((((/* implicit */_Bool) 1481297422)) ? (7872721710225310804ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_13])))))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + (((/* implicit */int) max((var_1), (((/* implicit */short) arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_1 - 2]))))))))));
                            arr_52 [i_13] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(2147483632LL))) : ((-((-(3331884634079295153LL)))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(arr_43 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) arr_45 [i_14] [i_0] [6LL] [i_0] [6LL]))))) ? (2689463087923950610LL) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 2])))));
                            arr_55 [i_0] [i_0] = ((((/* implicit */int) ((signed char) 871270137U))) <= (((/* implicit */int) ((((/* implicit */int) arr_47 [i_2])) < (((/* implicit */int) arr_47 [i_0 + 2]))))));
                            var_26 = ((/* implicit */_Bool) 0ULL);
                        }
                        arr_56 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) arr_11 [9LL]);
                        arr_57 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_27 ^= ((/* implicit */long long int) ((signed char) arr_7 [i_0] [i_1] [i_1 + 2]));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (short)0)) >= (arr_14 [0ULL])))) : (((/* implicit */int) (signed char)-73)))))));
                    }
                }
            } 
        } 
        arr_60 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(-8649598612991457404LL)));
        var_29 = ((/* implicit */signed char) (((~((+(var_5))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((short) var_2)), (((/* implicit */short) max((arr_6 [i_0]), (arr_6 [i_0]))))))))));
    }
    for (short i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    {
                        arr_72 [i_17] [(short)12] [i_17] [i_17] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(var_0))))))));
                        arr_73 [i_16] [i_16] [i_18] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (short)7936)))), ((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_63 [i_17])) : (((/* implicit */int) var_1)))))))));
                        arr_74 [i_16] [i_17] [i_19] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (4294967295U)));
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */unsigned char) min((min((arr_62 [i_16] [i_16]), (((/* implicit */long long int) var_9)))), (((arr_62 [i_16] [i_16]) - (arr_62 [i_16] [5ULL])))));
        var_31 = ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_21 = 0; i_21 < 19; i_21 += 4) 
        {
            for (signed char i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                {
                    var_32 = ((/* implicit */_Bool) ((((2633385955U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */int) (unsigned short)127)) : ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_78 [i_22] [i_21] [i_20]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 0; i_23 < 19; i_23 += 4) 
                    {
                        arr_84 [i_20] = ((/* implicit */unsigned long long int) arr_66 [i_20]);
                        arr_85 [i_21] [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_64 [i_23] [i_20] [i_20]))));
                    }
                    var_33 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    var_34 ^= ((/* implicit */signed char) var_2);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_24 = 2; i_24 < 17; i_24 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_70 [i_24]))))));
            arr_88 [i_20] [i_24] [i_20] = ((/* implicit */unsigned int) ((unsigned long long int) arr_61 [i_24 - 1] [i_24 - 1]));
            var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_78 [i_20] [i_20] [i_20])))))));
        }
        for (unsigned char i_25 = 2; i_25 < 17; i_25 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned char) (-(arr_81 [i_20])));
            arr_92 [i_20] = ((/* implicit */signed char) ((long long int) 1099511626752LL));
        }
        for (unsigned int i_26 = 0; i_26 < 19; i_26 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_26])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24133))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (6380810738277794909LL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_27 = 1; i_27 < 16; i_27 += 1) 
            {
                for (long long int i_28 = 0; i_28 < 19; i_28 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)-17)) >= (((/* implicit */int) arr_71 [i_28]))))));
                        var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)14))));
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_64 [i_20] [i_20] [i_20]))));
        }
    }
    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)112)))), (var_6)))) ? (((/* implicit */int) ((((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20785)))) <= (((((/* implicit */_Bool) -2105446399557934199LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))) : (((/* implicit */int) var_4))));
    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) var_2))));
}
