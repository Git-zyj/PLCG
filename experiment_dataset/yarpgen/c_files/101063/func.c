/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101063
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
    var_14 += ((/* implicit */signed char) max((((/* implicit */int) ((short) max((var_1), (((/* implicit */short) (unsigned char)16)))))), (1617483246)));
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) 1616941205)), (min((min((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) (short)12)))), (((/* implicit */unsigned int) ((int) var_6)))))));
            var_17 = ((/* implicit */int) ((short) (-(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (unsigned char)255))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_18 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)125)) >> (((18446744073709551615ULL) - (18446744073709551590ULL)))))), (min((((/* implicit */unsigned int) (unsigned char)14)), (arr_0 [i_0 + 1])))))));
                var_19 |= ((((long long int) (_Bool)1)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551608ULL) / (((/* implicit */unsigned long long int) var_9))))) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])))))))));
                var_20 &= ((/* implicit */short) arr_7 [i_0]);
                var_21 &= ((/* implicit */unsigned char) max(((((((~(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) << (((min((var_9), (((/* implicit */unsigned int) (unsigned char)236)))) - (236U))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)31904)) ^ (((/* implicit */int) (unsigned char)47))))))));
            }
        }
        var_22 = ((/* implicit */signed char) min((max(((-(3618932204U))), (((/* implicit */unsigned int) (+(arr_7 [i_0])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -397100011)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((((/* implicit */_Bool) -281463427)) ? (arr_12 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) ((arr_6 [i_3] [i_3] [i_3]) + (((/* implicit */int) arr_5 [i_3]))))) : (((((/* implicit */_Bool) min(((unsigned char)7), (((/* implicit */unsigned char) arr_9 [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-122)) : (-9)))) : ((+(var_10)))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_24 = ((((/* implicit */int) min((((/* implicit */short) (unsigned char)196)), (var_8)))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)128))))))));
            /* LoopSeq 4 */
            for (int i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_11 [i_5 - 1])), (arr_7 [i_5 - 1])))));
                var_26 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_7)), (arr_6 [i_3] [(short)8] [i_5 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_6]))) ? (((((/* implicit */_Bool) arr_13 [i_6] [i_4])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (unsigned char)255)))) : (var_13)));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) 12503682536435484268ULL);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [(short)14] [i_3] [i_3] [i_3])))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_4] [i_5 - 1] [i_5] [i_7] [i_4])) / ((+(((/* implicit */int) (unsigned short)65515))))));
                    }
                    for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) (+(-297622797)));
                        var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (var_2) : (((/* implicit */int) arr_9 [i_3]))));
                    }
                    var_33 = ((/* implicit */signed char) (+(((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_5])))))));
                    var_34 = ((/* implicit */unsigned char) (+((-(arr_24 [i_3] [i_3] [i_3] [i_3] [i_3])))));
                    var_35 -= ((/* implicit */long long int) arr_18 [i_3] [i_3] [i_5 + 1] [i_4] [i_4] [i_5 + 1]);
                }
            }
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_0)), (arr_21 [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) var_8)) : ((-((~(((/* implicit */int) (unsigned char)124))))))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 2; i_10 < 19; i_10 += 4) 
                {
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) arr_16 [i_3] [i_4] [i_9])), (var_8))))));
                    var_38 = ((/* implicit */int) min((((/* implicit */unsigned int) 0)), (arr_32 [i_9])));
                    var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-9065))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) & (2222027804U))))))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2359014428U)) ? (((/* implicit */unsigned long long int) 2147483626)) : (((arr_3 [i_10 - 1] [i_10 - 1]) & (arr_30 [i_3] [i_10 - 2] [i_9])))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)92)) >> (((((/* implicit */int) ((short) var_12))) - (211)))))) ? (((/* implicit */unsigned long long int) min(((+(-1092703692))), ((+(((/* implicit */int) (unsigned char)86))))))) : (((unsigned long long int) (unsigned char)165))));
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (~((~(((/* implicit */int) arr_36 [i_3] [i_3] [(short)8] [i_3] [i_3])))))))));
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (+(((unsigned long long int) max((var_13), (((/* implicit */int) (unsigned char)6))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) 15370048503539555027ULL))));
                        var_45 = ((/* implicit */unsigned int) ((unsigned char) arr_35 [i_3] [i_10 - 2] [i_10 - 2] [i_3]));
                        var_46 = ((/* implicit */int) (+((+(0U)))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_3] [i_4] [i_9])) - (((/* implicit */int) arr_18 [i_3] [i_3] [i_4] [i_10] [i_3] [i_12]))));
                        var_48 = ((/* implicit */short) arr_12 [i_3]);
                    }
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((int) ((max((((/* implicit */unsigned int) arr_15 [(unsigned char)19] [i_4] [i_4])), (3321479094U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -6287159631093115875LL))))))))));
                }
                var_50 = ((/* implicit */long long int) ((unsigned int) arr_27 [i_3] [i_3]));
                var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9] [i_4] [i_4] [i_3] [i_3])) ? (2143289344) : (((/* implicit */int) arr_38 [i_9] [(short)11] [i_9] [(short)18] [i_9])))))));
            }
            for (unsigned int i_13 = 2; i_13 < 18; i_13 += 2) /* same iter space */
            {
                var_52 = ((max(((~(arr_21 [i_13 - 1] [i_4] [i_3]))), (((/* implicit */unsigned int) ((signed char) var_10))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3] [i_13] [i_4] [i_4] [i_4] [i_3] [i_3]))));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 1; i_14 < 18; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_15 = 2; i_15 < 17; i_15 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned short)16189)) ^ (320284057))));
                        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((var_2) <= (((/* implicit */int) (unsigned char)128)))))));
                    }
                    var_55 = ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) arr_9 [i_3])))), ((~(((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) var_3))));
                }
            }
            for (unsigned int i_16 = 2; i_16 < 18; i_16 += 2) /* same iter space */
            {
                var_56 ^= ((/* implicit */int) arr_37 [i_4] [i_4] [i_3]);
                var_57 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_5 [i_3])), ((+(var_4)))));
                var_58 = ((/* implicit */int) min((arr_10 [i_3]), (((/* implicit */short) arr_39 [i_3] [i_3] [i_3]))));
            }
            var_59 &= ((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (signed char)-105)) ? (((((/* implicit */int) (short)16128)) + (var_11))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
        }
        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
        {
            var_60 = var_12;
            var_61 = ((/* implicit */_Bool) ((unsigned char) (short)14485));
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_62 = (((!(((/* implicit */_Bool) arr_1 [i_18])))) ? (((/* implicit */int) max((((/* implicit */short) arr_25 [i_18] [i_18] [i_18] [i_18])), (arr_17 [i_18] [i_18] [18LL] [i_18] [5])))) : (((/* implicit */int) var_8)));
        var_63 = ((/* implicit */long long int) max((var_63), (((/* implicit */long long int) (short)12661))));
        var_64 &= ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) var_1)), (((((/* implicit */int) (short)26612)) + (((/* implicit */int) arr_34 [8] [i_18] [i_18] [i_18] [(unsigned char)5] [i_18] [8])))))));
        var_65 = ((/* implicit */unsigned char) max((-2092532065), ((((_Bool)1) ? (((/* implicit */int) (short)-13941)) : (-1871086422)))));
        var_66 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (max((((/* implicit */unsigned long long int) var_8)), (var_5))))), (((/* implicit */unsigned long long int) ((-1562413003) / (((/* implicit */int) arr_37 [i_18] [i_18] [i_18])))))));
    }
    var_67 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15296)) ? (5329290493009064339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (unsigned char)172))))))) > ((+(min((var_10), (((/* implicit */unsigned int) 0))))))));
}
