/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168696
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
    var_16 = ((/* implicit */int) var_7);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11211)))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_1 [i_0])))))))) + (min((var_15), (((/* implicit */unsigned int) min((((/* implicit */short) var_13)), ((short)11211))))))));
            var_18 = ((/* implicit */signed char) 1064893248145492258ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_8 [(signed char)12] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) * (((((/* implicit */_Bool) (short)-11212)) ? (((/* implicit */long long int) var_9)) : (arr_0 [i_2] [i_0])))));
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [8LL])) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_19 -= ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((int) 3420191312U)) : ((+(var_8))))))));
            var_20 ^= ((/* implicit */short) ((max((((((/* implicit */_Bool) 1006632960U)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [6ULL] [i_0]))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)246)))))) * (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_3])) : (((/* implicit */int) (unsigned char)9)))), (((/* implicit */int) ((((/* implicit */_Bool) -6177265788007078717LL)) || (((/* implicit */_Bool) 2147483647))))))))));
            arr_13 [(short)6] [(short)6] |= ((/* implicit */_Bool) 4587274708265911049LL);
        }
        var_21 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 1) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) + (((/* implicit */int) arr_14 [i_0] [i_4] [i_4 - 2]))));
            var_22 = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_23 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)27451)))) << (((((/* implicit */int) (short)32767)) - (32755)))));
            var_24 = ((/* implicit */unsigned long long int) (-(min((((arr_0 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))), (((/* implicit */long long int) 1354043544U))))));
            var_25 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min(((unsigned short)27453), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
            var_26 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)247))));
        }
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) var_11);
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) * (((/* implicit */int) min((((/* implicit */short) arr_2 [i_6 + 3] [i_6])), ((short)-21402)))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_0] [i_7])) == (-4835881400008601534LL))))))) ? (((/* implicit */int) max(((short)-11212), (((/* implicit */short) (signed char)-24))))) : ((-(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_11 [i_6])))))))));
                        var_30 = ((/* implicit */short) var_0);
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((1541261477) ^ (((/* implicit */int) var_6)))))));
            arr_31 [10] [i_0] [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_0])))) / (arr_23 [i_0])));
            var_32 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
        }
    }
    for (unsigned int i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_10])))) << ((((~(((/* implicit */int) arr_34 [(signed char)14])))) - (90)))))) ? ((~(((/* implicit */int) var_14)))) : (183372291)));
        var_33 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_34 [i_10 - 1])))), (arr_33 [(_Bool)1] [i_10])));
        var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) -1541261479))))), (max(((-(((/* implicit */int) var_0)))), ((-(((/* implicit */int) (_Bool)1))))))));
        arr_36 [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) != (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483647)) || (((/* implicit */_Bool) 1541261462))))), ((-(874775983U)))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 3; i_12 < 14; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 15; i_14 += 4) 
                    {
                        for (signed char i_15 = 4; i_15 < 14; i_15 += 2) 
                        {
                            {
                                arr_50 [(signed char)10] [i_12] [(signed char)10] [i_13] [i_12] [i_12 + 1] = (i_13 % 2 == 0) ? (((/* implicit */short) ((((((-1541261462) - (arr_48 [i_11] [i_15] [i_11] [i_14] [i_13] [i_13]))) + (2147483647))) << (((((((/* implicit */int) arr_27 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_14 + 1])) + (42))) - (28)))))) : (((/* implicit */short) ((((((((-1541261462) + (arr_48 [i_11] [i_15] [i_11] [i_14] [i_13] [i_13]))) - (2147483647))) + (2147483647))) << (((((((/* implicit */int) arr_27 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_14 + 1])) + (42))) - (28))))));
                                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) arr_46 [i_15] [i_12]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)2719)) ? (-183372292) : (-658757130))));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                {
                    var_38 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_44 [i_11]))));
                    var_39 = ((/* implicit */unsigned long long int) (signed char)-35);
                    arr_57 [9U] [9U] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_1)))) | (((/* implicit */int) arr_2 [i_11] [i_16 + 1]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            for (short i_19 = 1; i_19 < 15; i_19 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        arr_66 [i_20] [i_20] = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                        arr_67 [(short)4] [i_20] [(short)4] [(short)4] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))));
                        arr_68 [i_11] [i_11] [i_20] [(short)14] [i_11] [i_11] = ((/* implicit */unsigned int) ((183372291) ^ (((int) (_Bool)1))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_11] [i_20] [i_19] [i_19] [i_20])) <= (var_9)));
                    }
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        arr_71 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_19 + 1]))) : (arr_0 [i_11] [i_11])));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) ^ (arr_30 [i_11])));
                        var_42 = arr_2 [i_11] [i_11];
                        var_43 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2719))) >= (((((/* implicit */_Bool) (signed char)-22)) ? (arr_15 [i_11] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_11] [i_11]))))));
                    }
                    for (short i_22 = 1; i_22 < 14; i_22 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_22 + 2])) ? (((/* implicit */unsigned long long int) arr_49 [i_22 + 2] [i_22 - 1] [i_22 + 1] [i_22 + 2] [i_22 - 1] [i_22 - 1])) : (15722824467590363137ULL)));
                        arr_74 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_22] [i_22 + 2] [i_22 + 1] [i_22 - 1])) < (((((/* implicit */_Bool) arr_65 [i_11] [i_11] [i_11] [7])) ? (((/* implicit */int) var_2)) : (var_9)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 1) /* same iter space */
                        {
                            arr_77 [i_22] [1ULL] [i_22] [i_22] [i_23] [i_18] [i_18] = ((/* implicit */int) var_5);
                            var_45 |= ((/* implicit */unsigned long long int) (unsigned short)10566);
                        }
                        for (unsigned int i_24 = 0; i_24 < 16; i_24 += 1) /* same iter space */
                        {
                            var_46 = (((-2147483647 - 1)) % (arr_52 [i_11] [i_19 + 1] [i_11]));
                            var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_73 [i_22] [1LL] [i_18] [i_22]))));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 2) 
                        {
                            arr_82 [i_11] [i_18] [i_19] [i_19] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_19] [i_19 + 1] [i_22])) ? (((((/* implicit */int) (signed char)44)) % (((/* implicit */int) (unsigned short)7519)))) : (((/* implicit */int) arr_38 [i_11]))));
                            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
                        }
                    }
                    var_49 = ((/* implicit */unsigned short) arr_42 [i_19 + 1]);
                }
            } 
        } 
        arr_83 [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (arr_39 [i_11])));
    }
    for (unsigned int i_26 = 0; i_26 < 13; i_26 += 4) 
    {
        arr_86 [i_26] = ((/* implicit */unsigned int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_12))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_75 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        /* LoopNest 3 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (signed char i_28 = 3; i_28 < 10; i_28 += 4) 
            {
                for (short i_29 = 0; i_29 < 13; i_29 += 2) 
                {
                    {
                        arr_95 [i_26] [i_28] [i_26] [i_26] = ((/* implicit */unsigned short) min((var_14), (((/* implicit */short) arr_64 [i_29] [i_28] [(signed char)1] [i_26]))));
                        var_50 = ((/* implicit */unsigned long long int) min((var_50), ((-((-(arr_15 [i_28 - 3] [i_27])))))));
                        var_51 = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_7)))) != (224907378))))));
                    }
                } 
            } 
        } 
        var_52 -= ((/* implicit */unsigned long long int) (signed char)-28);
    }
}
