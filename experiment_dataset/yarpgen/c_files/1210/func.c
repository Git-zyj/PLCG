/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1210
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) < (((/* implicit */int) var_2))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_3) : (((/* implicit */int) arr_1 [i_0 + 2])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (2586670006U))))) >= ((+(var_13))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned short) max((arr_2 [i_0 - 1] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_0 + 3] [i_1] [3] [i_2]))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (unsigned short)29107)) : (((/* implicit */int) var_5))))), (((unsigned long long int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (2310029738U)))));
                    arr_6 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (max((arr_2 [(unsigned char)2] [i_1] [i_2]), (arr_2 [i_0] [i_0] [i_0 + 1]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_4] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (arr_2 [i_4 + 1] [i_0 + 2] [i_4 + 1]) : (((unsigned long long int) arr_10 [i_4] [i_1] [i_4] [i_4] [i_0]))))));
                                var_23 *= ((/* implicit */unsigned int) (~((+(0)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) min(((~(1793184243325064050ULL))), (((/* implicit */unsigned long long int) arr_15 [i_5] [(unsigned char)4] [i_5] [i_5 + 1] [i_0] [i_0 + 1] [i_0]))));
                            var_25 *= (+(((/* implicit */int) ((((/* implicit */_Bool) (+(6348139979514283607LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [8U])) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                        }
                        arr_17 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */long long int) (~((~(var_8)))));
                    }
                }
            } 
        } 
        arr_18 [i_0] [i_0] = arr_14 [i_0] [i_0];
    }
    for (short i_7 = 1; i_7 < 19; i_7 += 1) 
    {
        var_26 = ((signed char) (~((+(((/* implicit */int) arr_20 [i_7]))))));
        /* LoopSeq 4 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_24 [i_7] [i_8]) / (((/* implicit */int) (unsigned short)4102)))), (((((/* implicit */int) var_11)) << (((/* implicit */int) arr_22 [i_7] [i_8]))))))) && (((/* implicit */_Bool) (~((~(((/* implicit */int) var_12))))))))))));
            var_28 += ((/* implicit */unsigned int) arr_23 [i_7] [i_8]);
            var_29 = arr_19 [i_8];
        }
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_25 [(unsigned short)8] [i_7] [i_9])))))))));
            arr_29 [i_7] = ((/* implicit */unsigned char) arr_25 [i_9] [i_9] [i_9]);
        }
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 19; i_10 += 2) 
        {
            arr_32 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned short)4064)))))) == (((var_15) ? (6776187767102850475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned char) arr_35 [i_13] [i_13] [i_13] [i_13 - 1] [(signed char)19] [i_10 - 3]);
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (0))) != ((~(((/* implicit */int) (signed char)-88)))))))));
                        }
                    } 
                } 
            } 
            arr_39 [i_7] [i_10] [i_7] = ((/* implicit */unsigned short) var_14);
            var_33 ^= ((/* implicit */short) (-((~(((/* implicit */int) arr_22 [i_10 - 1] [i_7]))))));
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 20; i_14 += 4) 
        {
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)45112)) ? (((((/* implicit */_Bool) 6776187767102850475ULL)) ? (((/* implicit */int) (unsigned short)47617)) : (((/* implicit */int) arr_35 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_7 + 1] [i_7 + 1] [(short)3])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) (~(arr_48 [i_14 - 1] [i_15 + 1] [i_16] [i_15 + 1])));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_7 + 1] [i_7 + 1])) % (var_3)));
                        /* LoopSeq 2 */
                        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                        {
                            var_37 *= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) 4080U)));
                            arr_51 [i_7] [i_7] [(signed char)12] [i_15 - 1] [i_16] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_14 + 1] [i_7 - 1]))));
                            arr_52 [i_7] [i_7] [i_17] [i_16] [i_7] [i_7] [11U] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_17] [i_15]))) < (arr_40 [i_7] [i_16] [i_17]))))));
                            var_38 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6))))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                        {
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((arr_53 [i_15 + 2] [i_18] [12] [i_18] [7ULL]) <= ((-(arr_21 [i_7 + 2]))))))));
                            arr_55 [i_7] [i_15] [i_14 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_7] [i_15] [i_16] [i_18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_7] [i_7]))))) ? (((/* implicit */int) ((unsigned short) 100198032908669959LL))) : ((+(((/* implicit */int) (unsigned short)61471))))));
                            arr_56 [i_18] [(signed char)3] [11U] [i_7] [i_14 + 1] [(unsigned char)11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_7 - 1] [i_7] [(unsigned short)15])) : (((/* implicit */int) ((arr_27 [i_7 + 1] [i_7 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15255))))))));
                        }
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned char) arr_54 [i_7 + 2] [i_7 + 1] [i_14] [i_14 - 1]);
        }
    }
    for (unsigned short i_19 = 3; i_19 < 13; i_19 += 2) 
    {
        var_41 += ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_49 [i_19] [i_19] [i_19 - 3] [i_19 - 3])) ? (((/* implicit */int) arr_33 [i_19] [i_19] [i_19 - 2])) : (-1575889339))));
        var_42 *= arr_42 [i_19] [i_19] [i_19] [i_19];
        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) arr_33 [i_19] [i_19 - 3] [i_19 + 1]))));
        /* LoopSeq 1 */
        for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
        {
            var_44 += ((/* implicit */long long int) (+((~(((/* implicit */int) var_1))))));
            arr_62 [i_19] [i_20] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((unsigned long long int) 0)) >= (min((arr_60 [i_19 - 1]), (((/* implicit */unsigned long long int) arr_22 [i_19] [i_19]))))))), (max((arr_50 [i_19] [i_19] [20ULL] [i_20] [i_20]), (((/* implicit */unsigned int) min((((/* implicit */short) arr_38 [i_20] [i_19] [i_19] [i_20] [11] [i_20])), (var_4))))))));
            var_45 = ((/* implicit */short) arr_19 [9U]);
            var_46 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) (signed char)-40)) : ((+(((/* implicit */int) arr_28 [i_19] [i_19 - 3]))))));
        }
        var_47 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_47 [i_19] [7U] [i_19] [i_19 - 2] [i_19]), (((/* implicit */unsigned int) (signed char)127))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_19] [i_19])) ? (((/* implicit */long long int) 134086656)) : (100198032908669939LL)))) ? (((/* implicit */int) ((short) arr_58 [i_19] [8]))) : (((/* implicit */int) arr_45 [i_19 - 2] [i_19] [i_19] [i_19] [i_19 - 2] [(_Bool)0]))))) : (((((/* implicit */_Bool) max(((unsigned short)33910), (arr_33 [i_19] [i_19] [i_19])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)10214))))) : (var_9)))));
    }
    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            for (int i_23 = 0; i_23 < 20; i_23 += 2) 
            {
                {
                    arr_71 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(arr_26 [i_21])))))) ? (((int) (~(((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) ((signed char) arr_33 [i_21] [(unsigned char)6] [2ULL])))));
                    arr_72 [i_21] [i_21] [i_23] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_65 [i_23])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [(unsigned short)5] [i_22] [i_21] [i_21]))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_21] [i_22] [14] [i_23])) || (((/* implicit */_Bool) (unsigned short)42362))))))) : (((((/* implicit */_Bool) arr_24 [i_22 - 1] [i_22 - 1])) ? (arr_24 [i_22 - 1] [i_22 - 1]) : (arr_24 [i_22 - 1] [i_22 - 1])))));
                    var_48 = ((/* implicit */long long int) ((unsigned short) ((max((((/* implicit */unsigned long long int) var_17)), (arr_36 [i_21] [i_21] [(unsigned short)1] [i_21] [i_23] [(unsigned short)12]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49356)))))))));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        for (long long int i_25 = 0; i_25 < 20; i_25 += 2) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) var_14))));
                                arr_81 [i_21] [i_22 - 1] [15U] [i_24] [i_25] |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_75 [i_21] [i_22] [i_23] [i_23])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 356582883U)) ? (-1) : (((/* implicit */int) (unsigned short)63204))))))));
                                arr_82 [12U] [i_22] [i_23] [i_23] [i_22] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_38 [i_21] [i_22] [i_22] [i_23] [i_24] [i_25]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_50 = ((/* implicit */int) var_17);
    }
}
