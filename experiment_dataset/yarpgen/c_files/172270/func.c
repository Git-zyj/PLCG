/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172270
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_18 *= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1 + 1])) + (((/* implicit */int) (short)-29050)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16496489165932492816ULL)) ? (arr_0 [1LL]) : (var_13))))));
                            var_20 = ((/* implicit */unsigned char) (short)-27454);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_21 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(var_14))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_5] [i_0]))) : (((((/* implicit */_Bool) 67100672LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (var_13)))));
                        var_23 &= ((/* implicit */unsigned char) arr_0 [i_2 + 2]);
                        var_24 = ((/* implicit */unsigned char) (+(arr_21 [i_1] [i_2] [i_2])));
                        var_25 = ((/* implicit */short) (-(arr_1 [i_0 + 1])));
                    }
                    var_26 = arr_20 [i_0] [i_0] [i_0] [i_0];
                }
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_27 = ((/* implicit */long long int) (short)-27454);
                    var_28 -= ((/* implicit */unsigned char) arr_2 [i_2 + 1] [i_1] [i_1]);
                    var_29 = arr_17 [i_7] [i_7] [i_1] [i_7];
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((-67100672LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2] [i_7])) - (71))))))));
                    var_31 = ((/* implicit */short) (unsigned char)250);
                }
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_32 = ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (arr_12 [i_0 - 1] [i_1] [i_2] [i_2] [i_8] [i_8]));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) (!(((var_14) && (((/* implicit */_Bool) var_2))))));
                        var_34 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_4 [i_0]))));
                    }
                    var_35 &= ((/* implicit */_Bool) var_11);
                }
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((_Bool) var_2));
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_0] [(unsigned char)1] [3LL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_0 [i_1 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        var_38 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_2 + 1] [i_2] [8LL] [i_0]))) ^ (arr_0 [i_1 + 1])));
                        var_39 = ((long long int) 4292870144LL);
                    }
                }
            }
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                var_40 = ((/* implicit */long long int) arr_10 [7LL] [i_1] [i_12] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_13 = 3; i_13 < 10; i_13 += 1) 
                {
                    for (long long int i_14 = 1; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_41 = 4292870144LL;
                            var_42 = ((/* implicit */_Bool) var_8);
                            var_43 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((6926918570125901926LL) ^ (-67100665LL))))) << (((max((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) (short)-27454)) + (2147483647))) >> (((/* implicit */int) var_14)))))) - (1073728095)))));
                            var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27471)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0])))))));
                            var_45 |= ((/* implicit */short) (unsigned char)5);
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) -1966205007431926738LL)) ? (arr_38 [i_1 - 1] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_0]))))))));
            }
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */short) min((arr_34 [i_0] [i_1] [i_15] [i_15] [i_0]), (((((/* implicit */_Bool) (unsigned char)29)) ? (67100672LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)248), ((unsigned char)156)))))))));
                            var_48 &= min((max((arr_21 [i_0] [i_0] [i_1 - 1]), (var_12))), (arr_21 [i_0 - 2] [i_0] [i_1 - 1]));
                            var_49 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_17 [i_15] [i_1 + 1] [i_0 + 1] [(unsigned char)2])) ^ (((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_0])))), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_50 = ((/* implicit */unsigned char) ((max((((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_11))))), (-2784210032758455152LL))) >= (((var_12) % (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1])))))));
        }
        /* vectorizable */
        for (long long int i_18 = 2; i_18 < 11; i_18 += 2) 
        {
            var_51 = ((/* implicit */short) (unsigned char)50);
            /* LoopSeq 2 */
            for (long long int i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                var_52 |= ((/* implicit */long long int) ((unsigned char) arr_50 [(short)0] [i_0 - 2] [i_0] [i_0 - 2] [i_18 + 2] [i_18] [i_18 + 2]));
                var_53 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) ^ (46963854434509533LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)129))))) : ((~(((/* implicit */int) (unsigned char)94))))));
            }
            for (short i_20 = 3; i_20 < 11; i_20 += 2) 
            {
                var_55 = ((_Bool) (_Bool)0);
                var_56 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5046811124566940125LL))))))));
            }
        }
        /* LoopSeq 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_57 = (unsigned char)0;
            /* LoopNest 3 */
            for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
            {
                for (long long int i_23 = 3; i_23 < 12; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        {
                            var_58 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) / (var_2)));
                            var_59 = ((/* implicit */short) arr_0 [i_0 - 2]);
                        }
                    } 
                } 
            } 
            var_60 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) || (((/* implicit */_Bool) 13354563199525221887ULL)))))));
            var_61 = (unsigned char)110;
        }
        for (unsigned char i_25 = 1; i_25 < 11; i_25 += 2) 
        {
            var_62 |= ((/* implicit */unsigned char) var_17);
            var_63 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_54 [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_26 = 2; i_26 < 23; i_26 += 3) 
    {
        for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 2) 
        {
            {
                var_64 = ((/* implicit */short) (unsigned char)215);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_28 = 0; i_28 < 25; i_28 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_29 = 1; i_29 < 23; i_29 += 1) 
                    {
                        var_65 = ((((/* implicit */_Bool) arr_85 [i_29 + 1] [i_29 + 2] [22LL] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (2380653444691718620LL));
                        var_66 = ((/* implicit */_Bool) 2172986733597511418LL);
                    }
                    for (long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned char) var_3);
                        var_68 = -1LL;
                        var_69 &= arr_90 [i_28] [i_28];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_31 = 1; i_31 < 24; i_31 += 2) 
                    {
                        for (long long int i_32 = 3; i_32 < 23; i_32 += 2) 
                        {
                            {
                                var_70 = ((/* implicit */_Bool) ((long long int) arr_88 [i_26] [i_26]));
                                var_71 -= ((/* implicit */_Bool) ((unsigned long long int) arr_88 [i_27] [i_32 - 1]));
                            }
                        } 
                    } 
                }
                var_72 ^= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (unsigned char)215)), (3951583276596615634LL))), (((/* implicit */long long int) arr_87 [i_26 - 1] [i_26 - 1]))));
            }
        } 
    } 
    var_73 -= var_3;
}
