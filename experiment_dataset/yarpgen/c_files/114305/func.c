/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114305
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (((((((/* implicit */_Bool) arr_0 [2ULL])) || (((/* implicit */_Bool) (unsigned short)2)))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */short) (~(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */signed char) arr_3 [i_1])))))))) ? (((/* implicit */int) arr_4 [i_1 + 2])) : ((~(((/* implicit */int) arr_3 [i_1 + 1]))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
            {
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_0) : (((/* implicit */unsigned int) 21))));
                arr_13 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_3 + 1] [i_1 + 1])), ((unsigned short)65535))))));
            }
            arr_14 [i_1] [i_2] = ((/* implicit */int) ((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -77651553)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))) : ((((-(2855644690U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2])))))));
        }
        for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_19 [i_1] [i_4] [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_6 [i_1 + 1] [i_4]), (arr_6 [i_1 - 2] [i_4])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 - 2] [i_1 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (536870911U)))))));
                arr_20 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */int) var_5)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) arr_7 [i_1] [i_4] [i_5]))));
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_21 [i_1] [i_4] [i_5] [i_1] [i_5])) : (((/* implicit */int) arr_18 [i_4]))))) ? (max((77651553), (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65521))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)87)))))) >= (max((((/* implicit */unsigned int) (_Bool)0)), (var_9))))))));
                    arr_25 [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned short) 77651553))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1] [i_4])) : (-21))))) & (((/* implicit */int) arr_18 [i_4]))));
                    arr_26 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4 - 1] [i_4 + 1] [i_4]))))), ((+(arr_8 [i_4] [i_4 - 1] [i_4 + 1] [i_4])))));
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */int) (((+(((/* implicit */int) arr_16 [i_1] [i_1 + 1])))) < (((/* implicit */int) arr_28 [i_1] [i_1 + 2] [i_4] [i_7] [i_7]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) arr_3 [i_1 + 2])) : (((/* implicit */int) var_10))));
                        var_18 -= ((/* implicit */unsigned short) -77651527);
                        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)16216))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_36 [i_4] [i_7] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) var_7);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) arr_28 [i_4 + 1] [i_4] [i_1] [i_7] [i_9])), ((((_Bool)1) ? (77651569) : (77651572))))))))));
                        var_21 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_11 [i_7] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)61361))))) && (((/* implicit */_Bool) ((unsigned int) -15))))) ? (min((((/* implicit */int) arr_27 [i_1])), (((int) var_7)))) : (min((((arr_6 [i_5] [i_7]) ? (((/* implicit */int) (short)32439)) : (((/* implicit */int) (unsigned short)60083)))), (((/* implicit */int) arr_27 [i_1]))))));
                        arr_37 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)28)), (var_10)))) ? (((((-77651573) + (2147483647))) >> (((((/* implicit */int) arr_23 [i_1] [i_9])) + (81))))) : ((+(((/* implicit */int) arr_27 [i_4]))))))) ? (min((77651572), (((/* implicit */int) (unsigned short)15)))) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) >= (3239856142U)))), (max((var_11), (((/* implicit */signed char) arr_34 [i_1] [i_4] [i_4] [i_5] [i_7] [i_9]))))))));
                        var_22 |= ((/* implicit */int) ((unsigned short) (+(max((((/* implicit */unsigned int) arr_22 [i_1] [i_1] [i_1] [i_1])), (var_0))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_16 [i_1 + 1] [i_4 - 1])), (1720204226U)));
                        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_4] [i_5] [i_7] [i_10]))) & (arr_10 [i_10] [i_7] [i_5] [i_4])))) ? ((~(2976707337U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_38 [i_1] [i_4] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_33 [i_1] [i_4])))))))), (((((/* implicit */_Bool) arr_29 [i_5] [i_4 + 1] [i_1 - 2] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_30 [i_10] [i_7] [i_5] [i_4] [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) var_7);
                        arr_42 [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_29 [i_1] [i_4] [i_5] [i_7] [i_11] [i_7]));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_7])) ? (((/* implicit */int) arr_32 [i_1] [i_4] [i_4] [i_7] [i_11])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)13413)) : (((/* implicit */int) arr_23 [i_1] [i_1]))))) : (arr_11 [i_5] [i_4])));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 3; i_12 < 21; i_12 += 4) /* same iter space */
                    {
                        arr_45 [i_1] [i_4] [i_5] [i_4] [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
                        arr_46 [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1 - 1]))));
                        arr_47 [i_4] [i_7] [i_7] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4 - 1] [i_12 - 2] [i_1 - 2]))));
                        arr_48 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_24 [i_4 + 1] [i_4] [i_4] [i_4])) ? (arr_8 [i_1 - 2] [i_12 - 1] [i_12] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4 + 1] [i_4] [i_4] [i_4]))));
                        var_27 &= ((/* implicit */unsigned short) (signed char)17);
                    }
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_7]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((_Bool) min((min((((/* implicit */int) (signed char)0)), (-1))), (((/* implicit */int) (unsigned short)18722)))));
                    var_30 = ((/* implicit */unsigned short) arr_33 [i_4] [i_4]);
                    arr_53 [i_4] [i_4] [i_5] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1284990917U) + (6U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)44)), (1006632960U)))) : (arr_10 [i_4 + 1] [i_4] [i_1 + 2] [i_1])));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)1))));
                    var_32 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_1] [i_4] [i_5] [i_5] [i_13]))));
                }
                var_33 = ((/* implicit */int) var_13);
                arr_54 [i_1] [i_4] [i_5] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 + 1] [i_4 + 1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_22 [i_4 + 1] [i_4 - 1] [i_1 - 1] [i_1 + 1])) : (4989577419008181211ULL))));
            }
            /* LoopSeq 3 */
            for (signed char i_14 = 2; i_14 < 20; i_14 += 2) 
            {
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (1720204227U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58283)))));
                var_35 = ((/* implicit */unsigned int) (+(arr_11 [i_4] [i_1])));
            }
            for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 2) 
            {
                var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))));
                var_37 = ((/* implicit */unsigned int) max((var_37), (min((((unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1 - 2] [i_15 + 1] [i_1] [i_4 + 1] [i_1]))) - (arr_30 [i_15] [i_15] [i_15] [i_15] [i_15 - 1])))))));
                arr_62 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) 4281533770U));
            }
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 2574763069U))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_4] [i_16] [i_16])))))));
                arr_65 [i_1] [i_4] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_22 [i_4 - 1] [i_4] [i_4 + 1] [i_4])), (25ULL))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
            {
                var_39 += ((((/* implicit */_Bool) ((arr_22 [i_1] [i_1 - 2] [i_1 - 1] [i_4 - 1]) & (((/* implicit */int) arr_43 [i_1]))))) ? (((((/* implicit */_Bool) arr_22 [i_1] [i_1 - 2] [i_1 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1]))) : (263211106U))) : (((/* implicit */unsigned int) arr_22 [i_1] [i_1 - 2] [i_1 - 1] [i_4 - 1])));
                arr_69 [i_1] [i_4] [i_4] [i_17] = ((/* implicit */_Bool) ((((unsigned int) arr_11 [i_1 - 1] [i_4 - 1])) >> (min((((((/* implicit */_Bool) var_4)) ? (var_0) : (4294967295U))), (((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)243)))))))));
                var_40 += ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 6)) ? (0) : (((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
            {
                var_41 += ((/* implicit */unsigned short) ((min((1720204243U), (((/* implicit */unsigned int) (signed char)16)))) >> (((/* implicit */int) arr_33 [i_1] [i_1]))));
                var_42 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_1 - 2] [i_4] [i_4] [i_4 + 1] [i_18])) ? (((/* implicit */int) arr_32 [i_1 + 1] [i_1] [i_4] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_32 [i_1 + 2] [i_4] [i_4] [i_4 - 1] [i_4]))))));
                arr_73 [i_4] [i_4] [i_18] = arr_27 [i_4];
                arr_74 [i_1] [i_4] = ((/* implicit */long long int) (-(((max(((_Bool)1), (arr_33 [i_1] [i_4]))) ? (min((((/* implicit */unsigned int) arr_57 [i_18])), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_4] [i_18] [i_18])))))));
            }
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (+(max((min((((/* implicit */unsigned int) (short)26152)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16)) && (((/* implicit */_Bool) arr_4 [i_1]))))))))))));
        }
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                {
                    var_44 = ((/* implicit */unsigned short) arr_58 [i_20] [i_19] [i_1] [i_1]);
                    var_45 = ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_56 [i_1] [i_19] [i_20])))))) | ((-(arr_76 [i_1 - 1]))));
                }
            } 
        } 
    }
    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
    {
        var_46 = ((/* implicit */signed char) arr_52 [i_21] [i_21] [i_21] [i_21]);
        var_47 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)60))));
    }
    var_48 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (signed char)114)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_6))))))));
    var_49 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)15)))), ((-((-(((/* implicit */int) (_Bool)1))))))));
    var_50 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4208945450U)), ((((!(((/* implicit */_Bool) (signed char)43)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196)))))) : (((((/* implicit */_Bool) 4294967295U)) ? (8045409474544212980LL) : (((/* implicit */long long int) 106307470U))))))));
    var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((((/* implicit */_Bool) max((1213852450), (((/* implicit */int) (unsigned char)159))))) ? (((((/* implicit */_Bool) (short)-28857)) ? (min((var_8), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_3)))))))) : (((/* implicit */long long int) max((min((579082038U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))))))))));
}
