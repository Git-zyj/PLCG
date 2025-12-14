/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11036
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (8489464269196413215LL) : (-8489464269196413215LL))) % (((/* implicit */long long int) max((((/* implicit */int) (signed char)-1)), ((~(((/* implicit */int) (unsigned short)59345))))))))))));
                        var_13 = ((/* implicit */signed char) ((((-8489464269196413216LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_10) <= (((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3])) & (((/* implicit */int) var_9)))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)99)) : (var_7)))) : (var_3)))));
                            var_15 = ((/* implicit */signed char) var_11);
                            var_16 = ((/* implicit */unsigned int) 973359505);
                            var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? (max((4171679296U), (arr_5 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_18 |= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_3 [i_0] [i_3]))))));
                            arr_17 [(_Bool)1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_0);
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] = var_3;
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_6])) : ((~(((/* implicit */int) (signed char)-1))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59348))))) ? ((-(var_11))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6190))))))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)6])))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_4 [i_0])) : ((+(((/* implicit */int) arr_3 [i_7] [i_1])))))))));
                            var_21 = ((unsigned int) (+(((/* implicit */int) (unsigned short)34003))));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) var_0)))))));
                            var_23 = ((/* implicit */unsigned char) min((705895074), (((/* implicit */int) (unsigned char)182))));
                        }
                        arr_26 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)111)) != (((/* implicit */int) (unsigned char)50)))))) / (((((/* implicit */_Bool) (unsigned short)34005)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) <= (((((/* implicit */_Bool) -1396124325)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)4)) && (((/* implicit */_Bool) (unsigned short)38456)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (-8489464269196413215LL)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (arr_19 [i_0] [i_0] [i_0] [(unsigned short)3] [i_8]) : (var_11)));
            var_25 = ((/* implicit */unsigned char) var_9);
        }
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                for (unsigned char i_12 = 1; i_12 < 12; i_12 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_11 + 2])) : ((-(((/* implicit */int) (unsigned char)0))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned char) 3398227166U)))));
                        var_28 = arr_10 [i_11 - 1] [i_12 - 1] [i_12 - 1] [i_12];
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 3; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) var_6);
                            var_30 = ((/* implicit */unsigned char) ((arr_2 [i_12 - 1]) << (((((((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12])) + (30))) - (8)))));
                            arr_43 [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_7);
                        }
                        for (unsigned short i_14 = 3; i_14 < 12; i_14 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))));
                            var_32 = ((/* implicit */signed char) (-(3398227166U)));
                            arr_47 [i_9] [i_10] [i_11] [i_10] [i_14 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_12 - 1] [i_10] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_11)) : (arr_31 [i_9])))));
                        }
                        for (signed char i_15 = 1; i_15 < 11; i_15 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_10] [i_12])) ? (((/* implicit */int) ((unsigned short) arr_30 [i_12]))) : (((/* implicit */int) (unsigned short)6199))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((arr_25 [i_12 - 1] [(signed char)16] [i_15 - 1] [i_15 + 2] [i_9]) / (arr_25 [i_12 + 1] [i_12] [i_15 - 1] [i_15 + 2] [i_10]))))));
                            arr_50 [i_9] [i_10] [i_11 + 1] [i_12 + 1] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) 2731631405U))));
                        }
                    }
                } 
            } 
        } 
        arr_51 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))));
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_31 [i_9]))));
        var_36 -= ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 8489464269196413215LL)))));
    }
    for (unsigned char i_16 = 2; i_16 < 14; i_16 += 4) 
    {
        arr_55 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_18 [i_16] [i_16] [i_16 - 2] [i_16 - 2] [(unsigned char)2] [i_16 - 1])) : (var_4)))))) ? (max(((-(655430586U))), (((/* implicit */unsigned int) arr_29 [i_16 - 2] [i_16 + 2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) var_1)) : (-1708896354))))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)6192)) ? (4902905710900938457LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_19 = 4; i_19 < 12; i_19 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((var_0) || ((!(((/* implicit */_Bool) arr_3 [i_16 + 2] [i_16 - 2])))))))));
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_16] [i_16 - 1] [i_19 - 2])) ? (-8489464269196413236LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_19 + 3] [i_16 + 1] [i_19 - 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)125))))))))));
                    }
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_16 + 1])), (((((/* implicit */_Bool) arr_9 [i_20] [4LL] [i_17] [i_16] [i_16])) ? (((/* implicit */int) arr_59 [i_16 - 2] [i_16 - 2] [i_18])) : (-387706951)))))) ? (((/* implicit */long long int) ((unsigned int) arr_1 [i_16 - 1]))) : (-8489464269196413232LL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 1; i_21 < 14; i_21 += 3) 
                        {
                            var_41 = ((/* implicit */int) ((long long int) min((arr_67 [i_17] [13U] [i_17] [i_16 + 2] [i_17] [13U] [i_17]), (((/* implicit */unsigned char) var_0)))));
                            var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_16 - 2] [i_21 + 1] [i_21 + 2] [i_21] [i_21 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (min((arr_23 [i_20] [i_20] [i_18] [(signed char)11]), (((/* implicit */unsigned int) var_6)))))) < (min((((/* implicit */unsigned int) arr_9 [i_16 + 1] [(unsigned char)0] [i_16 + 1] [i_16] [i_16])), (var_3)))));
                        }
                        arr_70 [i_16] [i_17] [i_17] [i_16] [i_20] = ((/* implicit */unsigned char) max((arr_61 [i_20] [i_17] [i_18] [i_16 - 2] [i_17] [(unsigned char)12]), (((/* implicit */int) min((var_9), (var_9))))));
                        var_43 += ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) arr_28 [(_Bool)1] [i_17] [i_16 + 1])), (arr_23 [i_20] [i_18] [i_18] [(unsigned short)16])))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_23 = 0; i_23 < 16; i_23 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) arr_66 [i_23] [i_23] [3] [i_23] [i_23]))));
                            arr_76 [i_23] [i_22] [i_22] [i_17] [i_17] [i_23] = ((/* implicit */unsigned char) ((arr_60 [i_18] [i_16 + 1] [i_18] [(signed char)4]) << (((arr_60 [(unsigned char)0] [i_16 + 2] [i_18] [i_22]) - (1958290951U)))));
                            var_45 = ((/* implicit */unsigned char) var_10);
                            var_46 = ((/* implicit */signed char) 1613779998);
                        }
                        var_47 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (+(arr_19 [i_16 - 1] [i_16 + 2] [i_16 - 2] [i_16] [i_16])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (arr_18 [i_22] [i_16] [i_22] [i_22] [i_22] [i_22]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)255))))))) : ((-(arr_18 [i_16 - 2] [i_16] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2])))));
                        var_48 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_16] [i_16 + 1] [i_16] [i_16 - 1] [i_16] [i_22])) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)201))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (8489464269196413231LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5427)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_59 [i_16] [i_17] [i_22]))))) : (min((((/* implicit */unsigned int) var_8)), (4294967295U))))));
                    }
                    var_49 = ((/* implicit */signed char) ((((/* implicit */int) arr_74 [i_16] [i_17] [i_18] [i_18] [i_17])) >> (((((/* implicit */int) arr_57 [i_16 + 2] [i_17] [i_18])) >> ((((~(var_10))) + (733791234)))))));
                    var_50 = ((((/* implicit */_Bool) arr_62 [i_16 - 1] [i_16 - 2] [i_16 + 2] [i_16 + 2] [i_16])) ? (((/* implicit */int) (unsigned short)34003)) : (((/* implicit */int) (unsigned char)148)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
    {
        var_51 = ((/* implicit */signed char) var_0);
        arr_80 [i_24] |= ((/* implicit */short) (((((~(((/* implicit */int) (unsigned char)158)))) + (2147483647))) << ((((+(((arr_23 [i_24] [i_24] [(signed char)7] [i_24]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))) - (1294743667U)))));
    }
    var_52 = ((/* implicit */unsigned char) var_10);
}
