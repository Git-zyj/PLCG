/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11176
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
    var_20 = var_13;
    var_21 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_1 [i_0]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_14))))));
                            arr_17 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [(_Bool)0] [i_1] [i_1 + 2] [i_0]))));
                            var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_3] [i_3 - 2] [i_2] [i_1] [i_0] = ((/* implicit */short) var_14);
                            var_24 -= (!((!(((/* implicit */_Bool) var_9)))));
                            arr_21 [i_5] [i_0] [i_2] [i_3] [6ULL] |= ((/* implicit */unsigned int) (~(var_6)));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_24 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(var_4)))) : ((+(((/* implicit */int) var_13)))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 3] [i_1 + 3]))) > (min((1464015875U), (((/* implicit */unsigned int) var_4))))))))))));
                            var_27 &= ((/* implicit */unsigned char) var_0);
                        }
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)20)), (2830951446U)))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)178)) & (((/* implicit */int) (signed char)75))));
        }
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            arr_28 [i_0] = ((/* implicit */unsigned int) (+(8466883404071809630ULL)));
            var_30 = ((/* implicit */unsigned int) var_15);
            arr_29 [i_0] [i_0] = ((/* implicit */long long int) ((arr_2 [i_0]) ? (min(((+(var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_10 [(unsigned char)0] [(unsigned char)0] [i_0] [(unsigned char)0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))))));
            arr_30 [i_0] [i_0] = ((/* implicit */signed char) (~(2830951438U)));
        }
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_17), (((/* implicit */short) arr_7 [i_0] [4U] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((2830951421U) | (4159868504U)));
                        var_32 = ((/* implicit */unsigned char) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) arr_16 [i_0]);
                            var_34 = ((/* implicit */short) max((var_34), (var_9)));
                            var_35 = ((/* implicit */unsigned char) (!((!((!((_Bool)1)))))));
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                            var_37 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0]);
                            arr_49 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [10ULL]);
                            arr_50 [i_0] [i_13] [i_0] [i_11 + 1] [i_13] = ((/* implicit */long long int) arr_2 [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2626203686U)) ? (((/* implicit */long long int) 2830951437U)) : (562949919866880LL)));
                            var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_17)))))));
                            var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_41 [i_0] [i_8] [i_11] [i_8]), (((/* implicit */long long int) min((arr_36 [i_0]), (((/* implicit */unsigned short) var_13))))))))));
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) var_7))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_42 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_51 [i_11 + 1] [i_11] [4U] [i_11] [i_11]), (arr_51 [i_11 + 1] [10U] [(_Bool)1] [(_Bool)1] [i_11]))))));
                            arr_55 [i_11] [i_0] [i_11 + 1] [4U] = ((/* implicit */long long int) ((((arr_1 [i_8]) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_13))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_16 = 1; i_16 < 9; i_16 += 1) 
                        {
                            var_43 = ((/* implicit */long long int) arr_34 [i_0] [(unsigned char)10] [i_0]);
                            var_44 ^= (!((!(((/* implicit */_Bool) 2830951417U)))));
                            var_45 = ((/* implicit */unsigned long long int) (~((((-(((/* implicit */int) var_3)))) | ((+(((/* implicit */int) arr_18 [i_0] [(signed char)9] [i_0] [i_0] [i_0]))))))));
                        }
                        for (long long int i_17 = 2; i_17 < 10; i_17 += 2) 
                        {
                            arr_62 [i_0] [i_11 + 1] [i_0] [8U] [(short)2] [i_11 + 1] = min((((var_11) >> (((/* implicit */int) arr_47 [i_11] [i_11] [i_9] [i_0])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_11 + 1]))))));
                            arr_63 [(_Bool)1] [i_0] [i_9] [i_9] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14130704124752164165ULL)) ? (((/* implicit */int) (short)12331)) : (((/* implicit */int) arr_19 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1])))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_46 = ((/* implicit */_Bool) max((var_46), ((!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_54 [i_0] [(_Bool)1] [(_Bool)1] [i_11] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_18] [i_11] [(unsigned short)2] [i_9] [(unsigned short)2] [i_8] [i_0]))) : (var_18))), (arr_38 [i_11 + 1] [i_11 + 1] [(short)0]))))))));
                            arr_66 [i_0] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_14)))))) : (min((((/* implicit */unsigned int) (signed char)127)), (1464015868U)))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            arr_71 [i_9] [i_9] [i_9] [i_0] [i_9] [i_9] [i_9] = ((/* implicit */short) var_1);
                            var_47 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_53 [i_0]) >= (((/* implicit */unsigned long long int) 2830951414U)))))) - ((+((-(arr_53 [i_0]))))));
                        }
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            arr_76 [i_0] [i_0] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_19))));
                            var_48 = ((/* implicit */signed char) ((2830951434U) < (((/* implicit */unsigned int) 19353757))));
                        }
                        for (unsigned long long int i_21 = 2; i_21 < 8; i_21 += 4) 
                        {
                            var_49 = ((/* implicit */short) ((((/* implicit */int) var_4)) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_18) : (((/* implicit */long long int) var_6))))))))));
                            arr_79 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(524287U)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 17559403344777945536ULL))))))) : (((/* implicit */int) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_41 [i_8] [i_8] [2LL] [i_8]))))))))));
                            arr_80 [i_0] [i_11] [(unsigned char)8] [(unsigned char)8] [i_0] = ((/* implicit */unsigned short) (+(-1481764251609731577LL)));
                        }
                    }
                    for (int i_22 = 2; i_22 < 11; i_22 += 1) 
                    {
                        arr_84 [(_Bool)1] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned short) var_11);
                        var_50 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)130))));
                        /* LoopSeq 1 */
                        for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
                        {
                            var_51 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_9)), (var_14))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_86 [i_23]))))))))));
                            var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) arr_3 [(short)0] [i_9]))));
                            arr_87 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(2817048274U)))) ? (max((((((/* implicit */_Bool) arr_9 [i_22 - 2] [i_22] [i_22 - 2])) ? (arr_53 [i_0]) : (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / ((+(((/* implicit */int) var_8)))))))));
                            var_53 = ((/* implicit */signed char) var_8);
                            var_54 = ((/* implicit */long long int) min((var_54), (var_18)));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        for (short i_25 = 3; i_25 < 10; i_25 += 3) 
                        {
                            {
                                var_55 |= ((/* implicit */unsigned int) (+(4294967295ULL)));
                                var_56 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_27 = 0; i_27 < 12; i_27 += 1) 
                        {
                            var_57 = var_13;
                            arr_97 [i_8] [i_8] [i_9] [i_0] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) ^ (-5589563289791006353LL)));
                        }
                        var_58 = var_14;
                        var_59 = ((/* implicit */long long int) arr_89 [i_26] [i_8]);
                        arr_98 [i_0] = ((/* implicit */unsigned int) arr_27 [i_9] [4ULL]);
                        var_60 = ((/* implicit */signed char) (((+(2859401223U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_6 [i_0] [i_0])))))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_61 = ((/* implicit */long long int) max((var_61), (((/* implicit */long long int) var_6))));
                        var_62 = arr_1 [i_9];
                    }
                    for (short i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_30 = 0; i_30 < 12; i_30 += 2) 
                        {
                            var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) (+(arr_61 [i_29] [i_29] [i_29]))))));
                            var_64 -= ((/* implicit */short) var_11);
                            var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_78 [(unsigned short)6] [i_29] [i_30] [i_9] [i_30] [i_8] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_30] [i_9] [i_30]))) : ((+(var_14))))))));
                        }
                        arr_105 [i_8] [i_8] [i_29] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3262)) << (((524285U) - (524285U)))));
                    }
                }
            } 
        } 
    }
    for (long long int i_31 = 0; i_31 < 22; i_31 += 1) 
    {
        var_66 += ((/* implicit */long long int) arr_109 [(_Bool)0]);
        arr_110 [20LL] [20LL] &= ((/* implicit */long long int) var_3);
    }
    var_67 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) min((2830951448U), (((/* implicit */unsigned int) (short)12331))))), (562949919866906LL)))));
}
