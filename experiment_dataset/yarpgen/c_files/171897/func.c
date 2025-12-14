/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171897
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
    var_16 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235))))))))));
                            arr_12 [i_1] [i_2] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_3])) ? (((/* implicit */int) max(((unsigned char)180), (((/* implicit */unsigned char) (signed char)-16))))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 12954203572391460927ULL)))))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12954203572391460925ULL)) ? (arr_2 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [10] [i_1] [i_1] [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (unsigned short i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_20 [i_1] [i_5] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6] [2])) || (((/* implicit */_Bool) arr_11 [i_0] [i_6 - 1])))))) <= (min((((/* implicit */unsigned long long int) arr_5 [i_5] [(signed char)4])), (12954203572391460951ULL)))));
                        var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [6])) && (((((/* implicit */_Bool) arr_9 [i_1] [i_6 - 1] [i_5] [i_6 - 1])) || (((/* implicit */_Bool) 5492540501318090666ULL))))));
                    }
                } 
            } 
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) (unsigned short)43053)), (12954203572391460932ULL))));
            arr_22 [i_0] = ((/* implicit */unsigned char) 12954203572391460933ULL);
        }
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (signed char i_9 = 4; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) 12954203572391460955ULL);
                        var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 5492540501318090693ULL))))), (-6012900448589269644LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            arr_33 [i_0] [i_10] = ((/* implicit */unsigned short) (unsigned char)242);
            arr_34 [i_10] [i_0] [i_10] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((9858444890262260186ULL) == (((/* implicit */unsigned long long int) arr_24 [i_0]))))), (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) (unsigned char)117)), (18446744073709551608ULL)))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((10765395058194605772ULL), (((/* implicit */unsigned long long int) (unsigned char)14)))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_11]))) != (max((arr_16 [i_11] [i_11] [i_11] [i_11]), (arr_2 [i_11] [i_11] [i_11])))))))))));
            arr_39 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)14)) && (((/* implicit */_Bool) ((max((5492540501318090664ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) - (((/* implicit */unsigned long long int) arr_7 [i_0] [i_11] [i_11] [i_11] [i_11] [i_0])))))));
            arr_40 [i_11] [i_0] = ((/* implicit */unsigned long long int) (short)-3);
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    {
                        arr_46 [i_11] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                        var_21 = ((/* implicit */unsigned char) ((short) ((unsigned char) arr_3 [i_0] [i_11] [i_11])));
                    }
                } 
            } 
        }
        arr_47 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [(unsigned char)0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_8 [(_Bool)0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 2; i_15 < 11; i_15 += 3) 
        {
            for (unsigned char i_16 = 2; i_16 < 12; i_16 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((unsigned char) arr_44 [i_16 - 2] [i_14] [i_15 + 1] [i_14] [i_16 - 1] [i_15 - 2]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            {
                                var_23 &= ((/* implicit */signed char) (~(189469420U)));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_15 - 2] [i_15 - 1] [i_15 + 2])) & (((/* implicit */int) arr_6 [i_15] [i_15 + 1] [i_15 + 2]))));
                                arr_61 [i_15] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_16 - 1] [i_16 - 2] [i_16 - 2])) && (((/* implicit */_Bool) arr_4 [i_14] [i_16 + 1] [i_17]))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_20 = 1; i_20 < 10; i_20 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) arr_37 [i_16 - 1] [i_16 - 2]);
                            var_26 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((arr_59 [i_14] [i_15 - 1] [i_16] [i_15 - 1]) / (((/* implicit */int) arr_8 [(unsigned char)16] [i_15] [i_15 - 1] [i_20 + 1])))) : (arr_35 [i_16 - 1])));
                            var_27 ^= ((/* implicit */int) (-(-6771387116788806169LL)));
                            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
                            var_29 *= ((/* implicit */int) (!(((/* implicit */_Bool) 6ULL))));
                        }
                        var_30 = ((/* implicit */short) (~(5492540501318090678ULL)));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_15 - 1] [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_16 - 1])) && (((/* implicit */_Bool) arr_64 [i_15 - 1] [i_15 + 1] [i_15 + 2] [i_16 + 1] [i_16 - 1])))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 189469399U)))))));
                        /* LoopSeq 1 */
                        for (int i_22 = 0; i_22 < 13; i_22 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) ((((-134217728) + (2147483647))) << (((((/* implicit */int) arr_11 [i_21] [i_15 - 1])) - (14922)))))) ? (((5492540501318090705ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_15] [i_15] [i_15 + 1] [i_15 - 2] [i_15 + 2] [i_15]))))) : (5492540501318090648ULL)))));
                            var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_15] [i_16 - 1] [i_15] [i_14] [i_21] [i_22])) ? (((/* implicit */unsigned long long int) arr_59 [i_22] [i_15] [i_14] [i_16 - 1])) : (arr_66 [i_22] [i_15] [i_22] [i_16 - 1] [i_21])))) ? (((/* implicit */unsigned long long int) ((229376) / (((/* implicit */int) arr_69 [i_14] [i_15] [i_16 - 2] [i_21] [i_22] [i_22]))))) : ((~(12954203572391460940ULL))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((12954203572391460939ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                    }
                    for (int i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 3) 
                        {
                            var_36 -= ((/* implicit */unsigned char) arr_72 [i_14] [i_14] [i_14] [i_14]);
                            arr_76 [i_14] [i_15 - 2] [i_16 - 2] [i_15] [i_15 - 2] = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)253)) / (((/* implicit */int) (unsigned short)10239))))));
                            arr_77 [i_14] [i_15] [i_16] [i_15 - 1] [i_23] [i_24] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_16 + 1] [i_14] [i_14] [i_23])) && (((/* implicit */_Bool) 5492540501318090695ULL))));
                        }
                        for (signed char i_25 = 1; i_25 < 12; i_25 += 3) 
                        {
                            arr_81 [i_15] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15] = ((/* implicit */signed char) (~((~(18446744073709551592ULL)))));
                            var_37 -= ((/* implicit */int) ((4274374997U) >> (((5492540501318090638ULL) - (5492540501318090610ULL)))));
                        }
                        var_38 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_38 [i_14] [i_16 - 1] [i_14])))) & (((/* implicit */int) arr_38 [i_14] [i_16 + 1] [i_23]))));
                        var_39 = ((/* implicit */short) (~(((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) arr_75 [i_15] [i_14] [i_15] [i_16 - 2] [i_15] [i_16 + 1] [i_15 - 2]))))));
                    }
                    for (unsigned int i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        arr_84 [i_16] [i_26] [i_15] [i_15] = ((/* implicit */short) ((arr_62 [i_15 + 1] [i_16 - 2] [i_15 + 2]) >> (((12954203572391460992ULL) - (12954203572391460936ULL)))));
                        var_40 = ((/* implicit */unsigned int) (-(arr_2 [i_15] [i_16 - 1] [i_15 + 1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 3; i_27 < 12; i_27 += 3) 
                    {
                        for (int i_28 = 4; i_28 < 12; i_28 += 3) 
                        {
                            {
                                arr_90 [i_16] [i_15] [i_15 + 2] = ((/* implicit */short) ((12ULL) * (15ULL)));
                                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (+(12954203572391460960ULL))))));
                                var_42 = ((/* implicit */int) ((var_14) > ((+(((/* implicit */int) (_Bool)1))))));
                                var_43 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_14] [i_14] [i_15]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned long long int) (((~(var_14))) <= (((/* implicit */int) arr_11 [i_14] [i_14]))));
        /* LoopNest 2 */
        for (unsigned int i_29 = 0; i_29 < 13; i_29 += 3) 
        {
            for (signed char i_30 = 1; i_30 < 12; i_30 += 3) 
            {
                {
                    arr_96 [i_29] [i_30] [i_30] = ((/* implicit */short) (unsigned char)221);
                    /* LoopNest 2 */
                    for (unsigned int i_31 = 0; i_31 < 13; i_31 += 3) 
                    {
                        for (short i_32 = 2; i_32 < 12; i_32 += 3) 
                        {
                            {
                                arr_103 [i_14] [i_32 - 2] [i_31] [i_31] [i_30] [i_31] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)239)) == (arr_24 [i_30 + 1])));
                                arr_104 [i_14] [i_29] [i_30] [i_31] [i_31] [i_31] [i_30] = ((/* implicit */int) ((arr_32 [i_30 - 1]) || (((/* implicit */_Bool) arr_48 [i_30 - 1] [i_32 + 1]))));
                                var_45 *= ((/* implicit */signed char) (!(arr_32 [i_30 - 1])));
                                var_46 = arr_80 [i_32 - 2] [i_32 + 1] [i_32 + 1] [i_32] [i_32];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_33 = 0; i_33 < 13; i_33 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_34 = 1; i_34 < 12; i_34 += 3) 
                        {
                            arr_111 [i_30] = ((/* implicit */signed char) ((18446744073709551580ULL) >> (((-1) + (57)))));
                            arr_112 [i_14] [i_30] [i_14] = ((/* implicit */unsigned long long int) arr_28 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33]);
                        }
                        arr_113 [i_29] [i_33] [i_30] = ((/* implicit */unsigned char) ((arr_29 [i_14] [i_33] [i_14] [i_30 - 1]) != (29ULL)));
                    }
                    for (long long int i_35 = 0; i_35 < 13; i_35 += 3) /* same iter space */
                    {
                        arr_117 [i_30] [i_14] [i_30] = ((/* implicit */unsigned short) 12954203572391460931ULL);
                        var_47 = (+(((/* implicit */int) arr_5 [i_35] [i_30])));
                        var_48 = ((/* implicit */int) max((var_48), (((arr_68 [(signed char)8] [i_29] [i_29]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_35 [i_29])) < (12954203572391460920ULL)))) : (((((/* implicit */int) arr_94 [i_29] [i_35])) - (((/* implicit */int) var_5))))))));
                        var_49 = ((/* implicit */signed char) (short)-28524);
                    }
                }
            } 
        } 
        var_50 ^= ((/* implicit */unsigned int) 18446744073709551603ULL);
    }
}
