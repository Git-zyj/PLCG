/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122286
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_15))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) (((-(var_9))) != (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) var_4)) : (4142221242943876584LL)))));
            var_18 = ((/* implicit */_Bool) var_11);
        }
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52477)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ^ ((+(36028797018963968ULL)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_4] [i_2])))))));
                    arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) : (((((/* implicit */unsigned int) var_6)) - (var_8)))));
                }
            } 
        } 
        arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 2936344511U)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)52548)))) : (((/* implicit */int) (unsigned short)52548))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_20 = ((/* implicit */long long int) 701608305U);
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_24 [i_2] [i_5] [i_7] = ((/* implicit */unsigned int) var_13);
                        var_21 -= ((/* implicit */signed char) var_6);
                        arr_25 [i_2] [i_7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_2] [i_2] [i_2]))));
                        var_22 = (-((~(((/* implicit */int) arr_9 [(signed char)0] [i_5] [i_5])))));
                    }
                    var_23 = var_1;
                }
                for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (arr_16 [i_2] [i_5] [i_6])));
                    arr_30 [i_2] = ((/* implicit */unsigned int) arr_11 [(short)9] [13U]);
                    var_25 += ((/* implicit */unsigned char) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned short)3]);
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_33 [i_2] [i_5] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (arr_17 [i_5]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_6] [(unsigned short)6])) : (((/* implicit */int) arr_0 [i_2] [i_10]))))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(16822161457327276692ULL))))));
                    arr_34 [i_10] [i_6] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1624582616382274924ULL)) && (((/* implicit */_Bool) 1296365074U))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(arr_1 [i_2] [i_6]))))));
                }
                arr_35 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_5))));
                arr_36 [i_2] [i_5] [i_6] [12LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_31 [i_5] [(signed char)6] [i_6]) : (((/* implicit */int) var_1))));
                arr_37 [i_6] &= (unsigned char)116;
            }
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_28 = ((/* implicit */long long int) var_5);
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_29 = arr_31 [i_11] [i_11] [i_5];
                            var_30 = ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (((arr_26 [(_Bool)0] [i_5] [(short)0] [i_5] [i_5] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_12] [i_12] [(unsigned char)12]))))) : (((((/* implicit */_Bool) arr_47 [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                            arr_48 [i_2] [i_5] [i_2] [i_2] [i_13] [i_12] [i_11] = var_14;
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */signed char) var_13);
            }
        }
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            arr_51 [i_14] &= (-(2124962056U));
            var_32 *= ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_2] [i_14]))));
        }
        arr_52 [8ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_49 [i_2] [i_2]))));
        /* LoopSeq 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_33 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_16 [i_2] [i_2] [i_2])) != (var_14)));
            var_34 ^= ((/* implicit */_Bool) var_10);
        }
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            arr_57 [i_16] [i_2] = ((/* implicit */short) arr_27 [i_2] [i_2] [i_2] [i_2] [(unsigned char)10] [(unsigned short)5]);
            /* LoopNest 3 */
            for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_68 [i_2] [i_16] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))) ? (var_6) : ((-(((/* implicit */int) arr_27 [i_2] [i_2] [i_17] [(short)0] [i_19] [i_19]))))));
                            arr_69 [i_2] [i_2] [i_18] [i_17] [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_67 [i_2] [(short)12])) : (((/* implicit */int) arr_7 [i_17] [i_2])))) : (((/* implicit */int) arr_9 [i_19] [i_17] [i_16]))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_2] [i_16] [(unsigned short)0])) ? (((((/* implicit */_Bool) (unsigned short)52548)) ? (((/* implicit */long long int) arr_65 [3LL] [i_16] [i_16] [i_16] [i_16] [i_2])) : (arr_44 [i_2] [i_16] [i_16] [i_16]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_16] [i_16])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_16])))))))))));
        }
        for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
        {
            var_36 = ((/* implicit */signed char) ((arr_27 [i_20] [i_20] [2LL] [i_20] [i_20] [5LL]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_20] [i_2] [i_2] [i_2] [i_20]))))))));
            var_37 += ((/* implicit */short) arr_1 [i_2] [i_20]);
            var_38 = ((/* implicit */_Bool) arr_59 [i_20] [i_2] [i_2]);
        }
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            arr_78 [9LL] [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_21] [i_22] [14])))))));
            arr_79 [i_21] [i_21] = ((/* implicit */_Bool) arr_61 [i_21] [i_21] [i_21] [i_21]);
        }
        arr_80 [i_21] [i_21] = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_21] [i_21] [i_21]))));
        var_39 = ((/* implicit */int) (-(arr_21 [i_21] [i_21] [7U] [i_21] [i_21])));
        /* LoopSeq 1 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            arr_83 [2LL] [i_23] = ((/* implicit */long long int) arr_65 [i_21] [i_23] [i_23] [i_21] [i_21] [i_23]);
            arr_84 [i_21] [i_23] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [(unsigned char)14] [(unsigned char)14] [i_23])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_71 [i_23])) - (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_0 [i_21] [(unsigned char)16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_21] [i_23] [i_23] [i_23]))) : (arr_62 [i_21] [i_21] [i_21] [0U] [i_23] [i_21])))));
            arr_85 [i_21] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_21])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_23]))))) : (((/* implicit */int) arr_81 [3U]))));
            var_40 = (~(((/* implicit */int) arr_45 [i_21] [i_23] [i_23] [i_23] [i_23] [i_23])));
        }
    }
    /* LoopSeq 1 */
    for (short i_24 = 0; i_24 < 16; i_24 += 4) 
    {
        var_41 = ((/* implicit */unsigned char) var_0);
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_89 [i_24])) : ((-(((/* implicit */int) arr_87 [i_24]))))));
        /* LoopSeq 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_26 = 0; i_26 < 16; i_26 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
                {
                    var_43 = ((/* implicit */long long int) (unsigned short)12987);
                    var_44 = ((/* implicit */short) (+((-(-844081567)))));
                }
                arr_100 [i_25] [i_25] = ((/* implicit */_Bool) arr_3 [i_25] [(signed char)10] [i_25]);
            }
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_92 [i_24] [i_25] [i_25]), (((/* implicit */int) (_Bool)1))))) ? ((~(arr_92 [i_25] [i_24] [i_24]))) : (((arr_92 [i_24] [i_25] [i_25]) ^ (arr_92 [i_24] [i_25] [i_25])))));
        }
        for (signed char i_28 = 0; i_28 < 16; i_28 += 3) 
        {
            var_46 = (~(((/* implicit */int) var_11)));
            var_47 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)6616)) : (((/* implicit */int) var_12))))) : (min((arr_98 [i_24] [i_24] [11] [i_28] [i_28]), (((/* implicit */unsigned int) arr_89 [i_24]))))))));
        }
        for (long long int i_29 = 0; i_29 < 16; i_29 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_30 = 0; i_30 < 16; i_30 += 1) 
            {
                for (int i_31 = 0; i_31 < 16; i_31 += 4) 
                {
                    {
                        var_48 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                        arr_114 [i_29] [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_106 [i_31] [i_31] [i_31])) ? (max((((/* implicit */unsigned long long int) var_10)), (arr_106 [i_24] [i_24] [i_24]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_106 [i_24] [i_29] [i_30])) && (((/* implicit */_Bool) var_5))))))));
                    }
                } 
            } 
            var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_106 [i_24] [i_24] [i_24])) ? (((/* implicit */unsigned int) var_4)) : (max((((/* implicit */unsigned int) var_15)), (351332946U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10637))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_24] [i_24] [i_29])) ? (((/* implicit */int) arr_89 [i_24])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_12)))))))));
            arr_115 [(unsigned char)3] = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_108 [i_24] [i_24] [i_29])) != (((/* implicit */int) arr_2 [i_24] [i_24])))) || (((/* implicit */_Bool) arr_87 [i_24])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)19505)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-17932)) : (((/* implicit */int) arr_88 [i_24] [i_24]))))))) : ((~(arr_97 [i_29])))));
            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_110 [i_24] [i_24] [i_24] [i_24])) ? (((/* implicit */unsigned long long int) var_8)) : (7039678685919222534ULL)))) ? (((((/* implicit */_Bool) arr_108 [i_24] [i_24] [i_29])) ? (3045608547U) : (((/* implicit */unsigned int) arr_96 [i_29] [i_24] [i_24])))) : (((/* implicit */unsigned int) min((arr_92 [i_24] [i_29] [i_29]), (((/* implicit */int) arr_88 [i_29] [i_29]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) < (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_95 [i_29] [i_24] [i_24])))))))))))));
        }
        var_51 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(2998602222U)))) ? (((688161782386838089LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))) : ((+(var_9)))))));
    }
}
