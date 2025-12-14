/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128028
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)66))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)74)))) : (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)37904))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                arr_17 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) var_9);
                arr_18 [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_2 + 1] [i_2]) >= (var_11)))) == (((/* implicit */int) var_4))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1])) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (var_1)));
            }
            for (int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27631)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)58))) : (9223372036854775786LL)))) ? (((int) 4294967295U)) : (((/* implicit */int) arr_9 [i_2 + 1]))));
                arr_21 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) var_16)) : (var_14)));
                arr_22 [i_3] [i_3] = (+(17478690831703627370ULL));
                arr_23 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) 18446744073709551612ULL);
            }
            for (short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                arr_26 [i_2] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) % (11770437898153543107ULL)))));
                arr_27 [i_2] [i_3] = ((16383U) << (((arr_24 [i_2 - 1] [i_3] [i_2 - 1]) - (11855657368709633697ULL))));
                arr_28 [i_6] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1822275955U))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 15394103U)) != (arr_0 [i_2] [i_2]))))));
                var_22 = (((~(arr_15 [i_3] [i_3] [i_3] [i_3]))) & (((/* implicit */int) ((unsigned short) var_3))));
                var_23 = ((/* implicit */signed char) arr_6 [i_2] [i_2 - 1]);
            }
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) >> (((((((/* implicit */unsigned long long int) -9223372036854775786LL)) ^ (0ULL))) - (9223372036854775805ULL)))));
            var_25 = ((/* implicit */unsigned char) var_2);
            var_26 = ((((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)42)))) ^ ((~(((/* implicit */int) var_8)))));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned char i_9 = 3; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_27 = ((((-366240461) + (2147483647))) >> (((1450202659) - (1450202628))));
                            var_28 = ((/* implicit */unsigned short) ((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_7] [i_7] [i_2 + 1])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                arr_44 [i_2] [i_7] [i_2] [i_2 + 1] = (-((+(var_11))));
                arr_45 [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2]))) * (arr_13 [i_2] [i_7] [i_2 - 1]));
                var_29 = ((/* implicit */unsigned int) ((short) arr_14 [1U] [i_7] [3ULL] [i_11]));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) ((unsigned short) var_1));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [7ULL]))) : (arr_34 [i_2 - 1] [i_2 + 1] [i_7] [i_2 + 1])));
            }
            arr_48 [i_7] [i_2] [i_7] = ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (var_0)))) ? (arr_34 [i_2] [i_2 + 1] [i_7] [i_2 + 1]) : (((/* implicit */unsigned int) var_10)));
            arr_49 [i_2 - 1] [i_7] = ((/* implicit */long long int) (~(var_6)));
            arr_50 [i_2] [8U] [i_7] = ((/* implicit */unsigned int) ((unsigned char) arr_40 [i_2 + 1] [i_7] [i_7]));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */signed char) (~(((arr_11 [i_2 + 1]) | (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)43628)))))))));
            arr_53 [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12374233594136581812ULL)))))) | (arr_52 [i_2 + 1] [i_13])))) ? (((/* implicit */int) ((((18446744073709551611ULL) + (17339444906791563064ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_2]))))))))) : (((/* implicit */int) var_3))));
            var_33 = ((/* implicit */unsigned char) var_12);
        }
        /* LoopSeq 3 */
        for (unsigned int i_14 = 3; i_14 < 8; i_14 += 3) 
        {
            arr_56 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43616)) ? (arr_40 [i_14] [2ULL] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))))));
            arr_57 [i_2] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (5710491597968885537ULL) : (((/* implicit */unsigned long long int) ((3360802505U) / (2125606743U))))));
        }
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                arr_64 [i_2] = ((/* implicit */unsigned char) (-(1U)));
                arr_65 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)0))))));
            }
            for (unsigned int i_17 = 1; i_17 < 11; i_17 += 3) 
            {
                var_34 = ((((/* implicit */_Bool) 1074005250)) ? (((((/* implicit */_Bool) ((arr_35 [i_17] [i_2] [i_17] [11ULL] [i_17]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))))) ? (arr_0 [i_17 - 1] [i_17]) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_16)))))) : ((((_Bool)1) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                var_35 = ((/* implicit */unsigned char) arr_29 [i_2]);
            }
            arr_68 [i_2] [i_2] [i_15] = ((/* implicit */_Bool) var_12);
        }
        for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 3) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32767)) <= ((~(((/* implicit */int) (unsigned char)96))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                arr_73 [i_2] [i_18] [0ULL] [i_2] = ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) var_14)), (var_2))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1U)))))) != (((/* implicit */unsigned long long int) var_16))));
                var_37 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_2 [i_18 + 1] [i_18])) ^ (var_16))));
                arr_74 [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((unsigned int) arr_24 [i_2] [i_18 + 2] [i_19])) != (((/* implicit */unsigned int) arr_37 [i_18 + 1] [i_18] [i_18] [i_18] [i_18]))))), (((((/* implicit */_Bool) (signed char)94)) ? (3349390502U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))));
            }
            for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) arr_24 [i_2] [i_18 + 2] [i_20]);
                var_39 = ((/* implicit */unsigned char) ((arr_70 [i_20] [i_18] [3ULL]) + (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)93)) - (((/* implicit */int) (unsigned short)32996)))))))));
                var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_31 [i_2 - 1] [i_2] [i_2 + 1])) + (((((/* implicit */_Bool) arr_31 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_31 [i_2 + 1] [i_2 - 1] [i_2 + 1])) : (3818395179U)))));
                arr_78 [i_2] [i_18] [i_18] = ((/* implicit */unsigned int) 10689241385291593704ULL);
                var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_52 [i_2 - 1] [(short)1]))))));
            }
        }
    }
    for (unsigned int i_21 = 1; i_21 < 19; i_21 += 1) 
    {
        arr_83 [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65521)) & (((/* implicit */int) (unsigned short)37226)))))));
        var_42 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_81 [i_21 + 1])) - (((/* implicit */int) arr_81 [i_21 + 3])))), (((/* implicit */int) (unsigned char)216))));
        var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_80 [i_21]))));
    }
    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 4) 
    {
        var_44 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_81 [i_22])) % (var_16)))));
        /* LoopNest 3 */
        for (unsigned int i_23 = 3; i_23 < 14; i_23 += 3) 
        {
            for (unsigned char i_24 = 1; i_24 < 11; i_24 += 1) 
            {
                for (unsigned char i_25 = 0; i_25 < 15; i_25 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_80 [i_22]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_24] [i_23 - 3] [i_24] [(unsigned short)8]))) & (arr_92 [i_22] [i_23 + 1] [i_24] [i_25] [i_23] [i_22]))) ^ (arr_86 [i_22] [i_23] [i_24])))));
                        var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-6434))));
                        var_47 = ((/* implicit */int) 3818395190U);
                    }
                } 
            } 
        } 
    }
}
