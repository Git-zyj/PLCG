/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10237
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)4119)) << (((((((/* implicit */int) min((var_13), (((/* implicit */short) arr_2 [i_0]))))) + (17912))) - (18)))));
        var_21 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0])))) == (((/* implicit */int) min((((/* implicit */short) var_2)), (arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) var_8);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-22022))))), (var_3)));
                                arr_17 [i_4] [i_3] [(unsigned char)9] [i_1] [i_4] = ((/* implicit */short) min((((((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_5 [i_1] [i_1]))))) >> (((min((arr_3 [i_0]), (((/* implicit */long long int) var_7)))) + (3825634214477767576LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) var_10))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_7 [i_0] [i_1] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_6] [i_7] [i_7] [i_6] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_20 [i_5] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned short) arr_21 [i_5]))))))));
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_25 [i_8] [i_7] [i_6] [i_5])))), (((/* implicit */int) ((unsigned char) arr_26 [i_5] [i_6] [i_7])))))) ? (((/* implicit */int) max((((/* implicit */short) arr_30 [i_5] [i_6] [i_5] [i_8] [i_8] [i_7])), (arr_25 [i_8] [i_7] [(short)10] [i_5])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_30 [(unsigned char)10] [i_7] [i_7] [i_6] [i_5] [i_5]))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_33 [i_5] [i_6] [i_7] [i_6])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                            var_24 *= ((/* implicit */short) (unsigned char)204);
                        }
                        arr_38 [i_5] [(unsigned char)11] [i_6] [i_9] = ((/* implicit */long long int) ((short) arr_37 [i_7]));
                    }
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_6] [i_6] [i_6] = (((~(arr_21 [i_5]))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_5] [i_6] [i_7] [i_11])) ? (((/* implicit */int) arr_40 [i_5] [i_6] [i_7] [i_6] [i_11])) : (((/* implicit */int) (short)19871))))));
                        arr_42 [i_6] [i_6] [i_7] [i_11] [i_11] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_19 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_5] [i_6] [i_5] [i_6] [i_11])))))) ? (((((/* implicit */_Bool) var_14)) ? (arr_19 [i_5]) : (arr_19 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_5]))))));
                        /* LoopSeq 3 */
                        for (short i_12 = 3; i_12 < 10; i_12 += 4) 
                        {
                            arr_47 [i_6] [i_6] [i_7] [i_11] [i_6] = ((/* implicit */short) 9007199254740992LL);
                            arr_48 [i_6] [i_11] [i_7] [i_7] [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned char) ((signed char) var_5))), (var_2)))), (((((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) arr_45 [i_6] [i_12 + 1] [i_12] [i_11] [i_7] [(short)6] [i_6])))))) | (var_3)))));
                            var_25 = ((/* implicit */short) max((max((((/* implicit */unsigned char) var_1)), (arr_23 [i_6] [i_7] [i_12]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && ((_Bool)1))))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) var_17);
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_6])))) <= (max((arr_35 [i_5] [i_6] [4LL] [i_11]), (9223372036854775802LL)))))) / (max((((((/* implicit */_Bool) arr_50 [i_5] [i_6])) ? (((/* implicit */int) arr_46 [i_6] [i_6] [i_7] [i_11])) : (((/* implicit */int) var_16)))), (((/* implicit */int) arr_27 [i_5] [i_6] [i_13 + 1]))))));
                            var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)16376)) ^ (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_40 [i_11] [i_5] [i_5] [i_5] [(_Bool)1])) : (((/* implicit */int) arr_40 [i_5] [i_5] [i_11] [i_5] [(short)8]))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_18)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (short)10655)) >= (((/* implicit */int) arr_30 [i_5] [i_5] [i_7] [i_11] [(short)5] [i_6])))))))))))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 12; i_14 += 2) /* same iter space */
                        {
                            var_30 &= ((/* implicit */short) min(((!(((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) arr_43 [i_6] [i_6] [i_11] [i_11] [i_14 - 1])) || (((/* implicit */_Bool) (unsigned char)63))))));
                            arr_53 [i_14] [i_5] [i_6] [i_6] [i_5] = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (short)-19862))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4024711400550927437LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_49 [i_5] [i_11] [i_7] [i_6] [i_6] [i_5] [i_5])))))) << ((((~(((/* implicit */int) arr_45 [i_11] [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_6])))) + (42)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (short)-19862))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4024711400550927437LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_49 [i_5] [i_11] [i_7] [i_6] [i_6] [i_5] [i_5])))))) << ((((((~(((/* implicit */int) arr_45 [i_11] [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_6])))) + (42))) - (35))))));
                            arr_54 [i_5] [i_5] [i_5] [i_5] [i_6] = (short)16391;
                        }
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min((((/* implicit */int) (unsigned char)217)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_33 [i_11] [i_6] [i_6] [i_5])) : (((/* implicit */int) arr_33 [i_5] [i_6] [i_6] [i_6])))))))));
                        arr_55 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_5])) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_27 [i_5] [i_6] [i_11])) + (2147483647))) << (((((/* implicit */int) ((unsigned char) arr_20 [i_5] [i_6]))) - (7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_44 [i_5] [i_6])) : (((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (var_13))))) : (min((((/* implicit */long long int) (unsigned char)133)), (274877906943LL)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            {
                                arr_63 [i_6] = var_10;
                                arr_64 [i_5] [i_5] [(short)10] [i_15] [i_16] &= ((/* implicit */unsigned char) var_11);
                                arr_65 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (9223372036854775807LL)));
                                var_32 = ((/* implicit */short) ((((/* implicit */int) var_1)) == (((/* implicit */int) max((arr_46 [i_6] [i_15] [i_7] [i_6]), (((/* implicit */unsigned short) var_10)))))));
                                arr_66 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_51 [i_5] [i_6] [i_7] [i_15] [i_16])) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_33 = ((((((((((arr_21 [i_7]) + (9223372036854775807LL))) << (((/* implicit */int) (signed char)7)))) + (min((((/* implicit */long long int) (unsigned char)206)), (var_4))))) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)48)) - (48))));
                    /* LoopSeq 4 */
                    for (short i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        var_34 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-27192)) ? (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) / (((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) arr_44 [i_5] [i_17])) : (((/* implicit */int) (short)8188)))))) : (((((/* implicit */int) ((_Bool) var_9))) * (((((/* implicit */_Bool) (unsigned short)46192)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18))))))));
                        arr_70 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_2)), (134217727LL))), (((long long int) arr_28 [i_6] [i_7]))))) ? (((((/* implicit */_Bool) 3622245907346670147LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_61 [i_17] [i_7] [i_6] [i_6] [i_5] [(short)3] [(short)3])))) : (((/* implicit */int) arr_62 [i_5] [i_5] [i_7] [i_17] [i_5]))));
                    }
                    for (short i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
                    {
                        arr_73 [i_6] [i_7] [i_6] [i_6] = min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)18435)) & (((/* implicit */int) ((signed char) var_2))))) / (((/* implicit */int) (short)-1)))))));
                    }
                    /* vectorizable */
                    for (short i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
                    {
                        arr_76 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-1))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_71 [(unsigned char)2] [i_6] [i_7] [i_7] [i_19] [i_6])) : ((+(((/* implicit */int) var_5))))));
                    }
                    for (short i_20 = 1; i_20 < 10; i_20 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((min((var_19), (arr_49 [i_20 - 1] [i_20] [(_Bool)1] [i_20 - 1] [i_20 + 2] [i_20 - 1] [i_20]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_16)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_20 - 1] [i_20] [i_20] [i_20] [i_20 - 1] [i_20] [i_20 + 3]))) / (var_3)))));
                        var_38 -= ((/* implicit */short) max((((/* implicit */int) min((var_14), (var_12)))), ((~(((/* implicit */int) arr_44 [i_20 + 1] [i_5]))))));
                    }
                }
            } 
        } 
        arr_80 [i_5] [9LL] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */short) arr_28 [i_5] [i_5])), (max((arr_52 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)3]), (arr_62 [i_5] [i_5] [i_5] [i_5] [i_5])))))), (((((/* implicit */_Bool) arr_62 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) min((arr_79 [i_5] [i_5] [i_5] [i_5]), (var_13)))) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
    }
    for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
    {
        arr_83 [i_21] &= ((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_10))))))));
        arr_84 [(unsigned char)8] = min(((short)-6285), (((/* implicit */short) max((arr_57 [i_21] [i_21] [i_21] [i_21]), (arr_57 [i_21] [i_21] [i_21] [(signed char)3])))));
        arr_85 [i_21] [i_21] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1077)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)26412)))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_8)))))), ((~(((/* implicit */int) (unsigned char)255))))));
    }
    var_39 -= ((/* implicit */_Bool) ((long long int) ((short) max((((/* implicit */short) var_7)), (var_13)))));
    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (~(((/* implicit */int) var_11)))))));
    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)27)) == (((/* implicit */int) var_5)))))))) ? ((~(((((((/* implicit */int) var_17)) + (2147483647))) << (((((/* implicit */int) var_16)) - (27554))))))) : (((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_5))), (((short) (short)512)))))));
}
