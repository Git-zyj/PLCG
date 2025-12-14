/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176358
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
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 ^= max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)98))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) : (arr_1 [i_2 - 4]))), (((/* implicit */unsigned int) arr_2 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) (-((((_Bool)1) ? (arr_8 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) (~(7227614499150026859LL))))))));
                                arr_13 [i_1] [4U] [4U] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) -926156652)) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_1])) : (arr_10 [i_0] [i_1] [i_1] [i_3] [i_4]))) : (max((((/* implicit */int) (short)(-32767 - 1))), (arr_4 [i_1])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (((/* implicit */int) (short)2611))))) ? ((~(var_13))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1] [(unsigned short)13] [i_4])))))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(arr_11 [3U] [13ULL]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_3] [i_2] [2U] [i_4])) : (arr_11 [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_10 [i_0] [i_3] [i_2] [i_3] [i_4]))))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_2 - 3] [i_0])))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_0 [i_1] [i_2 - 2]), (((/* implicit */unsigned int) arr_5 [i_1] [i_0]))))) * (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2 - 2] [i_1])) ? (((/* implicit */unsigned long long int) -1992162873)) : (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 1])))));
                    var_21 += ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_0] [i_1] [i_2]))) ? (((unsigned int) arr_9 [i_0] [i_1] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_2] [i_1] [i_1] [i_0] [i_0]))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min(((+((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) max((arr_4 [(_Bool)1]), (-1795491543)))) ? (arr_4 [(short)14]) : (1170670411))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 15; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned char) arr_18 [i_0] [2LL]);
                                var_24 = min((((/* implicit */unsigned char) arr_3 [i_6] [(short)15])), (max((((unsigned char) arr_20 [i_5 - 2] [i_7] [i_5])), (((/* implicit */unsigned char) ((arr_8 [1ULL] [i_8 - 1] [i_6] [i_7]) == (17592186044415ULL)))))));
                                var_25 = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [(_Bool)1] [i_7] [i_8]);
                                arr_25 [i_0] [i_0] [i_6] [i_0] [i_7] [i_7] [(unsigned short)8] &= ((/* implicit */unsigned char) max((((/* implicit */int) arr_9 [i_5 + 1] [i_5 - 3] [i_8 - 1])), (((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (unsigned short)15872))))));
                                var_26 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [i_8 + 1] [i_8] [i_6] [i_8] [i_0])))) && (((/* implicit */_Bool) arr_6 [i_8])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_31 [i_5] [13LL] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) -1881144088)), (arr_12 [i_0] [i_5] [i_6] [i_5] [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_0] [i_5 - 2] [i_5 - 2] [15] [i_10])) * (((/* implicit */int) var_0)))))))) ? ((~(((/* implicit */int) (unsigned char)177)))) : (((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) arr_5 [i_9] [i_9 - 1])) : (min((((/* implicit */int) var_11)), (arr_10 [i_0] [i_5] [i_6] [i_9] [i_10])))))));
                                var_27 += ((/* implicit */unsigned char) var_3);
                                var_28 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_4 [i_6]), (((/* implicit */int) arr_18 [i_0] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : ((~(arr_23 [i_10] [i_9] [i_6] [i_0] [i_0]))))), (((/* implicit */long long int) var_0))));
                                var_29 ^= ((/* implicit */unsigned short) max((((long long int) (+(1351416025)))), (((/* implicit */long long int) ((signed char) 1795491530)))));
                            }
                        } 
                    } 
                    var_30 *= ((/* implicit */long long int) ((((_Bool) 5255059177351002345ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_5] [i_5] [i_5] [i_5 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_6]))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [(unsigned short)3])) : (arr_8 [i_6] [i_5 - 1] [i_6] [i_0]))) : (((/* implicit */unsigned long long int) arr_30 [i_0]))))));
                    var_31 += ((/* implicit */unsigned char) arr_24 [i_6] [i_5] [i_5] [i_0] [i_0]);
                    var_32 = ((/* implicit */unsigned long long int) arr_4 [i_5]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_11] [12] [i_12 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_32 [i_13 - 1])) : (((/* implicit */int) arr_39 [i_13 - 1] [i_13 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_34 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_42 [i_11] [i_11] [i_11])) == (((/* implicit */int) var_7)))))));
                                var_35 -= ((/* implicit */unsigned char) -1881144079);
                                var_36 = ((/* implicit */unsigned int) arr_40 [(short)17] [i_12 + 1] [i_12 + 1] [i_14]);
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */int) var_7))))) ? ((((_Bool)1) ? (33554424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15923))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [0LL] [i_13] [i_14] [i_15]))))))))));
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_11]))))) || (((/* implicit */_Bool) arr_44 [(signed char)8] [(signed char)8] [(signed char)8] [i_12 + 1] [i_13 - 1] [i_11] [i_13 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 1; i_16 < 14; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            {
                                arr_51 [i_11] [i_11] [(unsigned char)17] [i_16] [i_17] = ((/* implicit */unsigned int) (~(1795491542)));
                                var_39 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_38 [i_13 - 1] [i_16 + 3] [i_16] [i_17])) : (((/* implicit */int) arr_32 [i_12 + 1])));
                                var_40 *= ((/* implicit */unsigned long long int) ((long long int) arr_39 [i_12 - 1] [i_13 - 1]));
                                var_41 = ((/* implicit */unsigned char) ((-1666469065249220406LL) > (((/* implicit */long long int) -1773686510))));
                                var_42 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_11] [i_12 - 1] [i_17] [i_16] [i_16 + 3])) && (var_9)))) > (((((/* implicit */_Bool) arr_50 [i_17] [i_16 + 4] [i_12 - 1] [i_11])) ? ((-2147483647 - 1)) : (arr_46 [i_11] [i_16 + 3] [i_17])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_52 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_11] [i_11])) ? (arr_40 [i_11] [i_11] [i_11] [i_11]) : (arr_40 [i_11] [i_11] [i_11] [i_11])));
        var_43 = ((/* implicit */_Bool) max((var_43), (((arr_43 [i_11] [i_11] [i_11] [2] [(short)6]) <= (((/* implicit */unsigned long long int) arr_46 [i_11] [i_11] [i_11]))))));
        /* LoopSeq 4 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 1; i_19 < 17; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned char) ((arr_55 [i_19 + 1] [i_19 - 1] [i_19 + 1]) ? (((/* implicit */int) arr_45 [i_11] [i_18] [i_19 + 1] [i_19] [i_20])) : (((/* implicit */int) arr_45 [i_19 - 1] [i_19] [i_19 + 1] [i_19 - 1] [i_19 - 1]))));
                        var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_55 [i_11] [i_11] [i_11]))));
                        var_46 = ((/* implicit */unsigned int) ((signed char) -1795491543));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        {
                            var_47 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_61 [i_11] [i_21] [(signed char)8] [i_23])) : ((~(var_12))));
                            var_48 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_11)) ? (-507578996) : (((/* implicit */int) var_1))))));
                            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_22] [i_23])) ? (((/* implicit */int) arr_39 [i_18] [i_21])) : (((/* implicit */int) arr_39 [i_21] [i_21]))));
                        }
                    } 
                } 
            } 
            arr_69 [i_11] [i_18] [i_11] = ((((/* implicit */_Bool) arr_46 [i_18] [i_11] [i_11])) ? (arr_46 [i_11] [i_18] [i_18]) : (((/* implicit */int) (short)17960)));
        }
        for (short i_24 = 0; i_24 < 18; i_24 += 1) 
        {
            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_24] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [9]))) : (0U))))));
            var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_59 [i_11] [i_11] [i_24] [i_24] [i_24] [i_24])) / (-8896043789967491478LL)))) ? (((/* implicit */int) arr_70 [i_11] [i_24])) : ((~(arr_46 [i_24] [i_24] [i_24])))));
            /* LoopNest 2 */
            for (short i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                for (unsigned char i_26 = 1; i_26 < 14; i_26 += 1) 
                {
                    {
                        arr_79 [i_26] = ((/* implicit */short) ((arr_43 [i_26 + 4] [i_26] [i_26 + 1] [i_26] [i_26]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195)))));
                        arr_80 [i_11] [i_26] [i_25] [i_25] [i_26 + 4] [i_26] = ((/* implicit */unsigned short) (+(arr_64 [i_26] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26])));
                        var_52 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_11]))))) && (((/* implicit */_Bool) var_13)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_27 = 3; i_27 < 16; i_27 += 3) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        arr_86 [i_28] [i_28] [i_24] [i_28] [i_27 + 1] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_11] [i_24] [i_28])) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) arr_48 [i_11] [i_24] [i_27 + 1] [i_24] [i_24] [i_24]))));
                        var_53 = ((/* implicit */long long int) var_8);
                    }
                } 
            } 
            var_54 = ((/* implicit */long long int) (~(2344378937241714916ULL)));
        }
        for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
            {
                for (long long int i_31 = 0; i_31 < 18; i_31 += 1) 
                {
                    {
                        arr_96 [i_31] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_87 [i_11])) && (arr_42 [i_11] [i_11] [i_30 - 1]))) ? ((+(((/* implicit */int) (short)32765)))) : (((/* implicit */int) arr_66 [11ULL] [11ULL] [i_30 - 1] [i_30 - 1] [i_30] [i_30 - 1] [11ULL]))));
                        /* LoopSeq 2 */
                        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                        {
                            var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_64 [i_30] [i_30] [i_30] [i_30] [(unsigned char)0])) ? (16102365136467836699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_11] [i_30 - 1] [i_32]))))))))));
                            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-28070)) : (var_12)))) && (((/* implicit */_Bool) (short)1920))));
                            var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-2147483647) + (2147483647))) << (((/* implicit */int) arr_38 [i_11] [i_29] [1LL] [i_31]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_1)))) : (((/* implicit */int) var_1))));
                        }
                        for (short i_33 = 3; i_33 < 17; i_33 += 1) 
                        {
                            var_58 = ((/* implicit */long long int) ((((((/* implicit */int) arr_92 [i_11] [i_29] [i_30] [i_31])) | (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_92 [i_29] [i_30 - 1] [i_33 - 1] [i_29]))));
                            var_59 *= ((/* implicit */short) arr_73 [i_29] [i_30] [i_31] [(signed char)12]);
                            var_60 ^= ((/* implicit */int) (signed char)115);
                            var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_11] [i_29] [2] [i_33])) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)112)))))));
                        }
                        var_62 -= ((/* implicit */unsigned short) ((unsigned long long int) arr_73 [i_31] [i_30 - 1] [i_30 - 1] [i_30 - 1]));
                        arr_102 [i_31] [i_31] [i_30] [i_31] [i_11] [i_31] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 2097151LL)) ? (((/* implicit */int) var_1)) : (var_12))));
                        arr_103 [i_29] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((1385893845923158175LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            var_63 = ((/* implicit */unsigned short) min((var_63), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_6)) < (((2071305886439901836LL) << (((2969507734U) - (2969507733U))))))))));
            var_64 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [14U])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_53 [i_11] [i_11] [(signed char)5])));
        }
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            var_65 = ((var_3) ^ (((var_7) ? (((/* implicit */unsigned int) -1795491532)) : (arr_99 [i_11] [i_11] [i_34] [i_34] [i_34]))));
            /* LoopNest 3 */
            for (signed char i_35 = 3; i_35 < 17; i_35 += 1) 
            {
                for (unsigned long long int i_36 = 0; i_36 < 18; i_36 += 4) 
                {
                    for (unsigned long long int i_37 = 0; i_37 < 18; i_37 += 3) 
                    {
                        {
                            var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10547))) == (arr_72 [i_36])))) - (((/* implicit */int) arr_112 [i_11] [i_11] [i_36] [i_11] [(unsigned char)4] [i_11] [i_11])))))));
                            var_67 += ((/* implicit */unsigned int) ((arr_49 [i_11] [i_34] [i_37]) / (((((/* implicit */_Bool) 1325459572U)) ? (((/* implicit */int) arr_114 [i_37] [i_37])) : (((/* implicit */int) arr_90 [(signed char)0] [i_34] [i_35 - 1] [i_36]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                for (unsigned int i_39 = 0; i_39 < 18; i_39 += 1) 
                {
                    {
                        arr_120 [i_39] [i_39] [i_38] [i_34] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6694233514173499120LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)120)) == (-1488536518))))) : (2071305886439901836LL)));
                        arr_121 [i_39] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_114 [6] [6])) ? (((/* implicit */int) arr_114 [i_34] [i_39])) : (((/* implicit */int) arr_111 [i_11] [i_34] [i_38] [(_Bool)1] [i_39]))));
                        var_68 = ((/* implicit */short) arr_104 [i_34] [i_38]);
                        var_69 = ((/* implicit */long long int) var_3);
                        var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)-32765)))))));
                    }
                } 
            } 
        }
    }
    var_71 = ((/* implicit */_Bool) ((short) ((unsigned long long int) var_12)));
    var_72 += ((/* implicit */unsigned long long int) var_9);
}
