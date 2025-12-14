/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11772
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
    var_13 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((var_3) ^ (((/* implicit */unsigned int) var_7))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) ^ (var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (var_2) : (((/* implicit */unsigned int) var_7)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                arr_11 [i_1] [(signed char)15] [10U] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1652497641U)) + (5986110706969891823ULL)));
                var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)207)))));
            }
            var_15 = ((/* implicit */_Bool) var_10);
        }
        arr_12 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (short)15285)), (var_6))), (((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0))))))));
        arr_13 [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_8)) - (((/* implicit */int) var_11)))), (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [18LL] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_4 [i_0] [6] [i_0]))))) : (max((arr_6 [i_0] [15U] [i_0]), (-4350708436444717895LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (arr_9 [i_0] [19]))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_8 [i_0] [i_0] [i_0]) + (9223372036854775807LL))) >> (((arr_8 [i_0] [i_0] [i_0]) + (734311311152569653LL)))))) && (((/* implicit */_Bool) var_8))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        arr_16 [5ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [5] [i_3] [i_3]))));
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_3] [i_3]))));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_11))))) ? (max((var_6), (var_6))) : (((/* implicit */int) var_0)))));
            arr_23 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (17446029541769833130ULL)));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                arr_26 [11] [i_4] [16] &= ((/* implicit */unsigned char) ((long long int) (-(-1643436940325218014LL))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                {
                    arr_31 [10ULL] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4] [i_4]))))) & (-1737520249))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_25 [i_4] [i_5 + 1])) : (((/* implicit */int) min((((/* implicit */short) var_11)), (var_0))))))));
                    var_19 = (-(max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))));
                    arr_32 [i_4] [i_5] [i_6] [1LL] [i_7] [(unsigned short)1] = ((/* implicit */short) (+(min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_8]))) && ((((!(((/* implicit */_Bool) 9223372036854775807LL)))) || (((((/* implicit */_Bool) arr_8 [(_Bool)0] [i_8] [i_6])) || (((/* implicit */_Bool) arr_10 [i_8] [i_6] [i_4]))))))));
                    arr_35 [(unsigned char)11] = ((/* implicit */short) var_7);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_38 [i_5] [i_8] [i_6] [i_5] [(signed char)5] = ((/* implicit */unsigned char) arr_34 [i_8] [13LL] [i_5] [i_4]);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)5644)) ^ (((/* implicit */int) (short)15285))));
                    }
                }
                arr_39 [9LL] [i_5] [9LL] [(unsigned short)17] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) arr_4 [i_4] [i_5 - 1] [i_4]))))));
                var_22 = ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-121)) <= (((/* implicit */int) (signed char)111)))))) : (min((((/* implicit */unsigned int) (unsigned char)98)), (0U))));
                arr_40 [i_4] [(short)16] [(short)16] = ((/* implicit */int) ((22U) == (((/* implicit */unsigned int) var_6))));
            }
        }
        /* vectorizable */
        for (long long int i_10 = 1; i_10 < 20; i_10 += 3) /* same iter space */
        {
            arr_45 [i_4] [(unsigned char)13] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_10] [i_10])) != (-1010652962)));
            arr_46 [i_4] [i_4] = ((/* implicit */unsigned char) (!((_Bool)1)));
            var_23 = ((/* implicit */unsigned char) var_7);
            arr_47 [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10] [i_10 - 1])) ? (var_7) : (((/* implicit */int) var_12))));
        }
        for (long long int i_11 = 1; i_11 < 20; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_12 = 1; i_12 < 20; i_12 += 2) 
            {
                arr_52 [i_12] [i_11 - 1] [i_4] = ((/* implicit */unsigned short) var_6);
                arr_53 [13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_11 + 2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (4294967279U)));
                arr_54 [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                arr_55 [0LL] [i_11] [i_12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (-1401741263))))));
                var_24 = ((/* implicit */long long int) ((((-1401741255) & (((/* implicit */int) var_5)))) != (((/* implicit */int) arr_7 [i_12 + 1] [(signed char)6] [(signed char)6] [i_4]))));
            }
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
            {
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)173)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_11)) + (var_6))) >= (((/* implicit */int) arr_19 [i_4] [i_11 + 2])))))) : (min((9223372036854775807LL), (((/* implicit */long long int) arr_37 [i_11] [8U] [(short)15] [i_11 - 1] [i_11 + 2])))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    arr_61 [i_11] [i_11] [i_11] [i_11] = ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60596)) - ((+(2147483635)))))) & (min((min((-9099392892040319384LL), (((/* implicit */long long int) (signed char)120)))), (((/* implicit */long long int) (_Bool)1)))));
                    arr_62 [i_11] [i_14] = ((/* implicit */unsigned long long int) arr_51 [i_4] [i_13] [(unsigned char)7]);
                }
                arr_63 [(unsigned char)3] [i_11 - 1] [21] [i_11 - 1] = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) arr_20 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_11] [i_13]))) : (var_3))))));
            }
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
            {
                arr_66 [i_4] [i_4] [(short)7] [19LL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3688791768819218385LL)) ? (min((arr_8 [i_4] [i_15] [i_4]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [2] [i_11]), (((/* implicit */unsigned char) arr_56 [(_Bool)1])))))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned short)23053)) + (((/* implicit */int) arr_5 [(unsigned char)4] [18ULL]))))))));
                arr_67 [(short)15] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))))), ((-(4294967279U)))));
                arr_68 [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */int) (signed char)-21)) >= (((/* implicit */int) (signed char)-80))));
                var_26 = ((/* implicit */unsigned char) var_4);
            }
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)92)) * (((/* implicit */int) (unsigned short)42482))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_27 [i_11] [i_11] [i_4] [i_4])), (var_4)))) : (((unsigned long long int) var_6)))))))));
            arr_69 [i_4] [i_11] [i_11] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || ((((_Bool)0) || (((/* implicit */_Bool) 3659252596U)))));
            arr_70 [(signed char)21] = ((/* implicit */unsigned int) var_5);
            arr_71 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
        }
        arr_72 [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 1132397856))))));
        var_28 = ((/* implicit */signed char) (+(((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_4] [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) var_12))));
        arr_77 [i_16] = ((/* implicit */unsigned int) (((_Bool)0) ? (arr_43 [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_30 = ((/* implicit */unsigned long long int) ((unsigned int) 952957966));
    }
}
