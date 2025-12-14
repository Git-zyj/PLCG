/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13974
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
    var_12 = var_6;
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~((~(var_6)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_4);
        var_13 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_14 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((unsigned long long int) min(((unsigned short)20485), (((/* implicit */unsigned short) (signed char)-49)))))));
        var_15 = ((/* implicit */signed char) min((var_15), ((signed char)48)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (max((((/* implicit */unsigned long long int) (signed char)33)), (var_6))))), ((!(((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))))));
    }
    for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_16 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_9 [i_2])))) : (((((/* implicit */int) (short)-3532)) ^ (((/* implicit */int) var_1))))))));
            var_17 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) == (((/* implicit */int) (short)32756))))) + (((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) arr_9 [i_2 - 2]))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 6; i_4 += 3) 
        {
            var_18 *= ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_2] [i_2]))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_6] [i_4] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_11));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            arr_25 [i_2 + 1] [i_7] [i_5] |= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_13 [i_2] [i_7] [i_7])))) * ((~(((/* implicit */int) var_7))))));
                            arr_26 [i_2] [i_2] [i_5] [i_4] [i_6] [i_7] = ((16760832ULL) >> (((((/* implicit */int) (unsigned short)58113)) - (58094))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) (signed char)97);
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_4 + 2] [i_4 - 2] [i_2 + 1]))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((65535ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))))) >> (((((((/* implicit */int) var_10)) + (((/* implicit */int) var_7)))) + (4227)))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 3]))));
                            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_4] [i_4] [i_4 - 1] [i_6] [i_2 + 1]))));
                            arr_33 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 1])) || (((/* implicit */_Bool) arr_11 [i_2 + 1]))));
                            var_24 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_8))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_38 [i_4] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */short) (~(var_2)));
                            arr_39 [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_4))))));
                            arr_40 [i_2] [i_4] [i_5] [i_5] |= (signed char)36;
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) var_11);
                            arr_45 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_41 [i_2] [i_2 + 1] [i_2 - 2] [i_2] [i_2] [i_2])));
                            arr_46 [i_2] [i_2] [i_2] [i_6] [i_4] [i_2] = ((/* implicit */signed char) ((var_6) + (arr_22 [i_2] [i_4] [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_4 + 2])));
                            arr_47 [i_2] [i_2] [i_4] [i_6] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)25))))) / (((10054099172253568348ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) (~(arr_29 [i_2] [i_4 + 4] [i_2] [i_4] [i_4] [i_2 + 1] [i_4 + 3])));
        }
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            arr_50 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_2 - 2])) ^ (((/* implicit */int) var_3)))) <= (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_37 [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2]))))));
            arr_51 [i_2 - 1] [i_12] = ((/* implicit */short) (((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)30)), (var_7)))))) | (((((/* implicit */int) ((var_2) >= (var_2)))) | (((((((/* implicit */int) arr_8 [i_2])) + (2147483647))) << (((arr_41 [i_2] [i_12] [i_2] [i_2] [i_12] [i_12]) - (12319498292139599483ULL)))))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (signed char i_14 = 2; i_14 < 7; i_14 += 1) 
                {
                    {
                        arr_57 [i_13] [i_13] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min(((short)32765), (((/* implicit */short) (unsigned char)128))))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */int) var_5)) + (((/* implicit */int) var_1)))))));
                        arr_58 [i_2] [i_13] [i_13] [i_14] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_13] [i_14 + 1] [i_14 + 3] [i_12])) || (((/* implicit */_Bool) var_10))))), (min((arr_41 [i_2 - 2] [i_12] [i_13] [i_2 - 2] [i_14 + 2] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) arr_21 [i_12] [i_2] [i_2])) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) min(((short)0), (arr_54 [i_2] [i_12] [i_2] [i_2 + 1])))))))));
        }
        var_28 = ((/* implicit */unsigned short) (signed char)-40);
        arr_59 [i_2] [i_2 - 1] = ((/* implicit */unsigned short) min((max((arr_15 [i_2 - 1]), (var_6))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_2] [i_2 - 2] [i_2 + 1] [i_2])))))));
    }
    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        arr_64 [i_15] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_60 [i_15])), ((~(((((/* implicit */int) arr_0 [(signed char)4] [(signed char)4])) * (((/* implicit */int) arr_1 [i_15]))))))));
        arr_65 [i_15] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)254);
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)107)), (((((/* implicit */_Bool) arr_63 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (281474909601792ULL)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_60 [i_15])))))))))))));
    }
    var_30 = (~(min((((10054099172253568348ULL) << (((var_2) - (12259854564702689174ULL))))), (((/* implicit */unsigned long long int) var_4)))));
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        for (short i_17 = 2; i_17 < 8; i_17 += 4) 
        {
            {
                arr_71 [(short)4] [i_17 + 3] = ((/* implicit */unsigned short) var_7);
                var_31 = var_6;
                var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)-32754)))), (((((/* implicit */int) arr_5 [i_17] [i_17])) | (((/* implicit */int) var_3))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-23419)) && (((/* implicit */_Bool) (unsigned char)255)))))) * (1568077367376478917ULL)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) min((((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_0)))) ^ (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_0 [i_18] [i_18])))))), (((/* implicit */int) var_5))));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~((~((~(((/* implicit */int) var_0)))))))))));
        var_35 -= ((/* implicit */signed char) arr_74 [i_18]);
    }
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 2) 
    {
        arr_79 [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-32533)))) >= ((~(((/* implicit */int) var_1))))));
        var_36 = ((/* implicit */unsigned char) var_6);
    }
    for (short i_20 = 1; i_20 < 8; i_20 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_21 = 1; i_21 < 10; i_21 += 4) 
        {
            for (signed char i_22 = 2; i_22 < 10; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_9))) >= (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned char)110))))))))) > (arr_74 [i_20]))))));
                        arr_88 [i_23] [i_21 - 1] [i_22 - 1] [i_23] [i_21 + 1] [i_23] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_72 [i_20] [i_21 - 1]))))) << ((((~(((/* implicit */int) var_1)))) + (47))))));
                        var_38 -= ((/* implicit */short) (~(((((((/* implicit */_Bool) (unsigned short)4261)) || (((/* implicit */_Bool) var_9)))) ? (((var_2) >> (((((/* implicit */int) arr_5 [i_20] [i_22])) - (36361))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_24 = 1; i_24 < 8; i_24 += 4) /* same iter space */
                        {
                            arr_91 [i_23] [i_21] [i_22] [i_22] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)115))))));
                            arr_92 [i_20] [i_23] [i_23] [i_23] [i_21 - 1] [i_20] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        }
                        for (unsigned char i_25 = 1; i_25 < 8; i_25 += 4) /* same iter space */
                        {
                            arr_95 [i_23] [i_22 - 2] = ((/* implicit */unsigned char) (short)-28648);
                            arr_96 [i_20] [i_21] [i_22] [i_20] [i_23] [i_20] [i_20] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) >= (var_6))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_2))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_22] [i_22])))))));
                            arr_97 [i_20 + 2] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                        }
                        var_39 += ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) & (max((var_6), (((/* implicit */unsigned long long int) var_10)))))), (((min((((/* implicit */unsigned long long int) var_7)), (var_2))) >> (((var_6) - (1628626807718550269ULL)))))));
                    }
                } 
            } 
        } 
        arr_98 [i_20] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((unsigned short) var_1))))), (((/* implicit */int) var_10))));
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)53))))), (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)176)) >= (((/* implicit */int) var_3))))) : ((~(((/* implicit */int) var_8))))));
        /* LoopSeq 2 */
        for (unsigned char i_26 = 0; i_26 < 11; i_26 += 1) 
        {
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (((~(((/* implicit */int) var_4)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_101 [i_26] [i_20 + 1])) : (((/* implicit */int) var_8)))))))));
            arr_103 [i_20 - 1] [i_26] = ((/* implicit */unsigned long long int) arr_87 [i_20] [2ULL]);
        }
        /* vectorizable */
        for (short i_27 = 0; i_27 < 11; i_27 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 1) 
            {
                var_42 = ((/* implicit */unsigned short) (~(var_11)));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_94 [(unsigned char)9] [i_28] [i_20 - 1] [i_28] [i_20])) + (((/* implicit */int) var_3))));
                var_44 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)48)) % (((/* implicit */int) (unsigned short)48))));
            }
            for (unsigned short i_29 = 3; i_29 < 10; i_29 += 1) 
            {
                var_45 += ((arr_107 [i_20] [i_27] [i_27] [i_29 + 1]) + (arr_107 [i_20] [i_27] [i_29] [i_29 - 2]));
                /* LoopNest 2 */
                for (unsigned short i_30 = 0; i_30 < 11; i_30 += 4) 
                {
                    for (unsigned char i_31 = 2; i_31 < 8; i_31 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32765)) > ((~(((/* implicit */int) (unsigned short)65486))))));
                            arr_116 [i_20 + 3] [i_29] [i_20 + 3] [i_20 + 3] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_1)))) | (((/* implicit */int) arr_83 [i_29 - 3] [i_29] [i_29 + 1]))));
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_20])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_113 [i_20] [i_27] [i_27] [i_30] [i_29 + 1]))))))))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46269))));
                var_49 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6)))));
                var_50 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)124))));
            }
            var_51 *= ((/* implicit */unsigned char) var_9);
            arr_117 [i_20] [i_27] [i_20] = ((/* implicit */unsigned short) ((arr_112 [i_20] [i_27] [i_27] [i_27]) ^ (arr_112 [i_20 + 1] [i_27] [i_20 + 1] [i_27])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_32 = 3; i_32 < 9; i_32 += 2) 
        {
            arr_120 [i_20] [i_20] [i_32] = ((/* implicit */unsigned char) ((short) arr_109 [(signed char)4] [i_32] [i_32]));
            var_52 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)3)), ((unsigned short)59324)))) == (((/* implicit */int) (unsigned short)61276))))), (((min((var_6), (((/* implicit */unsigned long long int) var_8)))) << (((/* implicit */int) arr_82 [i_20 + 3] [i_32])))));
        }
    }
}
