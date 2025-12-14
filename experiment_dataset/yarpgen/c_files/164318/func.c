/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164318
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) >> (((6065572185105042586ULL) - (6065572185105042574ULL)))))) ? ((~(10685562306814271392ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (var_1))))))) : (var_1)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) (short)30112);
            var_14 *= ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */unsigned long long int) var_10)) - (6065572185105042563ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_10 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(16242877393514818164ULL)))) ? (max((arr_6 [i_0] [21U] [21U]), (var_3))) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))) : (var_3)))));
                arr_11 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((unsigned int) arr_6 [i_0] [i_2] [i_3]));
                arr_12 [i_0] [(signed char)1] [i_3] = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) (short)27180))));
            }
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                arr_15 [i_0] = ((/* implicit */unsigned int) (unsigned short)5);
                var_15 -= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)-7983)))), (((/* implicit */int) (short)27180))));
                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((min((var_7), (((/* implicit */long long int) arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 2])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(var_4))))))));
            }
            arr_17 [i_0] = ((/* implicit */int) (((-((-(var_11))))) ^ (max((2486086908U), (((/* implicit */unsigned int) (unsigned char)0))))));
            var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned short) arr_9 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_3 [i_0] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) (short)-30129)) / (((/* implicit */int) ((short) var_0))))))));
            var_17 = ((/* implicit */unsigned int) var_4);
            /* LoopNest 2 */
            for (unsigned int i_5 = 4; i_5 < 22; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_22 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), ((~(var_11)))));
                        var_18 ^= ((/* implicit */short) (-(((/* implicit */int) (((-(((/* implicit */int) var_2)))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)65507)) > (((/* implicit */int) var_12))))))))));
                    }
                } 
            } 
        }
        var_19 |= ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) -9223372036854775803LL))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (unsigned short)65535))));
            /* LoopNest 2 */
            for (signed char i_8 = 3; i_8 < 23; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    {
                        arr_31 [(signed char)4] [(_Bool)1] [(_Bool)1] [0LL] = ((/* implicit */unsigned long long int) ((int) (unsigned short)65521));
                        arr_32 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15)))))) < ((~(var_4))))))) : (var_3)));
                        arr_33 [i_9] [i_8 - 2] [i_7] [i_0] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (short)-6945)), (2ULL)))));
                    }
                } 
            } 
            arr_34 [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 177007274)) ? (6065572185105042586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((short) var_0))), (arr_7 [i_0] [i_0] [13U]))))) : (((((/* implicit */_Bool) arr_9 [i_7])) ? (arr_9 [i_7]) : (var_10)))));
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_11 = 2; i_11 < 23; i_11 += 4) 
            {
                var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_8)))))) ? (((long long int) (!(((/* implicit */_Bool) arr_4 [(signed char)6]))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 3070618873905071995ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                var_23 = ((/* implicit */_Bool) (((!(arr_0 [i_0] [i_11]))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34510)))))));
                var_24 -= ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        {
                            arr_45 [i_10] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(var_7))))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_21 [i_10] [i_10] [(unsigned short)16])), (var_8))))))), (((((/* implicit */unsigned long long int) var_4)) / (6065572185105042575ULL))))))));
                            arr_46 [i_0] [i_0] [i_11 + 1] |= ((/* implicit */short) (signed char)51);
                        }
                    } 
                } 
                arr_47 [(unsigned char)23] [i_10] [i_11] [15LL] = ((/* implicit */signed char) 2203866680194733427ULL);
            }
            for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                arr_50 [i_14] [i_14] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (unsigned short)49830)))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((7279671803747912053ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34502)))))));
                /* LoopNest 2 */
                for (signed char i_15 = 3; i_15 < 23; i_15 += 1) 
                {
                    for (long long int i_16 = 2; i_16 < 22; i_16 += 1) 
                    {
                        {
                            arr_56 [i_15] = ((/* implicit */long long int) max((((((/* implicit */int) var_8)) - (((/* implicit */int) var_8)))), (((/* implicit */int) ((_Bool) 351844209U)))));
                            arr_57 [i_15] = ((/* implicit */unsigned int) (+(max((((unsigned long long int) (unsigned short)35276)), (((/* implicit */unsigned long long int) ((short) (signed char)101)))))));
                            arr_58 [i_0] [i_10] [i_14] [i_15] [i_10] |= (!(((((/* implicit */int) arr_26 [i_0] [i_10] [i_10] [i_15])) > (((/* implicit */int) arr_48 [i_15 - 1] [i_15 - 3] [i_15 + 1] [i_15 - 1])))));
                        }
                    } 
                } 
                arr_59 [i_0] |= (~(((/* implicit */int) (!(((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
            }
            for (signed char i_17 = 2; i_17 < 22; i_17 += 1) 
            {
                arr_62 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((1ULL), (((/* implicit */unsigned long long int) (unsigned short)14))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_17 - 2] [i_10])) ? (((/* implicit */int) arr_35 [i_0] [i_17 - 2] [i_0])) : (((/* implicit */int) arr_35 [i_17 - 2] [i_17 - 2] [i_10])))))));
                arr_63 [i_10] [i_10] = ((/* implicit */unsigned short) (-(((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)31036)) - (31012))))) - (((/* implicit */int) arr_44 [i_0] [i_10] [17ULL] [i_0] [i_17]))))));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    for (long long int i_19 = 4; i_19 < 22; i_19 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((unsigned int) 5999635327929686285LL));
                            arr_69 [i_0] [i_0] [6ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) arr_14 [(unsigned short)6] [(unsigned short)6] [i_18] [i_19]))) : (((/* implicit */int) arr_44 [i_0] [i_0] [i_17] [8LL] [i_19])))));
                        }
                    } 
                } 
                arr_70 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((unsigned long long int) arr_65 [i_0] [i_10] [(unsigned char)4] [i_0]))));
                arr_71 [i_10] [i_17] |= ((/* implicit */unsigned char) ((long long int) (+(((((/* implicit */_Bool) arr_27 [i_0])) ? (1221909753U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7802))))))));
            }
            arr_72 [i_10] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
            /* LoopNest 3 */
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    for (long long int i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        {
                            arr_81 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_10));
                            arr_82 [i_0] [i_10] [i_20] [(unsigned char)9] [i_21] [i_21] [i_22] = ((/* implicit */unsigned int) min(((~(arr_49 [i_0] [i_10] [i_20]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_42 [i_0])))))));
                            var_28 += ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((short) var_2))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
            /* LoopNest 3 */
            for (unsigned short i_24 = 3; i_24 < 22; i_24 += 3) 
            {
                for (signed char i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_93 [(unsigned short)11] [i_23] [i_23] [i_24 - 3] [i_25] [20ULL] [i_26] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_24] [i_24 + 2]))) | (1342720460U)));
                            var_30 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
            } 
            arr_94 [i_23] [i_23] [i_23] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned short i_27 = 0; i_27 < 24; i_27 += 1) 
            {
                for (unsigned short i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    for (signed char i_29 = 3; i_29 < 22; i_29 += 1) 
                    {
                        {
                            arr_103 [i_0] [i_29] [i_0] [i_27] [i_28] [i_29 - 2] = (!(((/* implicit */_Bool) var_12)));
                            arr_104 [i_0] [i_0] [i_29] [i_27] [i_28] [18ULL] [i_29] = ((/* implicit */short) ((((/* implicit */int) arr_54 [i_29 + 2] [i_29] [i_29] [i_29] [i_29] [i_29])) > ((+(var_1)))));
                            arr_105 [i_0] [i_23] [i_27] [i_29] [(signed char)6] [i_29] = ((/* implicit */signed char) (~(((/* implicit */int) arr_90 [i_29 - 3] [i_29 + 1] [i_29 - 1] [i_29] [(_Bool)1] [i_0]))));
                            arr_106 [i_27] [i_29] = ((/* implicit */short) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_10) - (1134179645U)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_30 = 1; i_30 < 14; i_30 += 4) 
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_74 [i_30 - 1] [i_30 - 1] [i_30] [i_30]))));
        arr_109 [i_30] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-23964)), (15376125199804479628ULL)))))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_75 [i_30 - 1] [i_30 + 1] [i_30 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_43 [i_30] [i_30 - 1] [i_30] [i_30 + 1] [i_30])) ? (16244952154268942944ULL) : (var_3))))) : (((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_30 + 1] [i_30 - 1] [i_30 - 1] [i_30 - 1]))))))));
        arr_110 [i_30] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned char) 1390363153552102829LL))) ? (7265562132469422678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))))));
        /* LoopNest 2 */
        for (long long int i_31 = 0; i_31 < 15; i_31 += 1) 
        {
            for (unsigned int i_32 = 2; i_32 < 13; i_32 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49830))) : (18446744073709551594ULL))))));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)24))))))));
                }
            } 
        } 
    }
    var_34 ^= ((/* implicit */short) (+(((/* implicit */int) var_8))));
}
