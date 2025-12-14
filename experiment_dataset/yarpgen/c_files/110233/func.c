/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110233
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
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(((12429329690997919691ULL) >> (((((/* implicit */int) (unsigned short)55152)) - (55112)))))))));
        var_14 -= ((/* implicit */unsigned int) min((min((-2030230519), (2030230527))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) 4196177438U))) : (2030230541)))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((unsigned char) (-(arr_1 [i_1] [i_1]))));
        var_15 -= (-(((/* implicit */int) arr_3 [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) arr_7 [i_2] [i_2])))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)11] [i_2]))) : (var_6)))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
        }
    }
    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        var_18 = ((unsigned char) (~(-900089789904519731LL)));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4]))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+((~(4196177438U))))))));
        }
        for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            arr_18 [i_3] [i_5] = ((/* implicit */unsigned int) ((int) max((((int) var_4)), ((~(((/* implicit */int) arr_13 [i_3])))))));
            var_21 |= ((/* implicit */unsigned short) arr_7 [i_3] [i_3]);
            arr_19 [i_3] [i_5] = ((int) min((((((/* implicit */int) (unsigned char)144)) & (((/* implicit */int) arr_8 [i_3])))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)100)), ((unsigned char)248))))));
        }
        for (int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) arr_11 [i_3 - 2])) : (-2030230502)))));
            arr_22 [i_3] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_9 [i_3 + 2] [i_3 - 2]))))));
            var_23 = ((/* implicit */unsigned char) min(((+((-(849762180))))), (max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) arr_0 [(_Bool)1])) % (((/* implicit */int) var_3))))))));
            arr_23 [i_3] [i_3 + 3] [i_3] = (unsigned short)24;
        }
        arr_24 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (-((+(((/* implicit */int) (_Bool)0)))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_7]))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 12; i_9 += 4) 
            {
                arr_32 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */int) ((_Bool) var_3));
                arr_33 [i_7] [i_8] [5LL] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)6))));
            }
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_7] [i_8 - 2]))));
            /* LoopSeq 1 */
            for (int i_10 = 4; i_10 < 12; i_10 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_20 [i_7] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                arr_37 [i_7] [i_10] [i_7] [i_7] |= ((unsigned long long int) var_2);
                /* LoopSeq 4 */
                for (short i_11 = 2; i_11 < 10; i_11 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) arr_39 [(_Bool)1]);
                    var_28 = ((/* implicit */unsigned char) (!(arr_7 [i_11 - 1] [i_7])));
                }
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    arr_43 [i_7] [i_10] [i_10] [i_8] [i_7] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_20 [i_8 + 2] [i_10 - 2])));
                    var_29 = ((/* implicit */unsigned long long int) (+(6LL)));
                    arr_44 [i_10] [i_8 - 1] [i_10 - 2] [i_8 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_10 - 3] [i_10 - 2] [i_10 - 3] [i_7])) ? (((int) 2030230527)) : ((-(-3)))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        var_30 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)10744))));
                        arr_47 [i_7] [6U] [i_10] [i_12] [i_7] [i_12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)248))) && (((/* implicit */_Bool) arr_39 [i_7]))));
                        var_31 = ((/* implicit */unsigned short) (-(arr_1 [i_10 + 1] [i_13 + 1])));
                    }
                }
                for (long long int i_14 = 1; i_14 < 12; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 2) 
                    {
                        arr_53 [2U] [i_14 - 1] [i_7] [i_8 + 1] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                        var_32 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)65535));
                        arr_54 [i_14] [i_15 - 2] [i_15] [i_7] [i_15 + 1] [i_14] = ((/* implicit */short) (unsigned char)134);
                    }
                    arr_55 [i_7] [i_8] [i_14] [i_8] [3] = ((/* implicit */int) ((unsigned short) arr_40 [i_7] [i_14 + 1] [i_10 - 1] [i_10 + 1] [i_8 - 2] [i_8]));
                    var_33 = ((((/* implicit */_Bool) (+(-127669285283237300LL)))) ? (((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) : (((/* implicit */int) arr_27 [i_8 + 2] [i_14 - 1])));
                }
                for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_10 - 2] [i_10] [i_10 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_7] [i_8 - 2] [i_8 - 2] [i_8] [i_10 - 3] [i_10 - 3]))) : (arr_21 [i_10 - 2] [(unsigned short)8] [i_10 - 1]))))));
                    var_35 = ((/* implicit */unsigned char) ((arr_12 [i_8 + 2]) ? (((/* implicit */int) arr_12 [i_8 - 1])) : (-1991708744)));
                    arr_58 [(unsigned char)7] [i_7] [(unsigned char)0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_56 [i_7] [i_8 - 2] [i_10 + 1] [i_16] [i_10])))));
                    arr_59 [i_7] [i_8 - 2] [i_10] = ((/* implicit */unsigned short) (short)16994);
                }
                arr_60 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27021597764222976LL)) ? (1638372080U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */int) (unsigned char)88)) : ((+(((/* implicit */int) arr_14 [i_8] [i_10]))))));
            }
            var_37 = ((/* implicit */_Bool) (-(arr_21 [i_7] [i_7] [i_7])));
        }
        for (unsigned short i_17 = 2; i_17 < 11; i_17 += 1) /* same iter space */
        {
            arr_65 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_17]))) == (((arr_3 [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))) : (arr_4 [i_7] [i_7])))));
            arr_66 [i_17] [i_7] = ((/* implicit */int) (signed char)26);
            var_38 = ((/* implicit */unsigned int) ((unsigned short) -8867892586080127384LL));
        }
        for (unsigned short i_18 = 2; i_18 < 11; i_18 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */int) var_10);
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_4 [i_7] [i_18 + 1]) : (arr_4 [14LL] [i_18 + 1])));
            arr_69 [8] [8] &= ((/* implicit */long long int) (~((~(((/* implicit */int) (short)32753))))));
        }
        var_41 = ((/* implicit */int) arr_46 [i_7] [i_7] [i_7] [i_7]);
    }
    /* LoopSeq 1 */
    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 744358413653180952ULL)) ? (arr_16 [i_20] [i_19] [i_19]) : (((/* implicit */unsigned long long int) max((arr_49 [i_20] [i_20] [i_20] [i_19] [1ULL] [i_19]), (((/* implicit */unsigned int) arr_36 [i_19] [i_19])))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                for (unsigned short i_22 = 0; i_22 < 12; i_22 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_23 = 1; i_23 < 11; i_23 += 2) 
                        {
                            arr_87 [i_19] [i_19] [i_21] [i_21] [i_22] [i_22] [i_23] = (unsigned short)31744;
                            arr_88 [i_19] [i_19] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_23]))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (arr_81 [(_Bool)1])))) : (((((/* implicit */_Bool) arr_71 [i_19] [i_19])) ? (((/* implicit */int) arr_41 [(unsigned short)3] [i_19] [i_22] [i_23])) : (((/* implicit */int) arr_72 [i_19]))))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)-12890)))))) : (134217728)));
                            var_43 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_35 [i_21] [i_20] [i_23 - 1] [i_23 - 1]))))));
                        }
                        var_44 = max((((/* implicit */unsigned char) var_10)), ((unsigned char)242));
                        arr_89 [i_22] [i_22] [i_22] [i_19] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_31 [i_21] [i_19])), ((+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_10 [i_19])) ? (((/* implicit */unsigned long long int) ((int) arr_80 [i_22] [i_20] [i_21] [i_22] [(unsigned short)8] [(unsigned char)9]))) : (max((var_8), (((/* implicit */unsigned long long int) -9089394342802747452LL))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 1) 
                        {
                            arr_93 [i_19] [i_20] [i_19] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-2030230519)))) ? (((/* implicit */int) arr_35 [i_19] [i_20] [i_21] [i_21])) : (-2030230546)));
                            arr_94 [i_22] &= min((var_0), (max(((unsigned short)7790), (((/* implicit */unsigned short) (_Bool)1)))));
                        }
                        for (unsigned int i_25 = 0; i_25 < 12; i_25 += 1) 
                        {
                            arr_99 [i_19] [i_20] [i_21] [i_22] [(unsigned char)0] [9LL] [i_22] = arr_42 [i_19] [i_22] [i_21] [i_19];
                            var_45 = ((/* implicit */unsigned short) (+(var_8)));
                            var_46 = ((/* implicit */long long int) max((16120915960719456214ULL), (((/* implicit */unsigned long long int) var_12))));
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_78 [2ULL]))), ((+(((/* implicit */int) (unsigned char)31)))))))));
        }
        arr_100 [(unsigned short)2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_19]))))) ? (((((/* implicit */_Bool) 10790807060243289612ULL)) ? (((/* implicit */int) arr_17 [i_19])) : (((/* implicit */int) arr_17 [i_19])))) : (((((/* implicit */_Bool) 1391483762U)) ? (((/* implicit */int) arr_17 [i_19])) : (6)))));
        arr_101 [i_19] [2LL] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_70 [i_19]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)16114))))) : ((-(((unsigned int) arr_68 [i_19]))))));
        arr_102 [i_19] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_34 [i_19] [i_19])) ? ((+(15289414930731093671ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))));
    }
    var_48 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))), (min((min((28U), (((/* implicit */unsigned int) (short)-1)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))));
    var_49 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
}
