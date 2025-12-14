/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128647
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_2 [i_0])) >= (((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned short)17371)))))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_6))));
        var_14 = ((/* implicit */_Bool) var_1);
        var_15 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_3 [i_0]) + (2147483647))) >> (((arr_1 [i_0]) - (4034614084U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) (unsigned short)48150)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)48171))))) : (3119068882692742340LL)))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_3 [i_0]) + (2147483647))) >> (((((arr_1 [i_0]) - (4034614084U))) - (1247878116U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) (unsigned short)48150)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)48171))))) : (3119068882692742340LL))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_16 = var_2;
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) arr_6 [i_2] [i_3]))))) : (((((/* implicit */int) arr_4 [i_2] [i_3 + 3])) * (((/* implicit */int) arr_6 [i_1] [i_2])))))))));
                        arr_13 [i_4] [i_3 - 1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_4])) << ((((((-(((/* implicit */int) arr_4 [i_1] [i_3 + 3])))) + (5265))) - (23)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 3; i_6 < 9; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((18446744073709551594ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35088)))))) + ((~(((/* implicit */int) arr_18 [i_1] [0LL] [i_7]))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_6 - 3] [i_6 - 1] [i_6 + 2])) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_6] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)27737)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (1557138938711743644LL)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((arr_12 [i_1] [i_5] [i_5] [i_5] [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1]))))))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((int) arr_17 [i_1] [i_5] [i_1] [i_1])))));
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_0)))));
        }
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) var_10)))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_9])) / ((-2147483647 - 1))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) arr_31 [i_9]);
                            var_26 = ((/* implicit */unsigned char) ((arr_20 [i_10 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_10 - 1] [i_9] [i_8] [i_1])))));
                        }
                        for (short i_12 = 1; i_12 < 10; i_12 += 3) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_8] [i_9] [i_10] [i_12]))));
                            var_28 = ((/* implicit */unsigned long long int) (unsigned char)156);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_17 [i_1] [i_8] [i_9] [i_10]))))))));
                            var_30 = (i_9 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_9] [i_12] [i_12 - 1] [(short)3] [i_10 - 1] [i_9])) + (2147483647))) >> (((((/* implicit */int) var_10)) - (14744)))))) : (((/* implicit */_Bool) ((((((((/* implicit */int) arr_21 [i_9] [i_12] [i_12 - 1] [(short)3] [i_10 - 1] [i_9])) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) var_10)) - (14744))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6894))) * (arr_33 [i_12] [i_8] [i_8] [i_8] [i_1])))) ? (((-9223372036854775794LL) / (((/* implicit */long long int) 596132610U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1594317905U)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_7)))))))));
                        }
                        arr_34 [(unsigned char)10] [i_8] [i_1] [i_9] = ((/* implicit */signed char) (_Bool)1);
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1129145657)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))));
                    }
                } 
            } 
            arr_35 [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_8)))) != (((/* implicit */int) (_Bool)0))));
            arr_36 [i_1] = ((/* implicit */unsigned short) arr_1 [i_8]);
        }
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_43 [i_1] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)253))));
                    var_33 = ((/* implicit */unsigned short) arr_25 [i_13]);
                }
                for (long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    arr_47 [i_1] [i_16] [i_1] = (!(((/* implicit */_Bool) var_11)));
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_2))))))))));
                }
                for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1] [i_13] [i_14]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (0LL)))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (1073737728U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (((unsigned int) -3684974880466635292LL))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) ((581812632) >= (2082959855))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_13] [(unsigned short)8] [i_17] [(short)7])) ? (-9223372036854775789LL) : (arr_32 [i_14])))) ? (arr_48 [i_1] [i_1] [i_1] [i_17]) : (((int) var_9))));
                    }
                }
                var_40 = ((((/* implicit */_Bool) arr_17 [i_1] [i_14] [i_14] [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)));
                var_41 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (4545339081648964872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [(_Bool)1] [i_14] [i_14]))) == (18446744073709551596ULL)));
            }
            arr_56 [i_1] [i_1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3912)) % (((/* implicit */int) (unsigned short)30421))));
            var_43 = ((/* implicit */unsigned char) (((((_Bool)1) ? (1976771390) : (((/* implicit */int) (signed char)13)))) >> (((((((/* implicit */int) var_7)) * (((/* implicit */int) var_8)))) - (29433)))));
        }
        arr_57 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)17371));
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32707)) >= (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
    {
        arr_61 [i_20] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) arr_16 [i_20] [(_Bool)1] [i_20]))))));
        arr_62 [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_20])) != (((/* implicit */int) arr_15 [i_20])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-8596843576822115303LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) arr_58 [i_20])) : ((+(((/* implicit */int) (unsigned short)343)))))))));
        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) var_5))) ? ((-(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (unsigned short)20707)))))) + (((/* implicit */int) arr_0 [i_20])))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_65 [(unsigned char)2] [i_21] = ((/* implicit */signed char) ((3679985011179020145LL) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) (unsigned short)65527)))))));
        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((2536284106511514221LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) >= (var_9))))))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_47 *= ((/* implicit */short) (~(var_3)));
    }
    var_48 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_22 = 4; i_22 < 21; i_22 += 3) 
    {
        for (long long int i_23 = 1; i_23 < 20; i_23 += 2) 
        {
            {
                arr_72 [i_23 + 2] [i_23] = ((/* implicit */unsigned long long int) ((short) ((long long int) arr_69 [i_22 - 2] [i_23])));
                var_49 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
}
