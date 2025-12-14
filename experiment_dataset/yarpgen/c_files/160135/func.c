/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160135
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_18 = 18446744073709551615ULL;
        var_19 = ((/* implicit */unsigned char) var_11);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))));
        var_20 = ((/* implicit */unsigned int) min((var_20), ((+(((((/* implicit */_Bool) 2458711376U)) ? (3696133835U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)42)) ? (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_13))) : ((+(var_13)))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((var_5) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))))) ? (((/* implicit */long long int) 2458711376U)) : (arr_2 [i_1] [i_1])));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1])) ? (arr_7 [i_1] [14]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)2])) ? (((/* implicit */long long int) 1722316001)) : (arr_2 [i_1] [(signed char)16]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_23 = (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_9)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (arr_10 [i_2])))) : (arr_7 [i_2] [i_2]))));
        arr_13 [10] = ((/* implicit */int) ((18446744073709551612ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2])))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3])) >> (((((/* implicit */int) var_14)) - (3800)))))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_3]))) : (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_14 [i_3]))))));
        var_24 ^= ((/* implicit */unsigned char) -229292516);
        var_25 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 7580928730268381947LL)) ? (((/* implicit */long long int) arr_15 [i_3])) : (var_7))));
        var_26 = ((/* implicit */unsigned int) var_1);
    }
    var_27 = ((/* implicit */int) ((signed char) max((max((((/* implicit */unsigned long long int) var_17)), (14329795885558200744ULL))), (((/* implicit */unsigned long long int) 1631474886449351961LL)))));
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_28 = ((/* implicit */_Bool) arr_12 [i_4] [i_4]);
        arr_20 [i_4] = ((/* implicit */unsigned long long int) arr_15 [i_4]);
        var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_2 [i_4] [i_4]) % (var_13)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_17)) % (((/* implicit */int) (unsigned char)209)))) * (((/* implicit */int) (unsigned char)197))))) : (((unsigned long long int) 4181130986U))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            arr_23 [i_4] = ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) arr_3 [i_5 - 1])), (((arr_7 [14U] [i_5 - 2]) - (14329795885558200744ULL))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (2771487752169910376ULL)));
            var_31 *= ((min((arr_7 [i_4] [i_5 - 2]), (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [(_Bool)0] [i_5 - 2] [i_4]))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            arr_28 [i_4] [i_4] [i_6] = -2147483631;
            var_32 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) < (var_3))))) < (min((((/* implicit */unsigned long long int) arr_1 [i_4] [i_4])), (0ULL))))) ? (max((arr_2 [i_6 + 1] [i_6 - 2]), (((/* implicit */long long int) arr_12 [i_6] [i_6 + 1])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_4] [i_6 - 1])) + (((/* implicit */int) arr_17 [i_6 - 1])))))));
            arr_29 [i_6] [i_4] [6LL] = ((/* implicit */_Bool) arr_19 [i_6]);
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((arr_18 [i_4]) / (arr_18 [i_6 - 2]))) * (((((/* implicit */_Bool) 1510738667U)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)13883)))) : (((/* implicit */int) (signed char)-124)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */long long int) ((-1540667053) * (((((/* implicit */int) arr_32 [i_4])) / (arr_33 [i_6] [i_6])))));
                var_35 = ((/* implicit */int) ((unsigned int) (-(-71949551))));
                /* LoopSeq 4 */
                for (int i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    var_36 += ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)53)))) : (var_3)));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (0ULL))) ? (((/* implicit */int) arr_19 [i_6])) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) arr_21 [i_4] [4]))))));
                        var_38 = ((/* implicit */int) (signed char)-117);
                    }
                }
                for (int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    arr_43 [i_4] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6 + 1]))) : (14329795885558200744ULL)));
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_48 [i_4] [i_6] [i_7] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [5])) ? (((/* implicit */long long int) arr_36 [i_11] [i_10] [i_6])) : (var_5)));
                        var_39 = ((/* implicit */unsigned short) var_13);
                    }
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        arr_53 [1ULL] [i_6] [i_7] [i_10] [(short)0] [5] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_8))));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_4] [i_6 - 2] [(unsigned char)9] [i_10] [i_12] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7 + 2] [i_7 - 1]))) : (var_3)));
                        var_41 = (+(((/* implicit */int) var_17)));
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 990806096U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) : (2653189340U)));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)213))))) % (1883360259)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_56 [i_4] [i_6 - 2] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) arr_17 [i_7]))));
                        arr_57 [i_4] [i_4] [i_4] [i_10] [1ULL] [1ULL] [i_4] = ((/* implicit */short) arr_3 [i_13]);
                    }
                }
                for (signed char i_14 = 4; i_14 < 9; i_14 += 1) /* same iter space */
                {
                    arr_60 [i_4] [4LL] [i_6] [i_7] [i_14] = arr_47 [6U] [i_6] [i_7] [i_6] [(_Bool)1] [i_4];
                    arr_61 [i_4] [i_4] [i_4] = ((/* implicit */int) 13691232836829519537ULL);
                    /* LoopSeq 3 */
                    for (int i_15 = 1; i_15 < 8; i_15 += 2) 
                    {
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (((~(16410998572362621015ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_15 - 1]))))))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)69)) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) arr_37 [i_4] [i_6] [i_6] [i_7] [i_14 - 1] [i_15] [i_15]))))) ? (((/* implicit */int) (_Bool)1)) : (var_10)));
                        var_46 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (((((/* implicit */_Bool) 2458711376U)) ? (((/* implicit */unsigned long long int) var_9)) : (16595102239126514423ULL)))));
                    }
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        arr_68 [i_4] [i_6] [i_7] [i_14] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [7LL])) ? (arr_5 [i_7]) : (var_2)))) ? (((/* implicit */unsigned int) var_0)) : (arr_59 [i_4] [i_6 - 3] [i_7] [i_14 - 3])));
                        arr_69 [i_4] [i_6 - 3] [i_7] [i_14 + 2] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_14 - 4] [i_14 - 4] [i_14 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (1851641834583037193ULL)));
                        var_47 ^= ((/* implicit */signed char) (-((~(((/* implicit */int) arr_3 [11]))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        arr_72 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned char)42))))) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_32 [(signed char)9]))));
                        arr_73 [i_4] [i_6] [i_7] [i_14 - 3] [i_14 + 1] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (short)29784))) && (((/* implicit */_Bool) arr_59 [i_6 - 1] [i_7 - 1] [(_Bool)1] [i_6 - 1]))));
                    }
                    arr_74 [i_4] [3LL] [i_14] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)133)) ? (arr_18 [i_7]) : (((/* implicit */int) arr_67 [(signed char)2] [7] [2] [i_14] [2ULL])))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_55 [10LL] [10LL] [i_7] [i_14 - 3] [i_7]))) < (var_9))))));
                }
                for (signed char i_18 = 4; i_18 < 9; i_18 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned int) arr_22 [i_6 - 1] [i_6 - 3] [i_6 - 3]);
                    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) var_3))));
                    arr_78 [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_6 - 2] [i_6 - 2] [i_6 - 2])) >> (((((/* implicit */int) var_16)) - (848)))));
                    var_50 -= ((/* implicit */_Bool) var_10);
                }
            }
            for (int i_19 = 1; i_19 < 9; i_19 += 1) /* same iter space */
            {
                arr_81 [i_4] [i_4] = ((/* implicit */short) (+(((-119737941) ^ (((/* implicit */int) var_11))))));
                arr_82 [(unsigned short)6] [i_6 + 1] [i_4] &= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_5))) & (((/* implicit */long long int) arr_45 [i_4] [i_4] [i_4] [i_6] [(_Bool)1] [i_19]))))));
                arr_83 [i_19] = ((/* implicit */unsigned int) arr_39 [i_4] [i_4] [(signed char)4] [i_6] [i_6] [10LL]);
                var_51 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)42)), (803259593))))));
            }
        }
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        arr_86 [i_20] [i_20] = ((/* implicit */int) arr_5 [(short)12]);
        arr_87 [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (868004956) : (((/* implicit */int) arr_3 [i_20]))));
    }
    var_52 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((3727293921U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) : (max((((((/* implicit */unsigned long long int) 3569591546U)) * (0ULL))), (((/* implicit */unsigned long long int) (unsigned short)65240))))));
    var_53 = ((/* implicit */long long int) var_17);
}
