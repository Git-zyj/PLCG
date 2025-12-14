/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178037
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 |= ((/* implicit */unsigned char) var_11);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) (!(((var_2) > (var_2)))));
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_1])) != (((/* implicit */int) var_9))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)1))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-124)))))))));
            var_16 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
            var_17 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (signed char)3))))));
        }
        for (signed char i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))) - (12121117066371914435ULL))))))));
            var_19 = ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (var_5));
        }
    }
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (signed char)0))))));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_18 [i_4] [i_5] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)0)))))) * ((-(var_5))))), (((/* implicit */unsigned long long int) var_11))));
            arr_19 [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_5])) && (((/* implicit */_Bool) var_2)))));
        }
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            var_20 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_20 [i_4])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4] [i_4 + 2]))))) : (var_3)));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (signed char)17))))))), (min((var_5), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) : (var_1)))))))));
        }
        arr_23 [i_4] |= ((((/* implicit */_Bool) (+(var_2)))) ? (max((max((((/* implicit */unsigned long long int) var_6)), (var_5))), (((/* implicit */unsigned long long int) (signed char)-4)))) : (arr_22 [i_4] [(unsigned char)2]));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_7])) > (((/* implicit */int) var_9))))) : (((((/* implicit */int) arr_24 [i_7])) + (((((/* implicit */int) (signed char)6)) - (((/* implicit */int) var_8)))))))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) min((arr_25 [i_7]), (arr_25 [i_7])))) : (((/* implicit */int) ((signed char) 6432354659879842691ULL))))))));
        /* LoopNest 2 */
        for (signed char i_8 = 4; i_8 < 13; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_9])) & (((/* implicit */int) var_8))))) < (((((/* implicit */_Bool) var_2)) ? (var_5) : (var_2)))))) / (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 5822715818355170817ULL)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)-67)))) : (((/* implicit */int) ((unsigned char) (signed char)-40)))))));
                    arr_30 [i_7] [i_9] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((-(((/* implicit */int) arr_29 [i_8 - 1] [i_8 + 2] [i_8 - 2]))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        arr_34 [i_10] [i_9] [i_9] [i_9] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_6)))))) ? (min((((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (arr_33 [i_10] [i_9] [i_8] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8]))))) & ((~(((/* implicit */int) (signed char)66)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            arr_37 [i_7] [i_8] [i_9] [i_10] [i_10] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_31 [i_7])) : (((/* implicit */int) var_10))))));
                            arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)88))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */int) arr_32 [i_10 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_32 [i_10 - 2])) > (((/* implicit */int) var_7)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-9)), ((unsigned char)178)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_42 [i_12] [i_10] [i_9] [i_9] [i_8] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                            arr_43 [i_12] [i_10] [i_9] [i_9] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)222)))) : (((/* implicit */int) ((signed char) (signed char)0))))) + (((/* implicit */int) ((signed char) arr_28 [i_10 + 1])))));
                            arr_44 [i_9] [i_9] [i_12] = var_11;
                        }
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            arr_52 [i_9] [i_8] [i_9] [i_13] [i_14] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min(((signed char)17), ((signed char)0)))))) ? (((((/* implicit */_Bool) 13538505620980542682ULL)) ? (min((((/* implicit */unsigned long long int) var_4)), (4908238452729008941ULL))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7]))) : (arr_33 [i_7] [i_9] [i_13] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            arr_53 [i_7] [i_8] [i_9] [i_13] [i_14] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_36 [i_9] [i_13] [i_9] [i_8] [i_9])) : (((/* implicit */int) arr_41 [i_9]))))))));
                        }
                        for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_39 [i_8 - 4] [i_8 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) & (var_3)))))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            arr_56 [i_7] [i_9] [i_7] [i_7] = var_11;
                        }
                        for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)0)), (var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_32 [i_8 - 4]))))))))));
                            var_31 *= ((signed char) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_58 [i_8 - 1] [i_8 + 1] [i_8 - 3]), (arr_58 [i_8 - 1] [i_8 - 1] [i_8 - 1])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_46 [i_8 + 1] [i_8] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13538505620980542682ULL)) ? (((/* implicit */int) arr_32 [i_13])) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_45 [i_8] [i_9] [i_9] [i_16])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) < (var_5)))))))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */int) var_8)) != (((/* implicit */int) var_6))))))) > (((/* implicit */int) ((signed char) arr_57 [i_16] [i_13] [i_7] [i_9] [i_7] [i_8] [i_7]))))))));
                            var_34 = var_7;
                        }
                        arr_60 [i_9] [i_8] [i_9] [i_13] = (i_9 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_48 [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_36 [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_9])) & (((/* implicit */int) arr_58 [i_8 - 3] [i_8 + 2] [i_8 - 3])))) - (48)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_48 [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 - 1])) + (2147483647))) << (((((((((((/* implicit */int) arr_36 [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_9])) & (((/* implicit */int) arr_58 [i_8 - 3] [i_8 + 2] [i_8 - 3])))) - (48))) + (21))) - (5))))));
                        arr_61 [i_7] [i_8] [i_9] [i_13] [i_13] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)34)) ? ((~(var_3))) : (((((/* implicit */_Bool) (signed char)-64)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) | (var_2)));
                        arr_62 [i_9] [i_13] = var_4;
                    }
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_8 + 1] [i_8] [i_9])) + (((/* implicit */int) arr_47 [i_7] [i_8 - 1] [i_8] [i_8] [i_8 + 2]))));
                            arr_68 [i_7] [i_8] [i_9] [i_17] [i_18] = ((((/* implicit */_Bool) arr_51 [i_8 - 4] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_51 [i_8 + 1] [i_8 + 2]));
                        }
                        for (unsigned long long int i_19 = 4; i_19 < 14; i_19 += 1) 
                        {
                            var_36 = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_66 [i_7] [i_9] [i_9] [i_17] [i_19])), (var_0)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))));
                            arr_72 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) : (((unsigned long long int) arr_63 [i_9])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11)))));
                            arr_73 [i_19] [i_9] [i_17] [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)7)), ((-(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                        }
                        for (signed char i_20 = 3; i_20 < 13; i_20 += 3) 
                        {
                            arr_76 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_8), (var_4)))), ((-(((/* implicit */int) var_10))))))) : (max((arr_33 [i_8 + 2] [i_8] [i_8 - 2] [i_20 + 1]), (((((/* implicit */_Bool) arr_32 [i_7])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))))));
                            arr_77 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-36))))), (max((((var_3) | (var_3))), (((/* implicit */unsigned long long int) min((var_4), ((signed char)-126))))))));
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (min((((/* implicit */unsigned long long int) (signed char)64)), (var_5))))), (((arr_65 [i_20 - 1] [i_20 - 3] [i_20 + 1] [i_20] [i_20] [i_20] [i_20]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_67 [i_7] [i_7] [i_8] [i_9] [i_17] [i_20])) > (((/* implicit */int) var_8)))))))))))));
                        }
                        for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
                        {
                            arr_81 [i_7] [i_9] = ((/* implicit */signed char) (-(min(((-(((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (signed char)82)) * (((/* implicit */int) var_0))))))));
                            arr_82 [i_9] [i_8] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (signed char)-82)) <= (((/* implicit */int) arr_39 [i_7] [i_21])))) ? ((~(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_47 [i_17] [i_8] [i_7] [i_17] [i_21])))))), (((/* implicit */int) ((signed char) arr_67 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 - 1] [i_21])))));
                            arr_83 [i_7] [i_8] [i_8] [i_9] [i_17] [i_21] [i_9] = (+(4ULL));
                        }
                        var_38 |= ((/* implicit */signed char) max((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_8] [i_9] [i_17]))))), (((/* implicit */unsigned long long int) arr_39 [i_7] [i_7]))));
                        arr_84 [i_17] [i_9] [i_9] [i_8] [i_7] = var_1;
                        var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) + (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
                    }
                    var_40 |= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (signed char)-88)))) && (((/* implicit */_Bool) min(((unsigned char)8), (((/* implicit */unsigned char) (signed char)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))) : (((unsigned long long int) var_0))));
                    arr_85 [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_55 [i_9] [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */signed char) var_2);
    var_42 = ((/* implicit */unsigned char) var_4);
    var_43 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_8))))) ^ (((unsigned long long int) var_4))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) != (((/* implicit */int) var_10))))) - (((/* implicit */int) var_11)))))));
}
