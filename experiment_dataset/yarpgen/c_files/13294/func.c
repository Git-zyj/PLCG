/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13294
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned short)1173)), ((+(((/* implicit */int) arr_2 [i_1] [i_1])))))), (min((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) arr_3 [i_0]))))))));
                arr_5 [0ULL] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [(unsigned short)5]), (((/* implicit */short) arr_2 [i_0] [i_1]))))) ? (7685189052030190101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0]))));
                                arr_14 [i_0] [i_1] [i_0] [(unsigned short)3] [i_3] = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1])));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3890822036U)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 7; i_7 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                                arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (+((+(3890822036U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        arr_26 [(unsigned short)3] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
                        var_24 = ((/* implicit */unsigned long long int) var_3);
                        arr_27 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) 2469473896055222879ULL));
                    }
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)23))));
                        arr_31 [i_0] [i_0] [i_5] [i_9] = ((/* implicit */unsigned short) var_9);
                        arr_32 [i_5] [i_9] = ((/* implicit */int) (~(var_14)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        var_26 |= ((/* implicit */_Bool) ((15450498720201230530ULL) >> (((/* implicit */int) (_Bool)0))));
                        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_5] [i_5]))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 7; i_11 += 4) 
                        {
                            arr_39 [i_10] [9ULL] [i_10] [i_11] = ((/* implicit */_Bool) arr_3 [i_10]);
                            var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (unsigned short)47211)))));
                            var_29 = ((/* implicit */int) ((arr_34 [i_11 - 1]) ? (-5857140993803929079LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_11 + 1] [i_11 - 1])))));
                            var_30 = (((_Bool)1) || (((/* implicit */_Bool) arr_28 [i_0] [i_11 - 1] [i_0] [i_10])));
                            arr_40 [i_10] = (~(var_13));
                        }
                    }
                    arr_41 [(unsigned short)2] [i_5] = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 4; i_12 < 8; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */int) arr_34 [i_5]);
                        var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        arr_46 [i_0] [i_1] [i_12 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_0] [i_12 + 1] [i_12 + 1] [4LL] [i_12] [0LL])) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)6] [(unsigned short)6] [i_12 - 2])) : (((arr_23 [i_0] [i_0] [(unsigned short)7] [i_12 - 3]) ^ (((/* implicit */int) arr_29 [i_12 - 2] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_5] [i_13] = ((/* implicit */unsigned short) arr_43 [i_0] [i_5] [i_0] [i_1] [i_0]);
                        var_33 = ((/* implicit */unsigned short) ((unsigned long long int) arr_33 [i_0] [i_0] [i_13] [i_13] [i_13]));
                        var_34 = ((/* implicit */unsigned short) 3890822054U);
                        var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) ((15977270177654328738ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47211))))))));
                        arr_50 [i_13] [i_13] [i_5] [i_13] [i_13] = ((/* implicit */int) var_14);
                    }
                    arr_51 [i_1] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                }
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    arr_54 [i_0] [i_0] [i_0] = arr_35 [i_0] [i_1] [i_1] [i_1] [i_14] [i_0];
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */_Bool) min((517365693633319113LL), (((/* implicit */long long int) (signed char)0))));
                                arr_59 [i_14] &= ((/* implicit */unsigned long long int) ((long long int) var_10));
                                arr_60 [i_0] [4ULL] [i_0] [i_0] [(signed char)7] [i_16] = ((/* implicit */long long int) (~(min((arr_52 [(unsigned short)9] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) ? (var_1) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        for (int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) max(((~(((long long int) arr_63 [i_17] [i_17])))), (((/* implicit */long long int) var_14))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */int) arr_63 [i_17] [i_17])) < (((/* implicit */int) ((signed char) (_Bool)0))))))));
                    var_39 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_66 [i_17] [i_17]))))), (arr_67 [i_17] [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) 1397250817)), (arr_67 [i_18] [i_18]))) > (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_18] [i_17]))))))) : (((3669693206272572905ULL) / (3882835312124562766ULL))));
                }
                for (int i_20 = 0; i_20 < 19; i_20 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_21 = 3; i_21 < 16; i_21 += 4) /* same iter space */
                    {
                        arr_75 [i_17] [i_17] [i_17] [6LL] [i_17] [i_17] = ((/* implicit */unsigned short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32765))) / (15977270177654328750ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_72 [i_17] [i_18] [i_18])))))));
                        arr_76 [i_17] [i_18] [i_17] [i_20] [i_20] = ((/* implicit */signed char) arr_74 [i_17] [i_18] [i_21 - 2] [i_21] [0LL] [i_18]);
                    }
                    /* vectorizable */
                    for (signed char i_22 = 3; i_22 < 16; i_22 += 4) /* same iter space */
                    {
                        var_40 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_63 [i_17] [i_22 - 1]))));
                        arr_79 [i_17] [i_18] [i_18] [i_22 + 3] = ((/* implicit */signed char) arr_65 [i_17] [i_22] [i_20]);
                        arr_80 [i_17] [(unsigned char)7] [i_20] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)40412)) >> (((3882835312124562778ULL) - (3882835312124562764ULL)))));
                    }
                    arr_81 [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) var_19);
                    arr_82 [i_20] [i_20] = ((/* implicit */_Bool) ((unsigned long long int) arr_67 [i_18] [i_18]));
                    arr_83 [i_18] [i_18] [i_17] = ((/* implicit */unsigned short) 2469473896055222868ULL);
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 19; i_23 += 4) /* same iter space */
                {
                    arr_86 [i_23] [11ULL] [i_17] |= ((/* implicit */long long int) (~(arr_73 [i_23] [(unsigned char)3])));
                    /* LoopSeq 3 */
                    for (int i_24 = 1; i_24 < 17; i_24 += 4) 
                    {
                        var_41 ^= var_10;
                        var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_78 [i_17] [i_18] [i_17] [i_24 + 2]))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (3890822058U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) arr_67 [i_17] [i_17])) : (14562629365920272731ULL)));
                    }
                    for (unsigned short i_25 = 0; i_25 < 19; i_25 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_91 [(unsigned short)10] [(unsigned short)17] [i_23] [(unsigned short)17] [(unsigned short)17])) ? (((((/* implicit */_Bool) 14562629365920272731ULL)) ? (7618151717389751225LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_93 [i_17] [i_18] [i_18] [(unsigned short)0] [6ULL] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) 1553740899)) : ((+(15977270177654328736ULL)))));
                    }
                    for (unsigned short i_26 = 0; i_26 < 19; i_26 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */signed char) ((unsigned long long int) arr_71 [i_23] [i_26]));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16298)) - (((/* implicit */int) (unsigned short)55026))));
                    }
                }
                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) var_16))));
                arr_96 [i_18] = ((/* implicit */unsigned short) ((_Bool) ((int) (~(arr_73 [i_17] [i_17])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_27 = 1; i_27 < 8; i_27 += 4) /* same iter space */
    {
        arr_99 [i_27] = ((/* implicit */unsigned char) arr_97 [i_27] [i_27]);
        arr_100 [i_27] [i_27] = ((/* implicit */_Bool) ((((long long int) arr_92 [i_27 + 1] [i_27 + 4] [i_27] [i_27 + 1])) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_92 [i_27 - 1] [i_27 - 1] [i_27 + 1] [i_27 - 1])) & (((/* implicit */int) arr_92 [i_27 - 1] [i_27 + 3] [i_27 + 1] [i_27 + 4])))))));
        var_48 = 3499675987756254486ULL;
        arr_101 [(signed char)10] [(signed char)10] &= ((/* implicit */_Bool) ((signed char) arr_84 [i_27] [(signed char)17] [(signed char)17]));
    }
    for (int i_28 = 1; i_28 < 8; i_28 += 4) /* same iter space */
    {
        var_49 += max((4239410792831896438LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34553))) % (var_14)))));
        var_50 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) 15420647716635031163ULL))));
    }
    var_51 |= ((/* implicit */_Bool) (+(var_10)));
    var_52 = ((/* implicit */unsigned short) var_11);
}
