/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170244
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_8))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) var_6);
        var_12 = ((/* implicit */unsigned short) ((long long int) ((max((7073432854453392232LL), (((/* implicit */long long int) (short)-8560)))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2405))))));
        var_13 += ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) arr_0 [i_0 + 1]))), (-8119983074788074415LL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)27983))))) ? (arr_7 [i_3] [i_1 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (2274675676U)))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11964))) >= (190820537U)));
            }
            for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4 + 1] [i_1 + 1])) >> (((arr_4 [i_4 + 1]) - (2464541743U)))));
                arr_11 [i_2] [i_4] [i_4] = ((/* implicit */signed char) arr_10 [i_1] [i_2] [i_4]);
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 2; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) arr_0 [i_1]);
                        var_18 = ((/* implicit */unsigned int) (-(-1147478796)));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (short)24033)) <= (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1]))))) : (((/* implicit */int) arr_16 [i_7] [i_1 - 1] [i_1] [i_1 - 1]))));
            var_20 = ((unsigned char) var_8);
            arr_20 [i_7] [i_7] = var_1;
        }
        var_21 = ((/* implicit */unsigned int) ((((-1147478796) ^ (((/* implicit */int) (unsigned short)34061)))) == (((((/* implicit */_Bool) arr_1 [(signed char)0])) ? (((/* implicit */int) (short)24019)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))));
        arr_21 [i_1 - 1] = ((/* implicit */unsigned int) arr_17 [i_1 - 1] [i_1 + 1]);
    }
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-5537)) ^ ((~(((/* implicit */int) arr_23 [i_8]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (unsigned char i_12 = 2; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2020291619U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_28 [i_9])));
                            var_24 = ((/* implicit */unsigned long long int) var_9);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_27 [i_12] [i_12 + 2] [i_12] [i_12 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_29 [i_8] [i_10] [18] [i_9])));
                            var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) (+(2147483647U)))) : (arr_27 [i_8] [(unsigned short)17] [i_8] [i_8])));
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */unsigned short) (((~(((arr_27 [i_8] [i_9] [i_9 + 1] [i_8]) ^ (((/* implicit */unsigned long long int) 2377533447924188667LL)))))) > (((/* implicit */unsigned long long int) var_8))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_13 = 3; i_13 < 23; i_13 += 3) 
            {
                var_28 += ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((arr_32 [i_9] [i_9] [i_13] [i_13 + 1] [i_9 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_9 - 2] [i_13 + 1])))));
                            arr_41 [i_9] [i_9] [i_13] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_9] [i_13 - 1])) ? (arr_25 [i_9 - 1] [i_13 - 3] [i_13 + 1]) : (7599975824062009501ULL)));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1147478812)) ? (((/* implicit */unsigned long long int) arr_35 [i_9 - 1] [i_9 - 2])) : (arr_25 [i_9 - 1] [i_9 + 1] [i_9 - 1])));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_16 = 1; i_16 < 23; i_16 += 3) 
            {
                var_31 = ((/* implicit */long long int) var_9);
                var_32 = (((+(var_5))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_8] [i_9 + 1] [i_8] [i_9 - 2]))))));
                /* LoopSeq 3 */
                for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) arr_44 [i_8] [i_16] [i_17] [i_16]);
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_34 [i_8])) : (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32376))) & (127U)))));
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_16]))))) / (arr_31 [i_17] [i_16 + 1] [i_9 - 2] [i_9 - 1] [i_9 + 1]))))));
                    var_36 ^= ((/* implicit */long long int) (~(arr_32 [12] [i_9] [i_9] [i_9] [i_9 + 1])));
                }
                for (signed char i_18 = 2; i_18 < 22; i_18 += 3) /* same iter space */
                {
                    var_37 ^= ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 2 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0)))))));
                        var_39 = ((/* implicit */int) 8543550638296204510ULL);
                        var_40 *= ((/* implicit */unsigned char) ((arr_31 [(_Bool)1] [i_16] [i_16] [i_16 - 1] [i_16 + 1]) > (arr_35 [i_9 - 1] [i_16 + 1])));
                    }
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 3) /* same iter space */
                    {
                        var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_18]))) ? (2414779608301437645ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (short)8559)) : (((/* implicit */int) var_7)))))));
                        var_42 = ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_39 [i_9])));
                    }
                    var_43 *= ((/* implicit */unsigned short) ((signed char) arr_52 [i_9] [i_9 - 2]));
                    var_44 &= ((/* implicit */long long int) arr_25 [23LL] [i_9 - 1] [i_9 - 2]);
                }
                for (signed char i_21 = 2; i_21 < 22; i_21 += 3) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_16 + 1] [i_21 + 2] [i_16] [i_9 + 1] [i_9 - 2])) ? ((-(18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        arr_60 [i_22] [i_21 - 1] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_58 [i_9] [i_9 - 1] [i_9 + 1] [i_8] [i_9])) >= (((/* implicit */int) arr_58 [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9]))));
                        var_46 = ((/* implicit */int) arr_52 [i_8] [i_9]);
                    }
                    for (unsigned short i_23 = 2; i_23 < 22; i_23 += 3) 
                    {
                        var_47 &= ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (short)32185))));
                        arr_65 [i_9] [i_16] [i_21] [i_21] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (arr_44 [i_21 - 2] [i_21 - 2] [i_16] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_9 - 2] [i_16] [i_16 + 1] [i_21 + 1] [i_23 - 2]))));
                        arr_66 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_9 + 1] [i_8])) | (((/* implicit */int) (signed char)-11))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 3) 
                    {
                        var_48 = ((((/* implicit */_Bool) 13230939380485483504ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL));
                        var_49 += ((((/* implicit */_Bool) arr_40 [i_16 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1])) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8560)) ? (((/* implicit */int) var_2)) : (536870912)))));
                    }
                }
                /* LoopSeq 4 */
                for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 3) 
                    {
                        var_50 = ((/* implicit */_Bool) 10157946502311443974ULL);
                        var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (unsigned short)12))))))));
                    }
                    for (int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) << (((/* implicit */int) (signed char)55))))) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)-20))));
                        var_53 &= (-(((/* implicit */int) arr_48 [i_16 - 1])));
                        var_54 = ((/* implicit */int) ((long long int) arr_71 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_16 - 1]));
                    }
                    var_55 = ((/* implicit */int) (unsigned char)5);
                    var_56 = ((/* implicit */signed char) arr_26 [i_9]);
                    /* LoopSeq 3 */
                    for (unsigned int i_28 = 0; i_28 < 24; i_28 += 3) /* same iter space */
                    {
                        var_57 *= ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((-(arr_49 [i_9] [i_16 + 1] [i_25] [(unsigned short)1]))));
                        var_58 = ((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) arr_63 [i_8] [i_8] [i_8] [i_9] [i_16 + 1] [i_25] [(unsigned char)22])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_8] [i_9 - 1] [i_9 - 1] [i_25] [(_Bool)1]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                    for (unsigned int i_29 = 0; i_29 < 24; i_29 += 3) /* same iter space */
                    {
                        var_59 = ((/* implicit */signed char) (-(((/* implicit */int) arr_33 [i_9 - 1]))));
                        var_60 = ((/* implicit */signed char) arr_78 [i_9]);
                        var_61 += ((/* implicit */unsigned short) (((+(arr_74 [(unsigned char)5] [i_9] [i_16] [i_25] [i_25]))) >= (((/* implicit */long long int) ((((/* implicit */int) (signed char)44)) ^ (((/* implicit */int) arr_55 [i_25])))))));
                    }
                    for (unsigned int i_30 = 0; i_30 < 24; i_30 += 3) /* same iter space */
                    {
                        var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40177))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
                        var_63 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_9 - 1] [i_9] [i_9] [i_9 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                }
                for (int i_31 = 0; i_31 < 24; i_31 += 3) /* same iter space */
                {
                    var_64 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)8559)))) == ((+(((/* implicit */int) var_7))))));
                    /* LoopSeq 1 */
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_61 [i_32 - 1] [i_16 + 1] [i_16 + 1] [i_9 - 2])))))));
                        var_66 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_3))))) : ((-(arr_46 [0])))));
                    }
                }
                for (int i_33 = 0; i_33 < 24; i_33 += 3) /* same iter space */
                {
                    var_67 = ((/* implicit */long long int) ((unsigned char) arr_58 [i_16 + 1] [i_16 + 1] [i_9 - 1] [i_33] [i_9]));
                    var_68 = ((/* implicit */int) arr_42 [22LL]);
                    var_69 = ((/* implicit */_Bool) (~(0U)));
                }
                for (int i_34 = 0; i_34 < 24; i_34 += 3) /* same iter space */
                {
                    var_70 &= ((/* implicit */int) (signed char)39);
                    var_71 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) : (var_5)))) ? ((+(((/* implicit */int) arr_48 [i_8])))) : (((/* implicit */int) var_2))));
                    var_72 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))));
                }
                var_73 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56540)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (10846768249647542103ULL)))) ? (((((/* implicit */_Bool) arr_35 [i_16] [i_9 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)39)))) : (((/* implicit */int) (short)-8559))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_35 = 1; i_35 < 23; i_35 += 3) 
        {
            var_74 = ((/* implicit */unsigned char) min((((signed char) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)95))))), (var_1)));
            var_75 = ((/* implicit */unsigned long long int) arr_94 [i_8] [i_35] [i_8] [i_35]);
        }
        var_76 = ((/* implicit */unsigned char) max((var_76), (((/* implicit */unsigned char) ((min((((unsigned long long int) arr_24 [i_8])), (((/* implicit */unsigned long long int) max(((signed char)96), (arr_33 [i_8])))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    }
}
