/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154173
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
    var_16 = var_11;
    var_17 = ((/* implicit */signed char) ((unsigned long long int) var_3));
    var_18 |= ((/* implicit */unsigned long long int) var_12);
    var_19 = ((/* implicit */unsigned short) ((signed char) (-((+(((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) (_Bool)1);
        var_21 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)63)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) var_9))))));
                                var_23 = ((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) || (((/* implicit */_Bool) -1151196979)))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2ULL] [2ULL]))))));
                                var_24 = (_Bool)1;
                                arr_13 [5ULL] [i_1] [14U] [i_4] [(unsigned short)21] = ((/* implicit */unsigned short) ((unsigned long long int) arr_10 [i_1] [i_1 + 2]));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_25 *= ((/* implicit */_Bool) (+(((/* implicit */int) (short)-27101))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 23; i_7 += 2) 
                        {
                            arr_18 [i_1] [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_3] [i_7 - 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_1 + 1] [i_1]))));
                            var_26 = ((/* implicit */unsigned short) var_9);
                            arr_19 [i_1] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [(_Bool)1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27121))) - (1971733218002515958ULL))))));
                            arr_20 [i_1] [20U] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) arr_1 [i_3] [(signed char)20]);
                        }
                        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (arr_16 [i_1] [i_2] [i_2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_2] [i_2] [i_3] [(unsigned short)19]) ^ (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) arr_8 [(signed char)0] [i_1])) : ((+(arr_7 [i_1])))));
                        var_29 = ((arr_10 [i_1 - 1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)7)))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 22; i_8 += 1) 
                    {
                        var_30 &= ((/* implicit */signed char) (+(arr_16 [i_8 - 3] [i_8] [i_8] [i_8 - 2] [i_3])));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_26 [i_1] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (((unsigned long long int) (_Bool)1)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27100))) : (18446744073709551615ULL)))));
                            arr_27 [(short)23] [i_8] [i_1] [i_1] [(signed char)4] [i_1] = (+(arr_9 [i_1] [i_2] [i_3] [i_9]));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) ((arr_16 [i_1] [i_1] [i_1 - 2] [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((long long int) var_1)))));
                            arr_30 [20] [i_3] [i_3] [12] [12] [i_3] [i_3] |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_5 [i_3] [i_3] [i_3]))) < (((/* implicit */int) (unsigned short)17217))));
                            var_32 ^= ((/* implicit */signed char) (+(arr_28 [i_3] [i_2] [i_3] [i_3] [i_3])));
                            var_33 ^= ((/* implicit */_Bool) 1971733218002515973ULL);
                        }
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((unsigned long long int) arr_28 [i_1] [i_8] [i_3] [(unsigned short)7] [i_1])) & ((+(18446744073709551609ULL)))));
                            var_35 &= ((int) arr_4 [i_3] [i_8 - 3] [i_8 + 2]);
                            var_36 = arr_17 [i_1];
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)100))))));
                        var_38 |= ((/* implicit */_Bool) (+(1971733218002515988ULL)));
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_39 [i_13] [i_13] [i_13] [i_13] [i_1] [23ULL] [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_13] [i_2] [i_13] [i_1] [i_3] [(signed char)5] [i_13])))))));
                            var_39 += ((/* implicit */unsigned long long int) (+(2278570495U)));
                            var_40 *= ((/* implicit */unsigned long long int) (signed char)122);
                            var_41 |= ((/* implicit */unsigned long long int) ((arr_5 [i_12] [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48318))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            var_42 ^= ((/* implicit */signed char) (~(16475010855707035645ULL)));
                            arr_43 [i_1] [i_2] [i_2] [i_12] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)111))));
                            arr_44 [i_1] [i_1] [(unsigned char)9] [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2016396800U)) != (((((/* implicit */_Bool) 2016396806U)) ? (arr_16 [i_1 + 1] [18] [(unsigned char)22] [i_12] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13495)))))));
                            arr_45 [i_14] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1] [(signed char)0])) + (((/* implicit */int) arr_31 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_3]))));
                        }
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 3) 
                    {
                        var_43 = ((/* implicit */signed char) var_4);
                        /* LoopSeq 1 */
                        for (signed char i_16 = 2; i_16 < 23; i_16 += 3) 
                        {
                            var_44 ^= ((/* implicit */_Bool) ((int) arr_12 [i_1] [i_2] [i_15 - 1] [i_15 - 2] [i_16]));
                            var_45 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) (unsigned short)17209))) : (((/* implicit */int) (unsigned short)48328))));
                        }
                        var_46 = (-(arr_28 [i_3] [i_15] [i_15] [i_15 - 2] [i_15 - 2]));
                    }
                    var_47 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 18446744073709551615ULL)))));
                    arr_53 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48314))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) var_4))))) : (((arr_23 [i_1 - 2] [i_2] [i_3] [i_1 - 2] [i_3] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 - 1] [i_1 - 1] [i_1 - 1] [7] [i_1]))) : (1971733218002515961ULL)))));
                    var_48 = ((/* implicit */unsigned short) arr_6 [i_1] [i_3]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
        {
            var_49 -= ((/* implicit */unsigned short) ((((_Bool) arr_36 [22ULL] [i_1] [(unsigned short)0] [i_17])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (1971733218002515976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1] [i_1 + 2] [i_1] [(unsigned short)10] [18ULL] [i_17] [i_17]))))))));
            var_50 = var_0;
            var_51 &= ((/* implicit */short) ((unsigned short) arr_8 [20LL] [(signed char)8]));
        }
        for (signed char i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_19 = 1; i_19 < 22; i_19 += 3) 
            {
                var_52 |= ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) arr_40 [(unsigned char)20])) : ((-(((/* implicit */int) arr_31 [i_19 + 1] [i_18] [(signed char)19] [i_18] [i_1])))));
                arr_60 [(_Bool)1] |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [8] [i_18]))) + (16475010855707035647ULL))));
                var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1] [i_1])) - (((/* implicit */int) arr_6 [i_1] [i_1]))));
                var_54 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_28 [i_1] [i_18] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) * ((+(((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    for (signed char i_21 = 1; i_21 < 20; i_21 += 1) 
                    {
                        {
                            var_55 -= ((((/* implicit */_Bool) (+(var_10)))) ? (arr_41 [i_20] [i_19 - 1]) : (((/* implicit */unsigned long long int) (+(4009392366U)))));
                            var_56 |= ((/* implicit */signed char) (~(arr_22 [i_1] [i_1 - 2] [i_1 - 1] [16ULL] [i_19 - 1] [i_21 - 1])));
                            var_57 |= ((/* implicit */long long int) ((arr_57 [i_1 - 2]) | (1023ULL)));
                            arr_65 [i_1] [i_20] [i_20] [i_20] [i_20] |= ((/* implicit */signed char) ((int) arr_52 [i_1 - 1] [i_1 - 1] [i_21 + 3] [i_21 + 3] [i_19 - 1] [22ULL]));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_22 = 2; i_22 < 23; i_22 += 4) 
            {
                var_58 = arr_5 [i_1] [i_22 - 1] [i_22];
                var_59 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_22])) ? (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))) : (var_15)));
            }
            arr_70 [i_1] [i_18] = ((/* implicit */signed char) (+(arr_42 [(unsigned char)0] [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_18] [i_18])));
            /* LoopNest 2 */
            for (unsigned char i_23 = 4; i_23 < 20; i_23 += 3) 
            {
                for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    {
                        var_60 ^= ((/* implicit */unsigned short) arr_62 [i_1] [i_23] [i_1] [i_24]);
                        var_61 ^= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)0))))));
                        var_62 &= ((((/* implicit */_Bool) arr_64 [i_23 + 1] [i_23] [i_18] [i_23 + 1] [i_18])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        for (signed char i_25 = 0; i_25 < 24; i_25 += 3) /* same iter space */
        {
            var_63 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_7 [i_1])))))));
            var_64 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_69 [i_1 - 1] [i_1 + 2] [(short)12]))));
            var_65 = (+(((/* implicit */int) arr_23 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [23ULL])));
            arr_77 [i_1] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_1 + 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 2147483647))));
            var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_25] [i_1] [i_25] [i_1] [9] [(_Bool)1] [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_42 [i_1 - 1] [i_1] [(unsigned char)1] [i_25] [(unsigned char)1] [i_25] [i_25])))) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1]))));
        }
    }
}
