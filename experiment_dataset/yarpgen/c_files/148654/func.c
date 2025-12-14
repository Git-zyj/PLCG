/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148654
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) min(((+((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) != (((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5))))))));
            var_13 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((_Bool) var_9))), (((unsigned short) min((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)242)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((((_Bool)1) && ((_Bool)1)))))) * (((((/* implicit */_Bool) min((15644548418406543807ULL), (9746567867832961948ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_3 [i_0])))))));
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_16 = ((/* implicit */int) 10066969056134656157ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : ((+(var_2)))))))))));
                            var_18 = ((/* implicit */int) min(((+(var_2))), (arr_18 [i_5] [i_2] [i_3] [i_2] [i_2] [(_Bool)1] [i_5])));
                            var_19 = ((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_4] [i_5]);
                            var_20 -= arr_10 [i_0] [i_4] [i_4] [i_4];
                            arr_20 [2ULL] [i_4] [i_5] [i_5] [(unsigned char)9] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) != (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_6))))))), (min((((((/* implicit */int) arr_4 [i_3])) <= (((/* implicit */int) var_6)))), (arr_0 [i_3 + 2])))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
        {
            arr_23 [(unsigned short)18] [i_6] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_12 [(_Bool)1] [i_6] [(unsigned short)9] [(_Bool)1]))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) var_7));
                    var_23 *= ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_15 [(unsigned short)2] [(_Bool)1] [(_Bool)1] [(_Bool)1])));
                    arr_29 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                }
            }
        }
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
        {
            arr_32 [16ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_25 [i_0] [i_0] [i_9]))) ? (((/* implicit */int) (!(arr_25 [i_0] [i_9] [i_9])))) : (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_9]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)53241)))))));
                var_25 += ((/* implicit */unsigned long long int) arr_24 [i_0] [1] [i_0]);
            }
            /* vectorizable */
            for (unsigned long long int i_11 = 3; i_11 < 19; i_11 += 3) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-73)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (var_10))))));
                var_27 = ((/* implicit */unsigned long long int) var_7);
            }
        }
        var_28 = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 2; i_15 < 24; i_15 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6))))) / (((((/* implicit */_Bool) (unsigned char)13)) ? (1152921504606846720ULL) : (11ULL)))))));
                        arr_49 [i_15] |= ((/* implicit */int) var_2);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (4441570633223570469ULL)))) ^ (((((/* implicit */_Bool) -1067909267)) ? (arr_45 [(unsigned short)6] [i_13]) : (((/* implicit */int) (unsigned char)128))))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_53 [i_16] [i_13] [i_14] [i_16] [i_12] [i_13] = ((unsigned long long int) (-(((/* implicit */int) var_7))));
                        var_31 = ((/* implicit */signed char) arr_52 [i_12] [i_12]);
                        var_32 += ((/* implicit */unsigned long long int) ((var_8) ? (arr_38 [i_14] [i_14]) : (arr_38 [i_14] [i_14])));
                        var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_3)))) ? (((/* implicit */int) arr_40 [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71)))))));
                    }
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 14266656225763726734ULL))))) : (((((/* implicit */_Bool) -1388373624)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64406))))));
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (arr_51 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) == (((((/* implicit */_Bool) 6082780831235869257ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66)))))));
        var_36 -= 0ULL;
        /* LoopSeq 3 */
        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
        {
            var_37 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10066969056134656168ULL)) ? (10497412948498067547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 11393372340477886896ULL)) ? (18446744073709551615ULL) : (18446744073709551601ULL))))))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((((/* implicit */int) var_12)) % (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    {
                        arr_66 [i_12 - 1] [i_20] [i_12] [i_20] [i_19] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) 4194303)) : (var_11)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) / (6320847576920491345ULL))) : (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [3ULL] [i_12 - 1] [(signed char)15] [(signed char)15] [i_20]))))));
                        var_40 = (+(arr_57 [i_12 - 1] [i_12] [i_12 - 1]));
                        /* LoopSeq 3 */
                        for (signed char i_21 = 0; i_21 < 25; i_21 += 1) 
                        {
                            var_41 *= ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)204))));
                            var_42 = ((/* implicit */_Bool) ((arr_57 [i_12 - 1] [i_12] [i_12 - 1]) - (var_11)));
                        }
                        for (signed char i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            arr_72 [i_12] [i_20] [i_12] [0ULL] [0ULL] [i_12] = ((/* implicit */unsigned char) var_0);
                            arr_73 [i_12] [i_18] [i_19] [i_12] [i_22] = ((/* implicit */unsigned long long int) (((+(18386790173367246264ULL))) > (arr_60 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])));
                            arr_74 [i_22] [i_22] [i_20] [i_12] [i_18] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28337)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_46 [i_18] [i_19] [4ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_68 [i_22] [i_22] [i_22] [i_22] [i_22] [(_Bool)1]))))) : (arr_60 [i_18] [i_19] [i_20] [i_19])));
                            var_43 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_69 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_20]))));
                        }
                        for (unsigned long long int i_23 = 4; i_23 < 23; i_23 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned short) ((signed char) 0));
                            var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1111490432)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97)))))) ? ((+(var_0))) : (((((/* implicit */_Bool) arr_75 [i_19] [(_Bool)1] [i_19] [i_19])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_12] [i_12]))))));
                            var_46 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                            var_47 += ((/* implicit */unsigned long long int) (unsigned short)12312);
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            var_48 += ((/* implicit */unsigned long long int) var_12);
            var_49 = (((((_Bool)0) && (((/* implicit */_Bool) 140728898420736ULL)))) ? (var_3) : (((((/* implicit */_Bool) (signed char)-44)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9))))))))));
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_12 - 1] [i_24])) ? (arr_38 [i_12 - 1] [i_24]) : (arr_38 [i_12 - 1] [i_24]))))));
                var_52 = ((/* implicit */unsigned long long int) max((var_52), (10127820912408660452ULL)));
            }
            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_82 [i_12] [i_24])) ? (((/* implicit */int) arr_75 [i_12] [i_12 - 1] [i_24] [(_Bool)1])) : (((/* implicit */int) arr_82 [(unsigned char)16] [i_12 - 1]))));
        }
        arr_83 [(signed char)4] |= ((((/* implicit */_Bool) arr_60 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])) ? (arr_62 [i_12] [i_12] [i_12] [(_Bool)1] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 11517018717906261574ULL)))));
    }
    for (unsigned long long int i_26 = 3; i_26 < 19; i_26 += 3) 
    {
        var_54 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)56))))) * (min((var_0), (((/* implicit */unsigned long long int) var_8))))))) ? (min((((((/* implicit */_Bool) 8187093505268078248ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))) : (10497412948498067547ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_0))))) : (min((min((14ULL), (((/* implicit */unsigned long long int) (unsigned char)121)))), (((/* implicit */unsigned long long int) ((_Bool) arr_24 [i_26] [i_26] [i_26]))))));
        var_55 = ((/* implicit */signed char) (+(((unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
        var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15277543359087681184ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [6]))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37198)) / (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45)))))))) ? (arr_71 [i_26 - 2] [i_26] [i_26 - 1] [i_26] [18ULL] [i_26 - 2]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned short)14] [10ULL]))) : ((+(2068875201889229937ULL))))))))));
        var_57 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8))))));
    }
    var_58 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (((max((0ULL), (10459923388190467454ULL))) | (var_0)))));
    var_59 = ((/* implicit */int) (unsigned char)63);
    var_60 = min((((((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_10))))), (((min((((/* implicit */unsigned long long int) var_8)), (var_3))) >> (((/* implicit */int) (_Bool)0)))));
    var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((14103658436850903841ULL), (4185095032622417508ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (min((var_10), (var_0)))))));
}
