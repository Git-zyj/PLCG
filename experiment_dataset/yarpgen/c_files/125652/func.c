/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125652
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) (((((((_Bool)1) ? (var_10) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_3])))) >> (((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_3])) - (117))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24619)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (var_2)))))))));
                        var_15 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3] [i_1] [i_1] [i_0]))))) <= (max((var_0), (((/* implicit */unsigned int) var_6)))))))));
                        arr_13 [i_1] [i_0] = ((/* implicit */unsigned int) (((-(arr_2 [i_1 - 3] [i_0]))) * (((long long int) (_Bool)0))));
                        var_16 = ((/* implicit */unsigned long long int) var_7);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (arr_11 [i_2 + 1]))))));
                        var_18 = ((signed char) arr_2 [i_0] [i_0]);
                    }
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))) ? ((~(((((/* implicit */unsigned long long int) var_12)) & (2306897916721131181ULL))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 17473745786830435008ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2844005796013352665ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((unsigned int) (unsigned char)143)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 4; i_5 < 11; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                {
                    arr_21 [i_0] = ((/* implicit */unsigned char) ((((2147467264) - (((/* implicit */int) var_11)))) & (max((((/* implicit */int) arr_0 [i_6 + 2])), (var_10)))));
                    arr_22 [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) (~(1073295906)))) < (arr_19 [i_0 + 3] [i_0] [i_0 + 3])))) == (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)254)))))))));
                    var_20 ^= ((/* implicit */unsigned int) ((((((/* implicit */long long int) max((262942358U), (((/* implicit */unsigned int) var_12))))) > (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) var_3)) : (var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5 + 2] [(unsigned char)8] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_19 [i_5 - 3] [(unsigned char)8] [i_0 - 1])))) : ((~(-4203696803537813481LL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 4; i_7 < 24; i_7 += 2) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(11123683670823091673ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1388921096U)) <= (7533908713038792753ULL)))) : (((8257536) & (((/* implicit */int) (unsigned char)0))))));
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        arr_34 [(unsigned short)19] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) var_6);
                        arr_35 [9LL] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (signed char)-54)) : (var_10)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            var_21 = var_10;
            var_22 = ((/* implicit */unsigned long long int) arr_24 [i_11] [i_11]);
            /* LoopSeq 2 */
            for (unsigned short i_12 = 1; i_12 < 24; i_12 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)101)) != (((/* implicit */int) (unsigned short)5055))));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 23; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            arr_47 [i_7] [i_7] [i_12] = ((/* implicit */unsigned char) (((-(var_7))) ^ ((-(var_7)))));
                            var_24 = var_10;
                            arr_48 [17U] [10LL] [i_12] [0] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (arr_33 [i_14] [i_14] [i_13 - 1] [i_13] [i_12] [i_12 + 1])));
                            arr_49 [i_14] [(unsigned char)3] [(unsigned char)3] [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_28 [i_7] [i_13] [i_12 + 1] [i_13])) : (((/* implicit */int) arr_26 [i_7] [i_7])))));
                            arr_50 [(unsigned short)23] [i_13] [i_12] [(short)22] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) + (((var_5) % (var_1)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_42 [i_7] [i_7] [i_7] [(signed char)17] [i_7 - 1] [i_12 + 1]))));
                var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)5))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            var_27 = ((var_13) == (((/* implicit */long long int) var_10)));
                            var_28 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 442341979075047842ULL))));
                            arr_57 [i_16] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_27 [15LL] [10LL])) <= (((/* implicit */int) (unsigned short)33893)))));
                        }
                    } 
                } 
            }
            for (long long int i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                var_29 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_59 [i_11]))))));
                var_30 = ((/* implicit */_Bool) (~(-1657853238)));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((unsigned char) ((var_13) & (((/* implicit */long long int) var_4))))))));
            }
            arr_61 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 126100789566373888LL)) ? (-1346790064651878668LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7 - 1]))));
        }
        for (signed char i_18 = 1; i_18 < 24; i_18 += 1) 
        {
            var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_23 [i_19]))))) / ((-(var_5)))));
                            arr_70 [6ULL] [i_7] [i_18] [i_19] [i_19] [i_21] [i_21] &= ((/* implicit */unsigned long long int) ((-6181988412579967917LL) - (((/* implicit */long long int) -414457190))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */int) ((arr_53 [i_7] [i_7 - 1] [i_18 + 1]) | (arr_53 [i_7 + 1] [i_7 + 1] [i_18 - 1])));
            /* LoopNest 3 */
            for (unsigned short i_22 = 4; i_22 < 24; i_22 += 2) 
            {
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    for (unsigned char i_24 = 0; i_24 < 25; i_24 += 3) 
                    {
                        {
                            arr_79 [i_24] [i_18] [i_22] [i_23] [i_24] = (-(arr_55 [i_7 - 4] [i_7 - 1] [22U] [(unsigned short)5] [i_7]));
                            var_35 = ((/* implicit */int) ((arr_63 [i_18 + 1]) + (((/* implicit */unsigned long long int) 921887275U))));
                            var_36 = var_5;
                            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-124))));
                            var_38 = ((/* implicit */unsigned int) (-(arr_63 [i_18])));
                        }
                    } 
                } 
            } 
        }
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((((var_13) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_28 [(unsigned char)17] [i_7] [i_7 + 1] [i_7 + 1])) - (87))))) : (((/* implicit */long long int) ((arr_73 [i_7] [i_7] [i_7 - 4] [i_7 - 4] [i_7 - 4]) / (((/* implicit */int) (signed char)29)))))));
        arr_80 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)53911)) ? (2305843009213692928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 2) 
    {
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_25] [i_25]))) : (var_13))), (((/* implicit */long long int) min((((/* implicit */int) arr_41 [i_25] [i_25] [i_25] [i_25])), (arr_39 [4LL] [i_25] [i_25]))))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_26 = 3; i_26 < 21; i_26 += 1) /* same iter space */
        {
            var_41 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_62 [i_25] [i_26 - 3])))));
            arr_87 [i_25] [i_26] [i_26] = ((((int) arr_41 [(signed char)1] [i_26 + 1] [i_26 + 1] [(unsigned short)24])) > (((/* implicit */int) ((arr_41 [i_26 - 2] [0U] [i_26 - 2] [i_26]) || (((/* implicit */_Bool) 8232842074818607777LL))))));
            var_42 = ((/* implicit */unsigned int) ((unsigned char) ((arr_39 [i_25] [i_25] [i_26 + 1]) / (arr_39 [i_25] [i_26 - 3] [i_25]))));
            arr_88 [i_25] [i_26] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) (signed char)-56)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_25]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_41 [(unsigned char)23] [i_26 - 1] [i_25] [i_26 - 2]))))));
        }
        for (unsigned int i_27 = 3; i_27 < 21; i_27 += 1) /* same iter space */
        {
            arr_92 [i_27] = (-(((/* implicit */int) (signed char)(-127 - 1))));
            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) max(((+(((((/* implicit */_Bool) arr_24 [i_25] [i_25])) ? (((/* implicit */unsigned int) var_12)) : (var_3))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))))));
        }
        var_44 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) arr_27 [i_25] [i_25])) - (51)))))), (((long long int) ((((/* implicit */_Bool) 13826076319837214216ULL)) ? (((/* implicit */long long int) 2720638909U)) : (var_1))))));
        var_45 &= ((/* implicit */_Bool) (~(((var_12) ^ (((1631809129) & (arr_73 [i_25] [i_25] [i_25] [i_25] [i_25])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_28 = 4; i_28 < 7; i_28 += 2) 
    {
        for (unsigned short i_29 = 2; i_29 < 9; i_29 += 3) 
        {
            {
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((unsigned long long int) (~(max((1023442713), (((/* implicit */int) arr_44 [i_29] [(signed char)21]))))))))));
                arr_97 [i_29] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) % ((~(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))))));
                arr_98 [i_28] [i_29] [i_29] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) arr_3 [i_28 + 3]))))) > (((((/* implicit */_Bool) arr_52 [i_28] [i_28] [i_28 - 3] [i_29 - 2])) ? ((-(arr_7 [9U] [i_28] [i_28]))) : (((/* implicit */int) arr_90 [i_29] [i_29] [i_29 - 1]))))));
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) var_13)) > (var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) | (max((((/* implicit */int) ((unsigned char) var_8))), (((int) 144115179485921280LL))))));
}
