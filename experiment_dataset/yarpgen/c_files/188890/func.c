/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188890
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) var_9);
                    var_18 ^= ((/* implicit */short) ((((((/* implicit */int) (signed char)-92)) + (2147483647))) << (((max((var_3), (((/* implicit */long long int) (-(4294967295U)))))) - (4270018290217767110LL)))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) min((6036330169325004445ULL), (0ULL)));
        var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) ((var_3) & (var_0)))) && ((_Bool)0)))) + (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        arr_10 [i_3] = var_13;
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 3])) ? (arr_12 [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12203)))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(var_6))))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 2]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)12197))) ^ (var_4))))))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        arr_22 [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 1] [5] [i_3 - 2] = ((/* implicit */unsigned int) (~(var_3)));
                        var_24 &= ((/* implicit */int) ((unsigned int) ((var_12) >> (((var_11) - (4028260684U))))));
                        arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3])) ? (arr_19 [i_3 - 4] [i_3] [i_6]) : (((/* implicit */int) (signed char)-66))));
                    }
                } 
            } 
            arr_24 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) var_11))));
            arr_25 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28637)))))) || (((/* implicit */_Bool) arr_7 [i_3]))));
        }
        for (unsigned char i_8 = 4; i_8 < 22; i_8 += 1) 
        {
            arr_28 [i_3] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_3] [i_3]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-460))) : (1131487422U)));
                            var_26 = ((/* implicit */_Bool) var_17);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_40 [i_3] [i_10] [10LL] [i_8] [i_8 + 2] [i_3] = ((/* implicit */long long int) (((_Bool)0) ? (arr_36 [i_8 - 2] [i_8 - 2] [(unsigned short)11] [(signed char)12] [i_8 + 2]) : (((/* implicit */int) (short)-12180))));
                            var_27 *= ((/* implicit */signed char) (!((_Bool)1)));
                            arr_41 [i_3] [21] [i_9] [i_8] [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) var_13));
                        }
                        arr_42 [i_3] [i_8] [(short)22] [i_3] = ((/* implicit */int) ((arr_9 [i_8 - 4]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 4; i_13 < 20; i_13 += 2) 
        {
            var_28 = ((/* implicit */unsigned int) (_Bool)1);
            var_29 = ((/* implicit */_Bool) (+(arr_38 [i_13 - 2] [i_3] [i_13])));
            /* LoopSeq 2 */
            for (int i_14 = 1; i_14 < 23; i_14 += 4) 
            {
                arr_49 [i_3] [i_3 - 4] [i_13] [i_3] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((((/* implicit */_Bool) arr_27 [i_14 + 1] [i_13 - 1])) ? (var_3) : (((/* implicit */long long int) var_1))))));
                var_30 ^= ((/* implicit */long long int) arr_29 [i_3 + 1] [i_13] [i_3 + 1] [i_13 - 2]);
            }
            for (int i_15 = 3; i_15 < 20; i_15 += 2) 
            {
                var_31 += ((/* implicit */unsigned int) arr_34 [i_3] [i_13] [i_3] [i_13]);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_3 - 1] [i_3 - 1])) && (((/* implicit */_Bool) var_14))));
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 22; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((12211606429049342386ULL) == (((/* implicit */unsigned long long int) 1970854283)))))) < (arr_52 [i_3] [i_16 + 2])));
                        arr_58 [i_3] [i_16 + 2] [i_16 + 2] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_3 - 3] [20])) ? (((/* implicit */int) (short)12203)) : (arr_19 [i_3 - 2] [i_3] [i_16 - 1])));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */_Bool) var_12);
        arr_59 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (var_13)));
    }
    for (unsigned int i_19 = 3; i_19 < 9; i_19 += 4) 
    {
        var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min(((unsigned char)85), (((/* implicit */unsigned char) (_Bool)0))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74)))));
        var_36 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((min((((/* implicit */unsigned long long int) (short)12205)), (15067453771255877965ULL))), (((/* implicit */unsigned long long int) (+(var_3))))))));
    }
    /* vectorizable */
    for (short i_20 = 3; i_20 < 22; i_20 += 1) 
    {
        arr_66 [i_20] = ((/* implicit */_Bool) arr_64 [i_20 - 3] [i_20 + 2]);
        var_37 = ((/* implicit */_Bool) max((var_37), ((((-(((/* implicit */int) (unsigned char)240)))) == (((/* implicit */int) (short)27089))))));
        /* LoopSeq 3 */
        for (unsigned int i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
        {
            arr_70 [i_20] [(unsigned char)12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [(_Bool)1] [14])) || (((_Bool) (short)24124))));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_2)) % (((((/* implicit */_Bool) -2974513971871553106LL)) ? (15280863319314253921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
            arr_71 [i_21] [i_21] = ((/* implicit */signed char) (((_Bool)1) ? (arr_67 [i_21] [i_21]) : (((/* implicit */long long int) arr_63 [i_20 - 3]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_22 = 4; i_22 < 24; i_22 += 1) 
            {
                arr_74 [i_20] [(_Bool)1] [i_21] [i_21] = ((/* implicit */long long int) (unsigned char)156);
                var_39 = (i_21 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))))) || (((/* implicit */_Bool) ((((arr_67 [i_21] [i_21]) + (9223372036854775807LL))) >> (((arr_67 [i_21] [i_20]) + (2933044232579310050LL))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))))) || (((/* implicit */_Bool) ((((arr_67 [i_21] [i_21]) + (9223372036854775807LL))) >> (((((arr_67 [i_21] [i_20]) + (2933044232579310050LL))) + (1445730188838905234LL)))))))));
            }
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) 
            {
                var_40 = ((/* implicit */unsigned int) max((var_40), (((var_12) ^ (((/* implicit */unsigned int) arr_68 [(_Bool)1] [i_20]))))));
                var_41 = (~(arr_63 [i_20 - 3]));
            }
            for (signed char i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_25 = 3; i_25 < 23; i_25 += 1) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_42 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_69 [i_24] [i_24])) - (var_3)));
                            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) 4609710838105081052ULL)) ? (-8314491386847760197LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24124)))));
                            var_44 += ((/* implicit */int) ((((/* implicit */_Bool) arr_79 [i_24] [i_24] [12] [i_24] [i_24] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_24] [i_25 + 1] [i_25] [i_24] [i_24]))) : (var_4)));
                        }
                    } 
                } 
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_62 [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
            }
        }
        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) var_9))));
            /* LoopNest 3 */
            for (unsigned int i_28 = 0; i_28 < 25; i_28 += 2) 
            {
                for (unsigned char i_29 = 0; i_29 < 25; i_29 += 4) 
                {
                    for (unsigned int i_30 = 4; i_30 < 24; i_30 += 2) 
                    {
                        {
                            arr_94 [i_27] = ((/* implicit */long long int) (~(((/* implicit */int) arr_88 [i_27] [i_30 - 3] [i_20 - 1] [i_20] [i_20 - 2] [i_27]))));
                            var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_80 [(unsigned char)24] [i_30] [i_30] [i_20 + 1])) ? (((/* implicit */unsigned long long int) var_1)) : (131071ULL)));
                            arr_95 [i_20 - 2] [i_27] [i_28] [i_29] [i_27] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)60862))))) ? (((int) (short)-12203)) : (((((((/* implicit */int) (short)-28426)) + (2147483647))) >> (((-482414346) + (482414350)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_48 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_20 + 2] [i_20 + 1] [i_20 - 2])) && (((/* implicit */_Bool) arr_73 [i_20 + 2] [i_20 + 2] [i_20 - 1]))));
            var_49 |= ((/* implicit */short) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (short)-28410)) + (28424)))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_32 = 2; i_32 < 9; i_32 += 2) 
    {
        var_50 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_13 [i_32]))))), (var_17)));
        arr_102 [i_32 + 2] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) + (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) * (var_12)))))));
    }
}
