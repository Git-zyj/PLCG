/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174251
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
    var_11 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (signed char)48);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_7 [7U] = ((/* implicit */short) ((unsigned short) ((unsigned int) arr_5 [i_1])));
            arr_8 [i_0] [8LL] [(signed char)5] = ((/* implicit */short) var_8);
        }
        for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    var_12 += ((/* implicit */signed char) var_3);
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */unsigned long long int) var_1)) / (6491759672344647695ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        arr_20 [i_5] [i_4] [(unsigned char)6] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)206)) ? (-655270971) : (((/* implicit */int) (unsigned char)212))));
                        var_14 = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_5 + 1] [i_0] [6ULL] [i_5 + 2] [(signed char)2]) | (((/* implicit */long long int) arr_18 [6] [i_5 + 1] [i_5 + 1] [(signed char)8] [i_5 + 1] [i_5] [i_5]))));
                        arr_21 [6ULL] = ((/* implicit */signed char) 138590430);
                    }
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    arr_25 [i_3] [(signed char)7] [i_3] [i_6] = ((((/* implicit */_Bool) 15378609684759168273ULL)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned short)8138)));
                    arr_26 [8] [i_2 + 1] [i_2 + 1] [i_2 - 1] = ((/* implicit */int) var_3);
                    /* LoopSeq 4 */
                    for (short i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        arr_29 [i_7] [i_6] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) (~(arr_22 [i_3 - 2] [i_2 - 1])));
                        var_15 += ((/* implicit */unsigned char) arr_15 [i_3 - 2] [i_2 - 1] [i_7 - 3]);
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) arr_28 [(unsigned short)1] [(unsigned short)1] [(signed char)3] [i_6] [(signed char)3])))))));
                        var_17 = ((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [4ULL]);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))) >= (arr_16 [0ULL] [(short)4] [i_6] [i_3 - 1] [i_0] [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [(_Bool)1] [i_2 + 1]) ? (arr_13 [i_3] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16)))))) ? (var_8) : (var_9)));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)58)))))));
                        arr_35 [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_6] [i_6]);
                        var_21 = ((/* implicit */int) min((var_21), (var_9)));
                        arr_36 [i_0] [i_2] [i_3 - 2] [(_Bool)1] = ((/* implicit */_Bool) (-(3996466422408480469ULL)));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [(unsigned char)8] [i_3 - 2] [i_3 - 2] [i_6] [i_9] [(short)8] [i_9])) ? ((-(2317241405U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 1])))));
                    }
                    for (int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) (~(((unsigned long long int) 3996466422408480477ULL))));
                        arr_40 [(signed char)2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_5 [i_0])) : (2147483647)))) && (((((/* implicit */_Bool) 7720050932813927393LL)) && (arr_4 [(_Bool)1] [(unsigned short)4])))));
                    }
                }
                for (long long int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        var_24 += ((/* implicit */_Bool) ((unsigned char) 1635764495));
                        var_25 = ((/* implicit */int) ((unsigned int) arr_44 [i_12 + 2] [6LL] [(_Bool)1]));
                        arr_46 [2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [(signed char)7] [9U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-15)) ? (268338665U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51)))));
                        arr_47 [i_0] [(signed char)2] [(unsigned short)8] [(signed char)1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_9 [i_11] [i_2 + 1] [i_2])));
                        arr_48 [i_0] [i_0] [0ULL] [i_12 + 2] [i_0] [i_2 - 1] [i_3 - 1] = ((/* implicit */unsigned int) ((int) (unsigned short)57408));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        var_26 &= ((((_Bool) (signed char)-14)) ? (((((/* implicit */unsigned long long int) var_8)) / (1154010659113813202ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(_Bool)1] [i_3] [9] [(signed char)2] [i_3 + 1]))));
                        var_27 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_49 [i_0])))));
                        arr_52 [1ULL] = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_2 + 1] [i_2 - 1] [(_Bool)1] [(unsigned short)7] [i_3 - 2] [7U] [i_11])) / (((((/* implicit */_Bool) arr_33 [i_2] [6U] [(unsigned short)0] [i_2 + 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) : (arr_41 [i_0] [i_2] [i_2] [i_11])))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-20666)))))));
                        arr_55 [(signed char)1] [0] [i_0] [9U] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) var_10);
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    var_30 -= ((/* implicit */unsigned int) ((arr_49 [i_3 - 1]) ? (((/* implicit */int) arr_49 [i_3 - 1])) : (((/* implicit */int) arr_49 [i_3 + 2]))));
                    var_31 = ((/* implicit */_Bool) (~(arr_17 [i_2 - 1] [i_2 + 1] [i_3] [i_3 - 2])));
                    arr_59 [i_3] [9LL] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                }
                for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    arr_62 [i_0] [i_0] [i_0] [i_16] = ((/* implicit */int) ((unsigned long long int) (!(arr_38 [i_0] [i_2 - 1] [i_3 - 2] [1ULL] [i_16]))));
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_2 - 1] [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 1])) - (((/* implicit */int) arr_33 [i_2 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 1]))));
                        var_33 = ((/* implicit */unsigned long long int) (signed char)22);
                    }
                    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        var_34 = ((/* implicit */int) min((var_34), (arr_63 [i_18] [i_3 + 2] [i_3 + 2] [i_2 - 1] [i_0])));
                        var_35 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10573)) ? (((/* implicit */int) (short)-9500)) : (((/* implicit */int) arr_39 [i_18] [(_Bool)1] [i_3] [(_Bool)1] [9ULL] [(unsigned short)7] [2LL]))))) ? (((/* implicit */unsigned long long int) (-(arr_51 [i_2] [(unsigned char)9] [5ULL] [i_2] [i_2] [i_16])))) : (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25540))) : (13027559247980240991ULL)))));
                    }
                }
                var_36 = (~(((/* implicit */int) arr_60 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_3 + 1])));
            }
            var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(262143ULL)))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_0] [9ULL] [i_0] [i_2 - 1] [i_2 + 1] [i_0] [i_2]))))) - (2049794260U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32761)), ((-(((/* implicit */int) (unsigned short)57419)))))))));
        }
    }
    /* LoopNest 3 */
    for (long long int i_19 = 1; i_19 < 17; i_19 += 1) 
    {
        for (unsigned long long int i_20 = 3; i_20 < 16; i_20 += 2) 
        {
            for (int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                {
                    var_38 -= ((/* implicit */_Bool) var_8);
                    arr_76 [i_19] [i_20] [i_21] = ((/* implicit */unsigned long long int) arr_74 [(_Bool)1]);
                    var_39 -= ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_7)), (min((9223372036854775787LL), (((/* implicit */long long int) 2532570095U))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_22 = 2; i_22 < 17; i_22 += 3) 
                    {
                        arr_81 [i_19 - 1] [i_20 + 1] [i_19 - 1] [(unsigned short)17] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_82 [7ULL] [i_20 - 2] [16ULL] [i_21] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_75 [(unsigned short)10] [i_22 - 1] [i_22 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_19 + 1] [i_19 + 1] [(unsigned short)13]))) : (-1LL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 4; i_23 < 16; i_23 += 3) 
                        {
                            var_40 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_70 [(unsigned short)2])))) ? (((/* implicit */int) (!(var_7)))) : (((/* implicit */int) (!(arr_78 [0ULL] [i_20 + 2]))))));
                            var_41 *= (!((_Bool)1));
                            var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            arr_86 [(_Bool)1] [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_83 [i_23 + 1] [(signed char)7] [(_Bool)1] [i_22 - 1] [i_23 - 2] [11LL] [i_20])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (unsigned short)57122)))) : (((/* implicit */int) (unsigned short)53665))));
                        }
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_25 = 1; i_25 < 14; i_25 += 3) 
                        {
                            arr_93 [9ULL] [i_20 + 2] [9ULL] [i_21] [i_24] [(signed char)6] [(unsigned char)11] = ((/* implicit */_Bool) arr_72 [i_19 - 1]);
                            arr_94 [7U] [i_20 + 2] [i_21] [(signed char)11] [15U] = ((/* implicit */long long int) ((922366002U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56004)))));
                            var_43 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_73 [i_19 - 1])) ? (arr_74 [(unsigned short)11]) : (arr_74 [i_24])));
                            var_44 = ((/* implicit */unsigned long long int) var_2);
                            var_45 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_78 [i_19 - 1] [(short)0])) : (2147483643)))));
                        }
                        for (int i_26 = 0; i_26 < 18; i_26 += 4) 
                        {
                            arr_97 [(_Bool)1] [(_Bool)1] [(_Bool)1] [8ULL] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_92 [i_19 + 1] [i_19 + 1] [i_20 - 3] [i_20] [i_20] [i_20 + 2] [i_20 + 1])) | ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_73 [i_19])))))))));
                            arr_98 [17] [i_20 - 3] [i_21] [i_24] [i_21] [i_20] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_92 [(signed char)15] [i_19 - 1] [i_19 + 1] [i_20 + 1] [15ULL] [i_26] [1ULL])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_92 [i_19 - 1] [i_19 - 1] [i_20 + 2] [i_20 + 1] [i_20 - 1] [i_20 + 2] [i_20 + 2])))))));
                            arr_99 [i_26] [16U] [(_Bool)0] [(unsigned char)13] [i_19 - 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)8136)), (((unsigned long long int) (-9223372036854775807LL - 1LL)))));
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_70 [i_19 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9531))) : (var_6))))));
                        }
                        for (unsigned char i_27 = 0; i_27 < 18; i_27 += 4) 
                        {
                            var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_73 [(signed char)5]))));
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned short) arr_70 [i_19 - 1]))) ? (((/* implicit */unsigned long long int) var_1)) : (((unsigned long long int) arr_75 [11ULL] [11ULL] [14ULL])))))))));
                            arr_102 [i_19] [(_Bool)0] [14U] [17ULL] [8] [1U] = ((/* implicit */unsigned short) (short)32764);
                            var_49 += ((/* implicit */_Bool) (unsigned short)39324);
                        }
                        var_50 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [16] [(_Bool)1] [3] [14ULL] [i_19] [i_19 - 1] [i_24]))) : (var_4))), (max((((/* implicit */unsigned int) var_5)), (var_4)))))));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 1) 
                    {
                        arr_106 [(unsigned short)6] [i_20 + 1] [i_20] [i_20] = ((/* implicit */unsigned long long int) var_5);
                        arr_107 [0ULL] [3] [i_21] [(unsigned short)16] = ((/* implicit */unsigned long long int) (~(3188173396U)));
                        arr_108 [(unsigned char)5] [(unsigned short)8] [i_28] [i_28] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)9532)))));
                    }
                    /* vectorizable */
                    for (int i_29 = 2; i_29 < 14; i_29 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15062)) / (((/* implicit */int) (short)32765))));
                        var_52 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_101 [i_19 + 1] [i_29 + 4] [10ULL] [(signed char)8] [(_Bool)1] [i_29 + 4]))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_30 = 0; i_30 < 18; i_30 += 3) 
                    {
                        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) var_1))));
                        arr_113 [9ULL] [i_20 - 3] [i_21] = ((/* implicit */unsigned char) ((2634526402U) & (((/* implicit */unsigned int) var_2))));
                    }
                    /* vectorizable */
                    for (long long int i_31 = 0; i_31 < 18; i_31 += 1) 
                    {
                        arr_118 [(short)11] = ((/* implicit */short) var_3);
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */int) arr_111 [(unsigned char)9] [i_20] [(unsigned short)8] [i_31])) != (((/* implicit */int) arr_110 [i_21]))))) : ((~(((/* implicit */int) arr_70 [i_31]))))));
                        var_55 += 4370429634624679875ULL;
                        var_56 = ((/* implicit */short) arr_96 [i_19 + 1] [13ULL] [(unsigned char)17] [(_Bool)1] [i_21] [i_31] [i_31]);
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 18; i_32 += 3) 
                    {
                        var_57 -= min((((((/* implicit */_Bool) (signed char)13)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (851815753286346756ULL))) : (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (short)-32762)));
                        arr_122 [(unsigned char)10] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_75 [i_19] [i_20 - 2] [i_19 - 1]))))), (var_4)));
                        arr_123 [i_19] [i_19] [i_32] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned long long int) arr_79 [i_32] [i_21] [(short)13] [(unsigned short)11]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)18553)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_19] [(unsigned short)6] [1] [(unsigned char)1] [i_21] [2ULL] [2ULL]))) / (var_6)))) : (arr_115 [(_Bool)1] [i_21] [(_Bool)1]))) : (((arr_109 [i_20] [i_32] [i_20 + 1] [i_32] [i_19 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))))));
                        var_58 = (_Bool)0;
                    }
                }
            } 
        } 
    } 
}
