/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185157
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3840)) || (((/* implicit */_Bool) arr_2 [i_2])))))))))));
                        var_16 &= ((/* implicit */long long int) (+(((var_10) - (((arr_6 [i_0] [i_0] [(unsigned short)5] [i_0]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1)))))) : (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4] [i_1] [i_0 + 2]))))) ? (((((/* implicit */int) arr_6 [i_1] [(short)4] [i_4] [i_1])) - (arr_13 [i_0]))) : (((/* implicit */int) var_2)))))));
                var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)61696)) ? (min((((/* implicit */unsigned int) var_1)), (3243213246U))) : (max((((/* implicit */unsigned int) (unsigned short)61708)), (var_10)))))));
                var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((arr_13 [i_1]) < (((/* implicit */int) var_2))))) : (var_8)))));
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((2501269779521624509ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                    var_21 = ((/* implicit */int) var_10);
                    var_22 = ((/* implicit */unsigned int) arr_8 [i_5 - 1] [i_0 + 2]);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)41875)))))));
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) arr_2 [i_5 + 3])) : ((+(((/* implicit */int) var_9))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1])) : (((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(unsigned char)8])) ^ (((/* implicit */int) var_4))))));
                    var_26 = ((/* implicit */int) (+(((arr_12 [i_0] [(_Bool)1] [i_5]) & (var_5)))));
                    var_27 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_0 + 2]))));
                }
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0] [i_0] [10LL] [i_0]))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_5]))));
                }
                for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 2] [i_5 + 1] [i_5]))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)2040)) == (((/* implicit */int) arr_9 [i_0] [0LL] [i_0 - 1]))))) : (((((/* implicit */int) (short)-14629)) % (((/* implicit */int) (_Bool)1))))));
                    var_32 = ((/* implicit */signed char) 2501269779521624509ULL);
                    var_33 += ((/* implicit */unsigned long long int) (+(var_10)));
                }
                var_34 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)61673))));
                var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_26 [i_5 - 2] [i_1] [i_5] [i_1] [i_1])))) / (((/* implicit */int) var_1))));
                var_36 = ((/* implicit */unsigned long long int) (-(var_0)));
                var_37 = var_12;
            }
            for (int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_38 = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 1])))));
                var_39 += ((/* implicit */unsigned char) min((((/* implicit */int) arr_19 [(short)8] [(short)8] [i_0])), (min(((+(((/* implicit */int) var_12)))), ((+(((/* implicit */int) var_1))))))));
            }
        }
        for (unsigned char i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [6ULL])) * (((/* implicit */int) arr_9 [i_0 + 1] [i_11] [(short)3])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_13 = 2; i_13 < 8; i_13 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_8))) == ((~(-1592588258))))))));
                    /* LoopSeq 2 */
                    for (short i_14 = 2; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        var_42 = var_5;
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_14 - 2] [i_13] [i_0 - 1])))))));
                        var_44 = ((/* implicit */int) var_6);
                    }
                    for (short i_15 = 2; i_15 < 11; i_15 += 2) /* same iter space */
                    {
                        var_45 &= ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3));
                        var_46 |= ((/* implicit */unsigned int) arr_26 [i_11] [i_11 - 2] [i_11 - 3] [i_13 + 3] [i_13]);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_16 = 3; i_16 < 10; i_16 += 3) 
                    {
                        var_47 = ((/* implicit */_Bool) 18446744073709551614ULL);
                        var_48 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) -2LL)) ? (15945474294187927107ULL) : (((/* implicit */unsigned long long int) var_10))))));
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(134217727ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_7 [i_0] [4] [i_16 + 1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_50 = ((/* implicit */int) (unsigned short)18951);
                        var_51 = (+(((/* implicit */int) arr_44 [(unsigned short)5] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                        var_52 = ((/* implicit */_Bool) (+(arr_18 [i_13 - 1])));
                    }
                }
                var_53 = (+(((/* implicit */int) arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] [i_0 - 1])));
                var_54 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_34 [i_12]))));
            }
        }
        var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */unsigned int) arr_22 [10ULL]))))))) / (((((/* implicit */unsigned long long int) var_7)) + (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))));
        var_56 = ((/* implicit */unsigned short) (+(min((3300324262636054408ULL), (((/* implicit */unsigned long long int) arr_29 [i_0] [2U] [i_0] [i_0]))))));
        var_57 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)101))))) / (min((var_5), (((/* implicit */unsigned int) var_11))))));
    }
    var_58 = ((/* implicit */unsigned int) var_0);
    var_59 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)255)))));
}
