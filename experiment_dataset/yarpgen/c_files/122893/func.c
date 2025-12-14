/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122893
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
    for (int i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (14727490685725261284ULL))))), (((/* implicit */unsigned long long int) var_1))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max(((signed char)-121), (((/* implicit */signed char) var_4))))), (var_2))))) >= (max((((unsigned long long int) arr_2 [i_0] [i_0 - 3])), (((/* implicit */unsigned long long int) arr_4 [i_0 - 3] [i_0 + 3] [i_0 + 2]))))));
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))));
        }
        arr_5 [10LL] [i_0 - 2] = ((/* implicit */signed char) ((unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56408))) : ((-9223372036854775807LL - 1LL))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56408)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)108))));
    }
    for (int i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_7 [i_2] [i_2 + 2]))));
        var_21 = ((/* implicit */unsigned long long int) (-(var_5)));
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) 20ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 3] [i_2 - 3])))))))));
            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 2] [i_2 - 1] [i_2 - 1]))) : (16328714552167092765ULL))) != (((/* implicit */unsigned long long int) min((1870867114U), (((/* implicit */unsigned int) -1934411168)))))));
            var_24 = ((/* implicit */short) (unsigned char)197);
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_13 [i_6] [(unsigned char)5] [i_3 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))) * (6324176222002588915ULL)));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)9036)) != (((/* implicit */int) arr_7 [i_2] [i_5]))));
                        arr_19 [i_6] [i_5] [i_4] [i_4] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-26260))))) / (((((/* implicit */_Bool) (signed char)90)) ? (5243730467165563594LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7)))))));
                    }
                    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_16 [i_2 - 3] [i_3] [i_7] [i_2 - 1] [i_5]);
                        arr_24 [i_2] [i_5] [i_2] [i_3 + 1] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1])) ? (arr_21 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104)))));
                    }
                    arr_25 [i_2] [i_3 + 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))));
                }
                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) (((+(15223237414823004536ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_8] [i_2 - 1] [i_3 + 1] [i_3])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) var_5);
                        var_32 = ((/* implicit */short) (+((+(((/* implicit */int) var_7))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 2])) * ((+(((/* implicit */int) var_9))))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_8] [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_0 [i_2 + 2])) : (arr_8 [i_3 + 2])));
                        var_35 = ((/* implicit */unsigned short) 2147483647LL);
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_28 [i_2 + 2] [i_3 - 1] [i_3 + 2] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) (((~(-3LL))) << ((((-(((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_8] [i_11])))) + (110)))));
                        var_38 = ((/* implicit */_Bool) (short)16069);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 4) 
                    {
                        arr_37 [i_2] [i_3] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) % (((/* implicit */int) arr_22 [i_3 + 1] [i_12 - 1]))));
                        var_39 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-121)) + (2147483647))) << (((((-1760566363361180534LL) + (1760566363361180564LL))) - (30LL)))));
                        arr_38 [i_12] [i_3] [i_4] [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(0LL)));
                    }
                    var_40 = ((/* implicit */unsigned short) arr_26 [i_3 + 2] [i_3 - 1] [i_4] [i_2 - 1]);
                }
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_2 - 3] [i_13 + 2]))));
                    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2 - 2])) ? (((/* implicit */unsigned long long int) 5278388439695735394LL)) : (3223506658886547080ULL)));
                    var_44 = ((/* implicit */unsigned long long int) arr_15 [i_13] [(signed char)8] [(signed char)2] [(signed char)8] [i_2]);
                }
            }
            for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                arr_43 [i_2 + 2] [i_2] [i_3 - 1] [3] = -7LL;
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_22 [i_3] [i_3])) : (((/* implicit */int) (signed char)90))))))))) + (max((((/* implicit */unsigned long long int) arr_35 [(_Bool)0] [i_14 - 1] [i_3] [i_3] [i_2])), (arr_29 [(unsigned short)3] [i_3 + 2] [i_3 - 1] [i_14] [i_14 - 1])))));
                var_46 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_11)) : (5243730467165563594LL)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 3) 
            {
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)3661))) ? (((/* implicit */unsigned long long int) (~(arr_14 [i_3 + 1])))) : ((-(var_0)))));
                var_48 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 25769803776LL)))))));
            }
        }
    }
    var_49 = ((/* implicit */unsigned long long int) var_5);
    var_50 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */int) (signed char)109))))), (max((var_15), (((/* implicit */unsigned long long int) var_6)))))), (max((((/* implicit */unsigned long long int) (~(var_5)))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62953))) : (var_8)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
    {
        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7357456403431959818LL)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (short)32464)))))) >= (max((((/* implicit */long long int) var_9)), (arr_49 [i_16]))))))) : ((~(min((4294967295U), (((/* implicit */unsigned int) var_17))))))));
        var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_48 [i_16] [i_16]))))));
        /* LoopSeq 1 */
        for (unsigned int i_17 = 3; i_17 < 21; i_17 += 1) 
        {
            var_53 = ((/* implicit */unsigned short) arr_48 [21ULL] [14LL]);
            arr_55 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_16] [i_16])) ? (max((((/* implicit */unsigned int) (short)32470)), (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)141)) || (((/* implicit */_Bool) 9223372036854775807LL))))))))));
            var_54 = ((/* implicit */short) (unsigned short)17600);
            var_55 = ((/* implicit */unsigned char) arr_54 [i_16] [7U]);
            arr_56 [i_16] [i_16] = ((/* implicit */long long int) arr_52 [i_16] [i_16] [i_16]);
        }
    }
    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
    {
        arr_59 [i_18] [i_18] = ((/* implicit */unsigned short) 3044981477U);
        var_56 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_50 [i_18] [i_18]), (arr_50 [i_18] [i_18])))) >= (((/* implicit */int) var_4))));
    }
}
