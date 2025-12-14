/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160607
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_1]);
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-21858))) - (arr_6 [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    arr_13 [i_0] &= ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [(short)3] [i_1])) != (((/* implicit */int) (short)-159)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)2]))))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) var_18)) : (-3540305100348301568LL)))))) ? (max((((/* implicit */long long int) ((short) arr_12 [(short)3] [i_0] [i_0] [(short)3] [i_2] [i_3]))), (((long long int) arr_7 [i_0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (short)29918))));
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_21 = (~(((/* implicit */int) (unsigned char)168)));
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (~(min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */int) arr_11 [i_0] [i_0] [6] [i_1])) * (((/* implicit */int) var_1))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(short)8] [i_1] [(short)6] [2U] [i_4] [i_3 + 2])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_3 + 2])) : (((/* implicit */int) var_15))))) / (((((/* implicit */_Bool) -3540305100348301543LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [2LL] [4U] [i_3] [i_4] [i_3 + 2]))) : (var_17)))));
                        arr_17 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)-159)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-3540305100348301568LL))));
                    }
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_20 [i_0] &= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_18 [(short)7] [i_2 - 1] [(unsigned char)0] [i_3 + 2] [i_2 - 1]))), (((((/* implicit */int) arr_18 [i_1] [i_2 - 1] [(signed char)6] [i_3 + 1] [i_3 + 1])) | (15)))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_2 + 2] [i_2 - 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)1] [i_3] [i_5]))) != (4LL)))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1] [(unsigned short)8])) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) arr_14 [i_0] [i_1] [9LL] [9LL] [i_1])) : (((/* implicit */int) arr_8 [(signed char)5]))));
                        arr_21 [i_1] [i_2] [i_1] [i_1] = -4180486814265811880LL;
                        arr_22 [i_5] [i_1] [(short)2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_10 [i_0] [i_1] [6] [i_5])))), (((/* implicit */int) min((var_7), (arr_18 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_5]))))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 2147483647))))), (((((/* implicit */_Bool) (unsigned char)78)) ? (var_3) : (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65519)) : (arr_19 [i_1] [(short)0] [i_5] [i_3 + 2] [i_2] [2])))) ? (min((((/* implicit */int) (short)-28517)), (var_18))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_1] [i_2 + 1] [i_3] [i_5])) : (((/* implicit */int) var_14))))))));
                        var_24 = ((/* implicit */signed char) min((((unsigned char) min((arr_4 [i_1]), (((/* implicit */long long int) arr_1 [i_0]))))), (((/* implicit */unsigned char) arr_7 [i_0] [(unsigned char)8]))));
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_25 [(short)8] [i_1] [(short)8] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) max((arr_10 [i_1] [i_1] [i_1] [5LL]), (((/* implicit */short) arr_23 [i_1] [i_1] [i_2 - 1] [i_3] [i_6]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)17891))) : (arr_0 [(signed char)9]))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17474)) ? (-8316465003427636485LL) : (4373281650140243938LL)))) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [8] [i_1]))))))))));
                        var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) ((15) / (((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [(unsigned char)2] [(short)2]))))))), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)78)), (var_1))))) | (((((/* implicit */_Bool) var_7)) ? (-3540305100348301568LL) : (((/* implicit */long long int) var_18))))))));
                        arr_26 [i_6] [i_1] [i_2] [i_1] [(signed char)2] = ((/* implicit */short) arr_24 [i_1]);
                        var_26 *= ((/* implicit */signed char) ((short) var_17));
                        var_27 = min((min((((/* implicit */long long int) (short)7596)), (-3540305100348301543LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) (short)7581)))) > (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_23 [i_6] [2LL] [i_6] [8] [i_6])) : (var_10)))))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) arr_24 [i_1]);
                        arr_31 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_1]))))) ? (((((/* implicit */long long int) var_3)) % (var_17))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [(signed char)1])), (arr_8 [i_0])))))))) ? (((/* implicit */int) ((signed char) arr_6 [i_7]))) : (((((/* implicit */_Bool) (((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned short)65512))))) ? (((/* implicit */int) (short)-159)) : (((/* implicit */int) (signed char)82))))));
                        arr_32 [i_0] [i_1] [i_1] [i_2 + 2] [i_3] [6LL] [i_7] = ((/* implicit */signed char) (~((+(((((((/* implicit */int) (signed char)-56)) + (2147483647))) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_2] [i_3 - 1] [i_2])) - (67)))))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2707933283126063675LL)) ? (((/* implicit */int) (short)16350)) : (((/* implicit */int) (signed char)21))));
                        var_29 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1]))) % (((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                    }
                    var_30 *= ((/* implicit */signed char) var_9);
                    var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (-888522100) : (((/* implicit */int) arr_11 [i_0] [i_2 + 1] [(unsigned short)8] [i_0])))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_1] [(signed char)8] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_16)) : (arr_19 [i_0] [i_0] [i_2] [i_3 - 1] [i_1] [i_3])))))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_32 = ((/* implicit */short) -1233169133327036399LL);
                    var_33 = ((/* implicit */long long int) ((-888522119) ^ (((/* implicit */int) (short)-159))));
                    var_34 = ((/* implicit */short) ((long long int) var_1));
                }
                var_35 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
            }
            for (short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                arr_40 [i_0] [i_1] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_36 [6LL] [6LL] [i_1] [3U]), (((/* implicit */int) arr_33 [i_0] [i_1] [(signed char)9] [i_0]))))) ? ((~(((/* implicit */int) arr_18 [(short)9] [i_9] [(signed char)5] [(signed char)9] [i_0])))) : (((/* implicit */int) min(((unsigned short)32512), (((/* implicit */unsigned short) (signed char)-20))))))) + (var_18)));
                arr_41 [i_1] = ((unsigned short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (short)158)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (short)16))))));
            }
            for (short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                arr_45 [(short)9] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_13)), (var_8))) >> (((1401750547097727054LL) - (1401750547097727032LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)13848))) : (min((min((arr_28 [(signed char)1] [(signed char)6] [i_1] [i_1] [i_1] [i_1] [i_10]), (((/* implicit */long long int) arr_39 [i_0] [i_1] [i_1] [i_10])))), (((/* implicit */long long int) arr_33 [0LL] [(signed char)0] [i_10] [i_10]))))));
                var_36 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_10] [(unsigned char)4] [i_1] [i_10] [i_1]))))) | (((/* implicit */int) ((arr_28 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [(signed char)0]) >= (arr_4 [i_1]))))));
                /* LoopSeq 4 */
                for (short i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    var_37 &= (~(arr_24 [i_10]));
                    var_38 &= ((/* implicit */long long int) ((int) (-(((((/* implicit */_Bool) arr_42 [i_0] [(signed char)7] [i_0])) ? (((/* implicit */int) (short)27911)) : (((/* implicit */int) (short)32767)))))));
                    var_39 = (~((~(((((/* implicit */_Bool) var_16)) ? (3847850697826000669LL) : (arr_0 [i_10]))))));
                    arr_49 [i_0] [i_1] [(signed char)0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [7LL] [i_1] [(short)8])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_1] [i_1] [i_10] [i_11] [i_10] [i_11 + 1] [i_11])))) : (max((min((((/* implicit */long long int) var_11)), (var_17))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (unsigned short)889)) : (888522090))))))));
                }
                for (short i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        arr_57 [i_1] [i_12] [i_1] [i_10] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(3847850697826000669LL)));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [(short)2] [i_10] [i_12] [i_13 + 1] [5])) ? (((/* implicit */int) arr_53 [i_1] [i_10] [i_1])) : (((/* implicit */int) (signed char)-46))))) ? (-2707933283126063674LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13 - 1] [i_1] [i_1] [(signed char)2] [(signed char)4] [i_1] [i_1])))))) ? (((/* implicit */long long int) min((((((/* implicit */int) arr_42 [i_0] [i_1] [i_12])) - (((/* implicit */int) (unsigned char)178)))), (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_2 [i_0]))))))) : (max((((((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_1] [i_13])) ? (arr_34 [i_1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_10] [i_1]))))));
                        arr_58 [i_13] [i_12] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) -3847850697826000671LL);
                    }
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) var_9))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        var_42 *= ((/* implicit */unsigned char) arr_18 [i_0] [i_1] [8] [i_12] [i_14]);
                        arr_62 [i_10] [i_1] [i_1] [i_12] [i_14] = ((/* implicit */long long int) (~(var_3)));
                    }
                }
                for (short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        arr_69 [i_1] [0U] [i_10] [0U] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) arr_56 [9LL] [3] [i_1] [i_15] [(short)3])) + (((((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (arr_0 [i_1])))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_47 [(signed char)7] [i_15] [i_10] [i_1] [i_0])))));
                        var_43 *= ((/* implicit */short) -9223372036854775791LL);
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        arr_72 [i_1] [i_1] [(signed char)6] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3847850697826000678LL)) ? (5635780744169666390LL) : (((/* implicit */long long int) 888522090)))))))), (((long long int) arr_9 [i_10]))));
                        var_44 *= ((/* implicit */short) (signed char)-126);
                    }
                    var_45 = ((/* implicit */unsigned char) arr_55 [i_15] [i_1] [i_0] [i_1] [i_0]);
                    var_46 = var_16;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_18 = 1; i_18 < 7; i_18 += 1) 
                    {
                        var_47 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(2707933283126063666LL)))) ? (((((/* implicit */unsigned int) 556819967)) / (2496948847U))) : (((((/* implicit */_Bool) -888522109)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_38 [i_0] [i_1] [i_10])))));
                        var_48 &= ((/* implicit */long long int) arr_33 [i_18 + 2] [i_0] [i_10] [i_0]);
                    }
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) min((5469918923628930244LL), (min((min((((/* implicit */long long int) var_3)), (arr_24 [i_0]))), (((/* implicit */long long int) min((944429594), (((/* implicit */int) (short)24105))))))))))));
                        arr_78 [7LL] [7LL] [i_10] [i_15] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)41))));
                        arr_79 [i_0] [i_0] [4U] [i_10] [(unsigned short)6] &= ((/* implicit */short) min((((((8542444639374470826LL) > (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_10] [i_10]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)30))))) : (((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */long long int) 2496948840U)) : (var_9))))), ((((+(arr_0 [i_10]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_0] [i_10] [i_15] [(unsigned short)6])) ? (-1) : (((/* implicit */int) arr_73 [i_0] [(short)7] [i_10] [i_10] [i_10] [i_15] [i_19])))))))));
                    }
                    var_50 = ((/* implicit */int) min((arr_42 [4LL] [i_1] [i_10]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_50 [i_0] [i_1] [(unsigned short)4] [i_1] [i_10])))))))));
                }
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        arr_84 [(signed char)0] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [(short)6])))), (var_18)));
                        arr_85 [i_21] [i_1] [i_20] [i_10] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_70 [i_1] [i_10] [i_10] [i_1] [(signed char)5] [(signed char)5] [i_1])) * (((/* implicit */int) var_16))));
                        arr_86 [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] &= arr_9 [i_0];
                    }
                    for (signed char i_22 = 1; i_22 < 8; i_22 += 1) /* same iter space */
                    {
                        var_51 = arr_83 [i_0] [i_0] [i_10] [i_10];
                        arr_89 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-3996185952702455924LL), (((/* implicit */long long int) 2147483647))))) ? (8659623474812815373LL) : (((/* implicit */long long int) 1798018448U))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_38 [i_0] [i_1] [i_10]))) | (((/* implicit */unsigned int) arr_1 [i_20])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_22 - 1] [i_22 - 1] [(unsigned short)3] [i_22 - 1])) ? (arr_76 [i_22 - 1] [i_22] [i_22 + 2] [i_22]) : (arr_76 [i_22 - 1] [i_22] [i_22 + 1] [i_22]))))));
                        var_52 = ((/* implicit */long long int) max((var_52), (min((((long long int) arr_18 [i_22 + 1] [i_22 + 2] [i_22 + 1] [5LL] [i_22 + 1])), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22] [i_22 + 1])) >= (((/* implicit */int) arr_18 [i_22 + 1] [i_22 + 2] [i_22 + 1] [i_22] [i_22 + 1])))))))));
                        arr_90 [1LL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)21142))) <= (((((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */long long int) -1798181954)) : (3847850697826000669LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_74 [i_0] [i_1] [i_10] [i_20] [i_22])) ? (((/* implicit */int) arr_66 [i_1] [i_1])) : (((/* implicit */int) var_13)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_23 = 1; i_23 < 8; i_23 += 1) /* same iter space */
                    {
                        arr_94 [4] [i_1] [i_1] [i_10] [i_20] [i_1] [i_23 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= (4679793491465763600LL))) ? ((-(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) arr_12 [i_23] [2U] [i_20] [i_10] [i_1] [i_0])) : (((/* implicit */int) arr_48 [i_0] [i_1] [i_1] [(unsigned char)4] [i_1] [i_23]))))));
                        arr_95 [i_0] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_87 [i_0] [i_10] [3] [i_10] [i_1] [5LL] [i_1])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) -1798181962)) ? (((/* implicit */int) arr_10 [i_23] [i_1] [9LL] [9LL])) : (((/* implicit */int) (unsigned char)243))))));
                        var_53 = ((short) arr_55 [i_0] [i_0] [i_0] [i_1] [i_23 - 1]);
                    }
                    arr_96 [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_93 [i_0] [i_1] [i_10] [i_1] [i_10])) | (((/* implicit */int) var_14))))) ? (1286505025U) : (var_8))));
                }
            }
            /* LoopSeq 3 */
            for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                var_54 *= ((/* implicit */short) var_14);
                var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) arr_66 [i_0] [i_0]))));
            }
            for (short i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                var_56 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) 3847850697826000679LL)) ? (((/* implicit */int) (unsigned char)78)) : ((-2147483647 - 1))))), (min((arr_50 [(short)9] [i_1] [(signed char)1] [(signed char)1] [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) (short)30093))))) ? (arr_24 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) > (((/* implicit */int) (unsigned short)0))))))))));
                /* LoopSeq 2 */
                for (int i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) min(((+(888522099))), (-1))))));
                    arr_104 [i_1] [i_1] [i_1] = -1878350323;
                }
                for (short i_27 = 0; i_27 < 10; i_27 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_28 = 0; i_28 < 10; i_28 += 1) 
                    {
                        arr_112 [7LL] [i_28] [i_1] [i_27] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 1347540798U);
                        arr_113 [i_0] [i_0] [i_1] [i_27] [(short)7] = ((/* implicit */unsigned char) min((min((var_5), (((/* implicit */long long int) arr_97 [i_25] [i_25])))), (((/* implicit */long long int) (signed char)-86))));
                    }
                    arr_114 [i_1] [i_25] [i_1] [i_1] = ((/* implicit */short) (signed char)0);
                    var_58 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1067793831096097985LL)) ? ((-(((/* implicit */int) arr_110 [i_0] [i_0] [i_1] [i_1] [(signed char)6] [i_25] [i_27])))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)192)), (var_11)))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_14 [i_0] [(signed char)3] [i_0] [i_0] [i_1]))) || (((/* implicit */_Bool) arr_46 [i_0] [i_25] [i_0] [i_0])))))));
                }
            }
            for (long long int i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_30 = 0; i_30 < 10; i_30 += 4) 
                {
                    arr_119 [i_1] [i_1] [i_1] [i_30] = ((/* implicit */signed char) ((int) max((((/* implicit */long long int) arr_42 [i_0] [i_0] [i_0])), (min((3847850697826000649LL), (arr_55 [9LL] [i_1] [i_0] [i_1] [i_0]))))));
                    var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) 888522099))));
                    var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)-4)), (min((((/* implicit */unsigned int) arr_7 [i_1] [i_29])), (1347540802U))))))));
                    arr_120 [i_1] [i_29] [i_29] [1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)(-127 - 1))))) & (((/* implicit */int) arr_60 [i_1] [i_29]))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (arr_61 [i_0] [i_29] [i_1] [i_0] [i_0])))) ? (var_12) : (var_9))) : (((((/* implicit */long long int) var_10)) | (((((/* implicit */long long int) ((/* implicit */int) arr_70 [i_1] [i_1] [i_29] [i_1] [(unsigned char)2] [i_29] [i_29]))) ^ (var_12)))))));
                    arr_121 [i_1] [i_1] [2LL] [2LL] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                }
                arr_122 [8LL] [i_1] [i_29] [i_29] = ((/* implicit */short) var_0);
            }
            /* LoopSeq 3 */
            for (long long int i_31 = 3; i_31 < 8; i_31 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_32 = 2; i_32 < 6; i_32 += 4) 
                {
                    arr_128 [i_1] [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4456)) ? (((/* implicit */int) (signed char)7)) : (0)));
                    arr_129 [i_1] [i_1] [i_31] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_31 + 2] [i_31 + 2] [i_1] [i_32 + 4] [i_32 + 4])) ? (1798181961) : (888522099)));
                    arr_130 [i_1] [i_31] [i_1] [i_1] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [(signed char)3] [i_0]);
                    var_61 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -6739270314201870297LL)) ? (((/* implicit */int) arr_88 [i_1] [i_31 + 2] [i_31 + 1] [(signed char)1] [i_31 + 2])) : (((/* implicit */int) arr_88 [i_0] [i_31] [i_31 + 1] [i_31 - 3] [4U]))));
                    var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((/* implicit */_Bool) 1347540795U)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (short)-3325)))))));
                }
                var_63 = ((/* implicit */unsigned char) ((unsigned int) var_9));
            }
            /* vectorizable */
            for (long long int i_33 = 0; i_33 < 10; i_33 += 3) 
            {
                var_64 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) / (arr_50 [i_0] [i_33] [(short)8] [(unsigned char)6] [i_0])))) || (((/* implicit */_Bool) arr_56 [0] [i_0] [i_0] [i_1] [i_33]))));
                var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_37 [i_0])))))));
            }
            for (short i_34 = 0; i_34 < 10; i_34 += 2) 
            {
                var_66 = ((/* implicit */short) ((long long int) max((min((((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1])), (var_10))), (((((/* implicit */int) arr_54 [(short)0] [i_1] [i_34] [i_0])) / (((/* implicit */int) (signed char)-26)))))));
                /* LoopSeq 1 */
                for (unsigned int i_35 = 0; i_35 < 10; i_35 += 1) 
                {
                    var_67 = ((/* implicit */short) ((max((arr_6 [i_0]), (((/* implicit */unsigned int) var_15)))) - (arr_6 [i_34])));
                    var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */long long int) min((arr_6 [i_0]), (((/* implicit */unsigned int) var_3))))), (((((/* implicit */_Bool) -7190383213606889690LL)) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_6 [i_0]))))))))));
                    var_69 &= ((/* implicit */unsigned short) min((min((arr_61 [i_1] [i_1] [(short)7] [i_35] [i_35]), (arr_61 [i_35] [i_1] [i_1] [i_35] [i_0]))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (((((/* implicit */_Bool) -888522099)) ? (arr_50 [(unsigned char)2] [(unsigned char)2] [i_1] [i_34] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    var_70 *= ((/* implicit */signed char) ((unsigned char) min((((((/* implicit */long long int) 2947426506U)) ^ (arr_34 [i_34] [i_35]))), (2245375996810743031LL))));
                    arr_139 [i_34] [i_34] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_99 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32760)))))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_34])) : (((((/* implicit */_Bool) arr_103 [i_0] [i_0] [i_34] [i_35])) ? (((/* implicit */int) arr_54 [6LL] [4] [4] [6LL])) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_88 [i_0] [i_1] [i_34] [i_35] [(signed char)6]))))))));
                }
            }
            /* LoopNest 2 */
            for (long long int i_36 = 0; i_36 < 10; i_36 += 1) 
            {
                for (unsigned int i_37 = 3; i_37 < 7; i_37 += 1) 
                {
                    {
                        var_71 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (-6657344730843808376LL) : (((/* implicit */long long int) -284442563)))))))) << (((var_10) + (622588649)))));
                        var_72 = ((/* implicit */signed char) arr_70 [i_1] [i_1] [i_36] [(signed char)3] [i_37 - 2] [i_36] [i_1]);
                        arr_147 [i_1] = min((min((-2245375996810743032LL), (((/* implicit */long long int) 19U)))), (((/* implicit */long long int) min((arr_10 [i_37 - 2] [i_1] [i_1] [i_37 + 3]), (arr_10 [i_37 - 2] [i_1] [i_37] [i_37 + 3])))));
                        arr_148 [i_0] [(signed char)6] [i_36] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_44 [i_37 - 2] [i_1] [i_37 + 1])) < (arr_52 [i_0] [i_0] [1LL] [i_0])))) & (((/* implicit */int) min(((unsigned char)248), (min(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-1)))))))));
                    }
                } 
            } 
        }
        for (short i_38 = 0; i_38 < 10; i_38 += 3) 
        {
            var_73 = ((/* implicit */short) ((((((/* implicit */int) arr_149 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_39 [(short)8] [i_0] [i_0] [i_38])) - (44252)))));
            /* LoopSeq 3 */
            for (signed char i_39 = 0; i_39 < 10; i_39 += 4) 
            {
                arr_154 [i_0] [i_38] [(unsigned char)7] [i_39] = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) ((short) var_11)))), (var_8)));
                arr_155 [i_39] [i_39] [i_38] [i_0] = ((/* implicit */short) var_17);
                arr_156 [i_38] = ((/* implicit */short) min((((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)3)))), ((~(((/* implicit */int) var_14))))))), (min(((+(var_9))), (((/* implicit */long long int) min(((signed char)-44), (arr_145 [i_39] [i_38] [i_39]))))))));
            }
            for (long long int i_40 = 0; i_40 < 10; i_40 += 4) 
            {
                arr_159 [(short)8] [(unsigned char)0] = ((/* implicit */int) (short)(-32767 - 1));
                var_74 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)227)) != (((/* implicit */int) var_15)))) ? (((/* implicit */unsigned int) (-(arr_65 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) ((signed char) arr_149 [(unsigned char)9] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)0))))) : (var_0)))));
            }
            for (short i_41 = 0; i_41 < 10; i_41 += 4) 
            {
                var_75 = ((/* implicit */signed char) min((-1924242950), (((((/* implicit */_Bool) 7190383213606889690LL)) ? (((((/* implicit */_Bool) arr_107 [i_0] [i_38] [i_0])) ? (((/* implicit */int) arr_37 [i_0])) : (((/* implicit */int) arr_145 [i_0] [i_41] [i_41])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_73 [i_0] [7] [(signed char)9] [i_41] [i_41] [i_41] [i_41])) : (((/* implicit */int) (signed char)-1))))))));
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 10; i_42 += 2) 
                {
                    for (unsigned short i_43 = 0; i_43 < 10; i_43 += 4) 
                    {
                        {
                            var_76 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)12)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_15)), (((((/* implicit */int) (short)0)) % (((/* implicit */int) var_4))))))) : (arr_142 [2LL] [i_38] [i_41] [i_42])));
                            var_77 = ((((/* implicit */_Bool) min((((int) var_0)), (max((arr_52 [(signed char)1] [i_38] [i_41] [i_38]), (((/* implicit */int) arr_98 [i_38] [i_38] [i_38] [i_38]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)44)), (var_3)))) ? (((((/* implicit */long long int) arr_106 [i_42] [i_43])) - (7758647733140225903LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16792)) ? (((/* implicit */int) (short)-19121)) : (-2020424229)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_99 [i_0] [i_41] [i_41])), (arr_6 [i_38])))));
                            var_78 = ((/* implicit */short) ((((/* implicit */_Bool) arr_132 [1] [i_38] [i_41] [i_41])) ? (min((min((((/* implicit */unsigned int) arr_110 [i_43] [1] [(short)7] [i_41] [1] [i_0] [i_0])), (arr_135 [(short)6]))), (((/* implicit */unsigned int) (+(var_18)))))) : (((/* implicit */unsigned int) (((+(1798181971))) << (((((var_9) + (271764684260976546LL))) - (11LL))))))));
                            arr_167 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) -2020424243)) : (4294966784U)));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (short i_44 = 0; i_44 < 10; i_44 += 4) 
            {
                for (int i_45 = 0; i_45 < 10; i_45 += 2) 
                {
                    {
                        arr_174 [i_0] [i_0] [i_38] [i_38] [i_44] [i_45] = ((/* implicit */signed char) (+(min((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_45])) >> (((((/* implicit */int) (signed char)-70)) + (76))))), ((-(((/* implicit */int) var_15))))))));
                        var_79 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -704487611)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_80 = ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_98 [(short)5] [(short)4] [i_38] [i_38])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_38] [i_0])) + (124))))), (((((/* implicit */_Bool) (short)-27653)) ? (((/* implicit */int) (short)-21720)) : (((/* implicit */int) arr_7 [i_0] [i_0]))))));
        }
        var_81 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)16802))));
    }
    /* LoopNest 2 */
    for (short i_46 = 0; i_46 < 12; i_46 += 3) 
    {
        for (int i_47 = 1; i_47 < 9; i_47 += 2) 
        {
            {
                var_82 = ((/* implicit */long long int) max((var_82), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_175 [2LL])) : (((/* implicit */int) (short)16802)))))));
                arr_180 [i_47] [10LL] [i_46] &= ((/* implicit */unsigned short) min(((+(var_5))), (((/* implicit */long long int) arr_176 [i_46]))));
                /* LoopSeq 3 */
                for (long long int i_48 = 2; i_48 < 9; i_48 += 4) 
                {
                    arr_185 [i_46] [(short)2] [i_47] = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (short)-16792))));
                    arr_186 [i_47] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-10)) / (((/* implicit */int) arr_182 [i_47] [i_47]))))) && (((/* implicit */_Bool) arr_178 [i_47] [i_47 + 2] [i_48 + 1])))) ? (-2245375996810743057LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((9019037021564678912LL), (((/* implicit */long long int) arr_178 [i_46] [i_47] [i_46]))))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_182 [i_47] [i_48 - 2])))))));
                }
                for (signed char i_49 = 1; i_49 < 10; i_49 += 1) /* same iter space */
                {
                    arr_189 [i_47] [i_47] [i_47] [8LL] = ((/* implicit */unsigned char) var_11);
                    arr_190 [i_47] = ((/* implicit */signed char) arr_176 [i_46]);
                    arr_191 [i_46] [i_47] [i_47] [i_49] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_187 [i_47 + 1] [i_47 + 1] [i_47 - 1] [i_47])) ? (var_0) : (((/* implicit */unsigned int) -1798181971))))));
                    var_83 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (signed char)69)))) : (((/* implicit */int) min(((signed char)-70), (arr_183 [(short)2] [i_47] [i_49 + 2]))))))));
                    var_84 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)212)) - (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */int) arr_179 [i_49] [i_47] [i_46])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_179 [i_47 + 2] [i_47 + 2] [i_46])) : (arr_187 [i_46] [i_47] [(short)6] [2]))))), (((((/* implicit */int) ((unsigned short) 2020424228))) + (1181024937)))));
                }
                for (signed char i_50 = 1; i_50 < 10; i_50 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_51 = 0; i_51 < 12; i_51 += 3) 
                    {
                        for (unsigned short i_52 = 0; i_52 < 12; i_52 += 4) 
                        {
                            {
                                arr_200 [i_46] [i_46] [i_47 + 2] [i_46] [i_52] [i_46] [i_52] &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (short)403)) : (((/* implicit */int) (short)-17939))))) || (((/* implicit */_Bool) (short)-30682)))));
                                arr_201 [i_50] [i_46] [i_47] [10LL] = ((/* implicit */short) (-(((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    arr_202 [i_47] = ((/* implicit */short) (-(arr_198 [i_47] [(unsigned char)7])));
                    var_85 = ((/* implicit */short) max((var_85), (((/* implicit */short) arr_194 [i_46] [i_46] [i_46] [(unsigned char)6]))));
                }
            }
        } 
    } 
    var_86 = ((/* implicit */long long int) -1798181971);
}
