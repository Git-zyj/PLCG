/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158942
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
    var_16 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((-1810749762) & (((/* implicit */int) (short)-16449)))) <= (((/* implicit */int) ((2755583043010130258ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))))))))));
            arr_5 [i_0] [(unsigned char)8] [i_0] = ((/* implicit */int) var_8);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) (~(9729192226763128203ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-16470))))) : (var_3))))))));
                        arr_13 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) var_5);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            arr_16 [i_2] [i_2] |= ((/* implicit */signed char) ((max((2625500135461122010ULL), (((/* implicit */unsigned long long int) (-(arr_3 [i_4] [4LL])))))) == (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_0)))), ((+(((/* implicit */int) (unsigned char)118)))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22862))) : (15821243938248429596ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)0))))))))));
                            arr_17 [i_0] [14LL] [i_2] [i_3] [14LL] &= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-5021242047075632254LL)))) || (arr_8 [i_0] [i_0] [i_0] [11LL])))));
                            arr_18 [i_3] [i_3] [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */short) (signed char)76);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_20 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 5021242047075632253LL)))))));
                            arr_22 [i_0] [i_2] |= ((var_15) * (((/* implicit */long long int) (-(0U)))));
                        }
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [(short)9] [i_1] [(short)9] [i_3]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))) ? ((((-(arr_12 [i_1]))) >> (((4294967285U) - (4294967273U))))) : (min((((/* implicit */long long int) ((((/* implicit */long long int) var_6)) >= (arr_15 [i_0] [i_2] [i_2] [i_0] [i_3])))), (max((((/* implicit */long long int) 3263311553U)), ((-9223372036854775807LL - 1LL))))))));
                        var_22 = ((/* implicit */unsigned long long int) -7031317678846655378LL);
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-7)), ((unsigned char)12)))))))));
        }
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2625500135461122034ULL)))) ? (((-1264449181776406309LL) / (arr_21 [i_0] [i_6] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_6] [i_6] [18LL])) >> (((/* implicit */int) (unsigned char)0)))) < (((/* implicit */int) max((((/* implicit */short) (unsigned char)240)), (var_9))))))))));
            var_25 -= ((/* implicit */unsigned short) arr_15 [i_0] [i_6] [i_6] [i_6] [i_0]);
            var_26 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]);
        }
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_27 -= ((/* implicit */unsigned char) var_12);
            arr_28 [i_7] [i_0] &= ((/* implicit */long long int) (signed char)118);
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (((-(min((((/* implicit */unsigned long long int) arr_23 [8])), (418526605390312849ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) (unsigned char)12))))) ? (max((((/* implicit */int) (short)31392)), (0))) : (((/* implicit */int) (_Bool)1))))))))));
        }
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(max((((4294967285U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32764))))))))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 1) 
    {
        arr_32 [i_8 + 1] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
        arr_33 [i_8] = ((/* implicit */_Bool) var_6);
        var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) -810139953)) == (0LL)));
    }
    for (signed char i_9 = 2; i_9 < 7; i_9 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_41 [i_10] [i_10] = ((/* implicit */short) (!(arr_8 [i_9] [i_9] [i_9] [i_10])));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_31 &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned char)9)) && (((/* implicit */_Bool) arr_10 [i_9] [i_10] [(short)9] [i_11]))))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_13))));
            }
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_13 = 2; i_13 < 8; i_13 += 3) /* same iter space */
                {
                    var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)-25866)) : (((/* implicit */int) (short)10449))));
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (short)-17)))))))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_13 - 1] [i_13] [i_13 - 1])) ? (6576809625234094696ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_36 [i_9 - 1]))));
                }
                for (signed char i_14 = 2; i_14 < 8; i_14 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned int) var_2);
                    var_38 = (unsigned char)255;
                    arr_53 [(unsigned short)3] [i_10] [i_12] [i_10] [i_14] [i_14] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)-56))))));
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_9])) || (((/* implicit */_Bool) (unsigned char)251)))))));
                    var_40 = ((/* implicit */long long int) (((_Bool)1) ? (arr_48 [i_10] [i_10] [i_12] [i_15 + 1] [i_15 + 1] [i_10]) : (((((/* implicit */int) (short)-3813)) & (((/* implicit */int) arr_42 [i_9 + 3] [i_10]))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) (unsigned char)23)) > (((/* implicit */int) (unsigned char)97)))))));
                    arr_57 [i_10] [i_12] [i_10] [i_10] = arr_40 [i_10];
                }
                for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (((+(((/* implicit */int) (short)0)))) != (((/* implicit */int) (unsigned char)0)))))));
                    var_43 *= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (unsigned int i_17 = 1; i_17 < 7; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_67 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_55 [i_9] [i_17 + 1] [i_12] [i_9]))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(var_10)))) > (arr_35 [i_9 + 3] [i_9])));
                        }
                    } 
                } 
            }
            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_9] [4U])) + (((/* implicit */int) (signed char)55)))))));
            var_46 = ((/* implicit */unsigned char) var_9);
            var_47 += ((/* implicit */unsigned long long int) (short)7029);
        }
        var_48 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((831327844U) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) arr_30 [i_9]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            var_49 = ((/* implicit */unsigned char) (-((-(3954940092548573059ULL)))));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned char i_21 = 1; i_21 < 8; i_21 += 1) 
                {
                    {
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) arr_63 [i_9 + 2])))) : ((+(((/* implicit */int) (signed char)-119))))));
                        arr_78 [i_20] [i_20] [i_20] [i_19] [i_20] [i_20] = ((/* implicit */unsigned char) ((7114850777848897051ULL) >> (((/* implicit */int) (!(arr_54 [i_21] [i_20] [i_20] [i_9]))))));
                        var_51 = ((/* implicit */short) ((2206385575259561130LL) + (var_15)));
                        arr_79 [i_21] [i_20] = ((/* implicit */short) 3954940092548573053ULL);
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2065748431U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2047))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_22 = 1; i_22 < 21; i_22 += 2) 
    {
        arr_82 [i_22] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (140737484161024ULL))), (((/* implicit */unsigned long long int) arr_81 [i_22])))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
        arr_83 [i_22] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (2337166749U) : (var_14)))) : (-6019589623450871477LL))))));
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 22; i_23 += 2) 
        {
            for (signed char i_24 = 2; i_24 < 20; i_24 += 1) 
            {
                {
                    var_53 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) << (((-6019589623450871477LL) + (6019589623450871500LL)))))) ? (((((/* implicit */_Bool) (unsigned short)51218)) ? (var_10) : (((/* implicit */long long int) 831327847U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_89 [i_24] [i_22] [i_22]))) <= (var_11)))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_25 = 1; i_25 < 20; i_25 += 1) 
                    {
                        var_54 = ((/* implicit */int) ((116417338399372781LL) - (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)32)), ((unsigned char)255)))))))));
                        arr_94 [i_22] [i_24] [i_23] [i_23] [8LL] [i_22] = ((/* implicit */signed char) (+(878597241U)));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_97 [i_22] [i_23] [i_22] [i_22] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)2775)), (arr_84 [i_22 + 1] [i_22 + 1] [i_22])))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) arr_87 [i_24] [i_24 - 2] [(unsigned short)18] [i_24 + 1]))))))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_91 [i_23])) & (((/* implicit */int) arr_89 [i_24] [i_22] [18LL]))))) & (-3540614342393888429LL)))));
                        var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) != (2206385575259561130LL))))) == (max((11582113343841581501ULL), (((/* implicit */unsigned long long int) var_9)))))))))))));
                        arr_98 [i_22] [i_22] [i_23] [i_26] [i_22] [i_22] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_80 [i_22 - 1])))) || (((/* implicit */_Bool) arr_93 [i_22] [(unsigned char)11] [i_24] [8U] [(short)4] [i_26]))));
                    }
                    for (unsigned long long int i_27 = 4; i_27 < 20; i_27 += 1) 
                    {
                        var_56 = ((/* implicit */short) arr_87 [i_23] [i_22 - 1] [19ULL] [i_27]);
                        var_57 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((-346804126) + (((/* implicit */int) (signed char)-33))))))) : (min((max((var_13), (((/* implicit */unsigned long long int) arr_93 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_100 [i_27 - 3] [(_Bool)1] [i_22] [i_22] [0LL])) - (-2206385575259561131LL))))))));
                        var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_100 [(signed char)10] [(signed char)10] [i_22] [i_22] [i_22 - 1])))) ? ((+((-(arr_99 [i_22] [(short)21] [i_22] [i_22]))))) : (((/* implicit */unsigned long long int) var_3))));
                        var_59 = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-9411))))) - ((-((+(831327866U))))));
                        arr_101 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1213898345)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)737))));
                    }
                    var_60 |= ((/* implicit */signed char) ((((/* implicit */long long int) max((min((arr_80 [i_22]), (((/* implicit */unsigned int) (unsigned short)10121)))), (min((831327841U), (((/* implicit */unsigned int) arr_90 [i_22] [i_22] [i_24] [i_24] [i_23]))))))) * (min((((((/* implicit */_Bool) arr_92 [10LL] [i_22 + 1] [i_23] [i_23] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15839))) : (var_3))), ((+(6019589623450871484LL)))))));
                }
            } 
        } 
    }
    var_61 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_9)))) * (max(((-2147483647 - 1)), (((/* implicit */int) var_0)))))))));
}
