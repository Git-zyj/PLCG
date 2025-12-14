/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183116
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
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_9)))))) : (arr_2 [i_0]))) : (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -1LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0 - 1])))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned short) 799661358))))))));
        var_20 = ((/* implicit */unsigned int) var_4);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_21 = ((((/* implicit */int) var_5)) >> (((/* implicit */int) arr_4 [i_1 + 3])));
        arr_6 [6] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (var_8))) - (((/* implicit */unsigned long long int) arr_5 [i_1]))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_5 [i_1 + 4])) <= (((arr_4 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16132))) : (arr_3 [0U])))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) arr_8 [i_2]);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((arr_8 [i_4 + 2]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_3] [(_Bool)1])) : (((/* implicit */int) var_15))))))) << (((((/* implicit */int) ((unsigned short) arr_12 [i_2] [i_2] [i_4 + 1] [i_3]))) - (19715)))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        arr_15 [(short)6] [16LL] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
                        var_25 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) arr_14 [i_2] [1ULL] [(short)2] [i_5])) ? (((/* implicit */int) arr_7 [18LL] [i_5])) : (((/* implicit */int) var_9)))))) == (((/* implicit */int) var_15))));
                        arr_16 [i_2] [i_5] [i_4] [i_5] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [0U] [i_3] [i_3] [i_3] [i_3])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))))) + (((/* implicit */unsigned long long int) ((arr_8 [i_5]) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0))))))))));
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_1);
                        var_26 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))))) ? (var_10) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) var_3))), (-268783889)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4] [i_2])) ? (arr_17 [i_2] [17U] [i_7] [i_2]) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [i_3])))) ? ((+(arr_14 [i_2] [(unsigned char)15] [i_4] [10LL]))) : (((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) var_15)) : (-1329374270))))))));
                            arr_24 [4] [i_2] [(unsigned char)14] = ((/* implicit */short) arr_22 [i_2] [i_2] [15ULL] [15ULL] [i_7]);
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1))))), (((var_2) << (((((/* implicit */int) var_4)) - (14951)))))))));
                            var_28 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-30795)))))))));
                            var_29 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) arr_14 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1])) < (2046290544U))) ? (max((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))) : (var_14)));
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_22 [i_6] [i_3] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [i_4] [i_8])) / (var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_6] [i_8])) + (var_2)))) ? (((/* implicit */unsigned long long int) arr_8 [i_6])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_11 [i_4] [(short)15] [i_8])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((1037443048U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54938)))))), (var_5)))) << (((((unsigned int) max((6498691865824874195ULL), (((/* implicit */unsigned long long int) var_9))))) - (120999615U)))));
                            var_32 = ((/* implicit */long long int) ((short) (((((_Bool)1) && (((/* implicit */_Bool) 2660668140U)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 2] [i_6]))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        arr_33 [i_2] [i_3] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 398757609U)) : (var_10)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (var_3)));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_28 [i_2] [i_10])) : (((((/* implicit */_Bool) arr_28 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [19U] [19U])) : (((/* implicit */int) arr_9 [i_2] [i_2]))))));
                        var_34 = ((((/* implicit */long long int) arr_14 [i_4 + 2] [i_4] [(unsigned short)11] [(unsigned short)17])) / (var_3));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((arr_35 [i_4 + 1] [i_4 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9))))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_3]))) * (var_10)))));
                            var_37 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_30 [(short)15]))))) : (var_8)));
                        }
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(arr_8 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2] [17LL] [i_2] [i_2] [i_2]))) : (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_28 [i_2] [i_2])) : (((/* implicit */int) arr_30 [i_2]))))) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8)))))))));
    }
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */short) max(((+(max((var_7), (((/* implicit */unsigned int) var_11)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_12])))))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_42 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [9] [9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_41 [i_12] [i_12])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529)))));
            var_40 = ((/* implicit */short) (-(((arr_39 [i_12]) + (arr_39 [i_13])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_14 = 2; i_14 < 18; i_14 += 1) 
            {
                arr_47 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */int) arr_41 [i_12] [i_12]);
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) > (((arr_35 [i_13] [i_13]) / (((/* implicit */unsigned long long int) arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))));
            }
            /* LoopSeq 3 */
            for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                var_42 += (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_41 [(short)6] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9562))) : (arr_41 [6] [(_Bool)1])))))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_37 [(unsigned short)11] [i_16]))));
                            var_44 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_17] [i_13] [i_13] [i_16] [i_17])) - (((/* implicit */int) (_Bool)1))))) ? ((-(arr_35 [i_12] [i_17]))) : (((/* implicit */unsigned long long int) var_0))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_17 [i_12] [i_13] [i_12] [i_12])))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (short)-24618))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10641))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((var_14) < (arr_8 [i_13])))))))));
                var_46 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_10 [i_12] [i_15])) : (var_14))))), ((+(max((var_14), (var_7)))))));
            }
            for (short i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                arr_56 [i_12] [i_13] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) var_14)) : (((arr_50 [i_18] [i_18] [i_13] [i_12] [i_12]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                /* LoopNest 2 */
                for (short i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        {
                            arr_61 [i_18] [i_18] [i_18] [(signed char)18] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))))))));
                            var_47 = ((/* implicit */unsigned short) ((min((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_3))), (((/* implicit */long long int) (+(var_14)))))) * (((long long int) var_12))));
                            var_48 = ((/* implicit */long long int) (+((+((+(((/* implicit */int) var_15))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_21 = 3; i_21 < 17; i_21 += 3) 
                {
                    for (unsigned long long int i_22 = 3; i_22 < 18; i_22 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (var_10) : (arr_35 [i_12] [i_22]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((arr_11 [i_12] [i_13] [i_18]) - (7855365801929608070ULL)))))) + (min((var_13), (((/* implicit */long long int) arr_65 [i_12] [i_12] [i_12] [i_21] [i_18] [i_21])))))))));
                            var_50 = ((((/* implicit */long long int) var_0)) | (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_4))))), (var_13))));
                        }
                    } 
                } 
                arr_70 [i_12] = ((/* implicit */unsigned char) arr_31 [i_12] [(_Bool)1] [(_Bool)1] [i_12]);
            }
            /* vectorizable */
            for (long long int i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                var_51 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (arr_14 [i_12] [i_12] [5ULL] [(_Bool)1]) : (((/* implicit */int) arr_62 [i_23] [12LL] [i_13] [(_Bool)1])))) < (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_50 [6LL] [i_13] [i_23] [6LL] [(unsigned short)17])))))));
                var_52 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_13] [i_13])) && (((/* implicit */_Bool) 3264317716U)))))));
                var_53 = ((/* implicit */unsigned long long int) ((long long int) var_6));
            }
        }
    }
    /* LoopNest 3 */
    for (short i_24 = 0; i_24 < 19; i_24 += 3) 
    {
        for (unsigned char i_25 = 2; i_25 < 17; i_25 += 4) 
        {
            for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
            {
                {
                    var_54 = ((/* implicit */unsigned int) ((unsigned short) var_9));
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1364920596)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2)))) ? (((/* implicit */int) ((arr_73 [2] [i_24]) == (((/* implicit */int) var_15))))) : (((/* implicit */int) ((unsigned short) var_1)))))) : (((((/* implicit */_Bool) arr_34 [i_25] [i_25] [i_25])) ? (((((/* implicit */_Bool) var_1)) ? (var_8) : (arr_44 [i_24] [i_24] [i_25] [i_24]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [(short)0] [i_26] [i_26 + 1] [i_26 + 1])))))));
                }
            } 
        } 
    } 
}
