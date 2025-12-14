/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133782
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32307)))))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 2])) - (((/* implicit */int) arr_0 [i_0 + 2]))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) var_4);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (98780304) : (((/* implicit */int) arr_8 [i_4] [(unsigned char)13]))))) ? (((/* implicit */unsigned long long int) var_1)) : (arr_9 [i_1] [i_2] [i_3 - 2])))));
                            arr_19 [i_2] [i_5] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) -1222764623)) ? (9223372036854775807ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                            var_13 &= ((/* implicit */short) max((((/* implicit */unsigned short) arr_2 [i_3 - 2])), (max((((/* implicit */unsigned short) arr_14 [i_3 + 1] [i_3] [i_3] [i_3 - 1])), ((unsigned short)4095)))));
                            var_14 = ((/* implicit */unsigned char) (short)-30);
                        }
                        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((arr_3 [i_1]) << (((((((/* implicit */_Bool) arr_20 [1] [i_2] [i_3] [1] [1] [12LL])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_8)))) - (53))))) << (((/* implicit */int) ((((long long int) (-2147483647 - 1))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))))));
                            arr_24 [i_1] [i_2] [i_3 - 2] [i_3 - 2] [i_4] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((arr_5 [i_2] [i_3 - 1] [i_3 - 1]), (arr_5 [i_1] [i_1] [(unsigned short)2])))) : (((/* implicit */int) arr_20 [i_1] [i_2] [i_3] [i_3] [i_4] [i_6]))));
                            var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) & (((unsigned int) 15ULL)));
                            var_17 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) 7U))))))));
                        }
                        arr_25 [i_3] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)141)), ((unsigned short)65530))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_29 [i_3] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_3 - 1])) ? (arr_1 [i_3 - 2]) : (arr_1 [i_7])));
                        var_18 = ((long long int) (-(arr_7 [i_3] [i_2])));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_3 - 1] [i_3] [i_2])) ? (((/* implicit */int) min(((unsigned char)255), ((unsigned char)7)))) : (((/* implicit */int) (unsigned short)52735))));
                    arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | ((-(var_9)))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1])) & (((((/* implicit */int) arr_20 [i_1] [i_1] [4] [4] [i_1] [i_1])) & (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) var_2)) : (((arr_7 [i_1] [i_1]) % (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (unsigned char i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                {
                    arr_37 [i_1] [14] [i_8] = ((unsigned char) max((((/* implicit */unsigned int) ((var_9) % (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_3)) ? (arr_36 [i_1] [i_8] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_9 - 2] [i_9] [i_8] [i_8] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_20 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_1] [i_1]))))), (((arr_31 [i_8]) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) : (4294967295U))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 4; i_11 < 7; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    arr_44 [i_10] [i_11] &= ((/* implicit */short) var_8);
                    arr_45 [i_12] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (~(var_2))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_50 [i_10] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23719)) ? (((/* implicit */unsigned int) var_9)) : (arr_36 [i_10] [i_10] [i_10] [i_10])));
                                var_22 = ((/* implicit */short) arr_32 [i_11 - 1] [i_11 - 2] [i_11 - 2]);
                                arr_51 [i_12] [i_12] = ((/* implicit */unsigned int) ((var_6) >> ((((+(4294967295U))) - (4294967268U)))));
                                arr_52 [i_10] [i_10] [i_10] [i_12] [i_14] [i_13] [i_12] = ((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */int) arr_28 [i_11 + 3] [i_11 - 3] [i_11 + 2] [i_11]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((arr_3 [i_10]) / (((/* implicit */int) arr_8 [i_10] [i_10]))));
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))));
        var_25 = ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) arr_1 [i_15]);
        var_27 = ((arr_1 [i_15]) | (((((/* implicit */_Bool) (unsigned short)65530)) ? (1698751116) : (((/* implicit */int) (short)-32765)))));
        /* LoopSeq 2 */
        for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */int) arr_0 [i_15])) : (((/* implicit */int) arr_57 [i_16] [i_15] [i_15]))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-(arr_53 [i_15]))))));
        }
        for (int i_17 = 3; i_17 < 18; i_17 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_17 - 2] [i_17 - 3])) ? (((/* implicit */unsigned int) arr_58 [i_15] [i_15] [i_15])) : (var_1)));
            arr_64 [i_15] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_63 [i_17 - 3]))));
            arr_65 [i_17] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_55 [i_15])) ? (24ULL) : (((/* implicit */unsigned long long int) arr_56 [i_17] [i_15]))))));
            arr_66 [i_17] [(unsigned short)13] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) & (arr_60 [i_15] [i_17])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && ((_Bool)1)))) : (((((/* implicit */_Bool) var_1)) ? (-1698751117) : (((/* implicit */int) var_3))))));
            arr_67 [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((unsigned short) (unsigned short)65534));
        }
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
    }
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_18 = 2; i_18 < 10; i_18 += 1) 
    {
        arr_71 [i_18] [i_18] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (_Bool)1)))));
        arr_72 [i_18] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_31 [i_18])) : (((/* implicit */int) arr_12 [i_18 + 2] [i_18 - 2]))));
        var_33 = (+(var_1));
    }
    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 3) 
    {
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_19])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) * (var_6)))) ? (((/* implicit */long long int) (+(arr_1 [i_19])))) : (((((/* implicit */_Bool) -1073517968)) ? (((/* implicit */long long int) var_9)) : (2891327814242657341LL)))))))))));
        arr_77 [i_19] |= ((/* implicit */unsigned long long int) arr_0 [i_19]);
    }
    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
    {
        arr_81 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_53 [i_20])) ? (((/* implicit */int) (unsigned short)12800)) : (((/* implicit */int) (short)-10080))))))) ? (((/* implicit */unsigned int) arr_76 [i_20])) : ((+(((((/* implicit */_Bool) 1698751116)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
        arr_82 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -1073517968))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_80 [12U])), ((unsigned char)151))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) | (1698751116))) : (max((((/* implicit */int) arr_79 [i_20])), ((~(arr_78 [i_20])))))));
        arr_83 [i_20] [10U] &= var_9;
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            for (int i_22 = 1; i_22 < 15; i_22 += 3) 
            {
                {
                    var_35 -= ((((/* implicit */int) arr_61 [i_22 + 1] [i_22] [i_22 + 2])) * (((((/* implicit */_Bool) arr_61 [i_22 + 1] [i_22] [i_22 + 2])) ? (((/* implicit */int) arr_61 [i_22 + 1] [i_22 + 2] [i_22 + 2])) : (((/* implicit */int) arr_61 [i_22 + 1] [i_22 - 1] [i_22 + 2])))));
                    arr_90 [4LL] [i_22] |= ((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */_Bool) (short)10083)) ? (var_6) : (arr_89 [2LL] [i_21]))))));
                    var_36 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_86 [i_22 + 3] [i_22 + 1] [i_22 + 3])) ^ (((/* implicit */int) arr_86 [i_22 - 1] [i_22 + 2] [i_22 + 3])))), (((((/* implicit */int) arr_86 [i_22 + 3] [i_22 - 1] [i_22 + 3])) | (((/* implicit */int) arr_86 [i_22 - 1] [i_22 + 1] [i_22 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 18; i_23 += 4) 
                    {
                        for (int i_24 = 0; i_24 < 18; i_24 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) arr_62 [i_24] [i_24] [i_23]);
                                arr_97 [i_20] [i_20] [i_22 + 3] [i_23] [i_24] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) (unsigned char)234);
    }
    var_39 = ((/* implicit */int) var_8);
    var_40 *= ((/* implicit */unsigned char) var_2);
}
