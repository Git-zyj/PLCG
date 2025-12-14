/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160938
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) (short)8996)) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) + (2284609676U)))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / ((-(((((/* implicit */int) var_4)) << (((((/* implicit */int) (signed char)79)) - (66)))))))));
    var_15 = ((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-79), ((signed char)-79))))) : (max((2941954198049413852ULL), (((/* implicit */unsigned long long int) (signed char)79)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (-(15504789875660137764ULL)));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_1] = ((unsigned int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
            var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 0U)))) ? (((((/* implicit */long long int) var_10)) | (9223372036854775807LL))) : (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_1])), (2147483647)))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_4] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28945))) <= (2941954198049413852ULL))) ? (((((/* implicit */_Bool) (short)-28945)) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1] [i_1] [i_1 + 3])) : (((/* implicit */int) (short)-28945)))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)11109)) | (((/* implicit */int) arr_12 [i_0] [i_4] [i_2] [i_3]))))) >= (max((-9100218995603391243LL), (((/* implicit */long long int) var_4)))))))));
                            var_18 = ((/* implicit */short) 802818447U);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_1 - 1] [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3802154394278389395LL)) * (15504789875660137763ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_8 [i_2] [i_2] [i_1 + 1] [i_4]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_1] [i_1] = ((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1]);
                            var_20 ^= ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22696))) < (1085970038U)))) & (((((/* implicit */_Bool) (short)-10423)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))));
                            arr_26 [i_6] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((unsigned long long int) arr_9 [i_6] [i_5] [i_1] [i_1 + 2])) << (((((/* implicit */int) arr_24 [i_7] [i_7] [i_7 - 1] [i_1] [i_7])) + (26205)))))) : (((/* implicit */unsigned int) ((((unsigned long long int) arr_9 [i_6] [i_5] [i_1] [i_1 + 2])) << (((((((/* implicit */int) arr_24 [i_7] [i_7] [i_7 - 1] [i_1] [i_7])) + (26205))) - (21290))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            arr_30 [i_0] [i_8] = ((/* implicit */long long int) ((signed char) 4294967295U));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((15504789875660137764ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((long long int) (-(18269768282210417676ULL)))) : (max((9223372036854775807LL), (((/* implicit */long long int) (-(2028462114U))))))));
            var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-29010)), (1085970038U)));
            arr_31 [i_0] = ((unsigned char) (-(((/* implicit */int) var_7))));
        }
        /* LoopSeq 3 */
        for (long long int i_9 = 1; i_9 < 22; i_9 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_9] [i_9 - 1])) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_9 - 1])) : (((/* implicit */int) (short)-3815))))) : (max((arr_16 [i_0] [i_9 + 1] [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) ((1697375189) + (((/* implicit */int) (unsigned short)60222)))))))));
            var_25 -= ((/* implicit */short) max((((/* implicit */int) (!(arr_18 [i_9 + 1] [(short)12] [i_0])))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)79)) == (((/* implicit */int) (short)-22697))))) : (((/* implicit */int) max(((unsigned short)3979), ((unsigned short)37307))))))));
            arr_36 [i_0] [i_9] = ((/* implicit */unsigned long long int) 1642830685U);
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_10]))));
            arr_39 [i_0] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_0] [i_10] [i_0])) ^ ((-(((/* implicit */int) (unsigned short)0))))))), (max((((/* implicit */long long int) ((((/* implicit */int) (short)-29010)) == (((/* implicit */int) (unsigned short)65535))))), (arr_32 [i_0] [i_10])))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                var_28 = ((/* implicit */long long int) arr_43 [i_0] [i_11] [i_11]);
            }
            for (short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_11] [i_11] [i_13])) ? (((((/* implicit */_Bool) -973334661225275027LL)) ? (arr_42 [i_0] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11]))))) : (((/* implicit */unsigned long long int) 957623982U)))))));
                var_30 ^= ((/* implicit */unsigned int) (~(((unsigned long long int) (unsigned short)5313))));
            }
            for (short i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
            {
                arr_48 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_14] [i_14] [i_14] [i_14]))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (short)25204)) - (((/* implicit */int) (unsigned short)60282))))) - (((long long int) (signed char)-119))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 986492449))));
                    var_33 = ((/* implicit */unsigned short) arr_37 [i_11] [i_11] [i_11]);
                    var_34 = ((unsigned int) arr_38 [i_0] [i_11] [i_15]);
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_35 = (_Bool)1;
                        arr_59 [i_0] [i_15] [i_15] [i_16] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (short)25238))))))));
                        var_36 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3208997258U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63901))) : (-6845508843806349568LL)));
                    }
                    for (short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_37 |= 5855415601503792894LL;
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0] [i_11] [i_16])) ? (((/* implicit */int) arr_43 [i_11] [i_11] [i_18])) : (((/* implicit */int) arr_43 [i_15] [i_16] [i_18]))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-5855415601503792895LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) + (460116896063879044ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    }
                }
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    arr_64 [i_0] [i_0] [i_15] [i_11] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_11])) / (((/* implicit */int) arr_2 [i_0]))));
                    arr_65 [i_11] &= ((((/* implicit */int) arr_15 [i_0] [i_11] [i_0] [i_11] [i_0] [i_15] [i_19])) == (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_11] [i_19] [i_0] [i_0])));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_70 [i_0] [i_0] [i_0] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2941954198049413852ULL))));
                    var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (unsigned short)5565)))))));
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32260))) + (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_11] [i_15] [i_15]))) / (-5855415601503792895LL))))))));
                }
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((arr_55 [i_0] [i_15] [i_15] [i_15] [i_11] [i_15]) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_55 [i_0] [i_0] [i_11] [i_11] [i_15] [i_15])))))));
            }
            for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_11] [i_21] [i_21] [i_21])) ? (957623982U) : (2465917634U)))) ? (arr_42 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_21] [i_11])))));
                /* LoopSeq 1 */
                for (unsigned short i_22 = 1; i_22 < 22; i_22 += 4) 
                {
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45835)) & (var_3)))) ? (((unsigned int) -597542549)) : (arr_0 [i_0] [i_22 + 2])))));
                    /* LoopSeq 4 */
                    for (unsigned short i_23 = 3; i_23 < 23; i_23 += 3) 
                    {
                        arr_78 [i_22] [i_0] [i_22] [i_22] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_22 - 1])) & (((/* implicit */int) arr_28 [i_22 - 1]))));
                        arr_79 [i_22] [i_22] [i_22] [i_22 - 1] [i_22] = ((((/* implicit */_Bool) arr_66 [i_23 - 2] [i_22 - 1] [i_23 + 1] [i_11] [i_21])) ? (((/* implicit */int) arr_20 [i_23 - 2] [i_22 - 1] [i_23 - 2] [i_22])) : (((/* implicit */int) arr_20 [i_23 - 3] [i_22 + 1] [i_21] [i_22 + 1])));
                        arr_80 [i_0] [i_11] [i_21] [i_22] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_76 [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_22]))) : (arr_66 [i_0] [i_23 + 1] [i_22 + 1] [i_22 + 1] [i_23])));
                        var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_11] [i_21] [i_22])))))));
                    }
                    for (long long int i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        arr_83 [i_0] [i_0] [i_22] [i_0] [i_0] [i_22] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_55 [i_0] [i_21] [i_21] [i_22] [i_24] [i_11]))) ^ (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)140))))));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43949))) | (549187491U)));
                        var_47 = ((/* implicit */signed char) (unsigned short)45835);
                    }
                    for (unsigned int i_25 = 1; i_25 < 23; i_25 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5565)) ? (((/* implicit */unsigned long long int) arr_27 [i_22])) : (arr_63 [i_0] [i_11] [i_11] [i_11] [i_22 - 1] [i_25]))))));
                        var_49 = ((/* implicit */unsigned int) arr_15 [i_0] [i_11] [i_11] [i_21] [i_22] [i_25] [i_25]);
                        var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45835)) % (((/* implicit */int) arr_84 [i_0] [i_11] [i_22] [i_22 + 2] [i_11] [i_11])))))));
                    }
                    for (unsigned short i_26 = 3; i_26 < 22; i_26 += 2) 
                    {
                        arr_88 [i_21] [i_22] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_22] [i_22])) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_21] [i_22]))));
                        var_51 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                        arr_89 [i_0] [i_21] [i_0] [i_21] [i_22] [i_22] = ((/* implicit */long long int) ((unsigned int) arr_77 [i_0] [i_0] [i_11] [i_11] [i_21] [i_22] [i_11]));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_27 = 1; i_27 < 23; i_27 += 2) 
                    {
                        var_52 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)11373)))) / (((/* implicit */int) ((6476692314170181417LL) >= (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        arr_92 [i_0] [i_11] [i_21] [i_22] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_4 [i_22 - 1] [i_27 + 1]))));
                        var_53 = ((/* implicit */unsigned int) arr_62 [i_21] [i_21] [i_0] [i_22]);
                    }
                    for (int i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        arr_95 [i_0] [i_11] [i_21] [i_0] [i_22] [i_0] = (((!(((/* implicit */_Bool) arr_2 [i_11])))) ? (((/* implicit */int) ((((/* implicit */int) (short)15997)) <= (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))));
                        arr_96 [i_22 + 1] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_22])) ? (((/* implicit */int) (short)20342)) : (((/* implicit */int) arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (unsigned int i_29 = 3; i_29 < 23; i_29 += 2) 
                    {
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48680)) ? (((/* implicit */int) arr_13 [i_22 + 2] [i_22 + 2] [i_29] [i_29 - 1])) : (((/* implicit */int) arr_13 [i_22 - 1] [i_22 - 1] [i_22] [i_29 - 2]))));
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1762673312U)) ? (((((/* implicit */_Bool) 3651084071U)) ? (arr_44 [i_21] [i_11] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14767))))) : (((/* implicit */long long int) ((/* implicit */int) arr_86 [i_22])))));
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 2) 
                    {
                        var_56 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_37 [i_11] [i_11] [i_21]))));
                        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-5314410175661930468LL) | (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_0] [i_11] [i_11] [i_11] [i_0] [i_30])))))) ? (((/* implicit */unsigned int) (+(var_3)))) : (arr_99 [i_0] [i_0] [i_22 + 1] [i_21] [i_30] [i_0])));
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_22 + 1] [i_21] [i_0])) ? (((/* implicit */int) arr_10 [i_21] [i_22 - 1] [i_21] [i_22])) : (((/* implicit */int) arr_10 [i_0] [i_22 - 1] [i_21] [i_30]))));
                    }
                    arr_103 [i_22] [i_11] [i_21] [i_22] = ((/* implicit */unsigned int) var_4);
                }
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                var_59 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) >= (9040843570167741173LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned short)59970)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 4063715750U)) ? (arr_66 [i_0] [i_11] [i_31] [i_0] [i_31]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47507)))))));
                arr_107 [i_31] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)5565))));
            }
        }
    }
    var_60 = ((/* implicit */_Bool) var_5);
}
