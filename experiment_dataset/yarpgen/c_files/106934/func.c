/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106934
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
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (var_12)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [10LL] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [6]) : (arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            arr_6 [(_Bool)1] [(_Bool)1] = max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_0])), (var_15)))) ? (((/* implicit */int) arr_5 [(unsigned char)7] [i_1 - 1] [i_1])) : (((/* implicit */int) var_15)))), (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 3])));
            arr_7 [i_0] [(signed char)9] [i_1 - 1] = ((/* implicit */_Bool) ((arr_5 [i_1 + 3] [i_1 + 3] [i_1 + 2]) ? (((/* implicit */int) max((arr_5 [i_1 + 3] [i_1] [i_1 + 2]), (arr_5 [i_1 + 3] [(unsigned char)7] [i_1 + 2])))) : (((arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2]))))));
            arr_8 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_11 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (!(arr_3 [i_2]))))));
            arr_12 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_3 [i_0]))));
            arr_14 [i_0] = ((/* implicit */signed char) (-(arr_10 [i_0] [i_2] [i_2])));
        }
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_6] [i_6] [(unsigned char)10] [i_5] [i_6] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0])) : (-1LL))))) >> ((((-(min((((/* implicit */long long int) (unsigned char)234)), (arr_16 [i_4]))))) + (240LL)))));
                                arr_27 [i_6] [i_6] [(_Bool)1] [i_4] [i_3] [i_6] [i_0] &= max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (signed char)0))))) >> (((arr_15 [i_3] [i_3] [i_6]) - (3503475696547449640LL)))))), ((-(var_9))));
                                arr_28 [i_0] [i_3] [i_4] [i_5] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_6] = ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_17 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_15)))) > (((/* implicit */int) arr_24 [i_0] [i_3] [(_Bool)1] [i_6]))))) == ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_1 [i_3] [i_4])))));
                                arr_30 [i_0] [i_0] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) (signed char)-19);
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_4] = ((/* implicit */long long int) arr_4 [i_0] [(_Bool)1]);
                    arr_32 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(unsigned char)0] [i_0] [i_3] [i_4])) & ((+(((/* implicit */int) arr_22 [i_0] [i_3] [i_3] [i_4]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_35 [i_7] [8ULL] = ((((/* implicit */_Bool) arr_9 [18LL])) && (((/* implicit */_Bool) arr_9 [4LL])));
        arr_36 [i_7] = ((/* implicit */unsigned long long int) arr_16 [i_7]);
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 20; i_10 += 4) 
                {
                    {
                        arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_9 - 1] [i_10 - 1] [i_10 + 1]))));
                        arr_48 [(_Bool)1] [i_8] [i_8] [i_8] [i_10] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_5 [i_8] [8] [i_10])) : (((/* implicit */int) arr_1 [i_7] [i_9])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_53 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_7] [i_7] [2LL] [(_Bool)1] [i_7])) ^ (((/* implicit */int) arr_41 [i_8] [i_8] [i_8]))));
                arr_54 [i_7] [i_8] [i_7] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                arr_55 [i_7] [i_8] = ((/* implicit */_Bool) ((long long int) arr_49 [i_7] [(unsigned char)10]));
                arr_56 [i_7] [i_7] [i_8] [i_7] &= ((/* implicit */signed char) var_3);
                arr_57 [(_Bool)1] [i_8] [i_8] [i_7] = ((/* implicit */long long int) arr_41 [i_7] [i_7] [i_11]);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_61 [i_7] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_41 [i_7] [i_8] [i_7])))) : (((((/* implicit */int) arr_49 [i_8] [i_8])) / (((/* implicit */int) var_13))))));
                arr_62 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(unsigned char)15] [i_8] [i_8] [i_8]))));
                /* LoopSeq 3 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    arr_66 [i_12] [i_12] [i_7] [i_7] [i_7] [i_7] = (!(((/* implicit */_Bool) arr_58 [i_7] [i_7] [i_7])));
                    arr_67 [i_13 - 1] [i_8] [i_7] [i_13] [i_13 - 1] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                    {
                        arr_71 [4LL] [(_Bool)1] [i_7] [4LL] [i_14] [i_14] = ((/* implicit */_Bool) arr_15 [i_8] [i_12] [i_13 - 1]);
                        arr_72 [i_7] [i_7] [i_7] [i_12] [i_13 - 1] [i_7] = ((/* implicit */unsigned char) ((arr_50 [i_7] [i_13 - 1] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                        arr_73 [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) arr_63 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                    {
                        arr_77 [i_7] [i_7] = ((/* implicit */int) arr_37 [2LL] [i_15]);
                        arr_78 [i_7] [i_15] [i_12] [i_8] [i_15] [i_15] [i_15] &= ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_70 [i_7] [i_8] [i_8] [i_8] [i_15])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_63 [i_7] [i_8] [i_12] [i_12] [i_15] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7] [i_8] [i_7] [i_13] [i_8]))) : (var_9))) - (80LL)))));
                        arr_79 [i_7] [i_8] [i_7] = ((/* implicit */int) var_15);
                        arr_80 [i_7] [i_7] [i_7] [i_13 - 1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_10))))));
                        arr_81 [i_7] [i_8] [i_12] [i_13 - 1] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_7] [i_7])) << (((/* implicit */int) var_3))));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_84 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_7] [i_8] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_76 [i_8] [i_12] [i_16]))));
                    arr_85 [i_7] [i_8] [i_12] [i_16] [i_7] = ((/* implicit */signed char) var_14);
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    arr_88 [i_7] [i_8] [i_7] [(_Bool)1] [i_12] [i_12] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_7] [i_8] [i_12] [i_17 - 1] [i_7]))))));
                    arr_89 [i_8] = ((/* implicit */_Bool) (((!(var_13))) ? (((/* implicit */int) ((var_16) > (((/* implicit */unsigned long long int) var_17))))) : (((/* implicit */int) arr_21 [i_7] [i_7] [i_12] [i_7]))));
                    arr_90 [i_8] [i_8] [i_12] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_17 - 1] [i_17 - 1] [i_17 - 1])) || (((/* implicit */_Bool) arr_0 [i_17 - 1]))));
                }
                arr_91 [i_7] [i_8] [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_12]))));
            }
            arr_92 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [(unsigned char)2])) || (((/* implicit */_Bool) arr_10 [i_7] [i_8] [i_8]))));
        }
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            arr_95 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((arr_51 [i_7] [i_7] [i_18]) + (7965270587856480220LL)))));
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            arr_106 [i_7] [i_7] [i_7] [i_20] [3ULL] = ((/* implicit */_Bool) arr_4 [i_7] [i_21]);
                            arr_107 [i_7] [i_7] [i_7] [i_21] [i_7] = ((/* implicit */unsigned char) ((arr_93 [i_7] [i_18] [i_19]) <= (((/* implicit */unsigned long long int) arr_87 [i_21] [i_20] [i_20] [7LL] [i_7] [i_7]))));
                            arr_108 [i_7] [i_18] [i_19] [i_19] [i_20] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248))))) ? (arr_51 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_99 [i_21] [i_20] [i_18] [i_18] [i_7])))));
                        }
                    } 
                } 
            } 
        }
        arr_109 [(_Bool)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_7] [18LL] [i_7] [i_7])) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_70 [i_7] [i_7] [17ULL] [i_7] [(_Bool)1])))) : (((((/* implicit */int) arr_40 [2LL] [2LL])) << (((arr_44 [i_7] [i_7] [1ULL] [i_7]) + (1883720609)))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_113 [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -70903095)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_112 [i_22])) ? (((/* implicit */int) arr_112 [i_22])) : (((/* implicit */int) arr_112 [i_22])))))));
        arr_114 [i_22] = ((/* implicit */unsigned char) max((min((10ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_110 [i_22] [(_Bool)1]))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_12)));
    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10ULL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_12)))))))) + ((-(((var_11) << (((881302382) - (881302365))))))));
}
