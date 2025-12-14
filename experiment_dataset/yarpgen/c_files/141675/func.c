/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141675
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((_Bool) 8561730214636192797ULL)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned int) max((min((arr_2 [i_0 - 2] [i_0 + 1]), (arr_2 [(_Bool)1] [i_0 - 2]))), (min((6707303283062585326ULL), (((/* implicit */unsigned long long int) 4266158223U))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_3 [i_1 - 2]))) - (((/* implicit */int) var_9))));
        var_21 ^= ((/* implicit */unsigned long long int) (~(1713774631U)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_22 = ((/* implicit */signed char) arr_4 [i_3]);
            arr_9 [i_2] = var_11;
            var_23 = max((((arr_8 [i_3 - 1]) >> (((/* implicit */int) arr_0 [i_3 + 1])))), (min((((/* implicit */unsigned long long int) arr_6 [i_3 - 1] [i_3 - 1])), (arr_8 [i_3 - 1]))));
            var_24 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
            var_25 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))) & (7545565008930435215ULL));
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((arr_14 [i_2] [i_5 - 1] [i_5] [i_6]) | (((/* implicit */unsigned long long int) arr_12 [i_2] [i_5 - 1] [i_2] [i_5 - 1])))), (min((min((arr_11 [i_5] [i_5]), (((/* implicit */unsigned long long int) 4294967275U)))), (((unsigned long long int) arr_10 [i_2])))))))));
                        var_27 = ((unsigned long long int) (~(((/* implicit */int) arr_1 [i_5 - 1]))));
                    }
                } 
            } 
            arr_17 [i_4] [8ULL] = ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                {
                    var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (17275107642664407538ULL)))) ? (arr_14 [i_8 + 1] [i_8 - 1] [i_7 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 15ULL))))))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_29 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((15ULL), (((/* implicit */unsigned long long int) (-(79914627822349292LL))))))) && (((/* implicit */_Bool) var_4))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_7] [i_8 - 1] [i_9 - 2]))) : ((-((((_Bool)1) ? (arr_15 [i_8]) : (6707303283062585326ULL)))))));
                                var_32 ^= (signed char)-62;
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned long long int) (-(750902300U)));
                    arr_28 [i_8] [i_2] [i_7] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) arr_0 [i_8 - 1]))))))))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (signed char)62)) - (33)))))) ? (((((/* implicit */unsigned long long int) var_12)) - (arr_22 [i_2] [i_8] [i_8] [i_8 + 1] [i_7 - 2] [i_8]))) : (arr_8 [i_8 + 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 20; i_11 += 1) 
        {
            for (unsigned int i_12 = 3; i_12 < 20; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_2] [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_6 [i_12 - 1] [i_12 + 2]))));
                                arr_41 [i_2] [10ULL] [i_11] [10ULL] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_12 + 2] [i_11 + 2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((((/* implicit */_Bool) ((unsigned int) arr_3 [0ULL]))) ? (arr_3 [i_12 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_2] [i_11 + 1] [i_12 + 1] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_18 [i_15] [i_12 + 1])))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned int) ((unsigned long long int) arr_29 [i_11] [i_11 - 1] [i_15]));
                            var_37 ^= (!(((/* implicit */_Bool) 1027892306U)));
                            var_38 = ((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_12] [i_15]);
                            var_39 = ((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_12])))));
                            var_40 ^= ((/* implicit */unsigned long long int) arr_21 [i_2] [i_11 - 2] [i_12] [i_16]);
                        }
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_37 [i_2] [i_11] [i_11] [i_15] [i_17])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_2] [i_11 - 2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_43 [i_11 + 2] [i_11 + 1] [i_11] [(unsigned short)5] [i_11 - 1] [i_11 - 1]))));
                            var_42 = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_12 - 1])) + (2147483647))) << (((var_0) - (1753804596071050566ULL)))));
                            var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_14 [i_15] [i_12 + 1] [(unsigned char)6] [i_11 + 2])));
                            arr_49 [i_11] = (i_11 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_2] [i_2] [i_11 + 1] [i_11] [i_12 - 3])) << (((/* implicit */int) arr_46 [i_2] [i_11 + 1] [i_11 + 1] [i_11] [i_12 + 1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_46 [i_2] [i_2] [i_11 + 1] [i_11] [i_12 - 3])) + (2147483647))) << (((((((/* implicit */int) arr_46 [i_2] [i_11 + 1] [i_11 + 1] [i_11] [i_12 + 1])) + (101))) - (9))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 3; i_18 < 21; i_18 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
                            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((13621016870158880758ULL) != (((/* implicit */unsigned long long int) 1975434447U)))))));
                        }
                        var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (79914627822349308LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_2] [i_2]))) - (var_10))))))));
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_20 = 1; i_20 < 20; i_20 += 2) 
                        {
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (arr_38 [i_20 - 1] [i_2] [i_11 - 2] [i_19 - 2] [i_12 + 2])));
                            var_48 = ((signed char) max((arr_45 [i_2] [i_11] [i_12 - 2] [i_11] [i_20]), (arr_45 [i_2] [(signed char)2] [i_2] [i_11] [9ULL])));
                        }
                        arr_60 [i_12] [i_11] [i_11] [i_19 - 3] = (-(2319532848U));
                        var_49 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-118)) != (((/* implicit */int) var_1))))), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (6707303283062585326ULL))))));
                        var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(2319532840U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_19 + 2] [i_11] [i_12] [i_2]))) - (1975434433U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_19 - 3] [i_12 - 2] [i_11 + 2] [i_2])))))))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_11 - 1] [i_11 + 1] [i_12 + 1] [i_19 - 2])) + (((/* implicit */int) arr_21 [i_11 - 1] [i_11 + 1] [i_12 + 1] [i_19 - 2]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        for (signed char i_22 = 2; i_22 < 21; i_22 += 3) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned long long int) min((var_51), (min((max((((/* implicit */unsigned long long int) arr_19 [i_22] [8U] [i_12 - 2])), (((((/* implicit */unsigned long long int) 2U)) * (12588057566685406786ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_27 [i_22 - 2] [i_21])))))));
                                arr_66 [i_11] [7ULL] [i_11] [i_11 + 1] [i_11] = ((/* implicit */unsigned short) arr_40 [i_2] [i_11 - 1] [(unsigned short)6] [0U] [i_22]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_23 = 3; i_23 < 21; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_24 = 2; i_24 < 23; i_24 += 4) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 24; i_25 += 1) 
            {
                {
                    var_52 = ((/* implicit */unsigned long long int) var_4);
                    arr_73 [i_23] [i_23] = ((/* implicit */unsigned int) ((arr_69 [i_25 + 1] [i_24 + 2]) | (arr_69 [i_25 + 1] [i_24 + 2])));
                }
            } 
        } 
        var_53 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2021268223U)) ? (16171880329392977719ULL) : (arr_72 [i_23] [i_23] [(unsigned short)12] [i_23 + 4]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_23 + 2])))));
        /* LoopNest 3 */
        for (unsigned long long int i_26 = 2; i_26 < 23; i_26 += 1) 
        {
            for (signed char i_27 = 1; i_27 < 23; i_27 += 3) 
            {
                for (signed char i_28 = 1; i_28 < 24; i_28 += 4) 
                {
                    {
                        var_54 = ((/* implicit */unsigned int) var_0);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 4) 
                        {
                            var_55 ^= ((/* implicit */_Bool) var_10);
                            arr_86 [i_23 - 2] [i_23] [i_27 + 1] [i_27 + 1] [i_29] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_71 [i_23]))));
                            var_56 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) var_2)) : (arr_72 [i_28 + 1] [i_28 + 1] [i_29] [i_28 + 1])));
                            arr_87 [i_23] [i_23] [i_23] = (i_23 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((/* implicit */int) arr_76 [i_23] [i_23 - 2] [i_27 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_76 [i_23] [i_23 - 2] [i_27 - 1])) + (84))))));
                            arr_88 [i_26] [i_23] [i_28 + 1] = ((/* implicit */unsigned int) arr_71 [i_23]);
                        }
                        var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) var_0))));
                        arr_89 [i_23] [i_27] [i_26] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_84 [i_23] [i_26 - 1] [i_28 - 1] [i_26 + 1] [(signed char)6] [i_28] [i_28 - 1])) : (((/* implicit */int) arr_68 [i_23]))));
                    }
                } 
            } 
        } 
        var_58 ^= ((/* implicit */_Bool) arr_85 [4U] [4U] [i_23]);
        var_59 = ((/* implicit */_Bool) (unsigned short)2778);
    }
    /* LoopNest 2 */
    for (unsigned int i_30 = 0; i_30 < 11; i_30 += 1) 
    {
        for (unsigned int i_31 = 3; i_31 < 10; i_31 += 4) 
        {
            {
                var_60 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_76 [(signed char)8] [i_31] [i_31 + 1]))));
                arr_96 [i_31 - 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (6570071270300321970ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1975434433U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1975434458U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2319532863U)))))))));
                var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)61)) * (((/* implicit */int) (unsigned short)51209))))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11)))))))))));
            }
        } 
    } 
    var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((min((var_4), (var_3))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))))))))));
    var_63 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((unsigned long long int) var_13))))));
}
