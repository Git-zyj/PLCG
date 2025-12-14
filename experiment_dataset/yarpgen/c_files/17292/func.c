/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17292
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)12058))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) * ((~(((/* implicit */int) max((var_9), (var_9))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_7)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) arr_1 [i_2]);
        var_13 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))))))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 2; i_4 < 14; i_4 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                var_14 = ((/* implicit */long long int) var_0);
                arr_17 [i_3] [i_5] [i_5] [i_4] = ((/* implicit */signed char) arr_14 [i_5 + 2] [i_5 - 1] [i_4 + 1]);
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */short) var_4);
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                var_17 -= ((/* implicit */unsigned long long int) var_7);
                var_18 = ((/* implicit */int) (((-(var_1))) == (((/* implicit */int) arr_13 [i_3] [i_3] [i_4 + 3]))));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
            {
                var_19 += ((/* implicit */unsigned short) ((((arr_0 [i_3]) ^ (((/* implicit */unsigned long long int) var_5)))) & (var_8)));
                var_20 ^= ((/* implicit */signed char) var_11);
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(arr_0 [i_3]))))));
                var_22 = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)226))) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)126)));
            }
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)30)))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_5))));
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            arr_24 [i_3] [i_3] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_3 [i_3] [i_8])))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((int) 4179462618U)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])))))))) && (((/* implicit */_Bool) var_8))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                arr_28 [i_8] [i_8] = ((/* implicit */int) arr_0 [i_3]);
                var_26 = ((/* implicit */_Bool) var_7);
            }
            for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    var_27 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_29 [i_11 - 1] [i_8])), (arr_18 [i_11 + 1] [i_11])))));
                    var_28 = ((/* implicit */signed char) var_0);
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_33 [i_3] [i_8] [i_3] [i_12])) ? (((/* implicit */unsigned long long int) var_0)) : (var_8))));
                    var_30 = ((((/* implicit */int) (unsigned char)226)) == (((((/* implicit */int) arr_21 [(_Bool)0] [(_Bool)0] [i_10])) ^ (((/* implicit */int) arr_31 [i_3] [i_12])))));
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        arr_39 [i_3] [i_8] [i_12] = ((/* implicit */signed char) ((((_Bool) arr_15 [i_3] [i_8] [i_13] [i_12])) ? (((/* implicit */int) arr_26 [i_8] [i_10] [i_10])) : ((+(((/* implicit */int) arr_1 [i_3]))))));
                        arr_40 [8] [i_8] [i_10] [i_12] [i_13] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_38 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) arr_20 [i_3] [i_3])) : (-5939688715603020111LL)))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_45 [i_3] [i_3] [(_Bool)1] [i_10] [i_12] [i_14] = (~(((unsigned int) var_0)));
                        arr_46 [i_12] [i_10] [i_3] = ((/* implicit */signed char) ((72057594037927935ULL) > (9008441535444576000ULL)));
                        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                        var_32 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_4)) - (1790694570856024218ULL))) % (((/* implicit */unsigned long long int) var_5))));
                    }
                    for (short i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) arr_21 [i_3] [i_8] [i_12]);
                        var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3])) ? (((/* implicit */int) arr_19 [i_15])) : (((/* implicit */int) arr_19 [i_3]))));
                    }
                }
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((var_4) + (9010005371762140547LL)))));
                    arr_52 [i_16] [i_16] [i_10] [i_8] [i_8] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) var_7)))) >> (((((/* implicit */int) arr_32 [i_3] [i_8] [i_10] [i_16])) & (((/* implicit */int) (_Bool)1))))));
                    var_36 = ((unsigned int) (signed char)104);
                    arr_53 [i_3] [i_3] [i_10] [i_16] [i_16] = ((/* implicit */unsigned char) var_4);
                }
                var_37 = ((/* implicit */signed char) ((_Bool) var_6));
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((unsigned int) (-(var_4)))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    {
                        arr_61 [i_3] [8LL] [(short)15] [i_19] [i_17] = ((/* implicit */long long int) arr_32 [i_3] [i_17] [i_17] [i_19]);
                        arr_62 [i_18] [i_17] = ((/* implicit */signed char) arr_30 [i_3] [i_3] [i_18 + 1]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                for (int i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) 235239090U))));
                        var_40 = ((/* implicit */long long int) (signed char)109);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_22 = 0; i_22 < 17; i_22 += 4) 
            {
                arr_70 [i_3] [i_3] [i_22] [i_3] = var_8;
                var_41 = ((/* implicit */_Bool) ((unsigned char) var_11));
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_2))))))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_24 = 0; i_24 < 17; i_24 += 2) 
                {
                    arr_75 [i_3] = ((/* implicit */long long int) ((((unsigned int) arr_26 [(_Bool)1] [i_24] [i_23])) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    arr_76 [i_24] [i_23] [9] [i_3] = ((/* implicit */short) ((arr_37 [i_24]) * (((/* implicit */unsigned long long int) arr_56 [i_3]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_25 = 0; i_25 < 17; i_25 += 2) 
                    {
                        var_43 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_17])) / (var_0))))));
                        arr_80 [i_17] [i_23] = ((/* implicit */unsigned int) ((unsigned long long int) ((short) arr_15 [i_3] [(short)2] [i_23] [i_3])));
                        arr_81 [i_3] [i_17] [i_23] [i_24] [i_25] = ((/* implicit */unsigned long long int) var_9);
                        var_44 = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) var_2))));
                        var_46 &= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (unsigned short)30188)))));
                        arr_84 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [8U]))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_83 [i_3] [i_3] [10ULL] [i_3] [i_3] [i_3] [i_3]))));
                        var_47 = ((/* implicit */int) -8034722134127932500LL);
                        var_48 *= ((/* implicit */signed char) (_Bool)1);
                    }
                    for (short i_27 = 0; i_27 < 17; i_27 += 3) 
                    {
                        var_49 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_3] [i_17] [i_23] [i_24] [i_27])) ? (((((/* implicit */unsigned int) var_1)) ^ (3469403342U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                        arr_87 [i_24] [10ULL] [i_27] [i_24] [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_27] [i_27] [13ULL]))) : ((~(var_5)))));
                    }
                    var_50 = ((/* implicit */int) arr_15 [i_3] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9]);
                    arr_88 [i_3] [i_3] [i_3] [i_3] [3] = ((/* implicit */unsigned long long int) ((arr_42 [i_3] [i_3] [i_17] [i_23] [i_24] [i_17]) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                }
                arr_89 [i_3] [i_3] = ((/* implicit */int) ((short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_50 [i_3] [i_3] [i_17])))));
                var_51 = ((/* implicit */unsigned long long int) var_11);
            }
            for (long long int i_28 = 1; i_28 < 13; i_28 += 1) 
            {
                var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) ((var_1) > (((/* implicit */int) var_10))))))))));
                /* LoopNest 2 */
                for (unsigned int i_29 = 4; i_29 < 16; i_29 += 1) 
                {
                    for (long long int i_30 = 0; i_30 < 17; i_30 += 4) 
                    {
                        {
                            arr_98 [i_3] [i_3] [i_28 - 1] [1U] [7LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0)))))));
                            arr_99 [i_3] [i_17] [i_28 + 4] [i_17] [(unsigned short)12] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)224))));
                            arr_100 [i_3] [i_3] [i_28] [i_29 - 1] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_3] [i_30]))))) == ((~(var_6)))));
                            var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)30)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_31 = 0; i_31 < 17; i_31 += 4) 
                {
                    var_54 = ((/* implicit */unsigned long long int) var_0);
                    arr_104 [15LL] [i_17] &= ((/* implicit */unsigned long long int) 2321255795U);
                }
                /* LoopSeq 2 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    var_55 = ((/* implicit */signed char) -416602968517537010LL);
                    arr_109 [i_32] [(signed char)5] [i_28] [i_32] = ((/* implicit */long long int) var_5);
                    arr_110 [i_32] = ((/* implicit */unsigned short) var_6);
                    var_56 = ((/* implicit */short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) arr_58 [i_17] [i_28] [i_32]))) - (12933)))));
                }
                for (long long int i_33 = 3; i_33 < 16; i_33 += 3) 
                {
                    arr_113 [i_33] [i_33] [i_28] [i_33] [i_28] [i_33 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_28] [i_28] [i_28 + 4] [i_28 + 4] [i_28 + 4] [i_28])) * (((/* implicit */int) (unsigned char)29))));
                    arr_114 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_1);
                    arr_115 [i_3] [i_17] [i_33] [i_33] = ((/* implicit */_Bool) var_3);
                    var_57 = ((/* implicit */unsigned short) var_2);
                }
            }
            var_58 &= var_0;
            arr_116 [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_0);
        }
        var_59 *= ((/* implicit */short) ((((/* implicit */long long int) (-(1328720290)))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5939688715603020111LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))));
        var_60 = ((/* implicit */_Bool) ((var_0) / (((((/* implicit */_Bool) -7308466383079780106LL)) ? (var_0) : (((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_3] [i_3]))))))))));
        arr_117 [i_3] [i_3] = ((/* implicit */signed char) var_9);
        arr_118 [i_3] &= ((/* implicit */unsigned long long int) arr_27 [i_3] [i_3] [(_Bool)1]);
    }
}
