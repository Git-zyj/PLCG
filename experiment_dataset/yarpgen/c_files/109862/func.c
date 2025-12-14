/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109862
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_1])))))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) | (((/* implicit */int) (short)3293))))) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [(signed char)8]))))) ? (arr_7 [i_0] [i_0]) : (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)43729)), (var_13)))), (((((/* implicit */_Bool) arr_6 [9U] [i_0] [i_0])) ? (arr_6 [(short)6] [i_0] [i_0]) : (((/* implicit */long long int) var_2))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-121)))))));
                            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_1 [i_3 + 1])))) ? (8967710195947193206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48047)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (signed char)-104);
                        var_24 = ((/* implicit */short) max((var_24), (((short) (-(arr_18 [i_5] [i_1] [i_1] [i_0]))))));
                        var_25 = ((/* implicit */unsigned char) var_1);
                        arr_19 [i_0] [(short)0] [(short)0] = ((/* implicit */signed char) arr_9 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) (signed char)63);
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_4))));
                    }
                    for (int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [7ULL] [0] [7ULL] [i_0] [i_0] = ((/* implicit */long long int) ((short) min((var_3), (((/* implicit */unsigned char) ((773272353U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_2] [i_2] [i_1])))))))));
                        arr_25 [(signed char)8] [(short)7] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (914361839U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((914361838U) << (((var_2) - (3590894224U)))))) : (((((/* implicit */_Bool) (short)438)) ? (arr_15 [i_0] [(signed char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6104))))))) - (4143972329ULL)))));
                    }
                    var_28 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)55))));
                }
                for (short i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    arr_28 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59158))))), ((-(((/* implicit */int) arr_4 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_26 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)1]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)3)))));
                    var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_26 [i_8 - 1] [(signed char)3] [6U] [i_1])))));
                    var_30 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_11 [(short)6] [(short)6] [(short)6] [i_0] [i_0])) * (((/* implicit */int) (signed char)-110)))))) ? (((((/* implicit */_Bool) (signed char)-71)) ? (arr_23 [i_0] [i_1] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_8] [i_8 - 1]))))) : (((var_8) ? (arr_23 [i_8 + 2] [i_8 + 2] [i_8 + 2]) : (arr_23 [i_8 + 2] [i_8 + 2] [i_8 + 1])))));
                    arr_29 [i_0] [i_8] [i_0] [i_8] = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((int) (short)-31150)) * ((+(((/* implicit */int) var_11)))))))));
                    var_33 = ((/* implicit */long long int) (signed char)-71);
                    arr_33 [i_0] = ((/* implicit */unsigned int) var_16);
                    var_34 = ((/* implicit */signed char) ((int) var_1));
                }
                for (short i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) ((signed char) (-(-1764135931))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        arr_40 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(signed char)8]))) : (268435455LL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 10572008952274836205ULL)))))) : (min((arr_14 [i_0] [i_10] [i_0]), (((/* implicit */unsigned long long int) ((short) (unsigned short)12925)))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_36 = ((/* implicit */signed char) arr_10 [i_11] [i_11] [(unsigned char)9] [i_0]);
                            var_37 = arr_31 [i_11];
                            arr_44 [i_1] [i_11] [5LL] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_3 [i_12])) - (((/* implicit */int) var_14)))));
                            arr_45 [i_0] [i_0] [i_0] [i_11] [i_11] [i_1] = ((/* implicit */unsigned int) (-(((unsigned long long int) arr_5 [i_11]))));
                            var_38 *= ((/* implicit */unsigned long long int) ((short) (+((+(((/* implicit */int) arr_32 [i_10])))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 7; i_13 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */short) (((+(933263463U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_41 [i_0] [i_1] [i_0] [i_11] [i_13]))))));
                            var_40 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_11]))) - (arr_23 [i_10] [i_1] [i_0])));
                            arr_50 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_49 [i_1] [i_1] [i_1])) != (((/* implicit */int) var_15)))))));
                            var_41 += ((/* implicit */long long int) var_13);
                            arr_51 [i_13 + 3] [10LL] [10] = ((((/* implicit */int) arr_20 [5] [8ULL] [i_11] [i_11] [i_1] [8ULL])) & (((/* implicit */int) (unsigned char)39)));
                        }
                        for (int i_14 = 1; i_14 < 7; i_14 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_23 [i_14 + 3] [i_11] [8ULL])) : (var_0))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_11] [i_0] [6LL])) : (((/* implicit */int) (signed char)16))))))))));
                            var_43 *= (+(((unsigned long long int) arr_52 [i_0] [i_0] [i_10] [i_11] [i_11] [i_0] [i_14 - 1])));
                        }
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 7; i_15 += 2) /* same iter space */
                        {
                            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_55 [i_15] [i_15 + 1] [i_15 + 4])) : (((/* implicit */int) ((signed char) 9479033877762358410ULL))))))));
                            arr_59 [(short)6] [i_15] [9ULL] [i_11] [(short)6] [i_0] [i_0] = ((/* implicit */short) ((_Bool) var_8));
                        }
                        arr_60 [(short)9] [i_10] [i_1] [4ULL] [4ULL] [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */_Bool) arr_49 [i_0] [i_11] [i_10])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_1] [i_1] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_11] [(short)9] [i_10])) - (((/* implicit */int) (unsigned char)14)))))));
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((long long int) -2721030317812340972LL)))));
                            arr_64 [i_16] [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_10)));
                        }
                        /* vectorizable */
                        for (unsigned int i_17 = 2; i_17 < 10; i_17 += 2) 
                        {
                            arr_69 [(short)3] [i_0] = (-(((/* implicit */int) var_15)));
                            var_46 = ((/* implicit */short) arr_41 [i_17] [(unsigned short)10] [i_10] [4] [i_0]);
                            arr_70 [6U] [i_10] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (var_12) : (((/* implicit */int) arr_39 [i_17] [i_10] [i_10] [4U]))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_17 + 1]))) == (var_18)))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_47 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [3U])) ? (((/* implicit */int) (short)10267)) : (((/* implicit */int) arr_5 [i_11]))))) ? (arr_53 [i_11] [i_10] [i_1]) : ((~(var_0))))) >= (((/* implicit */long long int) ((/* implicit */int) max(((short)10240), (((/* implicit */short) (signed char)40))))))));
                            var_48 = ((/* implicit */int) (short)10245);
                        }
                    }
                    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) * (((/* implicit */int) max(((unsigned short)33031), (((/* implicit */unsigned short) (signed char)31))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        var_50 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_14)) * (((/* implicit */int) var_8))))));
                        var_51 = (+(((/* implicit */int) (unsigned short)3840)));
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 2) 
                        {
                            {
                                arr_85 [i_0] [i_1] [i_20] [i_21] [i_22] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_11 [i_22] [i_21] [i_20] [i_0] [i_0])) + (((/* implicit */int) arr_11 [i_22] [i_21] [i_20] [i_1] [i_0])))));
                                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) var_10))));
                            }
                        } 
                    } 
                } 
                var_53 = ((/* implicit */unsigned char) ((max((((arr_41 [i_0] [i_1] [i_0] [i_1] [i_1]) | (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_1])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))));
                arr_86 [i_0] = ((/* implicit */signed char) arr_73 [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_54 = ((/* implicit */int) (signed char)-127);
    var_55 &= ((/* implicit */long long int) (short)0);
}
