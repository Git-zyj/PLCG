/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17032
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]);
                                var_13 = ((((/* implicit */_Bool) max((((arr_1 [i_0] [i_2]) / (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) arr_5 [i_2] [i_1])) : (min((((((/* implicit */_Bool) var_5)) ? (var_10) : (var_10))), (((/* implicit */int) ((var_7) >= (((/* implicit */int) arr_5 [i_3] [i_4]))))))));
                                arr_13 [15] [i_1] [3ULL] [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [(short)21]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) arr_1 [i_0] [17LL])) ? (((((((/* implicit */_Bool) 262143)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U))) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_1] [i_1] [(short)4])), (arr_1 [i_0] [i_2]))) == (((((/* implicit */_Bool) 8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)15]))) : (-1LL)))))))))));
                }
            } 
        } 
        arr_14 [i_0] [(_Bool)1] = ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            arr_19 [i_5] [i_6] [i_6] = ((/* implicit */signed char) (unsigned short)1934);
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_22 [i_5] [i_6 - 1] [i_6] [i_5] &= ((/* implicit */unsigned short) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_6] [i_7] [i_6] [i_6])))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_26 [i_8] [i_7] [i_6] = ((/* implicit */signed char) var_9);
                    arr_27 [i_5] [i_6] [i_7] [i_8] = var_7;
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) var_4);
                    var_16 *= ((/* implicit */unsigned char) var_4);
                    arr_32 [i_5] [i_7] [i_9] = ((/* implicit */short) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [3U] [i_6])))));
                    arr_33 [i_5] [i_6] [i_7] [i_9] = (!(((/* implicit */_Bool) arr_28 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1])));
                }
            }
            for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                arr_36 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                arr_37 [5] [i_5] [i_5] = ((/* implicit */signed char) -9LL);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((_Bool) arr_18 [i_6 + 1] [i_6 - 1])))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_5))));
            }
            var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_9)))))));
            arr_38 [(short)6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_6 - 2] [i_6 - 2]))));
            var_20 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_31 [i_5] [i_6] [i_6])) ? (((/* implicit */int) arr_30 [i_5] [i_5])) : (((/* implicit */int) var_5))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            arr_43 [i_5] [(short)2] [i_11] |= ((/* implicit */signed char) arr_24 [i_5] [i_11]);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (arr_1 [i_5] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            var_22 &= ((/* implicit */unsigned short) ((var_9) & (arr_7 [i_11] [i_11] [i_11] [i_11] [i_5] [i_5])));
        }
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            arr_49 [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (arr_46 [i_12] [i_13] [i_13])))) ? ((~(((/* implicit */int) var_12)))) : (min((((/* implicit */int) var_11)), (var_1)))))) ? (arr_45 [i_13] [i_13]) : (((/* implicit */long long int) arr_46 [i_12] [i_12] [i_12]))));
            var_23 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (((+(((/* implicit */int) arr_44 [i_12])))) >= (((var_3) ? (((/* implicit */int) arr_48 [i_12] [i_12])) : (arr_46 [i_12] [i_13] [i_13]))))))));
            var_24 ^= ((/* implicit */unsigned char) (~(min((arr_45 [i_12] [i_13]), (min((((/* implicit */long long int) (_Bool)1)), (var_9)))))));
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (unsigned char i_15 = 4; i_15 < 24; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) -262144);
                            var_26 = ((/* implicit */signed char) var_12);
                            arr_58 [i_12] [i_13] [i_12] [i_15 + 1] [i_13] [i_16] [i_16] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65513)))), (-1))), (-67741581)));
                            arr_59 [i_12] [i_12] [i_14] [i_14] [i_16] = ((/* implicit */long long int) min((max((arr_53 [i_15 - 3] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_15 + 1]), (((/* implicit */unsigned char) arr_44 [i_15 + 1])))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))));
                            arr_60 [i_12] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_51 [i_15 - 3] [i_15 + 1] [i_15 - 3] [i_15 - 2]) : (((/* implicit */unsigned long long int) arr_54 [i_16] [i_15] [i_14] [i_13] [i_12] [i_12] [i_12]))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_63 [i_12] [i_12] [i_17] = ((/* implicit */int) arr_61 [18] [18] [i_17]);
            var_27 = (!((!(((((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_12] [i_17])) && (((/* implicit */_Bool) arr_46 [i_12] [(unsigned short)1] [(unsigned char)7])))))));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_12))));
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_53 [i_12] [i_12] [i_12] [i_12] [i_17] [i_17])) ? (arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_56 [i_12] [i_12] [i_12] [i_12])))))))));
        }
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_44 [i_12]))));
    }
    var_31 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((var_4), (((/* implicit */unsigned long long int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) 
    {
        for (unsigned short i_19 = 1; i_19 < 14; i_19 += 4) 
        {
            {
                arr_70 [i_18] [i_19] = ((/* implicit */unsigned char) min((min((-3), (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_19 + 2] [i_19 - 1] [i_19 + 4] [i_19 - 1] [i_19] [i_19])))))));
                arr_71 [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                arr_72 [i_19] [i_19] = ((/* implicit */int) (-(((5862575771283562269LL) & (min((((/* implicit */long long int) -67741604)), (-5862575771283562269LL)))))));
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_52 [(unsigned short)21] [i_19] [i_18] [i_19] [i_20] [i_20]), (((/* implicit */unsigned int) arr_73 [i_19] [i_19] [i_19]))))), ((+(var_4)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)56)))))))))));
                    var_33 = ((/* implicit */unsigned char) ((signed char) (((!(arr_0 [i_19] [i_19]))) || (((/* implicit */_Bool) ((long long int) var_12))))));
                }
                arr_76 [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((var_10) / (((/* implicit */int) arr_61 [i_18] [i_18] [i_18]))))))) ? (max((((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_44 [i_18])))), (max((arr_73 [i_19] [i_19] [i_19]), (((/* implicit */int) arr_0 [i_18] [i_19])))))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_48 [i_18] [i_19]))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) min((var_34), ((((~(var_2))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (var_1))))))))))));
}
