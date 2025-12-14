/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181007
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
    var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (signed char)21))))) ? (((((/* implicit */int) var_3)) << (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)87)))))), (((/* implicit */int) max(((unsigned char)50), ((unsigned char)108))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) min((arr_13 [i_0] [i_3 - 1] [i_2] [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned char) var_8))))) : (((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)-119))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)-34)))))))));
                                var_15 = ((/* implicit */signed char) (+((-((-(((/* implicit */int) (unsigned char)182))))))));
                            }
                        } 
                    } 
                    var_16 |= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)11)) + (((/* implicit */int) var_3)))))), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_13 [(signed char)10] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) var_9))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) ((unsigned char) (signed char)-1))) : (((/* implicit */int) var_10)))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)123)), (arr_7 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)19)) && ((_Bool)1)))) : (((var_1) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) var_12))))))));
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)97)) + (((/* implicit */int) (unsigned char)112))))) ? (((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_1] [i_6])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) == (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) arr_21 [i_7 + 1]))));
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_19 |= ((/* implicit */unsigned char) arr_25 [i_7 + 1] [i_7 + 1]);
            arr_27 [i_7] [i_8] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)169))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (((/* implicit */int) ((unsigned char) var_11))) : ((~(((/* implicit */int) (_Bool)1)))))))));
            arr_28 [i_7] [(signed char)9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)86)) << (((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_32 [i_9] [i_9] = ((_Bool) arr_29 [i_9] [i_9]);
            arr_33 [i_7] [(signed char)15] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (unsigned char)255))));
        }
        for (signed char i_10 = 2; i_10 < 17; i_10 += 2) /* same iter space */
        {
            arr_36 [i_7 + 1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)169)) ? (((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) (unsigned char)86))));
            arr_37 [(signed char)3] = ((/* implicit */signed char) arr_26 [i_7]);
            arr_38 [i_7 + 1] [i_7 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [i_10] [i_7 + 1])) : (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)14))));
            arr_39 [i_10] = ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) arr_23 [i_10 + 1])) : (((/* implicit */int) (unsigned char)169)))) | (((/* implicit */int) arr_23 [i_7]))));
            arr_40 [i_10] = ((/* implicit */signed char) var_10);
        }
        for (signed char i_11 = 2; i_11 < 17; i_11 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)209)))))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_51 [(signed char)16] [i_7] [i_11] [i_11 - 1] [i_13] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_7 + 1]))));
                        arr_52 [i_7] [i_13] [i_13] [i_11] [i_13] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            arr_56 [i_7] [i_7] [i_7] [i_13] [(_Bool)1] [i_13] [i_11 - 2] = ((/* implicit */signed char) ((_Bool) arr_26 [i_7 + 1]));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_7] [i_13] [i_11 - 1]))))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
                            arr_57 [i_13] [i_14] = var_5;
                        }
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            var_23 = ((unsigned char) ((((/* implicit */_Bool) arr_29 [(signed char)6] [i_13])) ? (((/* implicit */int) arr_48 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5])) : (((/* implicit */int) arr_54 [i_13] [(signed char)0] [i_12] [i_13]))));
                            var_24 -= ((/* implicit */unsigned char) arr_29 [(_Bool)1] [i_11]);
                        }
                        for (unsigned char i_16 = 2; i_16 < 17; i_16 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((signed char) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)240)))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_45 [i_16] [i_13] [i_12])))) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) > (((/* implicit */int) var_10))))))))));
                            arr_62 [i_16 - 2] [i_11] [i_16] [i_13] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) arr_34 [i_7 + 1] [i_16 - 2])) : (((/* implicit */int) arr_25 [i_16] [i_11 - 1]))));
                        }
                        for (unsigned char i_17 = 2; i_17 < 17; i_17 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_7 + 1] [i_13])))))));
                            var_28 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_43 [i_13] [(signed char)1])))) ? (((/* implicit */int) arr_46 [i_11 - 2] [i_12] [i_13])) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_7])) > (((/* implicit */int) var_10)))))));
                            var_29 = ((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) (signed char)112)))) : (((/* implicit */int) (unsigned char)0))));
                            arr_65 [i_7 + 1] [i_7 + 1] [i_12] [(signed char)6] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) ((signed char) var_8))))))));
                            arr_69 [i_13] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_7] [i_11 - 2] [i_13] [(unsigned char)1] [i_11 - 2])) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)169))));
                            var_32 *= ((/* implicit */_Bool) (((-(((/* implicit */int) var_11)))) | (((/* implicit */int) arr_21 [i_7 + 1]))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (signed char)22)))))));
                            var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)14))));
                            arr_74 [i_13] [i_11 - 1] [i_12] [(unsigned char)7] [(unsigned char)1] = ((((arr_41 [i_11] [i_19]) && (((/* implicit */_Bool) arr_34 [i_7] [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_31 [i_11]))))));
                            var_35 += ((/* implicit */unsigned char) ((((_Bool) (_Bool)1)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_11] [i_11])) >> (((/* implicit */int) var_1)))))));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) + (((/* implicit */int) arr_68 [i_11] [i_13]))))) ? (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_26 [i_7]))))) : ((-(((/* implicit */int) var_10)))))))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_37 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)217))));
                            arr_78 [i_11] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_12] [i_11 + 1] [i_12]))));
                            arr_79 [i_20] [i_11] [(unsigned char)2] [i_20] [i_11] [i_20] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) * (((/* implicit */int) arr_76 [i_12] [i_11]))))) ? (((/* implicit */int) arr_58 [i_13] [i_11 - 1] [i_11] [i_7 + 1])) : (((/* implicit */int) arr_48 [i_20] [i_11] [i_7 + 1] [i_7 + 1]))));
                        }
                        for (unsigned char i_21 = 1; i_21 < 17; i_21 += 4) 
                        {
                            arr_82 [i_13] [i_11] [i_12] [i_11] [i_13] [i_11] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_61 [i_13] [i_7 + 1] [i_12] [i_7 + 1] [i_13] [i_11 - 2]))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_43 [i_13] [i_12]))))))))));
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)86)))))))));
            arr_83 [i_7 + 1] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_11 - 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_47 [i_11 + 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_47 [i_11 - 2] [i_7 + 1] [i_7 + 1]))));
        }
        /* LoopSeq 3 */
        for (signed char i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            var_40 = ((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_25 [i_7 + 1] [(_Bool)1]))));
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)173))))) - ((+(((/* implicit */int) var_13)))))))));
        }
        for (unsigned char i_23 = 2; i_23 < 17; i_23 += 1) 
        {
            arr_89 [i_23] [(signed char)3] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_87 [i_7] [i_7 + 1] [i_23])) < (((/* implicit */int) var_9)))));
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_94 [i_7 + 1] [i_23] [i_24] [i_23] |= ((/* implicit */signed char) var_3);
                        var_42 *= ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) (unsigned char)8))))));
                        arr_95 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_25] = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
        }
        for (unsigned char i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_27 = 1; i_27 < 17; i_27 += 4) 
            {
                var_43 = ((/* implicit */_Bool) var_5);
                /* LoopSeq 3 */
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) /* same iter space */
                {
                    arr_103 [i_27] [i_26] [i_27] [(unsigned char)5] [i_27] = ((/* implicit */unsigned char) ((signed char) var_0));
                    arr_104 [(unsigned char)16] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-99))));
                    arr_105 [i_27] [i_27 - 1] [i_26] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)106))));
                }
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) /* same iter space */
                {
                    arr_108 [i_27] [i_26] [i_27] [(signed char)1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_21 [i_7])))) + (((/* implicit */int) arr_92 [i_7] [i_26] [i_27 - 1] [i_27 + 1] [i_26] [i_29 + 1]))));
                    arr_109 [i_27] [(signed char)5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (unsigned char)122)))));
                }
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) /* same iter space */
                {
                    var_44 &= ((/* implicit */signed char) arr_77 [i_7] [i_27] [i_26] [i_7]);
                    var_45 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_77 [i_7] [i_26] [i_27 - 1] [(signed char)4])))) == ((-(((/* implicit */int) var_10))))));
                }
            }
            arr_114 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_26] [i_26])) ? (((/* implicit */int) arr_101 [(signed char)5] [(unsigned char)8] [(_Bool)1] [(signed char)9])) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)))))));
            var_46 = (((-(((/* implicit */int) (signed char)115)))) < (((/* implicit */int) (!((_Bool)1)))));
            arr_115 [i_7] [i_7] = arr_66 [i_26] [i_26] [i_7] [i_26] [i_26];
            /* LoopNest 3 */
            for (unsigned char i_31 = 0; i_31 < 18; i_31 += 3) 
            {
                for (signed char i_32 = 1; i_32 < 17; i_32 += 2) 
                {
                    for (signed char i_33 = 0; i_33 < 18; i_33 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (-(((/* implicit */int) (!(var_4)))))))));
                            var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)201))));
                            arr_124 [i_7] [(unsigned char)10] [i_32] [i_32 - 1] [i_32 - 1] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
            } 
        }
    }
}
