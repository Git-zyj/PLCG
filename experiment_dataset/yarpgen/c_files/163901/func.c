/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163901
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)73)))), (((/* implicit */int) (short)11756))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-6338284014067583910LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0])))) : ((-(arr_3 [i_0] [i_0] [i_1])))));
            var_17 = max(((unsigned char)86), (((/* implicit */unsigned char) (_Bool)0)));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((17587891077120ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 6993971427607946053ULL)) || (((/* implicit */_Bool) 6474060200136047063ULL))));
                        var_20 = ((short) arr_6 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1]);
                        arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_4 - 2] [i_2] [i_1] [i_0] [i_4])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_5))));
                    }
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_7))));
                }
            }
            /* vectorizable */
            for (short i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_1] [i_5])) || (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_5 - 2] [i_5]))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (1958373218287032381LL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */int) (unsigned short)4051);
                        var_25 = ((/* implicit */unsigned short) arr_8 [i_6]);
                        var_26 = ((/* implicit */signed char) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    }
                    var_27 = ((/* implicit */unsigned char) var_4);
                }
            }
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_28 = ((/* implicit */unsigned short) (-(571957152676052992LL)));
                    var_29 = ((/* implicit */short) 3886604334U);
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) ((unsigned long long int) max((arr_4 [i_8 + 1] [i_10 + 1] [i_10 - 1] [i_10]), (((/* implicit */long long int) (unsigned char)235)))));
                        var_31 = ((/* implicit */signed char) max(((-(arr_10 [i_0] [i_8 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_28 [i_0] [i_8]))) && (((/* implicit */_Bool) arr_3 [i_8 - 1] [i_10 - 1] [i_8 - 1])))))));
                    }
                }
                var_32 = (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_1] [i_8])));
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)12288)))))));
                arr_35 [i_8] [i_1] [i_8] = ((/* implicit */unsigned long long int) (short)-19);
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_12 = 2; i_12 < 18; i_12 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        arr_42 [i_13] [i_12 - 2] [i_11] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_11] [i_12 + 1])) ? (((2649582932U) ^ (((/* implicit */unsigned int) 2094998166)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_12 - 1] [i_13])))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3918)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5147101421187799913ULL)) ? (5030724912018634225LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10695)))))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) var_13))))));
                        var_35 = ((((/* implicit */_Bool) (unsigned short)61362)) ? (17143194875299095293ULL) : (17569602560420117296ULL));
                    }
                    for (short i_14 = 4; i_14 < 16; i_14 += 4) 
                    {
                        arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0]))));
                        var_36 ^= ((/* implicit */unsigned char) ((int) arr_5 [i_0] [i_1] [i_12] [i_14]));
                    }
                    for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) (short)8625);
                        var_38 = ((/* implicit */unsigned char) ((unsigned int) arr_37 [i_12 - 2] [i_15 - 2] [i_15 + 1] [i_15 + 1]));
                    }
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (short)-18923))));
                    var_40 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_12 - 1] [i_1] [i_11]))));
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_12] [i_1] [i_11] [i_12 + 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12 - 2] [i_11] [i_1] [i_1] [i_0])))));
                }
                var_42 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_11] [i_11])) + (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1] [i_11]))));
            }
            /* LoopSeq 2 */
            for (signed char i_16 = 4; i_16 < 16; i_16 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) max((arr_32 [i_16] [i_1] [i_0]), (min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)10)))))))));
                arr_51 [i_16 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))) : ((-(arr_10 [i_0] [i_16 - 4])))))));
                arr_52 [i_16] [i_1] [i_0] [i_0] = ((/* implicit */short) var_13);
                arr_53 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_43 [i_0] [i_1] [i_1] [i_1] [i_16]);
            }
            for (signed char i_17 = 4; i_17 < 16; i_17 += 1) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned int) arr_39 [i_17 - 4] [i_17 + 1] [i_17 + 1] [i_17]);
                var_45 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 6095008891399448475ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (17682300068674337011ULL)))));
            }
        }
        for (long long int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            var_46 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-27707))))), ((-(var_8)))));
            var_47 = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
            var_48 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_50 [i_18] [i_18] [i_0])), (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)0)))) : ((-(7490926918943884043ULL)))))));
        }
        for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            var_49 = ((unsigned char) min((12413436049171719613ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_16 [i_0] [i_19])), (var_1))))));
            arr_62 [i_0] [i_19] [i_19] = ((/* implicit */unsigned char) (short)-2287);
            var_50 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_19]))))));
        }
        arr_63 [i_0] [i_0] = ((/* implicit */unsigned short) min((((unsigned long long int) (unsigned short)44864)), (((/* implicit */unsigned long long int) min((((long long int) 6776428737276899429LL)), (4611686018427387903LL))))));
        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_26 [i_0] [i_0] [i_0] [i_0])))), (((long long int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_20 = 3; i_20 < 21; i_20 += 3) 
    {
        arr_66 [i_20] = ((/* implicit */long long int) (-(var_7)));
        var_52 |= ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-4)), (var_10))))));
        var_53 = ((/* implicit */unsigned char) (-(var_0)));
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 3; i_21 < 18; i_21 += 3) 
        {
            arr_71 [i_20] [i_21] = ((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_69 [i_20 - 3] [i_21 - 2])))))));
            arr_72 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(arr_70 [i_20] [i_21 + 3])))) != (((long long int) arr_70 [i_20 - 3] [i_21 + 4]))));
            /* LoopSeq 2 */
            for (short i_22 = 0; i_22 < 22; i_22 += 4) 
            {
                arr_75 [i_20 - 3] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_20])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)7415))))) ? (max((((((/* implicit */_Bool) (short)24599)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20] [i_20]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_68 [i_20] [i_20] [i_22])), (arr_70 [i_20] [i_22])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20]))) : (var_9)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_65 [i_20])) : (((/* implicit */int) arr_65 [i_20])))) : ((-(((/* implicit */int) arr_65 [i_20]))))));
                var_55 += min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_22])) ? (((/* implicit */int) arr_65 [i_22])) : (((/* implicit */int) arr_65 [i_22]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_22]))) : (var_6))));
            }
            for (unsigned short i_23 = 0; i_23 < 22; i_23 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 1) 
                {
                    arr_80 [i_20] [i_23] [i_21 - 3] [i_20] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)240)), (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (short)-14191)) : (((/* implicit */int) (signed char)12))))));
                    var_56 = ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_20])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_74 [i_20]))))) : ((-(var_7))));
                }
                for (unsigned long long int i_25 = 3; i_25 < 21; i_25 += 2) 
                {
                    arr_84 [i_20 - 3] [i_20] [i_20] = ((/* implicit */short) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) (-(var_0))))));
                    /* LoopSeq 3 */
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        arr_87 [i_20 - 1] [i_20] [i_23] [i_25] [i_26] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)53))));
                        var_57 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (((((/* implicit */_Bool) 11456166539115892556ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_20]))) : (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_20 - 3] [i_20 + 1])))))))));
                        var_58 += ((/* implicit */unsigned short) ((unsigned char) -962489410));
                    }
                    for (signed char i_27 = 2; i_27 < 20; i_27 += 3) /* same iter space */
                    {
                        var_59 = (-(var_9));
                        var_60 = ((/* implicit */int) max((var_60), (min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_69 [i_21 - 3] [i_27])) ? (((/* implicit */int) arr_77 [(unsigned short)2] [i_25] [i_23] [(unsigned short)2])) : (((/* implicit */int) (short)11)))))), (((((/* implicit */int) (unsigned short)65522)) * (((/* implicit */int) (unsigned char)88))))))));
                        var_61 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_88 [i_27 - 2] [i_21] [i_25 - 3] [i_25] [i_27] [i_20] [i_20])) ? (arr_88 [i_27 - 2] [i_25 + 1] [i_25 + 1] [i_25 - 2] [i_27] [i_20] [i_23]) : (((/* implicit */long long int) -932020481))))), (((((/* implicit */_Bool) arr_68 [i_20] [i_20] [i_20])) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_89 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)105))))))))));
                        var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) (unsigned short)65533))));
                    }
                    for (signed char i_28 = 2; i_28 < 20; i_28 += 3) /* same iter space */
                    {
                        var_63 = ((/* implicit */unsigned short) min((var_63), (((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_91 [i_20] [i_20 - 3] [i_20] [i_20 - 1] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) : (-2319289405328903955LL))), (((/* implicit */long long int) (_Bool)1)))), (max((min((var_12), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (short)3164)))))))));
                        arr_93 [i_20] [i_21] [i_23] [i_25 + 1] [i_28] = ((/* implicit */unsigned char) min((9685542198477917183ULL), (((/* implicit */unsigned long long int) (unsigned short)10160))));
                        var_64 &= (-(((/* implicit */int) var_2)));
                    }
                    arr_94 [i_20] [i_23] [i_23] [i_25] = ((/* implicit */signed char) 14471869203266786954ULL);
                }
                for (short i_29 = 4; i_29 < 21; i_29 += 4) 
                {
                    var_65 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) == (arr_73 [i_20 + 1] [i_20 - 2])))) >> (((arr_89 [i_20] [i_20] [i_20 - 1] [i_20 - 1] [i_20] [i_20]) - (4506743173791706751ULL)))));
                    var_66 = ((var_13) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59313))));
                }
                var_67 = ((/* implicit */long long int) ((unsigned char) max((max(((unsigned short)61901), (var_1))), (((/* implicit */unsigned short) arr_64 [i_23] [i_21 - 2])))));
                var_68 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_79 [i_20 - 2] [i_20] [i_21 + 2] [i_21] [i_21] [i_21])));
                var_69 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
            }
            var_70 = min((((/* implicit */unsigned long long int) (-(-5937531727448625107LL)))), ((-(arr_95 [i_20]))));
            var_71 = ((/* implicit */signed char) (((-(arr_73 [i_21] [i_21 + 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90)))));
        }
    }
    var_72 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 15811834577795079056ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1956))) : (((max((((/* implicit */unsigned int) var_1)), (var_0))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_73 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
}
