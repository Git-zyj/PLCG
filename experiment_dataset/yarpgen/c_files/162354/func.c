/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162354
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
            var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))), (min((((/* implicit */unsigned int) (unsigned short)63)), (arr_2 [i_1] [i_1] [i_0])))));
            /* LoopSeq 1 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) (unsigned char)115))), (arr_2 [i_0 + 1] [i_0] [i_0])));
                /* LoopSeq 3 */
                for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) max(((+(27ULL))), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_2] [i_1] [i_0]))));
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0])), (((unsigned char) ((((/* implicit */_Bool) (signed char)-84)) ? (226541225U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
                    var_21 = ((/* implicit */unsigned int) (short)-27049);
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((unsigned char) (short)27059)))));
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 23; i_5 += 4) 
                    {
                        var_23 -= ((/* implicit */_Bool) (+((+(-811503386)))));
                        var_24 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_11)) >> (((arr_9 [i_5] [i_4] [i_2] [i_1] [i_0] [i_0]) + (807780944)))))));
                        var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_4] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_1] [i_0]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) (+(arr_2 [i_2 + 1] [i_0 + 1] [i_0 + 1])));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_4] [i_2 - 1] [i_1] [i_0])) ? (((/* implicit */unsigned int) 21)) : (arr_2 [i_6] [i_4] [i_0])));
                        arr_21 [i_6] [i_4] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)11)) ? (4068426070U) : (((/* implicit */unsigned int) 26))));
                    }
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2] [i_2 - 1] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)-13213))))) : (((((/* implicit */int) arr_11 [i_0] [i_1] [i_4])) ^ (((/* implicit */int) (short)15535))))));
                    var_27 = ((/* implicit */long long int) ((unsigned short) arr_14 [i_4] [i_4] [i_4] [i_4] [i_0 + 1]));
                }
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (unsigned char)154))));
                    arr_27 [i_0] [i_1] [i_2] [i_7] [i_0] [i_2] |= ((/* implicit */int) (unsigned char)74);
                    var_29 = ((/* implicit */_Bool) ((short) (unsigned char)196));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2146551324) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21014))) : (min((arr_2 [i_1] [i_1] [i_1]), (arr_2 [i_7] [i_1] [i_0])))));
                }
            }
        }
        arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0])) >= (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_31 -= ((/* implicit */_Bool) 226541225U);
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] [i_8]))));
            /* LoopSeq 3 */
            for (long long int i_9 = 1; i_9 < 23; i_9 += 3) 
            {
                arr_34 [i_0] [i_8] [i_9] [i_9] = ((/* implicit */int) arr_25 [i_0] [i_0] [i_8] [i_9]);
                /* LoopSeq 2 */
                for (signed char i_10 = 1; i_10 < 22; i_10 += 1) 
                {
                    var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_10 - 1] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_31 [i_10 - 1] [i_10 - 1])));
                    var_34 = ((/* implicit */int) var_13);
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_10 - 1] [i_9 + 1] [i_0 + 1])) >> (((((/* implicit */int) arr_37 [i_10] [i_10] [i_10 + 2] [i_10] [i_10] [i_0 - 1])) - (139)))));
                        var_35 = ((/* implicit */unsigned int) ((arr_3 [i_0 - 1]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_36 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)24729))));
                        var_37 = ((/* implicit */short) arr_37 [i_0] [i_8] [i_9] [i_9] [i_10] [i_12]);
                    }
                    for (short i_13 = 3; i_13 < 23; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */short) (+(arr_48 [i_9] [i_9 - 1] [i_10] [i_10 + 1] [i_13])));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_13 + 1])) ? (((/* implicit */int) arr_14 [i_13] [i_10 + 2] [i_9 + 1] [i_8] [i_0])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_8] [i_9] [i_10] [i_13]))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2031117484026276469ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)148))))) ? ((+(6123294702859865851ULL))) : ((+(1300428915733325342ULL)))));
                        var_41 = ((/* implicit */unsigned short) (unsigned char)0);
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_1)))));
                    }
                    /* LoopSeq 1 */
                    for (int i_14 = 2; i_14 < 23; i_14 += 3) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((short) 1069346681980886404LL)))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)86)) ? (18297597552194160926ULL) : (((/* implicit */unsigned long long int) 226541225U))));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_16 = 2; i_16 < 21; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4611685880988434432ULL)) ? (1062301134) : (((/* implicit */int) (unsigned char)97))));
                        arr_61 [i_15] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_15] [i_16])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_8])) : (((/* implicit */int) (signed char)-33))));
                    }
                    for (long long int i_17 = 2; i_17 < 22; i_17 += 4) 
                    {
                        arr_65 [i_0] [i_8] [i_15] = arr_43 [i_17 + 1] [i_9 + 1] [i_0 + 1] [i_0 + 1] [i_0];
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_17] [i_15] [i_15] [i_9] [i_8] [i_8] [i_0])) ? (((/* implicit */int) (unsigned short)76)) : (((/* implicit */int) arr_19 [i_17] [i_15] [i_9] [i_8] [i_0]))))) ? (((var_14) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_62 [i_17] [i_15] [i_9] [i_8] [i_0])))) : (((((/* implicit */_Bool) -26)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))));
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)25890))))) ? ((+(arr_38 [i_17] [i_15] [i_15] [i_9] [i_8] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)154)))))));
                    }
                    for (int i_18 = 1; i_18 < 23; i_18 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) 2460518210U);
                        arr_68 [(unsigned char)12] [i_15] [i_9] [i_9] [i_8] [(unsigned char)12] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (short)7)) >= (((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_47 = (+(((arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (169))))));
                        arr_71 [i_19] [i_15] [i_15] [i_9] [i_15] [i_8] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_32 [i_0 - 1] [i_9] [i_9 + 1]));
                    }
                    arr_72 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_3) ? (((/* implicit */int) ((-1069346681980886404LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((short) 9223372036854775807LL)))));
                    var_48 = ((/* implicit */short) ((int) arr_30 [i_0 + 1]));
                }
                var_49 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_9] [i_8] [i_0])) ? ((+(((/* implicit */int) arr_66 [i_0] [i_8] [i_8] [i_9] [(_Bool)1])))) : (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_8] [i_9 + 1] [i_9 - 1]))));
                var_50 = ((/* implicit */short) (+(((/* implicit */int) arr_66 [(signed char)2] [i_9 + 1] [i_0] [i_0 - 1] [(signed char)2]))));
            }
            for (unsigned short i_20 = 2; i_20 < 22; i_20 += 4) 
            {
                var_51 = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) arr_37 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                /* LoopSeq 1 */
                for (unsigned short i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        var_52 = ((/* implicit */int) arr_44 [i_0]);
                        var_53 -= ((/* implicit */int) ((_Bool) (signed char)60));
                    }
                    arr_80 [i_21] [i_20] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 226541225U)) >= (arr_48 [i_21] [i_20] [i_8] [i_8] [i_0])));
                }
                var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1717106391)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) : (1063991890731549915ULL)));
                var_55 = ((/* implicit */unsigned char) ((arr_19 [i_20 + 1] [i_20] [i_20] [i_20] [i_20 - 2]) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) arr_19 [i_20 + 1] [i_20] [i_20] [i_20] [i_20 + 1]))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
            {
                arr_84 [i_0] [i_8] [i_23] = ((/* implicit */unsigned long long int) (+((+(226541226U)))));
                var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_0] [i_8] [i_23] [i_0] [i_0] [i_23])) ? (arr_38 [i_23] [i_23] [i_23] [i_8] [i_0] [i_0]) : (arr_38 [i_23] [i_23] [i_8] [i_8] [i_0 + 1] [i_0]))))));
            }
            arr_85 [i_8] [i_0] = ((/* implicit */unsigned char) 1115193174U);
            arr_86 [i_8] [i_8] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 10462683468109381021ULL)) ? (((/* implicit */int) (unsigned short)65472)) : (0))) | ((+(-2097152)))));
        }
        var_57 = ((/* implicit */unsigned char) arr_81 [i_0] [i_0] [i_0] [i_0]);
    }
    var_58 = ((/* implicit */_Bool) var_0);
    var_59 += ((/* implicit */short) var_7);
}
