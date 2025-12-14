/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151298
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1349044543390086523LL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned short)12)))) < (((/* implicit */int) arr_1 [i_0] [7ULL])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((max(((-(((/* implicit */int) (unsigned char)8)))), (((/* implicit */int) arr_1 [i_0] [i_0])))) + (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */unsigned char) (((+(arr_0 [i_1 - 2]))) - (-1967825369)));
                    arr_16 [i_1] [i_1] [i_3] = max((((/* implicit */int) (unsigned short)57495)), (max((arr_8 [i_2]), (((/* implicit */int) arr_3 [i_2])))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) arr_13 [7LL] [i_1] [(unsigned short)12]);
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */int) ((arr_7 [(unsigned char)11]) * (((/* implicit */unsigned long long int) ((arr_11 [i_1 - 2] [i_4] [i_1] [i_4 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))))))));
            arr_20 [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((1738764953) > (((/* implicit */int) var_1))))), (((unsigned short) (unsigned char)17))))) << (((((/* implicit */int) (unsigned char)58)) - (54)))));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [0ULL] [i_1] [i_4])))))));
        }
        for (signed char i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_5 - 1])) ? (-1052682147) : (((/* implicit */int) arr_2 [i_1 - 1] [i_5 + 1]))))) + (((((/* implicit */_Bool) -1349044543390086523LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_5 + 1]))) : (var_2)))));
            var_23 = ((/* implicit */signed char) var_13);
        }
    }
    for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 1) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (arr_23 [i_6 - 3]) : (((/* implicit */unsigned long long int) max((arr_24 [i_6] [i_6]), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-55))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            arr_28 [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_24 [i_6] [i_6]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_6 + 2] [i_6 - 3] [i_8 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (arr_30 [i_6 - 2] [i_6 - 1] [i_8 - 1])));
                var_26 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_6 + 1] [i_8 - 1] [i_8 - 2]))));
                arr_33 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */int) ((unsigned long long int) arr_30 [i_6 - 2] [i_6 + 2] [i_8 + 2]));
                var_27 = ((/* implicit */int) arr_29 [i_6 - 3] [i_6]);
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_39 [i_6] [i_6] [i_8] [i_8] [i_9] [i_6] = ((/* implicit */signed char) ((unsigned char) var_5));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)17)))))));
                            var_29 = ((/* implicit */int) max((var_29), ((((+(arr_37 [6] [i_7] [i_7] [i_9] [i_7]))) << ((((-(((/* implicit */int) (signed char)-60)))) - (60)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_11 = 2; i_11 < 19; i_11 += 3) 
            {
                arr_43 [i_7] [i_6] = ((/* implicit */unsigned long long int) var_12);
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_41 [i_6] [i_6 + 2]))));
                    var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_27 [i_6 - 1] [i_6 + 1] [i_6 - 2]))));
                    arr_46 [i_6] = ((/* implicit */unsigned long long int) 1349044543390086518LL);
                }
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                    arr_50 [i_6] [i_6] [i_11] [i_6] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) 1967825368)) != (var_5)));
                }
                var_33 = (unsigned char)160;
                var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95)))))) ^ (-1349044543390086524LL)));
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_15 = 1; i_15 < 17; i_15 += 2) 
                {
                    for (signed char i_16 = 4; i_16 < 18; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (!(((((var_7) & (((/* implicit */unsigned long long int) var_16)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1995715631861592010LL) < (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_6] [i_7] [i_6] [i_7]))))))))))))));
                            var_36 = ((/* implicit */unsigned long long int) -1967825375);
                            var_37 |= ((/* implicit */unsigned long long int) max(((-((-(1700894550))))), (((/* implicit */int) (unsigned char)21))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_17 = 2; i_17 < 20; i_17 += 3) 
                {
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned long long int) 5072632229831272824LL)) : (((((/* implicit */_Bool) -1349044543390086520LL)) ? (((/* implicit */unsigned long long int) 916207964)) : (min((((/* implicit */unsigned long long int) (unsigned char)73)), (2ULL)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
                    {
                        arr_64 [i_6] [i_7] [i_7] [i_14] [i_6] [i_6] = ((/* implicit */signed char) var_6);
                        arr_65 [i_6] [i_6] = ((/* implicit */unsigned char) arr_63 [i_6] [i_6] [i_6] [i_18]);
                        var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */int) arr_26 [i_18])) - (((((/* implicit */_Bool) arr_24 [i_14] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (signed char)-58))))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */int) (!(((/* implicit */_Bool) ((8407734194632146927ULL) | (var_7)))))))));
                        arr_68 [i_6] [i_6] [i_7] [i_6] [i_17] [i_6] [i_6] = ((/* implicit */unsigned char) min((((((-2045713351) + (2147483647))) << (((((((/* implicit */int) (short)-18687)) + (18707))) - (18))))), (373834050)));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_49 [i_6] [i_6 + 2] [i_6] [i_17 - 2] [i_17 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_49 [(unsigned char)9] [i_6 + 2] [i_14] [i_17 - 2] [i_17 + 1])))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (short)-18676))))) : (min((arr_48 [i_6] [i_6] [i_17] [i_17]), (((/* implicit */int) (unsigned char)128))))))))))));
                    }
                    for (int i_20 = 4; i_20 < 19; i_20 += 2) 
                    {
                        var_42 = max((((((/* implicit */long long int) max((402653184), (arr_63 [i_6] [i_6] [i_6] [8ULL])))) ^ (max((((/* implicit */long long int) arr_24 [i_6] [i_6])), (var_17))))), (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_6] [i_6]))) <= (4398046511103ULL))))))));
                        arr_72 [i_6] [i_6] [i_14] [15LL] [i_6] = (((~(max((((/* implicit */unsigned long long int) (signed char)72)), (1948359511221215937ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                        var_43 = ((/* implicit */unsigned short) (unsigned char)6);
                    }
                    for (long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        var_44 = ((/* implicit */int) (unsigned short)19435);
                        var_45 ^= ((((/* implicit */_Bool) -2099371792)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned short)22668)));
                    }
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) -1566177103))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)24))))))))) : ((+(-7659816490975838216LL)))));
                }
                arr_75 [i_6] = ((/* implicit */unsigned short) var_12);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_22 = 0; i_22 < 21; i_22 += 2) 
                {
                    arr_78 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(1800678254)));
                    arr_79 [5] [17] [i_6] [17] = ((/* implicit */unsigned short) -16);
                    var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_6 - 2] [(signed char)0] [i_22]))));
                }
                for (signed char i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    arr_82 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_70 [i_6 - 2] [i_6 + 1])) ? (arr_70 [i_6 + 2] [i_6 - 2]) : (((/* implicit */unsigned long long int) 1073479680)))) & (((/* implicit */unsigned long long int) min((5424442446891625797LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))))))));
                    arr_83 [i_6] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_34 [i_6] [i_23])), (1566177101)))) ? (((((/* implicit */int) (unsigned char)126)) / (((/* implicit */int) (unsigned short)65523)))) : (((/* implicit */int) arr_51 [i_6 - 2] [i_6]))))) ? (((/* implicit */long long int) min((max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)4549)))), (((/* implicit */int) arr_60 [i_6] [i_7] [i_7]))))) : (-2055019361811234455LL)));
                    var_48 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)33))));
                    arr_84 [i_6] [i_6] [i_6] [3ULL] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (+(var_15))))), (((((/* implicit */_Bool) max(((unsigned short)12), (((/* implicit */unsigned short) arr_76 [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? ((+(1005885824))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) > (arr_49 [i_6] [i_6] [i_6] [i_14] [i_6]))))))));
                }
            }
            arr_85 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_51 [i_6 + 2] [i_6])) <= (var_4))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_6 + 1] [i_6]))) : (var_16)))));
            var_49 = ((/* implicit */long long int) (unsigned short)46096);
        }
        for (unsigned short i_24 = 3; i_24 < 19; i_24 += 2) 
        {
            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
            arr_89 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) var_1)), (arr_23 [i_6])))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 2) 
        {
            var_51 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(-1566177126)))) & (var_7))))));
            /* LoopSeq 1 */
            for (long long int i_26 = 3; i_26 < 20; i_26 += 2) 
            {
                arr_95 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */_Bool) arr_91 [i_26])) ? (-2055019361811234459LL) : (var_16)))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (unsigned char)222)))))))))));
                arr_96 [i_6] [i_6] [i_26] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_41 [i_6] [i_6])))), ((+((+(-2141097295)))))));
            }
            var_52 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (max((max((((/* implicit */int) (unsigned char)118)), (arr_47 [i_6] [(unsigned char)10]))), (((/* implicit */int) (unsigned char)231))))));
            arr_97 [(unsigned short)17] [i_6] = ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (signed char)21))));
            var_53 ^= ((/* implicit */unsigned long long int) (short)0);
        }
    }
    for (unsigned char i_27 = 0; i_27 < 12; i_27 += 2) 
    {
        var_54 = ((/* implicit */long long int) max((max((-1766707123), (-1566177103))), ((-(((/* implicit */int) (signed char)-27))))));
        var_55 |= ((/* implicit */signed char) min((((/* implicit */unsigned char) arr_62 [i_27])), ((unsigned char)0)));
    }
    var_56 = ((((/* implicit */_Bool) (unsigned char)4)) ? (max((((/* implicit */unsigned long long int) ((unsigned char) var_11))), (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((~(var_17))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_57 = ((/* implicit */long long int) var_9);
}
