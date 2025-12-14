/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155649
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_1 [(signed char)13]))));
        var_13 = ((((_Bool) 1048575U)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (10115116661734987191ULL) : (((/* implicit */unsigned long long int) (+(var_11)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))));
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_14 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (8331627411974564429ULL)))) ? (arr_1 [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
        var_15 = ((/* implicit */signed char) (-((+(((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 8; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned long long int) max((arr_1 [i_2 + 2]), (((long long int) arr_2 [i_2 + 1] [i_2 - 1]))));
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1564709782932953111LL)) || (((/* implicit */_Bool) 33554431LL))))), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) 33554415LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1])))));
            var_17 = ((/* implicit */unsigned char) -2057508705327393290LL);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
            {
                var_18 += ((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) arr_0 [19U] [i_3])))) ^ (((/* implicit */unsigned long long int) arr_0 [i_2] [i_3])));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1974770736914862209LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_2 + 2])) : (((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                arr_11 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (arr_7 [i_2] [i_3 - 1] [i_4]) : (-33554416LL)))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_1);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) (unsigned char)77)) - (77)))))) ? (33554409LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))));
                            var_22 ^= ((_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [(short)9] [(_Bool)0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2 - 3] [i_2] [i_4])))));
                            var_23 &= ((/* implicit */unsigned char) (((-(var_1))) | (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 2])))))));
                            arr_16 [i_5] [i_2 + 2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) arr_15 [i_2 - 1] [i_3] [6ULL] [i_5] [i_5]);
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
            {
                var_24 = min((min((((/* implicit */long long int) 3217981526U)), (33554406LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2 - 1])) || (((/* implicit */_Bool) arr_18 [i_7]))))));
                arr_19 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((max((((/* implicit */unsigned long long int) arr_2 [i_2] [i_3])), (var_4))) | (((/* implicit */unsigned long long int) ((long long int) arr_1 [1ULL])))))));
                arr_20 [i_2] = ((/* implicit */signed char) arr_5 [i_3] [i_7]);
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 7; i_8 += 1) 
                {
                    for (long long int i_9 = 3; i_9 < 8; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) 8331627411974564443ULL);
                            arr_25 [i_2] [i_8] [i_7] [i_8] [i_9] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_5 [i_2 + 1] [i_3 + 1]), (arr_5 [i_2 - 2] [i_3 + 1]))))));
                            arr_26 [i_9] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (-33554409LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)3472)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : ((~(2147483647U))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
            {
                var_26 &= arr_9 [i_2 - 1] [i_3];
                var_27 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (33554424LL)))) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (var_1) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3] [i_10])))) : (min((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2 - 2] [i_3 + 1] [i_3 + 1] [i_10])), (var_1))))), (((/* implicit */unsigned long long int) (signed char)70))));
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_7 [i_2 - 2] [i_3] [i_10]), (arr_7 [i_2 + 1] [i_3] [i_10]))))));
                var_29 &= ((/* implicit */short) arr_0 [i_3 - 2] [i_10]);
                arr_30 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_10))))));
            }
            arr_31 [i_2] [i_2] = ((/* implicit */_Bool) min((min(((-(-33554402LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -33554450LL)) ? (arr_5 [(signed char)3] [(signed char)3]) : (arr_23 [i_2] [(signed char)6] [i_2] [(unsigned char)8] [i_2] [i_3] [(signed char)6])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_2] [i_2 - 2] [i_2])))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (~(-5474364990203883698LL))))));
        }
        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2 - 3] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) (-(15ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (max((4294967293U), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))))))));
            var_32 = min((7615222147411790764LL), (((/* implicit */long long int) (+(arr_10 [i_2 + 2])))));
            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)254))))), (var_1)));
        }
    }
    var_34 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_12 = 3; i_12 < 24; i_12 += 1) 
    {
        var_35 = ((/* implicit */short) (signed char)45);
        var_36 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (signed char)45)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_12] [i_12]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (33554406LL) : (((/* implicit */long long int) arr_34 [i_12])))))))));
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_4)))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_12 + 1] [i_12])), (var_1))) : (((/* implicit */unsigned long long int) arr_0 [i_12] [5U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16383)) << (((((/* implicit */int) var_5)) - (26077)))))) : (var_4)))));
        var_38 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_12 - 1]))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        var_39 |= ((/* implicit */unsigned short) (short)-23120);
        /* LoopNest 3 */
        for (long long int i_14 = 3; i_14 < 8; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        arr_47 [i_13] [i_13] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-3316602718612350676LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_13]))) : (arr_23 [i_13] [i_13] [(short)7] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_15])));
                        arr_48 [i_13] [i_13] [i_13] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_13] [i_14] [i_14] [i_14 - 3])) ? (((/* implicit */int) ((15718756485964600491ULL) < (((/* implicit */unsigned long long int) arr_4 [i_13]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 33554431LL)))))));
                    }
                } 
            } 
        } 
        arr_49 [4U] [i_13] |= ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_13] [i_13] [5LL] [i_13]));
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 2; i_18 < 9; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                {
                    var_40 = ((/* implicit */_Bool) 33554433LL);
                    var_41 -= ((/* implicit */_Bool) ((unsigned short) var_9));
                    var_42 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_18] [i_19])) : (((/* implicit */int) arr_53 [i_18] [i_19]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
        {
            arr_60 [i_17] = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_58 [i_17] [i_17] [i_20]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (arr_1 [i_20]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
            var_43 -= ((/* implicit */short) ((arr_1 [i_20]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        }
        for (long long int i_21 = 4; i_21 < 11; i_21 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_22 = 1; i_22 < 11; i_22 += 2) 
            {
                for (unsigned short i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    {
                        var_44 = ((long long int) arr_61 [i_21 - 3]);
                        var_45 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)113)) * (((/* implicit */int) var_6))))));
                        var_46 |= -33554415LL;
                    }
                } 
            } 
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) & (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned short)45290)))) : (((/* implicit */int) var_2))));
            arr_71 [i_17] [i_21] = ((/* implicit */unsigned char) 33554395LL);
        }
        for (short i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 3; i_25 < 11; i_25 += 3) 
            {
                for (signed char i_26 = 1; i_26 < 11; i_26 += 3) 
                {
                    {
                        arr_82 [i_17] = ((/* implicit */unsigned char) (~(arr_55 [i_26])));
                        var_48 = ((/* implicit */short) 33554414LL);
                        var_49 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (4341359947942077318LL) : (var_9)))));
                        arr_83 [i_17] [i_24] [i_24] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_26 - 1] [i_24])) ? (((((/* implicit */int) arr_54 [i_17] [i_17] [i_25] [i_26 + 1])) / (((/* implicit */int) (unsigned char)130)))) : (((/* implicit */int) var_0))));
                    }
                } 
            } 
            var_50 = arr_2 [i_17] [i_17];
            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_56 [i_17] [i_24] [i_24])))))) : (-33554410LL))))));
            arr_84 [i_24] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_8)));
        }
        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_17])) ? (arr_75 [i_17] [i_17] [i_17]) : (((/* implicit */unsigned long long int) 33554399LL))));
    }
}
