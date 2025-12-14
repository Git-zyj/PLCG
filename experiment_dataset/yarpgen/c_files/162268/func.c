/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162268
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
    var_16 = ((/* implicit */unsigned int) var_14);
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0 + 1]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(min((arr_3 [i_0] [(short)11]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) var_13))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_7 [i_2]))));
                    arr_15 [i_2] [1U] [i_4] = ((/* implicit */unsigned long long int) var_9);
                }
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) arr_10 [i_5] [i_1]);
                    arr_18 [i_1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) ((short) arr_9 [i_2] [i_3] [i_5]))) : (((/* implicit */int) arr_17 [(unsigned char)3] [(unsigned char)3] [i_3] [3]))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_6])) ? (arr_9 [i_1] [i_2] [i_3]) : (arr_9 [i_1] [i_2] [i_3])));
                    var_23 = ((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_1] [(unsigned char)14] [17ULL]);
                    arr_22 [i_1] [i_2] [i_3] [11LL] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_8)))));
                    var_24 = ((unsigned int) ((((/* implicit */_Bool) 7LL)) ? (arr_16 [13ULL] [i_2] [13ULL] [i_3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((short) arr_7 [i_1]));
                    var_26 = arr_9 [i_1] [i_2] [i_3];
                }
                for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 4) 
                {
                    var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) 4015794652U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30481))) : (arr_19 [i_1] [i_1] [i_2] [i_2] [i_3] [i_8])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_11 [i_3] [i_9]))))))));
                        var_29 = ((/* implicit */int) ((unsigned int) arr_29 [i_9] [i_9 - 2] [i_9 + 2] [i_9] [i_9] [i_9 + 2]));
                    }
                }
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) arr_8 [(short)10] [(short)10]);
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((arr_19 [i_1] [(unsigned char)13] [i_3] [i_10] [i_10] [(unsigned char)1]) >= (((/* implicit */unsigned int) arr_31 [i_11] [i_10] [i_1])))) ? ((+(arr_8 [i_2] [(unsigned char)0]))) : (((/* implicit */unsigned int) ((arr_7 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_10] [(unsigned char)1])))))));
                            var_32 -= (~(((unsigned int) arr_27 [i_1] [i_1] [(unsigned short)0] [i_1] [i_1])));
                            arr_38 [i_1] [i_1] [i_3] [(short)1] [i_11] = ((/* implicit */unsigned int) ((unsigned char) arr_9 [i_11] [i_3] [(unsigned char)16]));
                            var_33 = ((/* implicit */long long int) arr_8 [3LL] [i_3]);
                        }
                    } 
                } 
            }
            for (short i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_32 [i_1] [i_1] [i_1] [i_1])) : (arr_14 [i_1] [i_2] [i_2] [i_12] [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_12] [i_2]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37227))) : (arr_40 [(unsigned char)7] [(_Bool)1] [i_1] [i_1]))))))));
                arr_41 [i_1] [i_12] [i_12] = ((_Bool) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_2] [(_Bool)1] [i_12]))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        var_35 -= ((/* implicit */unsigned char) var_6);
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) (_Bool)1))))));
                        arr_47 [i_12] = ((/* implicit */_Bool) -9200085137642053510LL);
                    }
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_19 [i_13 + 3] [i_13] [i_13 + 3] [i_13] [i_13 - 1] [i_13 - 1]) : (arr_19 [i_13 + 3] [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_13 + 1]))))));
                }
            }
            for (short i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
            {
                arr_51 [i_1] [i_15] [14U] = ((/* implicit */long long int) var_4);
                var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_45 [i_1] [i_1] [10U] [i_15] [i_15]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 3) 
                {
                    var_39 = ((/* implicit */unsigned int) ((int) arr_26 [i_16] [i_16 - 1] [i_1] [(short)12]));
                    var_40 = ((/* implicit */int) arr_44 [i_15] [i_15] [i_2] [i_2] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((unsigned short) arr_55 [i_1] [i_1] [i_2] [i_15] [i_15] [i_16 + 1] [i_17]));
                        var_42 = (((!(((/* implicit */_Bool) arr_50 [i_2] [i_15] [i_16] [i_17])))) || (((((/* implicit */_Bool) 2582902359780969212ULL)) && (((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_2] [i_2] [i_16] [i_2])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) arr_21 [i_18] [i_1]))));
                        arr_62 [1ULL] [i_15] [i_15] [i_15] [1ULL] = ((/* implicit */long long int) (+(arr_13 [i_16 + 2] [i_16 + 2] [i_16] [i_16 + 3] [i_16])));
                    }
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) arr_9 [i_19] [i_16] [i_15]))));
                        arr_67 [i_15] [i_16 + 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_16 + 1])))));
                        arr_68 [i_15] [i_2] [i_15] [i_16] [i_19] = ((/* implicit */unsigned int) arr_17 [i_19] [i_15] [i_1] [i_1]);
                        arr_69 [i_1] [i_2] [i_15] [i_16] [i_19] = ((/* implicit */long long int) arr_26 [i_16 + 3] [i_19] [i_19] [i_19]);
                    }
                    for (unsigned int i_20 = 3; i_20 < 17; i_20 += 4) 
                    {
                        var_45 = ((/* implicit */long long int) max((var_45), (var_3)));
                        arr_73 [14U] [i_15] [i_15] [i_16 - 1] [i_20 - 3] [(unsigned char)17] [i_16] = var_15;
                    }
                    var_46 = ((/* implicit */unsigned int) var_10);
                }
            }
            for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2] [i_2])) ? (arr_13 [i_1] [i_1] [i_2] [(_Bool)1] [i_21]) : (arr_13 [i_1] [i_2] [i_1] [i_2] [i_21]))))));
                arr_76 [i_1] [i_1] [i_21] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_21])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_63 [i_1] [i_1] [(_Bool)1] [i_1] [i_2] [i_21]))));
                var_48 ^= ((/* implicit */long long int) ((_Bool) arr_57 [i_1] [i_2] [i_2] [i_21] [i_21] [i_2] [i_21]));
            }
            arr_77 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_1] [(_Bool)1]))) : (var_14)));
        }
        for (unsigned char i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            var_49 = ((unsigned int) 9746865088408361994ULL);
            arr_82 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_60 [i_1] [i_1] [i_1] [i_1] [8U] [12LL]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_22] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_5)) ? (arr_52 [i_1] [i_22] [i_1] [i_1] [i_1] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_22] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))) : (var_4)));
            var_50 = ((/* implicit */_Bool) var_0);
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((_Bool) var_4)) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (var_5)))) : (-9200085137642053510LL)));
        }
        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) var_1))))) ? (((924693559U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))) : (arr_9 [i_1] [i_1] [i_1]))))));
        arr_83 [i_1] = ((/* implicit */long long int) ((_Bool) 924693567U));
    }
    /* vectorizable */
    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
    {
        arr_87 [i_23] = ((/* implicit */_Bool) ((arr_46 [i_23] [i_23]) ? (((/* implicit */int) arr_46 [i_23] [i_23])) : (((/* implicit */int) arr_46 [i_23] [i_23]))));
        arr_88 [i_23] [17] = ((/* implicit */_Bool) var_11);
    }
    for (unsigned int i_24 = 1; i_24 < 20; i_24 += 1) 
    {
        arr_91 [i_24] = ((/* implicit */unsigned long long int) (+(min((arr_90 [i_24 + 2] [i_24 + 1]), (arr_89 [i_24])))));
        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_90 [i_24] [i_24])) || (((/* implicit */_Bool) 9200085137642053510LL)))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)13234))) : (arr_90 [i_24 + 1] [0U]))))));
        arr_92 [i_24] = arr_89 [i_24];
    }
    var_54 = ((/* implicit */unsigned int) var_6);
}
