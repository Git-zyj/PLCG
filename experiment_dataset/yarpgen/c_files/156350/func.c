/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156350
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_9 [i_0] [i_1 - 1] [i_0] [(unsigned char)10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)147))));
                arr_10 [(unsigned char)4] [i_0] [i_0] [i_0] = var_15;
            }
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                arr_13 [i_1] [i_0] = ((/* implicit */int) (unsigned char)0);
                var_16 = (unsigned char)33;
                arr_14 [i_0] = ((/* implicit */int) var_0);
            }
            var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)93)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) var_14);
            var_19 = ((int) ((unsigned char) arr_0 [9ULL] [i_0]));
            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) var_0));
            var_21 = (unsigned char)69;
            var_22 = ((unsigned char) (-2147483647 - 1));
        }
        for (unsigned char i_5 = 3; i_5 < 7; i_5 += 4) 
        {
            arr_20 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)76)))) + ((+(((/* implicit */int) var_15))))));
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0 + 1]))));
        }
        arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0] [i_0 - 2] [i_0 + 1]) : (arr_8 [i_0] [i_0 - 3] [i_0])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                    arr_28 [i_0 + 1] [i_0] [i_0] [i_0] = (unsigned char)95;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        var_25 -= ((/* implicit */int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                {
                    arr_38 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_26 = ((unsigned char) ((1898282956) < (((/* implicit */int) arr_29 [i_8]))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551615ULL)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (int i_13 = 2; i_13 < 21; i_13 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_28 = var_9;
                        arr_50 [i_14] [i_14] [10ULL] [i_14] [i_14] &= ((/* implicit */int) ((-2049653093) <= (((/* implicit */int) (unsigned char)0))));
                    }
                    for (int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */int) var_4);
                        var_30 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (max((2689153688460365210ULL), (((/* implicit */unsigned long long int) (unsigned char)3))))))), (min((608577375), (((/* implicit */int) ((11023175534902879083ULL) <= (9223372036854775807ULL))))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) arr_41 [i_11 - 1])), (18446744073709551615ULL))), (((arr_49 [i_11 + 1] [i_12] [9] [i_11 + 1]) ^ (((/* implicit */unsigned long long int) var_2)))))))));
                        var_32 = ((/* implicit */unsigned char) var_10);
                        arr_56 [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [14ULL] [14ULL])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_1)) ? (2130706432) : (((/* implicit */int) var_7))))))), ((+(1540748473963674955ULL)))));
                    }
                    for (unsigned char i_17 = 3; i_17 < 22; i_17 += 3) 
                    {
                        var_33 = ((((/* implicit */_Bool) (~(arr_43 [5ULL] [i_11])))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11))))));
                        arr_61 [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) + ((-(((int) arr_47 [0]))))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)225)) ? (((((/* implicit */int) (unsigned char)214)) >> (((var_2) + (1288273740))))) : (((/* implicit */int) ((unsigned char) 9223372036854775809ULL)))));
                    }
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) << (((/* implicit */int) (((!(((/* implicit */_Bool) 17470642270663034438ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11] [(unsigned char)19] [i_11] [i_11]))) : (5ULL)))))))));
                }
            } 
        } 
        arr_62 [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_11)) | ((-2147483647 - 1)))), ((~(((/* implicit */int) var_8)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            var_36 = ((/* implicit */unsigned long long int) var_12);
            arr_65 [(unsigned char)15] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) == (((/* implicit */int) (unsigned char)86)))))));
            arr_66 [4ULL] &= ((/* implicit */int) max(((unsigned char)255), (var_11)));
        }
        for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            var_37 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) (unsigned char)254))))))));
            arr_69 [i_11] = ((((/* implicit */_Bool) 227615559)) ? (((/* implicit */int) ((unsigned char) var_11))) : (max((((((/* implicit */_Bool) var_4)) ? (arr_59 [i_11 + 1] [0ULL] [i_11 - 1] [i_11] [(unsigned char)17]) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_5)))));
        }
        for (unsigned char i_20 = 3; i_20 < 22; i_20 += 1) 
        {
            var_38 -= (unsigned char)0;
            var_39 = ((/* implicit */unsigned char) (~(((((var_10) / (var_10))) - (((/* implicit */int) (unsigned char)22))))));
            arr_72 [i_11 - 1] [i_20 + 1] [i_11] = min((((((unsigned long long int) arr_52 [i_11])) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))))), (((/* implicit */unsigned long long int) var_2)));
        }
    }
    var_40 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)19)), (((((/* implicit */_Bool) 13591666131770927192ULL)) ? (((/* implicit */int) (unsigned char)126)) : ((~(((/* implicit */int) (unsigned char)125))))))));
    var_41 = ((/* implicit */unsigned char) var_4);
    var_42 |= ((/* implicit */int) var_8);
}
