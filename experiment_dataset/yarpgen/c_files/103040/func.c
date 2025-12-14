/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103040
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (1048575) : (((var_7) ? (((/* implicit */int) var_7)) : (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0 - 2] [12]);
        var_11 *= ((/* implicit */_Bool) -1048576);
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_12 -= (!(var_7));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (min((((/* implicit */unsigned char) var_7)), (arr_9 [i_1 + 2] [i_1])))));
            arr_11 [18ULL] |= ((/* implicit */_Bool) min((min((arr_8 [i_1 - 1]), (((/* implicit */signed char) (_Bool)1)))), (min((arr_8 [i_1 + 1]), (arr_8 [i_1 - 1])))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)-44)) ? (-740241942) : (-2039861575))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [(unsigned short)3])) : (((/* implicit */int) var_1)))))));
                        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) ? (arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (-1048576)))) ? (((/* implicit */unsigned long long int) 613347638)) : (((((/* implicit */_Bool) (~(769477439U)))) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))))));
                        var_16 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_4) / (((/* implicit */int) (unsigned short)32922))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [(_Bool)1])) >= (((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_30 [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((_Bool) (~(((/* implicit */int) (unsigned short)6))))) ? (((/* implicit */unsigned int) (~(arr_21 [i_5 + 1] [i_6 + 2])))) : (((((/* implicit */_Bool) ((arr_22 [i_1] [i_5] [i_1] [i_1]) | (arr_19 [i_1] [i_1] [i_1 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)7] [i_1]))) : (min((var_8), (((/* implicit */unsigned int) (_Bool)1))))))));
                                arr_31 [i_6 - 2] [i_1] [i_6 - 2] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) (+(624298228)))))));
                                arr_32 [i_1] [i_1] [i_7] [i_8] = ((/* implicit */signed char) ((min((((/* implicit */int) var_7)), (arr_16 [i_1 + 1] [i_1] [i_5 + 1]))) % ((+(((/* implicit */int) (unsigned char)167))))));
                                arr_33 [(signed char)19] [(_Bool)1] [i_5] [i_6] [i_7] [i_7] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(145562244)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 541800172)) ? (((/* implicit */int) (signed char)127)) : (-1048576)))), (((unsigned long long int) (unsigned short)65535))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_17 = ((/* implicit */int) ((arr_7 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_6 + 2] [i_6 - 2] [i_6 + 1]) <= (arr_15 [i_6 + 1] [i_6 - 2] [i_6 - 2])))))));
                        arr_37 [i_1] [i_5] [i_1] [i_1] [5U] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)112)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 435384892)) ? (((/* implicit */unsigned int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)32918))))) : (((((/* implicit */_Bool) arr_28 [i_9] [i_1] [(signed char)16] [i_1] [i_1 + 1])) ? (arr_15 [10] [i_9] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                        arr_38 [i_1] [i_5] = min((((_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_19 [i_1] [i_6 + 2] [i_6 + 2]) : (var_0)))), (min((min((var_1), ((_Bool)1))), (((_Bool) arr_28 [i_9] [i_1] [i_5] [i_1] [(unsigned short)3])))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_41 [i_1] [i_5] [i_1] = ((/* implicit */_Bool) (+((~(min((((/* implicit */unsigned int) 1048590)), (arr_15 [i_6] [i_5] [i_1])))))));
                        arr_42 [i_10] [i_1 + 2] [i_1] = ((/* implicit */int) var_1);
                    }
                    var_19 ^= ((/* implicit */unsigned short) var_7);
                    arr_43 [i_1] = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */_Bool) arr_26 [i_1] [i_1 + 2] [(_Bool)1] [i_6 + 2])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_2)))), (arr_22 [i_1] [i_1] [i_1] [i_6]))));
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_50 [i_11] [i_11] = (~(var_5));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */_Bool) ((int) (+(229376))));
                        arr_59 [i_11] [i_12] [i_14] = ((/* implicit */_Bool) 4294967280U);
                    }
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                arr_66 [i_11] [i_16] [i_15] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_64 [i_15])) : (((/* implicit */int) var_7))))) ? (arr_23 [i_16 - 1] [i_16 + 1]) : (((((/* implicit */_Bool) var_5)) ? (var_4) : (1048609)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */int) var_3)))))))) : (((/* implicit */int) var_6)));
                arr_67 [i_11] [i_16] = ((/* implicit */int) ((-2042958375) != (((/* implicit */int) (signed char)-41))));
            }
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_3))));
            var_22 ^= ((/* implicit */signed char) var_4);
        }
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)23)) * (((/* implicit */int) arr_9 [i_11] [i_11]))));
            arr_70 [i_17] [i_17] [i_11] = ((_Bool) arr_27 [i_17] [i_17] [i_11] [i_11] [i_11]);
            arr_71 [i_11] = (!(((/* implicit */_Bool) ((arr_52 [i_11] [i_17] [i_17] [i_17]) ? (2257135591U) : (((/* implicit */unsigned int) var_0))))));
            arr_72 [i_11] [i_11] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_53 [3] [i_17])) > (475121647))))));
        }
        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            arr_77 [i_18] [i_11] = ((/* implicit */int) ((var_1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_11] [i_11] [i_18] [i_18])) : (arr_12 [i_18] [i_11] [0])))) : (((arr_7 [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    {
                        arr_82 [(_Bool)1] [i_20] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        arr_83 [i_18] = ((/* implicit */_Bool) var_9);
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65513))))) ? (((/* implicit */int) arr_46 [i_11])) : (var_5)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_62 [i_20] [0] [i_11])) << (((/* implicit */int) (_Bool)1))))))) : ((~(((arr_60 [1] [i_18] [1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                        arr_84 [i_11] [(signed char)0] [i_20] = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) arr_40 [i_11] [i_18] [i_18] [i_20]))), (arr_12 [(_Bool)1] [i_19] [i_20])));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 722798865)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)39140))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) ((int) min((((((/* implicit */_Bool) arr_23 [i_11] [i_18])) ? (((/* implicit */int) (unsigned short)58873)) : (((/* implicit */int) arr_80 [13] [i_18] [i_18])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
        }
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (signed char)96)))))) ? (((((/* implicit */int) min((arr_46 [i_11]), (arr_10 [i_11] [i_11] [i_11])))) & (((/* implicit */int) ((unsigned short) arr_65 [i_11]))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_8))) >= (((/* implicit */int) ((unsigned short) (unsigned short)32607))))))));
        arr_85 [i_11] [i_11] = ((/* implicit */signed char) var_5);
        /* LoopSeq 2 */
        for (signed char i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            arr_88 [11ULL] [i_11] [i_21] = (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_4))))) != ((~(((/* implicit */int) var_6)))));
            /* LoopNest 3 */
            for (unsigned int i_22 = 1; i_22 < 18; i_22 += 4) 
            {
                for (signed char i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (signed char i_24 = 1; i_24 < 18; i_24 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((1363915348U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))));
                            var_29 = ((/* implicit */_Bool) (unsigned short)65517);
                            var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_22 [i_21] [i_22] [i_23] [i_24])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 20; i_25 += 2) 
        {
            arr_97 [i_25] = var_5;
            arr_98 [i_11] = (+(((/* implicit */int) (_Bool)1)));
            arr_99 [i_25] = var_6;
            /* LoopNest 3 */
            for (unsigned short i_26 = 0; i_26 < 20; i_26 += 3) 
            {
                for (int i_27 = 0; i_27 < 20; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 20; i_28 += 3) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_100 [i_11])) ? (var_5) : (-812238320)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_94 [(_Bool)1] [i_25] [6] [i_27] [i_28])));
                            var_32 = ((/* implicit */unsigned short) ((unsigned char) arr_55 [(signed char)1] [i_25] [i_26] [i_28]));
                            var_33 = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) arr_9 [i_11] [i_28])) : (((/* implicit */int) arr_9 [i_28] [i_28]))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((_Bool) (unsigned char)255)))));
        }
    }
}
