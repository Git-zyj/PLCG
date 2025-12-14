/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169105
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_3)))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_15))))), (max((((/* implicit */unsigned int) arr_2 [i_0])), (var_13))))))))));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) > (((/* implicit */int) (_Bool)1)))))));
        var_21 ^= ((/* implicit */long long int) min((var_10), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))) == (max((var_14), (((/* implicit */long long int) (_Bool)1)))))))));
        var_22 += ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_17))))));
        var_23 ^= ((/* implicit */signed char) (~(((((((/* implicit */int) (short)32301)) * (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) arr_3 [i_1 - 2] [i_1])) * (((/* implicit */int) (unsigned char)0))))))));
    }
    for (signed char i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
    {
        arr_9 [8ULL] &= ((/* implicit */signed char) ((min((max((((/* implicit */long long int) arr_4 [18ULL])), (var_4))), (((/* implicit */long long int) min((2734375709U), (((/* implicit */unsigned int) var_15))))))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)21)))))));
        var_24 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_4 [(short)16]), ((_Bool)1))))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [(unsigned char)4] [i_2])) + (2147483647))) << (((var_4) - (1805695340604974537LL))))))))))))));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_3]), (((/* implicit */unsigned int) (unsigned char)232))))) ? (((((/* implicit */_Bool) (unsigned char)223)) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : ((-(arr_7 [i_3]))))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 2757876175U)), (var_4)))) ? (((/* implicit */int) max((var_5), ((unsigned char)223)))) : (((/* implicit */int) var_7)))) == (((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10747)))))))));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+((-(((/* implicit */int) var_7)))))))));
            var_29 ^= ((/* implicit */unsigned char) (!(((_Bool) (unsigned char)254))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 3; i_5 < 16; i_5 += 2) 
            {
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((/* implicit */int) min((var_12), (arr_16 [i_3] [i_4 - 1])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((1959953053) - (((/* implicit */int) (unsigned char)23)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 16890659201803719587ULL))))))))));
                    var_32 -= ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) arr_3 [i_4 - 2] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_4 - 2] [i_5]))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_33 ^= ((/* implicit */unsigned short) ((int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_6)) >> (((/* implicit */int) (unsigned char)23)))))));
                    var_34 ^= ((/* implicit */long long int) var_13);
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_16 [i_3] [i_5]))));
                    var_36 ^= ((/* implicit */long long int) var_7);
                }
                var_37 += ((/* implicit */signed char) ((((long long int) var_15)) | (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                var_38 += ((/* implicit */unsigned int) var_15);
                var_39 -= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_4 [i_3])) & (((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned char)232)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) max((var_6), ((_Bool)1)))) : ((+(((/* implicit */int) (short)-17432))))))));
                var_40 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_24 [i_3] [i_3] [i_3] [i_3]) ? (arr_14 [i_4] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) | (var_3))), (((arr_14 [i_4 - 1] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_17)))) & ((~((-(((/* implicit */int) (_Bool)1)))))))))));
            }
            for (unsigned int i_9 = 4; i_9 < 17; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (short i_11 = 2; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_34 [i_3] [i_4] [i_4 - 2] [i_4] [i_3] &= ((/* implicit */signed char) var_5);
                            var_42 *= ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))))), (arr_6 [i_3])));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) min((((/* implicit */int) max((arr_32 [i_3] [i_4 + 1] [i_4 - 2]), (((/* implicit */short) var_12))))), (((((/* implicit */int) var_8)) << (((0ULL) & (((/* implicit */unsigned long long int) var_4)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_44 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_28 [i_4 - 2] [i_9 - 3] [(unsigned short)12] [i_9 - 4]))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)223))))) & (var_3))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (((var_14) & (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) max((((max((((/* implicit */long long int) var_11)), (8722238412148727858LL))) & (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_10))))))))))));
                    var_46 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_4 - 1] [i_9 - 3] [i_9] [i_12])) ^ (((/* implicit */int) arr_24 [i_4 + 1] [i_9 + 1] [i_9] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_9 - 4])) ? (((/* implicit */long long int) var_13)) : (var_14)))) : ((+(var_3)))));
                    var_47 = ((/* implicit */int) max((var_47), (min((((int) var_10)), ((-(((/* implicit */int) (unsigned char)110))))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_48 += ((/* implicit */signed char) min(((unsigned char)96), (((/* implicit */unsigned char) (_Bool)1))));
                    arr_40 [i_3] [i_4] [i_4] [i_4 - 1] &= ((/* implicit */short) ((signed char) ((signed char) (+(((/* implicit */int) var_9))))));
                    var_49 += ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (arr_22 [i_9 + 1]))), (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) var_13)) : (var_4)))));
                    var_50 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((int) var_2))))), ((~(var_13)))));
                }
                for (unsigned short i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                    {
                        var_51 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min(((unsigned char)235), ((unsigned char)147))), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_17 [i_9 - 2] [i_14 - 1])) & (((/* implicit */int) arr_29 [i_9 - 3] [i_9 - 2] [i_9 - 4]))))));
                        var_52 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)33))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (var_10))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])) : (var_16))))), (min((9571153104290281510ULL), (((/* implicit */unsigned long long int) (unsigned char)15))))));
                        var_53 |= ((_Bool) ((((/* implicit */int) (short)10747)) == (((/* implicit */int) arr_33 [i_4 - 1] [i_9 - 4] [i_14 + 1] [(unsigned char)16] [i_14]))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                    {
                        var_54 += ((/* implicit */signed char) min(((~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)24)))))), (max((((/* implicit */int) var_11)), (var_1)))));
                        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((((((unsigned int) (unsigned char)171)) << (((max((((/* implicit */unsigned int) (unsigned short)38012)), (var_13))) - (3966453458U))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)247)), ((short)-15074))))))))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_56 += ((/* implicit */short) ((((unsigned long long int) max(((unsigned char)254), (var_11)))) <= (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3])) / (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)252)))))));
                        var_57 ^= ((/* implicit */long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 197231589))))))) < (min((((/* implicit */int) (signed char)-32)), (arr_19 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1])))));
                    }
                    var_58 ^= ((/* implicit */long long int) min((197231589), (((/* implicit */int) (unsigned char)10))));
                    var_59 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)249)) << (((((/* implicit */int) (unsigned char)250)) - (236))))))) : ((-(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_12)))))))));
                }
                for (unsigned int i_18 = 1; i_18 < 15; i_18 += 2) 
                {
                    arr_56 [i_3] [i_4] [4U] |= ((/* implicit */long long int) max((var_0), (((/* implicit */short) var_12))));
                    var_60 *= ((/* implicit */_Bool) min((((unsigned long long int) arr_5 [i_3] [i_18 + 1])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_3] [i_18 + 3])))))));
                }
            }
        }
        /* vectorizable */
        for (signed char i_19 = 3; i_19 < 16; i_19 += 2) 
        {
            var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) (signed char)-7))));
            var_62 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) & (((/* implicit */int) var_5)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_63 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14)));
            var_64 = ((/* implicit */unsigned char) max((var_64), (((/* implicit */unsigned char) ((long long int) ((short) var_6))))));
            /* LoopSeq 2 */
            for (unsigned char i_20 = 1; i_20 < 16; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    for (signed char i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        {
                            var_65 ^= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)123))));
                            var_66 = ((/* implicit */unsigned char) max((var_66), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_59 [i_3] [i_3] [0]))))) ? (((/* implicit */long long int) arr_23 [i_3] [i_3] [6LL] [(short)5] [i_3] [i_3])) : (var_4))))));
                            var_67 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                            arr_67 [i_3] [i_3] [i_20] [i_20] [(short)16] |= ((/* implicit */signed char) (((-(((/* implicit */int) var_11)))) & (((/* implicit */int) ((unsigned char) var_15)))));
                        }
                    } 
                } 
                var_68 = ((/* implicit */unsigned long long int) min((var_68), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_65 [i_3] [i_3] [i_19] [i_19] [i_19] [i_20])) : (((/* implicit */int) var_2))))) / (arr_38 [(unsigned short)1] [i_3] [i_19 + 2] [i_19] [i_20 + 2]))))));
            }
            for (int i_23 = 0; i_23 < 18; i_23 += 2) 
            {
                arr_71 [i_23] [i_23] [i_23] &= ((/* implicit */unsigned long long int) ((_Bool) ((short) (unsigned char)3)));
                var_69 = ((/* implicit */unsigned short) min((var_69), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)252)) - (242))))))));
                var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_3])))));
            }
        }
        var_71 = ((/* implicit */unsigned char) max((var_71), (min((((unsigned char) var_9)), (max((var_7), (arr_51 [i_3] [i_3] [7] [i_3] [i_3])))))));
    }
    var_72 += ((((var_3) / (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)56965), (((/* implicit */unsigned short) var_6)))))));
}
