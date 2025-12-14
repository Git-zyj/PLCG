/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110368
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    var_20 = ((/* implicit */int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2] [i_2])))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2147483633) : (((/* implicit */int) arr_2 [i_2]))))) ? ((~(137438691328ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) : ((-9223372036854775807LL - 1LL)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)35159))))) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2470440258U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
                                var_22 = ((/* implicit */int) var_18);
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) != (arr_10 [i_2 - 1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_5 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)58482)) <= (-2147483647))))) : (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_1] [i_0] [i_0] [i_0] [i_0 + 2] [10LL]) : (arr_9 [i_1 - 2] [i_0 + 1] [i_0] [i_0] [(unsigned char)12] [i_0]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 2470440258U)) : (-2LL)))))) != (((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) var_0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_17 [i_5] = ((short) var_14);
        /* LoopSeq 4 */
        for (int i_6 = 2; i_6 < 7; i_6 += 4) 
        {
            arr_21 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)29329))));
            arr_22 [i_5] [i_5] = ((/* implicit */_Bool) var_7);
            var_26 = ((/* implicit */unsigned int) (~(2147483647)));
            arr_23 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_8)))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 7; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)72))) : (9ULL)));
                        /* LoopSeq 4 */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_31 [i_6] [i_7] [i_6] [i_8] = ((/* implicit */int) arr_1 [i_7]);
                            var_28 = ((/* implicit */unsigned short) ((unsigned char) var_3));
                            var_29 = ((/* implicit */unsigned short) ((arr_25 [i_9] [i_8 + 2] [i_6] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30376)))));
                            arr_32 [i_5] [i_6 + 3] [(signed char)5] [i_8] [i_7] [(signed char)5] [i_9] = ((/* implicit */int) (-(1824527037U)));
                        }
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_36 [i_5] [i_8] [4] [i_8 + 1] [i_8] [i_10] = ((/* implicit */unsigned short) ((var_6) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [1])) ? (((/* implicit */int) (_Bool)1)) : (315551168))))));
                            arr_37 [i_5] [i_5] [6ULL] [i_5] [i_8 + 3] [i_8] = ((/* implicit */unsigned short) var_6);
                            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)242)) < (var_7))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 6; i_11 += 4) /* same iter space */
                        {
                            arr_40 [i_11 - 1] [i_8] [i_8] [i_7] [i_8] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3U)) ? (arr_5 [i_8 + 2]) : (((/* implicit */unsigned long long int) -1))));
                            arr_41 [i_8] = ((((/* implicit */int) (short)3200)) * (((/* implicit */int) (_Bool)1)));
                        }
                        for (unsigned char i_12 = 1; i_12 < 6; i_12 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((signed char) (unsigned short)6))));
                            var_32 = ((((/* implicit */int) var_12)) < (((/* implicit */int) (_Bool)1)));
                            arr_45 [i_8] [i_8] [(unsigned char)9] = ((/* implicit */int) ((arr_4 [12U] [9U] [i_8 + 1] [i_6 - 2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                        }
                        arr_46 [i_5] [i_8] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_8 + 3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 928160702)) <= (var_16))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3183))) : (arr_16 [i_7])))));
                    }
                } 
            } 
        }
        for (int i_13 = 3; i_13 < 7; i_13 += 2) 
        {
            arr_49 [i_13] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)17))));
            arr_50 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_5] [i_5] [i_13]))));
        }
        for (unsigned int i_14 = 2; i_14 < 9; i_14 += 2) 
        {
            var_33 = ((-928160699) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
            var_34 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((137438691328ULL) <= (((/* implicit */unsigned long long int) 1)))))));
            arr_53 [i_14 + 1] [i_14 + 1] [i_5] = ((/* implicit */unsigned long long int) var_4);
        }
        for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (signed char i_17 = 2; i_17 < 8; i_17 += 1) 
                {
                    {
                        arr_62 [i_17] [1U] [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1138556229)) ? (arr_27 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 2] [i_17 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            var_35 = ((/* implicit */short) 18446743936270860290ULL);
                            var_36 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 10LL)) != (9602204317412382509ULL))) ? (15213224402326360981ULL) : (2305843009213693952ULL)));
                            var_37 = ((((/* implicit */_Bool) 9507780632212079873ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46135))) : (((unsigned long long int) var_1)));
                        }
                    }
                } 
            } 
            arr_66 [i_5] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (var_6)));
        }
        arr_67 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_16) <= (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) <= (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)1)))))));
        var_38 = var_1;
    }
    var_39 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))) ? (9602204317412382509ULL) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) 3994288046U))));
    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_10)) != (((/* implicit */int) (_Bool)1)))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
}
