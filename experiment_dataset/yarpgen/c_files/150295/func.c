/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150295
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)56415)), (((((/* implicit */_Bool) 474062936U)) ? (-9042370546285206910LL) : (((/* implicit */long long int) (-2147483647 - 1)))))))), (max(((-(var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)9120)) : (((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [8])) : (((/* implicit */int) arr_1 [8ULL]))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((+(arr_4 [i_0] [i_0] [9U]))) : (((var_4) << (((-8564755752014876647LL) + (8564755752014876696LL)))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551609ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 2]))));
                            arr_18 [i_0] [11] [i_2] [i_3] [5ULL] = ((/* implicit */unsigned short) (+(16541071211133983671ULL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) var_11)))))));
            }
            var_23 &= var_2;
        }
        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            arr_23 [i_0] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (!(arr_7 [(_Bool)1] [i_5] [(_Bool)1] [i_0]))))));
            arr_24 [i_0] [i_5] [i_5] = ((/* implicit */long long int) var_19);
            arr_25 [i_0] [i_5] = ((((unsigned long long int) -2147483645)) >> (((((/* implicit */_Bool) -8564755752014876647LL)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_1 [i_5])))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_29 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65526)) <= ((-2147483647 - 1))));
            arr_30 [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [(short)7] [(short)7] [i_0] [i_0] [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 1])))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_37 [i_6] [i_7] [i_6] = ((/* implicit */int) arr_20 [i_0]);
                            arr_38 [i_9] |= ((/* implicit */int) arr_2 [i_0]);
                            var_24 = ((/* implicit */short) ((unsigned int) arr_13 [i_6 - 1] [4] [i_7]));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (int i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                arr_41 [i_0] [i_6] [i_6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_10] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [(unsigned char)3] [i_0] [i_0] [i_6] [i_6] [i_10]))) : (arr_2 [i_0])));
                var_25 &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_6 - 1] [i_0] [i_10 + 1]);
                var_26 *= ((/* implicit */unsigned short) var_19);
                var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_0])) ? (6592626258334153037ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))));
                var_28 += ((/* implicit */unsigned short) var_9);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 10; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            arr_52 [i_11] [i_6] [i_11] [(unsigned char)0] [i_13] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6 - 1])) || (((/* implicit */_Bool) arr_26 [i_6 - 1] [i_6 - 1]))));
                            var_29 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24850))) : (arr_2 [i_0])))));
                        }
                    } 
                } 
                arr_53 [i_6] = ((/* implicit */_Bool) 17887929308849726719ULL);
                arr_54 [i_6] [i_6 - 1] [i_6] = ((/* implicit */unsigned long long int) arr_47 [i_6] [i_6] [i_11]);
                arr_55 [i_6] [i_6] = ((/* implicit */unsigned char) ((arr_7 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)1581))) : (var_4)));
                arr_56 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
            }
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                arr_59 [i_14] [i_6] [i_14] |= ((/* implicit */unsigned int) (short)-17858);
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_14])))))));
                var_31 &= ((/* implicit */short) (unsigned short)9120);
                var_32 *= ((/* implicit */unsigned long long int) arr_28 [i_14]);
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_0] [i_6] [i_6 - 1] [i_15] [7ULL] [i_15] [i_6]))));
                    arr_63 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_0])) || (((/* implicit */_Bool) arr_34 [i_6] [i_6]))));
                    arr_64 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_6 - 1])) ? ((~(var_10))) : (((/* implicit */int) (_Bool)1))));
                    arr_65 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [(unsigned char)4] [(unsigned char)4] [i_14] [i_15]))));
                }
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                {
                    var_34 = (-(((unsigned long long int) (unsigned short)65515)));
                    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_57 [i_6] [i_6] [i_6 - 1] [i_6 - 1]))));
                    var_36 *= ((/* implicit */unsigned long long int) arr_32 [i_16] [i_16] [i_0]);
                    arr_69 [i_16] [i_6] [i_14] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_0] [i_6 - 1] [i_14] [i_6])) - (((/* implicit */int) arr_35 [i_0] [i_6] [4ULL] [i_0] [i_16] [i_16] [i_16]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */int) (unsigned short)3324)) : (((/* implicit */int) (unsigned short)65530))))) : (arr_34 [i_6] [i_6 - 1])));
                }
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                {
                    var_37 -= ((/* implicit */unsigned short) arr_7 [i_0] [5ULL] [i_0] [i_0]);
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_39 [i_6] [i_17] [i_6]) ? (17887929308849726719ULL) : (((/* implicit */unsigned long long int) arr_34 [i_6] [6LL]))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_6] [i_14] [i_14] [i_17])))));
                }
            }
            for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_19 = 1; i_19 < 8; i_19 += 4) 
                {
                    for (unsigned char i_20 = 2; i_20 < 8; i_20 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(89364937)))) ? (((((/* implicit */_Bool) 18194275491945940198ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (9970457311883709608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_51 [i_6]))))));
                            var_40 = ((/* implicit */unsigned short) ((var_16) ? (((/* implicit */int) arr_15 [i_0] [i_6 - 1] [i_20 + 3] [i_18] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_15 [i_0] [i_6 - 1] [i_20 + 2] [i_19] [i_6 - 1] [i_6]))));
                            var_41 = ((/* implicit */unsigned short) (((-(arr_33 [i_20] [i_19] [i_6] [i_6] [i_6] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_20 + 3] [i_6])))));
                        }
                    } 
                } 
                arr_82 [i_18] [i_6] |= (-(12960728102845944400ULL));
            }
        }
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))));
        /* LoopNest 3 */
        for (long long int i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (short i_23 = 1; i_23 < 8; i_23 += 4) 
                {
                    {
                        arr_91 [4U] [i_21] [4U] [i_21] [i_21] [i_0] |= ((/* implicit */unsigned short) arr_19 [i_23 + 1] [i_23 + 3]);
                        var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4)) % (((/* implicit */int) arr_6 [i_0] [i_21] [i_21] [i_23])))))));
                        var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [(_Bool)1] [i_22]))));
                        var_45 &= ((((((/* implicit */long long int) ((/* implicit */int) var_1))) < (-4298414410917682810LL))) ? (((/* implicit */int) arr_66 [i_0] [i_0])) : (((/* implicit */int) var_18)));
                        /* LoopSeq 3 */
                        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
                        {
                            arr_94 [i_22] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_0] [i_0] [2ULL] [i_0] [i_24])) ^ ((-(((/* implicit */int) arr_89 [(unsigned short)7] [i_22] [(unsigned short)7] [(unsigned short)7] [i_24]))))));
                            arr_95 [i_22] [i_22] [4] [i_22] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 2147483641))));
                        }
                        for (unsigned short i_25 = 0; i_25 < 12; i_25 += 4) /* same iter space */
                        {
                            var_46 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                            var_47 = ((/* implicit */unsigned long long int) ((((long long int) arr_20 [i_21])) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)44846))))));
                            var_48 &= ((/* implicit */unsigned long long int) (unsigned char)125);
                            var_49 = ((((/* implicit */int) arr_68 [i_23] [i_23 + 2] [1ULL] [i_21])) <= (((/* implicit */int) arr_51 [i_22])));
                        }
                        for (unsigned short i_26 = 0; i_26 < 12; i_26 += 4) /* same iter space */
                        {
                            arr_100 [i_26] [i_23 + 3] [i_22] [(short)3] [i_0] = ((/* implicit */short) var_9);
                            var_50 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_9 [1ULL] [i_22] [i_22] [i_23] [i_23 + 1] [i_22])) : (((/* implicit */int) arr_9 [i_21] [i_21] [i_21] [i_21] [i_23 + 2] [i_23]))));
                            arr_101 [i_0] [i_22] [i_23] [i_22] = ((/* implicit */unsigned char) ((arr_45 [i_26] [i_23 + 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_27 = 0; i_27 < 15; i_27 += 2) 
    {
        arr_105 [i_27] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1965039732)), (var_17)));
        var_51 = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)62201)), ((((_Bool)0) ? (((/* implicit */int) arr_102 [i_27])) : (((/* implicit */int) (unsigned short)56430))))))) + (((((/* implicit */_Bool) (unsigned short)13632)) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_102 [i_27]))) > (var_9)))))))));
        var_52 = var_8;
    }
}
