/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121476
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [6ULL] [i_2 + 1] [i_1] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (0U)));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned short)65535))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned short)44042))));
            }
        } 
    } 
    var_22 = max((min((((/* implicit */unsigned int) (unsigned short)44042)), (1169731711U))), (((/* implicit */unsigned int) ((signed char) ((int) (unsigned short)44073)))));
    /* LoopSeq 2 */
    for (short i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((int) var_16))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48037))) : (8380416LL))) : (((/* implicit */long long int) (+(var_4))))))));
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48037))))) ? (((((((/* implicit */int) (unsigned short)48037)) * (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) arr_18 [i_5 - 1] [(unsigned char)8])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (1288551073U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4 - 1] [i_5 - 1] [(short)8])))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_6] [0] [i_4 - 1]))) : (((/* implicit */int) (unsigned short)48037))))));
            }
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 7; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (signed char)-61))));
                            arr_29 [i_4] [i_5 - 1] [i_7] [i_8] [(short)8] |= ((/* implicit */unsigned char) ((unsigned short) (unsigned short)43434));
                        }
                    } 
                } 
                arr_30 [i_4] [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) (-(arr_3 [i_5])))) ? (min((((/* implicit */unsigned int) var_10)), (arr_4 [i_4] [i_5] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4503598553628672ULL)) ? (65536) : (((/* implicit */int) (unsigned short)43430))))))) : ((+((+(arr_27 [i_4] [6U] [6U] [i_7] [1U] [i_7])))))));
            }
            var_26 ^= (+((-((+(((/* implicit */int) var_15)))))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)13), (min(((unsigned short)511), (arr_22 [2U] [i_10] [2U])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 65536)))) : ((+(min((var_8), (18442240475155922948ULL)))))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_27 [i_10] [i_10] [i_10] [i_4] [i_4 - 1] [3LL]), (((/* implicit */unsigned int) (short)0))))) ? ((~(-6536460979747423327LL))) : (((/* implicit */long long int) arr_1 [i_4])))), (((((/* implicit */_Bool) (unsigned short)65523)) ? (((2228802684843406819LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-4971))))) : (((/* implicit */long long int) arr_1 [i_4 + 2])))))))));
        }
        for (int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_29 = max(((unsigned short)24576), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)42854))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-(-2228802684843406820LL))))));
                        }
                        for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_4 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (12938220833087145013ULL))))));
                            arr_47 [i_4] [i_11] [(unsigned char)2] [i_13] [i_13] [i_15] [i_4] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 1725569281U)) ? (18442240475155922931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) == (((unsigned long long int) (unsigned char)244)))) ? ((((!(((/* implicit */_Bool) (short)258)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -2228802684843406820LL)))) : (18398031143810589882ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) var_2)) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            arr_52 [1ULL] [i_4] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (unsigned short)55337);
                            var_32 *= ((/* implicit */unsigned short) min((((/* implicit */signed char) (!((_Bool)1)))), ((signed char)124)));
                            arr_53 [0U] [i_11] [(unsigned short)3] [i_12 + 1] [i_4] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned short)4032)))), (((/* implicit */int) var_15))));
                            var_33 = ((/* implicit */unsigned long long int) var_0);
                        }
                        var_34 -= ((/* implicit */unsigned long long int) max((max((4294967293U), (arr_7 [i_12] [i_11] [i_12]))), (min((min((((/* implicit */unsigned int) (unsigned short)19132)), (977589882U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)111)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 3; i_18 < 10; i_18 += 4) 
                {
                    {
                        arr_58 [i_4] [i_11] [i_4] [i_18] = ((/* implicit */unsigned int) min((((_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4294967286U)))), (max((arr_57 [i_4 + 2] [i_4 + 1] [i_18 - 3] [i_18 - 1]), (arr_57 [0] [i_4 + 2] [i_18 + 1] [i_18 - 2])))));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 1; i_19 < 9; i_19 += 2) 
                        {
                            arr_62 [i_17] [i_4] [i_17] [4] [i_11] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((18442240475155922926ULL), (((/* implicit */unsigned long long int) (unsigned short)12659))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61030))))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)43)))))));
                            arr_63 [8ULL] [(signed char)2] [i_17] [(signed char)4] [i_18] [i_17] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((_Bool) 16381721431845731244ULL))), (((unsigned char) (signed char)73))))), (min((((/* implicit */unsigned int) (_Bool)0)), (114636003U)))));
                            arr_64 [i_4] [i_11] [i_4] [10LL] [i_19] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)32923)), (4294967288U)));
                            var_35 = ((/* implicit */short) min((((unsigned short) -1374393890791456403LL)), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19132))) != (max((((/* implicit */unsigned long long int) (unsigned short)41599)), (11113838351225122060ULL))))))));
                            arr_65 [i_4] [i_4 + 1] [i_4] [(_Bool)1] [(_Bool)1] [(unsigned short)0] [i_19] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)41599), ((unsigned short)23928))))));
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned short) ((_Bool) (short)-4128));
            var_37 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((4294967288U), (((/* implicit */unsigned int) arr_21 [(short)6] [10ULL] [(short)6])))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_20 = 1; i_20 < 7; i_20 += 2) 
        {
            for (short i_21 = 0; i_21 < 11; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 11; i_22 += 4) 
                {
                    {
                        arr_73 [i_4] [i_20] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : ((-9223372036854775807LL - 1LL))));
                        var_38 = ((/* implicit */unsigned short) var_9);
                        var_39 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-100)) % (((/* implicit */int) (short)32767)))))))), (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (short)-3676)) ? (67108863ULL) : (((/* implicit */unsigned long long int) var_9))))))));
                    }
                } 
            } 
        } 
        var_40 = ((int) 5588324064016696720LL);
    }
    /* vectorizable */
    for (short i_23 = 1; i_23 < 9; i_23 += 1) /* same iter space */
    {
        arr_78 [(short)7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30250)) ? (((/* implicit */int) (short)-30239)) : (-1659261687))))));
        arr_79 [9ULL] [6ULL] = (-(((/* implicit */int) arr_20 [(_Bool)1] [i_23 + 2])));
    }
}
