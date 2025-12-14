/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126707
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_12)), (5779882026562406138LL))) % (((long long int) arr_1 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((var_2) + (var_15)))) | (var_1)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [10] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((-(((var_6) + (((/* implicit */int) var_13))))))));
            arr_6 [i_0] = ((/* implicit */short) -1LL);
        }
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned char) (~(4901203196987551014LL)));
            var_17 = (~((-(var_10))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) (-(((long long int) 576460752303423487ULL))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_18 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                        var_19 = ((/* implicit */int) var_3);
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), ((+(arr_7 [i_3] [i_3] [i_3]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (arr_2 [i_3]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) > (4901203196987551023LL)))))))));
                            var_21 = arr_20 [i_3] [i_3] [i_6] [i_7];
                            var_22 -= ((/* implicit */long long int) max(((+(((((/* implicit */int) arr_11 [i_6])) - (((/* implicit */int) (short)17861)))))), ((-(arr_2 [i_6])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_3])) & (((/* implicit */int) arr_13 [i_3] [i_3]))));
                            var_24 = ((/* implicit */long long int) (-(17870283321406128129ULL)));
                            arr_26 [i_3] [i_8] = ((/* implicit */unsigned char) ((min((arr_7 [i_3] [i_4] [i_6]), (((17870283321406128129ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)5] [i_3] [i_5]))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_8 [i_8] [i_5] [i_4])))))));
                            arr_27 [i_4] [i_4] [(_Bool)1] [i_4] [14ULL] [i_6] [0LL] |= ((/* implicit */unsigned char) arr_21 [i_3] [i_4] [i_3] [i_5] [i_5] [i_6] [i_6]);
                        }
                        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((var_3) & (((/* implicit */unsigned long long int) arr_2 [i_3])))) | (((/* implicit */unsigned long long int) arr_2 [i_3]))));
                            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_29 [i_3] [i_5]), (arr_29 [i_3] [i_4])))) ? (((/* implicit */int) (unsigned short)8246)) : ((+(((/* implicit */int) var_8))))));
                            arr_30 [i_9] [i_3] [i_5] [i_3] [1ULL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_0 [4LL]))))))), (arr_22 [i_9] [i_9] [i_3] [2] [i_9])));
                        }
                        var_27 = arr_15 [i_5] [i_3];
                        arr_31 [(unsigned char)0] [(unsigned char)0] [i_6] [i_3] [i_3] [i_6] &= ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */long long int) arr_2 [i_6])) : (var_15)))), (max((((/* implicit */unsigned long long int) (unsigned char)250)), (var_3)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                var_28 = ((/* implicit */short) var_11);
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [(short)7] [i_3])) ? (var_7) : (arr_25 [i_3] [14] [i_3] [(unsigned char)16] [i_3]))), (max((arr_19 [i_3] [i_3]), (((/* implicit */int) var_13)))))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            arr_41 [5ULL] [i_3] [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */int) min((((arr_7 [i_3] [i_4] [i_12]) * (((/* implicit */unsigned long long int) -18LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-5244139773052403597LL)))) ? (((/* implicit */int) ((signed char) var_15))) : (((/* implicit */int) ((9645022009503177958ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_3)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_3] [9LL] [i_10]))))) : (((((/* implicit */_Bool) arr_36 [i_3] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_12])))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1)))) + ((~(((/* implicit */int) (signed char)-16))))))) : (min((((((/* implicit */_Bool) 724099524)) ? (var_15) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [2LL] [i_12] [i_12])) ? (((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [2])) : (arr_38 [i_12] [i_4] [i_4] [i_4] [i_4]))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((signed char) var_9)))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 1; i_15 < 15; i_15 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_15 + 1])) ? (((/* implicit */unsigned long long int) arr_39 [i_3] [i_13] [8ULL])) : (arr_49 [i_13] [i_4] [i_13] [i_14] [i_15]))), (min((5449127983028135929ULL), (((/* implicit */unsigned long long int) var_0))))))));
                            arr_50 [i_3] [i_4] [i_13] [i_3] [i_15] [3ULL] = ((/* implicit */int) (~((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_1)))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 724099524)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(4359113654838881986LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_2)))))))));
            }
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (max((max((arr_36 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_11 [i_3])))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) arr_14 [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) arr_40 [i_3] [i_4] [(unsigned char)5] [i_4] [i_3])), (arr_3 [i_4] [i_3] [i_3])))) + (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_8))))))))));
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                var_35 = ((/* implicit */short) (-(max(((+(arr_7 [16ULL] [i_4] [22LL]))), (min((arr_16 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_28 [i_3] [i_4]))))))));
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    arr_56 [i_3] [i_4] [i_3] [i_4] [i_3] [i_16] = ((/* implicit */unsigned long long int) (unsigned char)101);
                    arr_57 [i_3] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-775736950) + (((/* implicit */int) arr_8 [i_3] [i_3] [i_17])))) + (arr_20 [i_17] [i_16] [i_4] [(_Bool)1])))) && (((/* implicit */_Bool) max((arr_22 [i_3] [i_3] [i_3] [i_17] [i_4]), (((/* implicit */unsigned long long int) 4901203196987551014LL)))))));
                    var_36 = ((/* implicit */unsigned char) (+(((408002987) ^ (((/* implicit */int) (unsigned char)184))))));
                }
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) (~(2003499215)));
                            arr_68 [i_3] [i_20] |= ((5244139773052403597LL) / (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_20] [i_19 - 1] [i_19 - 1]))));
                        }
                    } 
                } 
            } 
            arr_69 [i_3] [i_18] = ((/* implicit */short) ((((/* implicit */int) (signed char)69)) + (arr_42 [15ULL] [i_18] [(unsigned char)1])));
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 3; i_22 < 16; i_22 += 2) 
            {
                for (long long int i_23 = 1; i_23 < 14; i_23 += 3) 
                {
                    {
                        var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 2 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_39 = ((/* implicit */short) arr_10 [i_18] [i_23 + 2]);
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((arr_58 [i_23 - 1] [i_3] [i_22 - 3]) & (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 3) 
                        {
                            arr_78 [i_3] [i_22] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_51 [15] [i_22 - 2] [i_23 + 1] [i_23]))));
                            var_41 = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) ((arr_43 [i_23 + 3] [i_23 + 3]) << (((((/* implicit */int) arr_14 [i_23 + 2] [i_3])) - (27)))))) : (((/* implicit */unsigned short) ((arr_43 [i_23 + 3] [i_23 + 3]) << (((((((/* implicit */int) arr_14 [i_23 + 2] [i_3])) - (27))) - (58))))));
                            var_42 = ((/* implicit */int) (+(var_1)));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_43 = var_6;
                            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_22 - 3] [(_Bool)1] [i_22] [i_22 - 3]))) * (536805376ULL))))));
                        }
                    }
                } 
            } 
        }
        arr_81 [i_3] [10LL] &= ((/* implicit */unsigned short) arr_38 [16] [i_3] [i_3] [i_3] [16]);
    }
    var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2081263875))));
    var_46 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_15))));
}
