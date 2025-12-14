/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146521
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
    var_16 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    var_17 += ((/* implicit */unsigned long long int) (((((+(0LL))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) arr_3 [i_1] [i_1]))))))) == (((/* implicit */long long int) min((((/* implicit */int) min((arr_3 [3U] [i_2]), ((unsigned char)104)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])))) : (((((/* implicit */_Bool) (unsigned short)3123)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) var_12);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            var_20 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) ((long long int) (unsigned char)104)))), (((((var_0) >= (((/* implicit */int) (short)3217)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) : (var_13)))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_2 + 1] [(unsigned char)17])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (max((((/* implicit */unsigned int) var_7)), (4294967295U)))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_3] [i_4 + 1])))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (signed char)-15))))))) : (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))))))));
                            var_22 = ((/* implicit */short) var_1);
                        }
                        arr_12 [i_1] [i_2 + 1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(8904719579275039257LL))) > (((/* implicit */long long int) ((/* implicit */int) (short)4733)))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((77010914) << (((((((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 2])) | (2561260933899253051ULL))) - (2561260934185614713ULL))))))));
                    }
                }
                arr_13 [i_0] |= ((/* implicit */_Bool) 168562001);
                var_24 &= ((int) (-((+(14920760600292275699ULL)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((short) var_0))) + (((((/* implicit */int) (unsigned char)104)) + (((/* implicit */int) var_11))))))) | (((((-2848252817509228897LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)79))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2043493827935138676LL)))));
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (((18203702195502507423ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [16LL] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
            arr_20 [(short)4] [i_5] [(short)4] |= ((/* implicit */unsigned char) max(((short)5586), (((/* implicit */short) (signed char)48))));
            var_27 = ((/* implicit */short) var_5);
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_8 - 1] [i_9])) ? (arr_6 [i_5] [i_8 - 1] [i_8]) : (arr_6 [i_9] [i_8 - 1] [i_5])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 2623393952U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                    {
                        var_29 = arr_0 [i_8 - 1] [i_10];
                        var_30 = ((/* implicit */long long int) (unsigned char)0);
                        var_31 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)215));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_5] [i_7] [i_9] [(unsigned char)8] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9] [14LL] [(signed char)2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))) * ((-(var_0)))));
                        arr_35 [(unsigned char)3] [i_7] [i_8] [i_9] [(short)3] [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_32 -= ((short) ((arr_15 [i_5] [i_8]) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 491281237)) : (arr_15 [i_5] [i_7]))) - (491281208LL)))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((var_14) ? (-2002627028) : (((((((/* implicit */_Bool) (short)-22597)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_23 [i_8])))) | ((+(((/* implicit */int) (_Bool)1)))))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */_Bool) min((var_34), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)0)))))))));
                        var_35 = ((/* implicit */unsigned long long int) (unsigned char)0);
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_5 [i_13] [(unsigned short)10]) / (((/* implicit */int) (unsigned char)95)))) % (((((/* implicit */_Bool) 4190309117077632177LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)255))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_5] [i_7] [i_8] [i_13]))) : (var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_8 [i_5] [i_5] [i_8 - 1])) % (50504281U))))));
                    arr_40 [i_5] [i_7] [i_8] [i_13] = ((/* implicit */_Bool) arr_33 [i_7] [i_8]);
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (unsigned char)148))));
                }
                var_38 ^= ((/* implicit */_Bool) (short)32767);
            }
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_5] [i_7] [i_7] [i_5] [i_5] [i_7] [i_5])) ? (min((((/* implicit */unsigned int) ((short) 1982075631))), (((((/* implicit */unsigned int) arr_8 [i_7] [i_7] [i_5])) * (0U))))) : (((/* implicit */unsigned int) ((int) (unsigned short)31410))))))));
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)31410)))))))));
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_14] [i_14] [i_5] [i_5] [i_5]))) : (var_13))))));
        }
        var_42 ^= var_14;
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)34125)) - (34098)))))))));
        var_44 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2625486102209911396LL))));
        var_45 += ((/* implicit */_Bool) ((arr_44 [i_15 + 1]) ? (((/* implicit */int) arr_44 [i_15 + 1])) : (((/* implicit */int) (short)32767))));
        arr_45 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15] [i_15 + 1])) : (((/* implicit */int) arr_10 [i_15] [i_15 + 1] [i_15 + 1] [(unsigned char)13] [(_Bool)1] [20LL] [i_15 + 1]))));
    }
    for (signed char i_16 = 3; i_16 < 12; i_16 += 1) 
    {
        arr_48 [i_16 + 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_16 - 2] [i_16 - 3] [i_16] [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_16 - 3]))))) ? (arr_24 [i_16 - 3] [i_16 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_16 - 2] [i_16 - 1]))))))));
        /* LoopSeq 1 */
        for (int i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            var_46 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_17] [i_17])))))));
            arr_52 [i_16] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_39 [i_16 - 2] [i_17] [i_16] [4U])) ? (((/* implicit */int) arr_39 [i_16 - 1] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_39 [i_16 + 1] [i_16] [i_16] [i_17]))))));
            var_47 = ((/* implicit */int) max(((-(8364293693200428062ULL))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_17] [i_17])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
        }
        var_48 |= ((/* implicit */unsigned char) var_12);
        var_49 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            var_50 = ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_16 - 3] [i_16 - 3] [i_16 - 3])) ^ (((/* implicit */int) (unsigned char)5))));
            var_51 ^= 465815574U;
        }
        for (int i_19 = 0; i_19 < 13; i_19 += 3) 
        {
            arr_57 [i_19] = ((/* implicit */short) arr_4 [i_16] [i_16 - 3] [i_19]);
            var_52 = ((/* implicit */unsigned short) max((arr_27 [(unsigned char)1] [12LL] [i_19]), (((/* implicit */long long int) (short)3217))));
            arr_58 [i_19] [i_16 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_19] [i_19]))));
        }
    }
    for (int i_20 = 0; i_20 < 14; i_20 += 2) 
    {
        var_53 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_20] [i_20])) ? ((-(8661284080590011685LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) ? (min((var_6), (((/* implicit */int) (signed char)39)))) : ((-(((/* implicit */int) (_Bool)1)))))))));
        var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) ((short) ((((((/* implicit */_Bool) (unsigned short)31410)) || (((/* implicit */_Bool) (short)31722)))) ? (((/* implicit */unsigned long long int) arr_22 [i_20])) : (2342328390969217341ULL)))))));
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_70 [i_23] [i_23] [i_22] = ((/* implicit */signed char) (_Bool)1);
                        arr_71 [i_20] [i_21] [(_Bool)0] = ((/* implicit */unsigned long long int) (~((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) ^ (arr_62 [i_21] [i_23])))));
                        arr_72 [i_20] [i_21] [i_22] [i_20] [i_21] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_59 [i_23])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_20] [i_20]))))));
                        var_55 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4733)) ? (min((((/* implicit */int) (unsigned char)7)), (var_0))) : (((/* implicit */int) arr_36 [i_20] [i_21] [i_21] [i_22] [i_23]))))) ? (((((/* implicit */_Bool) (signed char)18)) ? (-979413169) : (((/* implicit */int) (unsigned char)7)))) : (((((/* implicit */_Bool) arr_39 [i_20] [i_21] [i_23] [i_23])) ? (var_0) : (((/* implicit */int) (unsigned short)54925))))));
                    }
                } 
            } 
        } 
        var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_20] [i_20])) ? (3201636964580316963LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))))));
    }
}
