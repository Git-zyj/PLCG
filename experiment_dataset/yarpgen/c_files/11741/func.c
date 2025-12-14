/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11741
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
    var_13 *= var_10;
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))));
            var_15 |= ((/* implicit */unsigned short) ((signed char) (signed char)-6));
            /* LoopSeq 2 */
            for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_2 - 4]));
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)125))));
                arr_9 [i_0] [2ULL] [i_2] = ((((/* implicit */_Bool) (unsigned short)51868)) ? (((((/* implicit */_Bool) 12588173332821274701ULL)) ? (17508389107586337597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))));
                var_17 += arr_7 [(signed char)13] [i_0] [i_1 + 3] [(signed char)13];
            }
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_18 = ((/* implicit */signed char) arr_10 [i_1 - 1] [i_0] [i_1 - 1]);
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2]))));
            }
        }
        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_4 - 1] [(signed char)15] [i_0]))));
            var_21 = ((unsigned long long int) 12588173332821274701ULL);
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) arr_2 [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) var_4))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_18 [i_5] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) && (((((/* implicit */_Bool) (unsigned short)13668)) || (((/* implicit */_Bool) 5858570740888276911ULL))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_5])) >= (((/* implicit */int) (signed char)-70))));
        }
    }
    for (unsigned short i_6 = 4; i_6 < 21; i_6 += 4) 
    {
        var_24 = arr_19 [i_6];
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)40627)))))));
    }
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_24 [10ULL] = ((/* implicit */signed char) (unsigned short)55898);
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            var_26 += ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_7]))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 17508389107586337597ULL))) + (((/* implicit */int) (signed char)64)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_9 = 4; i_9 < 17; i_9 += 4) 
            {
                var_28 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_26 [i_7])) + (2147483647))) << (((((/* implicit */int) (signed char)88)) - (88)))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_35 [i_7] [i_7] [7ULL] [i_7] [i_7] = ((/* implicit */signed char) (unsigned short)4);
                            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (3605374303764046727ULL) : (arr_25 [i_11 - 1])));
                            var_30 = (signed char)-119;
                        }
                    } 
                } 
                arr_36 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (-(8635182334010128422ULL)));
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                arr_41 [i_12] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)49))));
                arr_42 [i_8] [i_8] = (+((~(arr_20 [i_12] [i_12]))));
                arr_43 [i_7] = ((/* implicit */signed char) arr_20 [i_12] [i_8]);
            }
            for (signed char i_13 = 2; i_13 < 17; i_13 += 4) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) arr_19 [21ULL])) ? (11955742571720741809ULL) : (18446744073709551615ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1152921504606846968ULL))))))));
                var_32 = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
                var_33 = ((/* implicit */unsigned long long int) (((((~(((((/* implicit */int) (unsigned short)24441)) * (((/* implicit */int) (signed char)82)))))) + (2147483647))) >> (((((/* implicit */int) max(((unsigned short)39744), (((/* implicit */unsigned short) (signed char)-62))))) - (65460)))));
            }
            for (signed char i_14 = 2; i_14 < 17; i_14 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                {
                    var_34 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((unsigned short)3770), (arr_37 [i_14 + 1] [i_14 - 2] [i_14 - 1] [i_14 - 1])))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 29ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)63))))) / (((((/* implicit */_Bool) arr_40 [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_7] [i_8] [i_14 - 2] [i_15]))) : (arr_50 [10ULL] [12ULL] [i_14 - 1] [10ULL])))))));
                    var_35 = var_12;
                    arr_51 [(unsigned short)8] [i_7] = ((signed char) var_7);
                    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_15]))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                {
                    arr_55 [i_7] [i_8] [(signed char)9] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49152)) + (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (min((min((((/* implicit */unsigned long long int) (signed char)-25)), (var_3))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))))));
                    var_37 += ((/* implicit */signed char) ((arr_45 [i_7] [i_14 - 2] [(unsigned short)17] [i_7]) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_52 [i_7] [6ULL] [i_7] [6ULL])))) : (((((/* implicit */_Bool) var_2)) ? (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39739))))))) - (24731ULL)))));
                    arr_56 [i_7] [15ULL] [i_14 - 1] [i_16] = var_2;
                    var_38 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) arr_34 [8ULL] [i_14 - 2] [i_14 - 2] [i_14] [9ULL]))) + (2147483647))) << (((min((((/* implicit */int) arr_48 [i_8] [i_8] [i_8] [i_14 + 1])), (((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned short)5)))))) - (127)))));
                }
                arr_57 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) var_12);
                var_39 = ((/* implicit */unsigned short) ((signed char) max((arr_34 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 2] [i_14 - 1]), (arr_34 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
                var_40 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_7] [i_7] [i_14 - 2] [i_8])) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (signed char)121)))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                var_41 = ((/* implicit */signed char) min((((/* implicit */int) arr_23 [i_7])), (((((/* implicit */int) (signed char)-25)) + (((/* implicit */int) arr_23 [i_8]))))));
                arr_61 [i_7] [i_8] [i_7] [(signed char)2] = max((((/* implicit */unsigned short) ((signed char) arr_39 [(signed char)10] [i_8] [i_8] [(signed char)3]))), ((unsigned short)61318));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_18 = 1; i_18 < 16; i_18 += 2) 
                {
                    arr_64 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_18 + 1] [i_18 + 1] [i_18 + 1] [7ULL] [i_18 - 1])) > (((/* implicit */int) arr_34 [i_18 + 1] [(signed char)3] [(signed char)3] [i_18 + 2] [(signed char)3]))));
                    var_42 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-107))));
                }
                for (signed char i_19 = 1; i_19 < 15; i_19 += 4) 
                {
                    arr_67 [i_7] [i_7] [i_7] [(signed char)11] = 11801440372980490375ULL;
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_34 [i_8] [(unsigned short)9] [(signed char)14] [(signed char)0] [(signed char)0])) : (((/* implicit */int) var_5))))))) / (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (32767ULL))))))));
                }
                for (signed char i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    var_44 = ((/* implicit */unsigned long long int) (+((((~(((/* implicit */int) (unsigned short)65386)))) + (((/* implicit */int) arr_38 [i_7]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 1; i_21 < 17; i_21 += 2) 
                    {
                        arr_74 [(signed char)5] [(unsigned short)10] [1ULL] [i_21] [(unsigned short)9] = min((((/* implicit */unsigned long long int) (unsigned short)61543)), (18446744073709551613ULL));
                        arr_75 [i_7] [14ULL] [i_21] [(unsigned short)3] [i_21] = ((((/* implicit */_Bool) (signed char)3)) ? (((((/* implicit */_Bool) arr_40 [i_21 - 1] [12ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_40 [i_21 + 1] [i_21 + 1]))) : (((((/* implicit */_Bool) arr_40 [i_21 - 1] [i_21 - 1])) ? (arr_40 [i_21 + 1] [(unsigned short)15]) : (arr_40 [i_21 + 1] [i_8]))));
                    }
                    for (signed char i_22 = 1; i_22 < 17; i_22 += 4) 
                    {
                        arr_79 [2ULL] [(unsigned short)10] [i_8] [(unsigned short)1] [i_8] [(unsigned short)5] [i_22 - 1] = min((((/* implicit */unsigned long long int) max(((signed char)-115), ((signed char)-24)))), (arr_49 [i_22] [(signed char)0] [i_17] [i_20] [i_22 - 1]));
                        var_45 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_73 [i_20] [i_20] [i_7] [12ULL] [i_22])))));
                    }
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((min((arr_50 [i_7] [i_8] [i_8] [i_20]), (arr_45 [i_7] [i_7] [i_7] [i_7]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((signed char)127), (arr_62 [i_7] [i_8] [i_17] [i_20]))), ((signed char)122))))))))));
                    arr_80 [i_7] [(unsigned short)7] [i_17] [i_20] = ((/* implicit */signed char) min((((((/* implicit */int) arr_29 [i_17] [i_8] [i_7])) << (((((/* implicit */int) arr_29 [i_7] [i_8] [i_17])) - (61594))))), (((((/* implicit */int) arr_29 [i_7] [i_7] [i_20])) ^ (((/* implicit */int) arr_29 [i_7] [i_7] [i_7]))))));
                }
                for (signed char i_23 = 3; i_23 < 17; i_23 += 4) 
                {
                    var_47 = max((min((18446744073709551615ULL), (18446744073709551615ULL))), (((((/* implicit */_Bool) arr_32 [i_23 - 2] [i_23 - 1] [6ULL] [i_23 - 3] [i_23 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_23 - 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 3; i_24 < 17; i_24 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7168)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)39756))));
                        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)39756)))));
                        var_50 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_63 [i_23] [i_23 - 2] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33055))) : (arr_83 [i_7] [i_23 - 1] [i_7] [i_23])))));
                    }
                }
                arr_86 [i_7] [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_48 [i_7] [(signed char)3] [(signed char)8] [i_7])))) ? (((((/* implicit */_Bool) arr_29 [i_7] [(unsigned short)9] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_52 [i_7] [i_7] [i_7] [i_17]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)1022)))))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_44 [i_7] [i_17] [i_17])), (var_7))))) : ((~(((/* implicit */int) arr_54 [i_7] [i_7]))))));
            }
            var_51 = ((/* implicit */signed char) 1ULL);
        }
    }
    for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 3) 
    {
        var_52 = ((/* implicit */unsigned long long int) (signed char)-100);
        arr_91 [i_25] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (signed char)-110)), (1197487216287089566ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_25] [i_25] [i_25] [i_25]))) / (arr_50 [i_25] [i_25] [i_25] [i_25])))));
        arr_92 [i_25] [(unsigned short)4] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) + (arr_49 [i_25] [i_25] [i_25] [i_25] [i_25]))) | (arr_27 [i_25])));
        arr_93 [i_25] [i_25] = ((/* implicit */unsigned short) (signed char)-110);
    }
    var_53 = min((var_0), (((unsigned long long int) ((((/* implicit */int) (signed char)-119)) ^ (((/* implicit */int) var_4))))));
    var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) var_2))));
}
