/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115628
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */signed char) var_12))))) != (((/* implicit */int) min(((unsigned short)46017), (((/* implicit */unsigned short) var_12)))))))) << (((7972476302749471314LL) - (7972476302749471292LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 &= ((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned short)19518)) : (((/* implicit */int) arr_4 [i_2 + 4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2]))))) : (min((var_9), (((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_0 [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */int) var_7)) % (arr_8 [i_1 - 1] [i_2] [i_2 + 2]))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (arr_8 [i_1 - 1] [i_2] [i_2 + 2]))))));
                        var_19 = ((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_1])), (var_9)));
                        var_20 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) (signed char)-68)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)122)) - (117))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            var_21 *= ((((/* implicit */unsigned int) ((min((arr_3 [i_3]), (arr_12 [i_0] [i_4] [i_2] [i_2] [i_0] [i_0]))) ? (((/* implicit */int) ((_Bool) var_12))) : (arr_8 [i_0] [i_0] [i_2 + 3])))) > (((((/* implicit */_Bool) var_13)) ? (((unsigned int) (signed char)-116)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10)))))))));
                            var_22 = ((/* implicit */unsigned short) ((min((arr_9 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_0])) : (-1589134429)))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_3]))))))));
                            var_23 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) * ((~(4294967295U))))) >> (((((/* implicit */int) var_4)) - (80))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46034)) ? (1040187392U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))) ? (((/* implicit */int) ((signed char) arr_3 [i_1 - 1]))) : (((/* implicit */int) arr_3 [i_1 + 1]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) var_13);
                        arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 4] [i_1] [i_2 + 4] [i_2]);
                    }
                    var_26 ^= ((/* implicit */unsigned short) arr_4 [i_2]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) max(((unsigned short)46034), (((/* implicit */unsigned short) var_7))));
    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (signed char)-12)), ((short)-20852))))));
    /* LoopSeq 4 */
    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
    {
        arr_19 [i_6] [i_6] &= ((/* implicit */short) arr_2 [i_6]);
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_6 + 2]), (arr_2 [i_6 - 1])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) (unsigned short)46017)))));
        arr_20 [i_6 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) 1589134439)) ? (((/* implicit */int) ((unsigned char) arr_18 [i_6 + 1]))) : (((/* implicit */int) (unsigned short)3072))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_7 [i_7]))) ? (min((arr_9 [2LL]), (((/* implicit */long long int) var_2)))) : ((~(arr_9 [(unsigned char)14])))));
        arr_23 [i_7] = ((/* implicit */_Bool) var_5);
    }
    for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_30 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), ((unsigned short)46017)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) (signed char)12)))))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_31 [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-40)) == (((/* implicit */int) (_Bool)1))))) * ((+(((/* implicit */int) arr_15 [i_9] [i_9]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)6] [i_8]))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))) : (min((((/* implicit */unsigned int) arr_3 [i_8 - 1])), (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_28 [i_8 + 1])))));
                arr_34 [i_10] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (unsigned char)20)), (2604774939284469053LL))), (((/* implicit */long long int) (signed char)48))));
            }
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    arr_41 [i_11] [i_11] = ((/* implicit */unsigned int) arr_21 [i_12]);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)52847))));
                }
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_8 - 2] [i_8 + 1] [i_8 + 1])))))));
            }
        }
        for (long long int i_13 = 1; i_13 < 7; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_48 [(signed char)6] [(signed char)6] &= ((/* implicit */long long int) (unsigned short)65535);
                var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_7 [(unsigned char)14])), ((unsigned short)12688)));
                var_35 = ((/* implicit */short) ((((((/* implicit */int) ((_Bool) var_11))) << (((((((/* implicit */_Bool) 1589134429)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_8] [i_8])))) - (59645))))) | ((+(((((/* implicit */int) (short)4620)) << (((((/* implicit */int) arr_10 [i_8] [i_13 + 1] [3LL] [i_8] [i_8] [i_13 + 1])) + (20967)))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
            {
                var_36 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_13 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 1] [i_13 + 2])))));
                arr_52 [i_13] = arr_4 [i_8];
            }
            for (int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
            {
                var_37 += ((/* implicit */unsigned short) min((((/* implicit */short) min((((/* implicit */unsigned char) arr_4 [i_8 - 1])), (var_6)))), (arr_50 [6U])));
                arr_56 [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_53 [i_8] [i_13] [i_16])), (max(((+(var_15))), (((/* implicit */unsigned int) arr_14 [i_8 - 1] [i_13] [i_13 + 4]))))));
            }
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_55 [(signed char)2] [i_8 + 1] [i_13 - 1]), (((/* implicit */long long int) var_1))))))))));
            arr_57 [i_13] = ((/* implicit */unsigned short) arr_45 [i_8 + 1] [i_13 + 2]);
        }
        /* LoopNest 3 */
        for (signed char i_17 = 4; i_17 < 9; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    {
                        arr_66 [i_17] = ((/* implicit */_Bool) var_8);
                        arr_67 [i_8] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_6))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_20 = 2; i_20 < 9; i_20 += 2) 
        {
            for (signed char i_21 = 1; i_21 < 8; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) ((unsigned short) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_63 [i_8 - 1] [i_8 + 1])))));
                        arr_78 [i_21] = ((/* implicit */unsigned char) var_9);
                        var_40 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) & (4122016191U)))) ? (((((((/* implicit */int) arr_77 [i_8] [i_20] [i_21] [(unsigned short)8] [i_20])) == (((/* implicit */int) var_7)))) ? (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8 + 1] [i_20 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_3), (((/* implicit */signed char) arr_53 [i_22] [i_21] [i_8 - 2])))), (var_1)))))));
                        var_41 = var_15;
                        arr_79 [i_8] [i_21] [i_21] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_71 [i_21])), (arr_32 [i_8 - 2])))) > (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) % (256919073U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (arr_40 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8] [i_8]))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 4) 
    {
        var_42 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_23] [i_23])) || (((/* implicit */_Bool) ((unsigned char) var_15)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_23] [i_23])))))));
        var_43 *= ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (var_3)));
        arr_82 [i_23] = ((/* implicit */long long int) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) (_Bool)1))))));
    }
}
