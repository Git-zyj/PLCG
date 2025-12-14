/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146084
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
    var_15 = (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (signed char)-107)))))));
    var_16 = ((/* implicit */int) -7184194541267360888LL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned int) (-(var_4))));
        var_18 -= ((/* implicit */unsigned short) arr_2 [14ULL]);
        var_19 = (-(arr_1 [i_0]));
        var_20 = ((/* implicit */unsigned int) ((_Bool) arr_2 [i_0]));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])) + (var_13)))) ? (-7184194541267360888LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 227660674U)) ? (var_13) : (var_13)))) ? (((/* implicit */int) var_10)) : (arr_1 [i_1])));
        arr_5 [18U] [i_1] = ((/* implicit */unsigned long long int) 7184194541267360888LL);
        var_23 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) arr_0 [(unsigned char)16] [16ULL])) - (75)))));
        arr_6 [12] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */long long int) arr_4 [i_2 - 1]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                for (signed char i_5 = 4; i_5 < 7; i_5 += 3) 
                {
                    {
                        var_26 |= ((/* implicit */signed char) (-(arr_13 [i_3] [i_3])));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) (+(arr_9 [i_2 - 1] [i_2 - 1])));
                            var_28 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                            arr_19 [i_2 - 1] [i_2 - 1] [1] [(signed char)7] [i_6] [0] [(signed char)7] = ((/* implicit */unsigned char) 227660649U);
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) ((unsigned char) ((unsigned char) 636104196)));
                            var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_2 - 1])) ? ((+(((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)2])))) : (var_6)));
                            arr_22 [i_2] [i_2] [i_2] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_2))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 1] [i_5 - 2])))));
                            arr_23 [5] [0U] = ((/* implicit */long long int) arr_18 [i_2] [i_2 - 1] [i_7] [i_2 - 1]);
                            var_31 = (-(((/* implicit */int) var_8)));
                        }
                        for (int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            arr_27 [i_2 - 1] [i_3] [(unsigned char)0] [(_Bool)1] [i_8] = ((/* implicit */signed char) (-(((var_13) - (((/* implicit */unsigned long long int) var_6))))));
                            arr_28 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((arr_1 [i_2 - 1]) + (2147483647))) >> (((((/* implicit */int) (short)-8411)) + (8434)))));
                            var_32 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_18 [i_3] [i_4] [i_3] [8ULL]))))));
                            var_33 = ((/* implicit */unsigned char) (+(((long long int) 4067306625U))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 - 1])) < ((+(((/* implicit */int) arr_20 [i_9] [i_9]))))));
                            arr_33 [i_3] [i_5 + 3] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2 - 1] [i_3] [i_4] [i_4] [i_4] [i_9] [i_9]))) / (4067306621U))) & (((/* implicit */unsigned int) ((int) var_2))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                        {
                            arr_37 [i_2 - 1] [i_3] [i_4 + 2] [i_5 + 2] [i_3] = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned int) var_12)) * (arr_21 [9LL] [9LL] [i_4] [3ULL] [i_10]))));
                            var_35 ^= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)6946))))));
                        }
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((unsigned long long int) (unsigned char)255)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [i_2] [i_3] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) (-(var_13)));
                    var_37 |= ((arr_29 [i_2] [i_3] [i_2 - 1] [i_12] [(unsigned char)2] [i_2 - 1] [i_12]) - (((/* implicit */int) var_9)));
                    var_38 = (-(((((/* implicit */_Bool) arr_43 [7LL] [i_3] [i_11] [i_2 - 1])) ? (arr_39 [2ULL] [2ULL] [i_11] [5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6946))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_39 = ((/* implicit */signed char) var_14);
                        var_40 += ((/* implicit */short) var_1);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_41 = (-((-(((/* implicit */int) var_8)))));
                        arr_49 [i_2] [i_3] [i_12] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_3] [i_14]))))));
                        var_42 = ((/* implicit */short) (unsigned short)58521);
                        arr_50 [i_2] [i_3] [i_11] [i_12] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_2]) : (((/* implicit */int) var_0))))) - (((unsigned long long int) var_8))));
                        var_43 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)28034)) >= (((/* implicit */int) var_2)))));
                    }
                }
                for (signed char i_15 = 3; i_15 < 9; i_15 += 3) 
                {
                    var_44 ^= ((/* implicit */signed char) arr_45 [i_2 - 1] [i_3] [i_15]);
                    var_45 = ((/* implicit */unsigned int) arr_35 [i_11] [i_3] [6LL] [i_15]);
                    arr_53 [i_2] [i_15] [i_11] [i_3] [i_2] = ((/* implicit */signed char) ((_Bool) var_1));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    var_46 = ((/* implicit */signed char) (-(((/* implicit */int) arr_41 [1U] [i_3] [i_16]))));
                    var_47 = ((/* implicit */signed char) var_7);
                    var_48 ^= ((/* implicit */_Bool) 876818375037665611ULL);
                }
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    arr_58 [i_2 - 1] [8ULL] [i_3] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3] [i_17])) ? ((+(((/* implicit */int) (short)28034)))) : (((/* implicit */int) ((_Bool) arr_31 [i_2] [i_2] [i_3] [i_3] [1ULL] [i_17] [i_2])))));
                    arr_59 [i_2 - 1] [i_3] [i_11] [i_17] [i_3] [4ULL] = ((/* implicit */long long int) (~(arr_17 [i_2 - 1] [(unsigned char)6] [i_3] [i_17] [i_2 - 1])));
                    var_49 += ((/* implicit */int) ((-7184194541267360867LL) & (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                for (signed char i_18 = 2; i_18 < 9; i_18 += 3) /* same iter space */
                {
                    var_50 ^= ((/* implicit */unsigned long long int) (+(-5323231971982233785LL)));
                    var_51 = ((((((/* implicit */_Bool) arr_36 [i_2] [i_2] [0] [i_2])) && (((/* implicit */_Bool) -1678336737)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((8925528808057608574ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))))));
                    arr_63 [i_18] [(unsigned char)5] [i_11] = (-(((((/* implicit */_Bool) -636104185)) ? (((/* implicit */int) arr_20 [i_11] [i_3])) : (((/* implicit */int) (signed char)97)))));
                }
                for (signed char i_19 = 2; i_19 < 9; i_19 += 3) /* same iter space */
                {
                    var_52 = ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_19 - 1] [i_19 + 1] [i_19])) - (((((/* implicit */int) var_0)) + (arr_11 [i_19 - 2] [i_3] [i_11] [(short)6])))));
                    var_53 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (signed char)41)) + (((/* implicit */int) arr_41 [i_2] [i_3] [i_11])))));
                    arr_66 [i_2] [i_3] [i_3] [i_19] = ((/* implicit */signed char) ((288230376151711743LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                var_54 = ((/* implicit */_Bool) -7184194541267360889LL);
                var_55 += ((/* implicit */long long int) ((2147483647) | (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) 3112293981U)))))));
                arr_67 [i_2] [i_3] [i_11] &= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_29 [i_11] [i_11] [i_3] [(signed char)5] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) var_6)) : (arr_55 [i_2] [i_3] [i_11] [(signed char)5])))));
            }
        }
        /* vectorizable */
        for (signed char i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
        {
            var_56 = ((/* implicit */int) arr_15 [i_2 - 1] [i_20] [i_2 - 1]);
            /* LoopSeq 3 */
            for (signed char i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 6; i_22 += 2) 
                {
                    for (long long int i_23 = 1; i_23 < 8; i_23 += 1) 
                    {
                        {
                            var_57 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2 - 1] [i_20] [i_22 - 1] [i_23] [i_22 - 1] [i_23 + 2])) ? (((983908675U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [(signed char)6] [(signed char)6]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_2])))))));
                            var_58 = ((/* implicit */int) (+(arr_56 [i_23 + 1] [i_21] [i_22 + 4] [i_2 - 1] [i_23 - 1])));
                        }
                    } 
                } 
                arr_78 [i_2] [i_2] [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_6)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13)))));
                /* LoopSeq 1 */
                for (long long int i_24 = 0; i_24 < 10; i_24 += 3) 
                {
                    arr_81 [i_20] [i_20] [i_24] = ((/* implicit */_Bool) arr_12 [i_2] [i_20]);
                    var_59 = ((signed char) arr_21 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]);
                    arr_82 [i_20] [i_20] |= ((/* implicit */unsigned char) var_6);
                }
                /* LoopNest 2 */
                for (long long int i_25 = 2; i_25 < 8; i_25 += 3) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        {
                            arr_87 [i_2] [i_20] [i_26] [i_25] [i_26] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_3))))));
                            var_60 = ((/* implicit */signed char) var_8);
                            var_61 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_26] [0ULL] [i_20] [i_2])) ? (var_6) : (((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) arr_30 [i_2] [i_20] [i_21] [i_25])) : (((/* implicit */int) var_8))));
                            arr_88 [i_26] [2ULL] [i_21] [2ULL] [2ULL] [i_20] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2])) && (((/* implicit */_Bool) var_14))));
                        }
                    } 
                } 
            }
            for (signed char i_27 = 0; i_27 < 10; i_27 += 3) /* same iter space */
            {
                arr_92 [i_2] = ((/* implicit */unsigned char) ((((arr_85 [i_2 - 1] [i_20] [i_27] [i_20] [i_20] [i_27]) + (2147483647))) << (((((arr_85 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [8ULL] [i_2]) + (1380024091))) - (7)))));
                var_62 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)6946)) ? (8925528808057608581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (arr_14 [i_20] [i_27] [i_27] [i_20] [i_2] [i_2 - 1])))))));
                arr_93 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((var_5) + (var_5)));
                /* LoopSeq 1 */
                for (signed char i_28 = 0; i_28 < 10; i_28 += 3) 
                {
                    var_63 = ((/* implicit */long long int) var_13);
                    var_64 = ((/* implicit */_Bool) ((7624227170763100689ULL) - (13539993744386886927ULL)));
                    arr_97 [i_2] [(signed char)2] [i_27] [i_28] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                    arr_98 [i_28] [i_20] [i_27] [(signed char)9] [i_27] = ((/* implicit */short) arr_86 [i_2] [i_20] [i_20] [i_20] [i_28]);
                    var_65 *= ((/* implicit */unsigned short) var_12);
                }
                arr_99 [i_2] [i_20] [i_27] = ((/* implicit */unsigned long long int) (signed char)-74);
            }
            for (unsigned char i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                arr_102 [i_29] = ((/* implicit */signed char) ((long long int) var_0));
                arr_103 [i_2] [i_20] [i_20] [i_29] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_1))) - (var_4)));
                var_66 = ((/* implicit */unsigned short) arr_39 [i_29] [i_20] [i_20] [i_2]);
            }
        }
        for (signed char i_30 = 0; i_30 < 10; i_30 += 4) /* same iter space */
        {
            var_67 = ((/* implicit */_Bool) max((var_67), (((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_12)) : (arr_79 [i_2 - 1] [(signed char)0] [i_30] [(signed char)6]))))))))));
            var_68 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_10))))))));
        }
        var_69 |= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4536104150570697990LL))))), (var_13))), (((/* implicit */unsigned long long int) var_12))));
    }
}
