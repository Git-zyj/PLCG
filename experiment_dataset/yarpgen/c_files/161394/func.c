/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161394
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
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)11)), (min((((/* implicit */long long int) var_11)), ((+(4185755137488191017LL)))))));
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((unsigned long long int) 6683505461318609461LL))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((6683505461318609461LL), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (min((-6683505461318609462LL), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (signed char)10))));
        var_16 = ((/* implicit */unsigned long long int) -6502952856783688010LL);
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = var_13;
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_6 [i_1 + 2])))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (+(var_0)))))));
    }
    for (short i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (+(min((arr_7 [i_2 + 1]), (arr_7 [i_2 + 1])))));
        arr_12 [i_2] [i_2] &= var_7;
        arr_13 [i_2] [i_2] = ((/* implicit */int) min(((+(-2984595602581906476LL))), (((/* implicit */long long int) var_4))));
        arr_14 [i_2] |= ((/* implicit */int) (((+(17241180341019413056ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1107342341)) ? (((/* implicit */int) (unsigned short)40958)) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2])))))));
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((min((-3538810280645411974LL), (((/* implicit */long long int) (_Bool)1)))) >= (((/* implicit */long long int) ((/* implicit */int) ((-1416705039) > (((/* implicit */int) (_Bool)1))))))))), ((~(((/* implicit */int) var_10))))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (short i_5 = 4; i_5 < 19; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_27 [i_3] [i_4] [i_4] [i_5] [i_6] [i_6] = min((min((((/* implicit */int) ((var_9) <= (((/* implicit */int) arr_26 [i_3]))))), ((-(((/* implicit */int) (signed char)64)))))), (((/* implicit */int) ((arr_22 [i_6] [i_5] [i_4]) && (((/* implicit */_Bool) arr_20 [i_5 - 3] [i_5 + 1] [i_5 - 3]))))));
                        arr_28 [i_6] [i_5] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_19 [i_5 - 2]) << (((min((arr_17 [i_4]), (((/* implicit */int) arr_26 [i_4])))) + (2061874625))))))));
                        arr_29 [i_3] [i_4] [i_5] [i_6] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_25 [i_6] [i_5] [i_4] [i_3])), (min((arr_21 [i_5] [i_4] [i_3]), (min((((/* implicit */unsigned char) arr_22 [i_6] [i_4] [i_3])), (arr_26 [i_6])))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (min((8787503087616ULL), (min((1979069171621730737ULL), (8787503087616ULL))))) : (((/* implicit */unsigned long long int) ((long long int) min((var_3), (((/* implicit */unsigned long long int) var_12))))))));
        arr_30 [i_3] = ((/* implicit */unsigned char) (short)-16256);
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_39 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2984595602581906476LL)) > (26ULL)));
                    var_20 = arr_24 [i_3] [i_7] [i_8];
                    arr_40 [i_3] [i_3] [i_8] [i_9] &= ((/* implicit */unsigned long long int) var_9);
                    arr_41 [i_3] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_8 - 1] [i_9]))));
                }
                for (long long int i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    arr_45 [i_3] [i_7] [i_3] [i_10] |= ((/* implicit */long long int) ((unsigned long long int) var_8));
                    arr_46 [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) arr_16 [i_8])));
                    var_21 += ((/* implicit */unsigned short) var_3);
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_20 [i_3] [i_8] [i_10]))));
                }
                for (unsigned short i_11 = 2; i_11 < 18; i_11 += 3) 
                {
                    arr_50 [i_3] [i_7] [i_7] [i_8] [i_8] [i_11] = ((/* implicit */int) var_11);
                    arr_51 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (short)-32753));
                }
                arr_52 [i_7] = ((/* implicit */long long int) arr_34 [i_3] [i_7] [i_8]);
                var_23 += ((/* implicit */long long int) arr_34 [i_3] [i_7] [i_8]);
            }
            for (long long int i_12 = 3; i_12 < 17; i_12 += 4) 
            {
                arr_55 [i_12] [i_7] [i_3] = ((/* implicit */signed char) min((min((min((arr_19 [i_3]), (((/* implicit */unsigned long long int) arr_24 [i_12] [i_7] [i_3])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)7))))))), (((/* implicit */unsigned long long int) arr_43 [i_12] [i_12] [i_12] [i_3] [i_12]))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_36 [i_3]) : (arr_36 [i_3])))))));
                /* LoopSeq 1 */
                for (int i_13 = 4; i_13 < 17; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)36389)), (-227678682772570421LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_7])))))) < ((+(((/* implicit */int) (signed char)-36))))));
                        arr_61 [i_3] [i_3] [i_12] [i_13] [i_14] [i_7] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11511)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_3]))))) ? ((~(arr_31 [i_12] [i_7] [i_14]))) : (((/* implicit */unsigned long long int) arr_36 [i_12 + 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_18 [i_13 + 1] [i_13 - 4]))))));
                        var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)36386)), (-14LL)));
                    }
                    var_27 += ((/* implicit */_Bool) arr_34 [i_3] [i_7] [i_12]);
                    var_28 = ((/* implicit */long long int) min((18446735286206464000ULL), (((/* implicit */unsigned long long int) (unsigned short)56439))));
                }
                arr_62 [i_3] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)249))))) : (((5215956990651835650LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_3] [i_3] [i_7] [i_7] [i_12] [i_12]))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_54 [i_3] [i_12 - 2] [i_12 - 1] [i_12 + 3])))))));
            }
            /* LoopSeq 1 */
            for (long long int i_15 = 1; i_15 < 19; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 1; i_16 < 19; i_16 += 1) 
                {
                    arr_68 [i_3] [i_7] [i_15] [i_7] [i_7] = ((/* implicit */unsigned int) ((min((1698815697074036558LL), (((/* implicit */long long int) (unsigned char)81)))) | (((((/* implicit */_Bool) arr_57 [i_7])) ? (((/* implicit */long long int) arr_16 [i_15 + 1])) : (arr_23 [i_3] [i_7] [i_16 + 1] [i_15 + 1])))));
                    var_29 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_42 [i_3] [i_15] [i_16])))))))));
                }
                var_30 &= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_4)))));
            }
            arr_69 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) ((unsigned short) var_13))))) : (arr_66 [i_3] [i_7] [i_7] [i_7] [i_7] [i_7])));
        }
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
        {
            arr_72 [i_17] [i_17] [i_3] = ((/* implicit */unsigned long long int) arr_54 [i_3] [i_17] [i_17] [i_17]);
            arr_73 [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8787503087615ULL))));
            var_31 += min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_56 [i_17] [i_17] [i_3] [i_17] [i_3] [i_3]))))), (((unsigned long long int) arr_58 [i_17] [i_17] [i_17] [i_3] [i_3])));
        }
        for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            arr_76 [i_18] = ((/* implicit */signed char) ((int) var_10));
            arr_77 [i_18] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)104)) >= (((((/* implicit */int) ((short) (unsigned short)65534))) & (((/* implicit */int) ((unsigned short) 1205563732690138559ULL)))))));
            /* LoopNest 2 */
            for (unsigned short i_19 = 1; i_19 < 19; i_19 += 1) 
            {
                for (unsigned short i_20 = 1; i_20 < 18; i_20 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 1; i_21 < 17; i_21 += 1) 
                        {
                            arr_86 [i_20] [i_18] [i_19] [i_20] [i_20] [i_18] [i_3] = ((/* implicit */short) var_6);
                            arr_87 [i_18] [i_18] [i_18] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_60 [i_19 - 1] [i_19 - 1] [i_20 + 2] [i_20 + 1] [i_20 - 1] [i_21 + 1] [i_21 + 2]))))));
                            arr_88 [i_18] [i_20] [i_18] [i_18] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) var_3))), (min((arr_32 [i_19 + 1] [i_18] [i_20 + 1]), (((/* implicit */unsigned long long int) var_12))))));
                            arr_89 [i_3] [i_3] [i_3] [i_18] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_21 + 3] [i_21 - 1] [i_21] [i_18] [i_21 - 1]))) / (min((((/* implicit */long long int) arr_78 [i_21])), (-2961586550649483950LL)))))) ? (((/* implicit */int) arr_82 [i_3] [i_3] [i_18] [i_19] [i_20] [i_21])) : ((+(((/* implicit */int) (unsigned short)29142))))));
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((unsigned long long int) arr_53 [i_19 + 1] [i_19 + 1] [i_20 + 2])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_19 - 1] [i_19 + 1] [i_20 - 1])) * (((/* implicit */int) arr_53 [i_19 - 1] [i_19 + 1] [i_20 - 1])))))));
                        var_33 = ((/* implicit */unsigned long long int) arr_44 [i_3] [i_3] [i_3] [i_3]);
                    }
                } 
            } 
        }
    }
    var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) var_11))), (min((var_2), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (short)-16257)))))))));
    var_35 = ((/* implicit */long long int) ((signed char) min((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)114)))), (var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_22 = 1; i_22 < 24; i_22 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_23 = 3; i_23 < 24; i_23 += 4) 
        {
            var_36 = ((/* implicit */long long int) (+(12579681240621719759ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 4; i_24 < 23; i_24 += 4) 
            {
                for (int i_25 = 1; i_25 < 23; i_25 += 2) 
                {
                    {
                        arr_99 [i_22] [i_22] [i_23] [i_24] [i_22] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_12))) < (((/* implicit */int) ((arr_90 [i_22] [i_23 - 1]) > (((/* implicit */int) var_5)))))));
                        var_37 = min((((unsigned long long int) min((14859594176326853743ULL), (((/* implicit */unsigned long long int) -3087571838795202236LL))))), (min((arr_95 [i_22]), (((/* implicit */unsigned long long int) arr_91 [i_22])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_26 = 0; i_26 < 25; i_26 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_27 = 0; i_27 < 25; i_27 += 2) 
                {
                    var_38 = -4964750314723918064LL;
                    var_39 = ((/* implicit */int) arr_91 [i_22]);
                    arr_104 [i_22] [i_23] [i_26] [i_22] = ((/* implicit */unsigned char) min(((-(min((((/* implicit */unsigned long long int) (unsigned short)36412)), (arr_94 [i_22] [i_27] [i_23]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_103 [i_22 - 1])))))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4853844678257980780ULL)) ? (((/* implicit */int) arr_93 [i_22])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_22 - 1])))))));
                }
                var_41 = ((/* implicit */signed char) ((((min((min((6723035414093724604LL), (((/* implicit */long long int) arr_90 [i_22] [i_26])))), (((/* implicit */long long int) ((signed char) (signed char)15))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -7642138731769502521LL)), (var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)110))))) : (min((var_2), (((/* implicit */unsigned long long int) (unsigned char)255)))))) - (18446744073709551456ULL)))));
            }
            for (signed char i_28 = 0; i_28 < 25; i_28 += 4) /* same iter space */
            {
                var_42 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_91 [i_22])))));
                var_43 = ((/* implicit */long long int) arr_97 [i_22] [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_22 + 1]);
                arr_108 [i_28] [i_28] [i_22] = ((/* implicit */signed char) min(((unsigned short)29141), ((unsigned short)65532)));
            }
            arr_109 [i_22] [i_22] = (i_22 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-6723035414093724596LL)))) ? (((((unsigned long long int) var_1)) >> (((arr_107 [i_22] [i_22] [i_22] [i_23]) - (5958746279849870461LL))))) : (((/* implicit */unsigned long long int) var_13))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-6723035414093724596LL)))) ? (((((unsigned long long int) var_1)) >> (((((arr_107 [i_22] [i_22] [i_22] [i_23]) - (5958746279849870461LL))) + (116973149430554952LL))))) : (((/* implicit */unsigned long long int) var_13)))));
        }
        for (signed char i_29 = 2; i_29 < 22; i_29 += 4) 
        {
            arr_112 [i_22] [i_29] = ((/* implicit */unsigned short) (_Bool)1);
            arr_113 [i_29] [i_22] [i_29] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_100 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22 - 1]))), (((((/* implicit */_Bool) arr_100 [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_22 - 1])) ? (((/* implicit */int) arr_100 [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 + 1])) : (((/* implicit */int) (unsigned char)5))))));
            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_111 [i_29] [i_29])) & (((/* implicit */int) arr_91 [i_29]))))), (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 14064770))))))))));
        }
        for (unsigned long long int i_30 = 2; i_30 < 23; i_30 += 2) 
        {
            arr_116 [i_22] [i_30] [i_30] = ((/* implicit */long long int) ((unsigned long long int) (-(min((((/* implicit */unsigned long long int) var_10)), (arr_95 [i_22]))))));
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_12)))))) ? (((unsigned long long int) arr_90 [i_22] [i_30])) : (((unsigned long long int) ((unsigned short) (_Bool)1)))));
        }
        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -220066029709540624LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_110 [i_22] [i_22])))))))) : (0LL)));
        /* LoopNest 3 */
        for (long long int i_31 = 1; i_31 < 24; i_31 += 2) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)0))));
                        var_48 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? ((-2147483647 - 1)) : (948749661)))) <= (((min((arr_122 [i_22] [i_22] [i_22] [i_22] [i_22]), (((/* implicit */unsigned long long int) var_11)))) & (min((((/* implicit */unsigned long long int) var_10)), (2097152ULL)))))));
                    }
                } 
            } 
        } 
    }
}
