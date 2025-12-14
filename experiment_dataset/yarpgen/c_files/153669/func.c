/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153669
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
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_4 [i_0] [5ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_6)))))) ? (((((/* implicit */int) min(((short)24029), ((short)24018)))) / ((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24030))))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_0])) != (var_0))))))));
            arr_5 [i_0] [(signed char)7] [i_1] = arr_3 [i_0];
            var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) (short)24038)) >> (((-468317629) + (468317660)))))));
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(1984U)))))) ? (((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) % (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)0])) ? (arr_7 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_5)))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_2] [(unsigned char)6] [i_4] [7ULL] = ((((/* implicit */int) (unsigned short)49020)) - (((/* implicit */int) (short)24038)));
                            var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) 938951792U)) ? (((/* implicit */int) (short)1342)) : (((/* implicit */int) (short)-23998))))));
                            arr_20 [i_2] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_18 [(short)7] [i_2] [i_2] [i_4] [i_0])) ? (((/* implicit */int) arr_18 [i_3] [4ULL] [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_3] [i_5])))), (((/* implicit */int) var_9)))) + (((((/* implicit */int) ((((/* implicit */int) (short)5025)) > (arr_3 [i_4])))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) >= (arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] [i_5]))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-297652079)))) ? (arr_7 [i_0] [i_2]) : (arr_16 [i_0] [i_2])));
                            arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_16 [i_0] [i_2])) ? (var_7) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_3] [i_2] [i_0])) : (((((/* implicit */_Bool) arr_11 [i_0] [8LL] [i_0])) ? ((+(((/* implicit */int) var_8)))) : (((arr_10 [i_3] [i_2] [i_3]) % (((/* implicit */int) arr_1 [i_0]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -761686168)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-31565))))) ? (((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */unsigned int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_3] [5])))))))))));
            }
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) 4193792)) + (18446744073709551587ULL))))));
        }
        for (int i_6 = 4; i_6 < 9; i_6 += 2) 
        {
            arr_24 [i_0] [i_6] = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned int) var_2)) % (arr_23 [i_6 - 3]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_6])) == (var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_6] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6 - 4] [1U] [i_0])))) : (min((var_7), (((/* implicit */int) arr_22 [i_0])))))))));
            arr_25 [i_6 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9006063592093199005LL)) ? (((/* implicit */int) (short)-2638)) : (1265672770)));
            arr_26 [i_6] [4ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (short)2283)) ? (((/* implicit */unsigned int) 203571202)) : (411810328U)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    arr_34 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                    arr_35 [i_0] [(signed char)9] [(signed char)9] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (signed char)-17))));
                    arr_36 [i_0] [i_7] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3403422020U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)2525))));
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_6 - 3] [i_7 - 1] [i_7 - 1]) : (arr_11 [i_6 - 4] [i_7 - 3] [i_7 - 1])));
                }
                arr_37 [i_0] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [8U]))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8192)) % (2147483647))))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 3; i_9 < 8; i_9 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((arr_33 [i_7] [i_6] [i_7] [i_6 - 3] [6]) ? (((((/* implicit */_Bool) arr_29 [i_9] [i_7] [i_6] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_23 |= ((/* implicit */signed char) (+(arr_10 [i_0] [i_9 - 3] [(unsigned short)8])));
                        arr_43 [i_7] [i_6] [i_7 - 3] [i_9] [(unsigned char)2] = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_10] [i_7] [i_7] [i_0])) <= (((/* implicit */int) arr_27 [i_0] [i_0] [i_7] [i_10]))));
                    }
                    arr_44 [i_0] [i_7] [7U] [i_9] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
                    arr_45 [i_0] [i_7] [i_6] [i_7] [i_9] [i_9] = ((((/* implicit */_Bool) arr_18 [i_9 - 2] [i_9 - 2] [i_6 - 1] [i_9] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9] [i_7])));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_11] [i_11])) & (arr_9 [i_0] [i_0])))) ? (((/* implicit */long long int) ((arr_42 [i_6] [i_11]) ? (var_4) : (((/* implicit */int) var_13))))) : ((+(var_6))))))));
                        var_25 = ((/* implicit */unsigned short) var_10);
                        arr_50 [i_0] [i_9] [i_7] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_11] [(unsigned short)5] [i_0]) : (((/* implicit */int) var_5))))) : (((((/* implicit */long long int) var_2)) - (var_6)))));
                    }
                    for (int i_12 = 3; i_12 < 7; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_49 [i_6] [i_7] [i_9 + 2] [i_12]) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (arr_17 [i_0] [i_6] [i_0] [i_9] [i_6 - 3] [i_6 - 4] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_6] [i_7] [i_9])) ? (((/* implicit */int) var_9)) : (arr_49 [i_0] [i_0] [i_9 - 3] [i_9])))))))));
                        arr_54 [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_7] [i_6 - 4] [i_7] [i_9] [i_0])) | (((/* implicit */int) arr_33 [i_7] [i_6 + 1] [7] [i_9] [i_12 - 1]))));
                    }
                }
                for (unsigned short i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        var_27 = ((/* implicit */int) var_9);
                        var_28 = ((((/* implicit */_Bool) arr_14 [i_7] [i_13] [i_7 - 2] [i_7] [i_7])) ? (((/* implicit */int) arr_14 [i_7] [(unsigned char)9] [i_7 - 2] [i_6] [i_7])) : (((/* implicit */int) arr_14 [i_7] [i_13 + 1] [i_7 - 2] [i_6] [i_7])));
                    }
                    arr_62 [i_0] [i_7] [(_Bool)1] [i_13 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_7)))) && (((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_7]))));
                }
                var_29 &= ((/* implicit */int) var_6);
            }
            var_30 = ((/* implicit */int) var_1);
        }
        arr_63 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (1040187392U) : (1616880984U)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    {
                        var_31 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_15] [i_17])) ? (arr_12 [i_0] [i_15] [i_16] [i_17]) : (arr_28 [i_16] [i_15] [i_16] [(unsigned short)7])))) * (max((((/* implicit */unsigned long long int) arr_53 [i_0] [4U] [i_16] [i_17] [i_0] [i_16] [i_16])), (var_12)))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_10))));
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) min(((~(((((/* implicit */int) arr_31 [i_0] [i_15] [i_16] [i_17])) & (arr_13 [i_0] [i_15] [i_16]))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_17] [i_15] [i_16] [i_0] [i_0] [i_16] [i_15])) ? (((/* implicit */int) arr_58 [i_0] [i_0] [i_16] [i_17] [i_0] [i_0])) : (var_10))) >= (((((/* implicit */int) arr_15 [i_16] [3] [i_15] [i_16])) % (arr_32 [(unsigned short)0] [i_16]))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))))) && (((/* implicit */_Bool) max((arr_48 [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]), (((/* implicit */int) var_14)))))));
                        }
                        for (int i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+(((arr_77 [i_0] [i_15] [i_0] [i_16] [i_19]) | (var_12))))))));
                            var_36 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_71 [i_17 - 1] [i_15] [i_19] [i_17] [i_19])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (var_4))) != (((/* implicit */int) (!(((((/* implicit */int) var_1)) > (((/* implicit */int) var_9)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_20 = 1; i_20 < 8; i_20 += 2) 
    {
        for (int i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            {
                arr_84 [i_21] &= ((/* implicit */int) arr_33 [i_21] [i_21] [i_21] [(short)8] [i_21]);
                var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
            }
        } 
    } 
}
