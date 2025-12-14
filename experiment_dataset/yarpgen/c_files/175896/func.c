/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175896
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) < ((~(var_1))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) var_17);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((((_Bool) ((((/* implicit */int) arr_4 [(unsigned short)7] [i_3] [(unsigned short)3])) - (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)19648))) && (((/* implicit */_Bool) var_16))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_2]))));
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1])))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((4294967295U) >> (((/* implicit */int) (unsigned char)30)))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_25 &= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) < (var_18)))), (min((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_12 [i_1])))), ((~(((/* implicit */int) arr_1 [i_1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) arr_1 [i_7 - 1])) : (963546098)))))))));
                                var_27 = ((/* implicit */unsigned short) ((signed char) 963546097));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) ((var_11) ? (arr_8 [i_8] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    arr_22 [8LL] [i_1] [i_0] = ((/* implicit */unsigned short) (((~(963546098))) & (-963546125)));
                    var_29 = ((/* implicit */unsigned short) var_7);
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -963546098)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((signed char) arr_18 [i_1] [(unsigned short)5])))));
                }
                for (signed char i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_31 = (unsigned short)63773;
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_19)), ((~(4096612697687952406LL)))))) ? ((~((-(var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1863697642))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) arr_12 [i_11]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))));
                            var_35 = ((/* implicit */unsigned short) -963546099);
                            var_36 = ((/* implicit */unsigned long long int) (unsigned short)13);
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_37 -= ((/* implicit */unsigned char) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)88))))));
                        var_38 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_17)), ((~(((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_15))))) - ((+(10638055361075736600ULL)))))));
                            arr_38 [i_0] [10] [i_9] [(unsigned char)10] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_17)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15808)))))));
                            var_40 = arr_2 [i_0] [i_0];
                        }
                        for (signed char i_15 = 3; i_15 < 10; i_15 += 4) 
                        {
                            var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))));
                            arr_42 [i_0] [i_1] [i_9] [i_13] [i_15] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)88)), (10756020176979133485ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) ^ (5ULL))))));
                            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_41 [i_0] [i_1] [(unsigned short)1] [i_15 + 1]))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (7808688712633815027ULL)))))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (((((/* implicit */_Bool) (unsigned short)45388)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [4U] [i_1] [i_1] [i_1]))))))))));
                        }
                        for (signed char i_16 = 1; i_16 < 7; i_16 += 2) 
                        {
                            var_43 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_15)))))));
                            var_44 = ((/* implicit */unsigned long long int) var_14);
                            arr_45 [i_0] [i_13] [i_9] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (unsigned char)19)))))));
                        }
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_50 [4ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)6597)))))) ? (((int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_12)))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) == (13064255002315852962ULL)))), (var_0))))));
                        arr_51 [i_0] [i_0] [i_9] [i_17] = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) var_16))) / (var_1))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20144)) ? (var_2) : (14124423U)))))) ? (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_17] [i_9 + 1] [i_1]))) : (var_5))) : (((var_10) + (((/* implicit */unsigned long long int) var_1))))));
                        var_45 = ((/* implicit */unsigned short) ((((max((var_5), (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_19)), ((unsigned short)45403))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_31 [(_Bool)1] [i_0] [i_0] [i_17] [i_1] [i_9 - 2]))))));
                    }
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10212899672217048175ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)20144)))) : (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned int) ((((_Bool) var_14)) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) (!(var_11))))))) : (min((((/* implicit */unsigned int) 963546068)), (max((((/* implicit */unsigned int) -541457681)), (3272913524U)))))));
                            var_47 = ((/* implicit */unsigned char) (unsigned short)38797);
                            var_48 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (arr_8 [i_0] [i_1] [i_9 + 1]))))));
                            var_49 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) (signed char)-93))))) ? (((((/* implicit */int) arr_20 [(unsigned char)3])) << (((3013407376U) - (3013407364U))))) : (((/* implicit */int) arr_26 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 1])))));
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-25)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)16615)) : (((/* implicit */int) (_Bool)1)))) : ((~((~(((/* implicit */int) (signed char)-41)))))))))));
                        }
                        var_51 = ((/* implicit */unsigned int) ((arr_43 [i_9] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_9 + 1] [i_9] [i_9 - 2])) ? (((/* implicit */int) arr_11 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) (signed char)40)))))));
                    }
                    var_52 = ((/* implicit */int) ((((/* implicit */long long int) (+(var_2)))) < (var_1)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
    {
        for (long long int i_21 = 2; i_21 < 20; i_21 += 1) 
        {
            {
                arr_65 [(unsigned short)14] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned short)54889), (((/* implicit */unsigned short) (_Bool)1))))) ? (((var_11) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((long long int) var_19)))) + (((/* implicit */long long int) (+(((((/* implicit */_Bool) -6101067969103553590LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16)))))))));
                var_53 = ((/* implicit */_Bool) (~((-(max((var_18), (((/* implicit */long long int) var_14))))))));
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned int) (signed char)38);
}
