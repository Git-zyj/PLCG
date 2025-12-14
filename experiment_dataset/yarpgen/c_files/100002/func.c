/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100002
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
    var_13 = (short)(-32767 - 1);
    var_14 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned int) ((short) (unsigned char)240))), (var_6))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            arr_4 [i_1] = arr_1 [i_0 - 1];
            var_15 = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_0 - 2]));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                arr_7 [(unsigned short)19] [i_1] [i_2] = ((/* implicit */int) (unsigned char)14);
                var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            }
            arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 - 1]))) : (var_6)))) ? (((/* implicit */int) ((signed char) 15070170150997518700ULL))) : (((int) (unsigned short)65535))));
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
        {
            arr_12 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((short) var_0));
            arr_13 [i_3] = ((/* implicit */int) var_3);
        }
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1])))))));
    }
    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            var_18 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_4 - 1] [i_5 - 1] [i_4 - 2])))));
            arr_20 [i_4 - 1] [i_4 - 1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_5 - 1]))));
            var_19 = ((/* implicit */unsigned int) (!(arr_19 [i_4])));
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
                {
                    arr_27 [i_4] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (52776558133248LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_31 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_4 - 2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((780447761) / (780447762)))) ? (arr_22 [i_5] [i_5 + 1] [i_5 + 2]) : (((((/* implicit */unsigned long long int) arr_15 [i_4])) % (18446744073709551615ULL)))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)9)) >> (((/* implicit */int) (unsigned char)2))));
                    }
                    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3376573922712032895ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153))) ^ (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))));
                        arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_4 - 1])) ? (((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4 - 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6])) || (((/* implicit */_Bool) var_9)))))));
                        var_22 = ((/* implicit */unsigned int) ((arr_19 [i_7 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_7 - 2] [i_7 + 2]))) : (3221225472ULL)));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4 + 1])))))));
                    }
                    arr_35 [i_4] [i_4] [(short)18] [i_6] [i_7] = ((/* implicit */short) ((((arr_25 [i_4 - 2]) ? (((/* implicit */int) arr_6 [i_4] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) (short)512))))));
                }
                for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_28 [(unsigned short)19] [i_6] [i_6] [i_10] [i_4 - 2]))));
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_4 + 1] [i_10] [i_6] [i_10] [i_4] [i_6])) ? (arr_9 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_5 - 1] [(short)2] [i_6] [i_6] [i_10])))));
                }
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    arr_43 [i_4] [i_11] [8ULL] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_5 + 2])) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_18 [i_11 - 1] [i_4 + 1]))));
                    arr_44 [i_4 - 1] [(unsigned char)18] [i_11] [(unsigned char)18] = ((/* implicit */int) arr_36 [i_11 - 1] [i_5] [i_5] [i_11 - 1] [i_6] [i_11 + 1]);
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (var_3)));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_45 [i_4] [i_11] [i_4]))));
                        var_28 = 9223372036854775807LL;
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (-8808966677758750063LL)));
                        arr_47 [i_11] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) var_1);
                    }
                }
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_8))));
                arr_48 [i_4 + 1] [(unsigned char)23] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) 1524379958)) != (var_1)))));
            }
            /* vectorizable */
            for (long long int i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                var_31 = ((/* implicit */int) (~(arr_15 [i_13 + 2])));
                arr_52 [i_4] [i_5] [7ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_4]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                arr_55 [i_4] = ((/* implicit */long long int) ((_Bool) arr_37 [i_4 + 1]));
                var_32 ^= ((/* implicit */signed char) (((~(8388352))) + (((/* implicit */int) arr_37 [i_4 - 2]))));
                var_33 = ((/* implicit */unsigned char) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_4] [i_4] [i_5 + 2] [10LL] [i_5 + 1])))));
            }
            for (unsigned short i_15 = 3; i_15 < 22; i_15 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) (signed char)-123);
                    arr_60 [i_16] [i_16] [i_15] = ((/* implicit */long long int) arr_0 [i_4]);
                }
                for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 998820928256368497LL)) : (15070170150997518721ULL))))), (((((/* implicit */_Bool) arr_22 [i_15] [i_15 - 1] [i_4 + 1])) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_17]))))))))));
                    var_36 = ((/* implicit */unsigned short) var_5);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_18 = 2; i_18 < 22; i_18 += 2) 
                {
                    arr_68 [i_15] [i_15] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (17501663324919478552ULL) : (((/* implicit */unsigned long long int) arr_49 [i_4] [i_5] [i_15])))))));
                    var_37 = ((/* implicit */long long int) max((var_37), (((arr_30 [(signed char)4] [(signed char)4] [i_15 - 3]) ? (arr_17 [i_4 + 1] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_5])))))));
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 2; i_19 < 20; i_19 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_70 [i_4])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                var_39 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45794)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_19] [i_4] [i_19 + 1] [i_20] [i_4]))) : (15070170150997518715ULL))));
                var_40 = ((/* implicit */signed char) arr_29 [i_4 - 1] [i_19 + 2] [i_19 - 2] [i_4] [i_4 - 1] [i_4 - 2]);
                var_41 = ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [0ULL] [i_19] [i_20])) < (((/* implicit */int) (signed char)127))))) : (((/* implicit */int) arr_30 [i_19 - 2] [i_19] [i_19 + 4])));
            }
            for (int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_58 [i_4] [i_4 - 2] [i_21] [16U]))));
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_67 [i_4] [i_19] [i_4] [i_4])))) : (((/* implicit */int) arr_32 [i_4] [i_19 - 2] [i_4 - 2] [i_4] [i_19 - 1] [(signed char)8] [i_4]))));
            }
            for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 1) 
            {
                arr_80 [i_4] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65525))));
                arr_81 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) 17894585199863086755ULL)) ? ((~(arr_69 [i_19] [i_19] [(short)23]))) : ((~(((/* implicit */int) (unsigned short)31941))))));
            }
            for (int i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                arr_85 [i_4] [i_19] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) arr_84 [i_4] [i_19] [11ULL])))))));
                var_44 = ((/* implicit */unsigned long long int) arr_79 [i_19]);
            }
            var_45 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_5)) - (35)))));
            arr_86 [i_4] [i_4] = ((((/* implicit */long long int) arr_9 [i_19 + 3])) - (arr_1 [i_4 - 2]));
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (1617077890406162559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47100)))));
        }
        for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) 
        {
            arr_90 [i_24] = ((/* implicit */unsigned short) (~(3290322598U)));
            arr_91 [i_24] = ((/* implicit */short) var_12);
            arr_92 [12ULL] [i_24] [i_24] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((arr_17 [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))), (2347081547496360014LL)))), (((unsigned long long int) arr_42 [i_4 + 1] [i_4 - 2] [(short)18] [i_4 - 1]))));
        }
        arr_93 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (!((_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_25 = 2; i_25 < 23; i_25 += 3) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_75 [i_25 + 1] [i_25 - 1]))));
        arr_96 [(short)0] |= ((/* implicit */signed char) arr_64 [i_25] [i_25] [i_25 - 2]);
    }
}
