/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150233
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 + 4] [i_0 + 4] [i_4] [(short)2] [i_0 + 4] [i_1] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) max(((unsigned char)89), ((unsigned char)126)))))));
                                arr_17 [i_0 + 1] [i_2] [i_2] [i_2] [i_3 - 1] [i_4] |= ((/* implicit */short) (-(((/* implicit */int) ((short) (+(((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 3] [i_0 + 3] [(short)4] [i_3] [i_0 + 3]))))))));
                                arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */int) min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))) >= (((/* implicit */int) max((min((var_5), (var_11))), ((short)-30144))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */short) arr_8 [i_0 - 1] [i_1] [i_0 - 1]))))) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_1 - 1])) : ((+(((/* implicit */int) (short)21683)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 + 4]))))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) (unsigned char)128))))));
                arr_19 [(unsigned char)0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_14 [i_0 + 4] [i_0 + 4] [i_1 - 1] [i_0 + 4] [(short)8] [(unsigned char)4] [i_1 + 1])))))));
                /* LoopSeq 4 */
                for (unsigned char i_5 = 4; i_5 < 8; i_5 += 4) 
                {
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5])) : (((/* implicit */int) arr_14 [(short)3] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 2] [(short)0] [i_5 - 4]))))) && (((/* implicit */_Bool) var_13))));
                    var_21 |= ((/* implicit */unsigned char) (((-(((((/* implicit */int) arr_10 [(short)3] [i_1] [i_0 + 3])) * (((/* implicit */int) (short)-30144)))))) * (((/* implicit */int) (((+(((/* implicit */int) var_14)))) > (((/* implicit */int) (unsigned char)208)))))));
                    var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)252))))));
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_25 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_13 [i_0] [i_1 - 2] [i_1] [i_6] [(unsigned char)10])), (var_10)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) ((short) var_2)))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_0] [i_1 - 2] [i_0 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_21 [i_7] [i_1] [i_0 + 3])))) ^ (((/* implicit */int) ((unsigned char) min(((unsigned char)105), ((unsigned char)128)))))));
                                arr_31 [i_0] [i_1 - 2] [i_6] [i_0] [(unsigned char)9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26107)) ? (((/* implicit */int) (short)-3929)) : (((/* implicit */int) (short)-4256))));
                                var_24 = ((short) (short)8192);
                            }
                        } 
                    } 
                    arr_32 [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)9))));
                }
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 3) 
                {
                    arr_36 [i_9] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) var_0);
                    arr_37 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)-18843)) * (((/* implicit */int) arr_0 [i_1 - 2])))), (max((((((/* implicit */_Bool) (short)1205)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-20734)))), (((/* implicit */int) ((short) var_9)))))));
                }
                for (unsigned char i_10 = 4; i_10 < 8; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_21 [i_0 + 4] [i_0 + 1] [i_0 + 1]), (arr_21 [i_0] [i_0] [i_0 + 3])))) == (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) min((var_13), (arr_24 [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_7))))));
                        var_26 = ((/* implicit */unsigned char) var_5);
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 1; i_12 < 10; i_12 += 3) 
                        {
                            arr_45 [i_0 + 1] [(unsigned char)9] [i_0 + 1] [i_10 - 1] [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max(((unsigned char)1), ((unsigned char)126)))) : (((/* implicit */int) ((short) (unsigned char)255)))))) ? (((/* implicit */int) ((short) (unsigned char)18))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) var_7))))) >= (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))))))));
                            var_27 = ((/* implicit */short) ((unsigned char) arr_29 [i_0 + 1] [i_1] [i_10] [i_12 + 1] [(unsigned char)1] [i_12 - 1]));
                            var_28 ^= ((/* implicit */short) ((((/* implicit */int) min(((short)4433), (((/* implicit */short) (unsigned char)224))))) ^ (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (short)10732)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)224)) && (((/* implicit */_Bool) arr_38 [i_12] [i_10] [i_1 + 1] [(short)9])))))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (short)4103))))));
                            var_30 |= max((var_2), (((/* implicit */short) min((arr_14 [i_0] [i_0] [i_10 + 2] [i_10 + 2] [(unsigned char)9] [i_11] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned char)121)))))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((unsigned char) var_14)))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)92)) >= (((/* implicit */int) (short)14611))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)131))))) ? (((/* implicit */int) (short)15811)) : (((/* implicit */int) (unsigned char)237)))))))));
                            var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_7 [i_10 - 3] [i_10] [i_10] [i_10 - 2])) ? (((/* implicit */int) arr_12 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10 + 1])) : (((/* implicit */int) arr_12 [i_10 + 1] [(short)3] [i_10 - 4] [(short)3] [i_10 - 3] [(short)3] [i_10 - 1])))), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)210)), (var_4))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 1; i_14 < 10; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) << (((((((/* implicit */int) (short)-1)) + (32))) - (30)))))))) && (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 4])))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-25986)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) min((max((((/* implicit */short) var_8)), (var_11))), (((/* implicit */short) arr_46 [i_0] [i_1] [i_10 - 2] [i_14] [i_15])))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                        {
                            var_37 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)128)) - (((/* implicit */int) (short)-9863))));
                            var_38 = ((/* implicit */short) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_40 [i_1] [i_1 - 2])) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (short)9983)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)190))))));
                        }
                        for (short i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                        {
                            arr_60 [i_10] [i_10] [i_10] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_15)))))));
                            arr_61 [i_1] [i_1] [(short)6] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) max((var_1), (var_1)))), (((((/* implicit */_Bool) arr_38 [i_0 + 2] [i_10 + 1] [i_14 + 1] [i_17])) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) arr_38 [i_0 + 4] [i_10 + 2] [i_14 - 1] [i_14 - 1]))))));
                        }
                    }
                    for (unsigned char i_18 = 2; i_18 < 10; i_18 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [i_0 + 4])) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_10 - 4] [i_1] [i_1] [i_10 - 3])) ? (((/* implicit */int) arr_48 [i_10] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [i_10])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 1; i_19 < 9; i_19 += 2) 
                        {
                            var_40 = var_13;
                            var_41 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned char)180)))))) ^ ((-((-(((/* implicit */int) var_3))))))));
                            var_42 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_18] [i_18] [i_18 - 1] [i_18 + 1])) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_10] [(short)8])) : (((((/* implicit */_Bool) arr_44 [i_19] [i_0] [i_10] [i_1] [i_0])) ? (((/* implicit */int) arr_23 [i_0 + 1] [i_1] [i_0 + 1] [i_18 + 1])) : (((/* implicit */int) arr_29 [i_19 + 2] [i_18 - 1] [i_0 + 3] [i_1] [i_1] [i_0 + 3])))))) >= (((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_20 = 3; i_20 < 7; i_20 += 2) 
                {
                    for (short i_21 = 4; i_21 < 7; i_21 += 3) 
                    {
                        {
                            arr_71 [i_1] [i_1] [i_20 - 2] [i_20 - 1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [(short)9]);
                            /* LoopSeq 1 */
                            for (short i_22 = 0; i_22 < 11; i_22 += 1) 
                            {
                                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (((((/* implicit */int) var_11)) - (((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-32)))))))))));
                                var_44 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)30717)) ? (((/* implicit */int) (short)-15811)) : (((/* implicit */int) (short)14336)))) ^ (min((((((/* implicit */_Bool) (short)-9984)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_52 [i_0 + 2] [i_0 + 2] [i_20 + 3] [i_21 + 1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)29995)))))))));
                            }
                            arr_74 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((short) (short)-8193))), (((((/* implicit */_Bool) arr_70 [i_0 + 3] [i_20])) ? (((/* implicit */int) ((((/* implicit */int) (short)-4358)) >= (((/* implicit */int) (short)17806))))) : (((/* implicit */int) (short)24966))))));
                            var_45 = (unsigned char)18;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_23 = 2; i_23 < 10; i_23 += 4) 
    {
        for (unsigned char i_24 = 4; i_24 < 9; i_24 += 1) 
        {
            for (short i_25 = 1; i_25 < 11; i_25 += 4) 
            {
                {
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)102))));
                    var_47 = ((/* implicit */short) (unsigned char)128);
                }
            } 
        } 
    } 
    var_48 = var_2;
    /* LoopNest 3 */
    for (short i_26 = 0; i_26 < 19; i_26 += 3) 
    {
        for (unsigned char i_27 = 0; i_27 < 19; i_27 += 3) 
        {
            for (unsigned char i_28 = 0; i_28 < 19; i_28 += 1) 
            {
                {
                    var_49 ^= ((/* implicit */unsigned char) (short)28270);
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 0; i_29 < 19; i_29 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((short) min((((((/* implicit */int) (unsigned char)130)) ^ (((/* implicit */int) (unsigned char)26)))), (((/* implicit */int) ((short) (short)24957))))));
                        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)66))) ? (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) arr_88 [i_26] [i_27] [i_29])) ^ (((/* implicit */int) arr_91 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])))))) : (((/* implicit */int) ((short) arr_88 [i_27] [i_28] [i_29])))));
                        arr_93 [i_26] [i_26] [i_26] [i_28] [i_26] [i_26] = ((/* implicit */short) (unsigned char)226);
                    }
                    arr_94 [i_26] [i_26] [i_26] = ((/* implicit */short) (((-(((/* implicit */int) arr_87 [i_26])))) <= (((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
}
