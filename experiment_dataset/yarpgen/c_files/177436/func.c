/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177436
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [10ULL] = ((short) arr_7 [i_0] [i_1]);
                        var_18 = ((/* implicit */short) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_17))))));
                        var_19 = ((/* implicit */long long int) arr_1 [i_2]);
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */unsigned int) ((986966565) - (((/* implicit */int) (unsigned char)153))));
            var_20 = ((/* implicit */unsigned int) var_5);
        }
        var_21 *= ((/* implicit */unsigned long long int) ((unsigned char) (-(((((/* implicit */int) var_1)) >> (((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
            arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */int) var_14)) << (((((/* implicit */int) arr_13 [i_5] [i_4])) - (105)))));
            var_23 += ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_4]));
            var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-28857)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_15 [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) arr_1 [i_4]);
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + (15891672479322902473ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_4] [i_6] [i_6] [(short)8]))))) : (1799824211288022866LL))))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((~(arr_5 [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_15))))))) : ((~(((((/* implicit */_Bool) 2147483647)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) - (9223372036854775807LL)))) : (15891672479322902473ULL)));
    }
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((int) var_0)) + (((/* implicit */int) var_11))))), ((+(18446744073709551615ULL)))));
        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32749))))), (((/* implicit */unsigned int) arr_22 [i_7]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        arr_34 [i_7] [i_8] [i_9] [(_Bool)1] [(short)3] = ((/* implicit */long long int) (_Bool)0);
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (min((((/* implicit */int) (unsigned char)78)), (2147483647))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                {
                    var_31 ^= ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_43 [i_11])), (var_7))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)15)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                arr_50 [i_11] [22LL] [(signed char)2] [i_11] [i_11] = ((/* implicit */_Bool) var_5);
                                var_32 |= ((/* implicit */unsigned int) (+(((/* implicit */int) min((var_10), (((/* implicit */short) var_16)))))));
                                var_33 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_46 [(signed char)9] [i_12] [(signed char)9] [i_14])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_41 [i_14])))), (((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) arr_48 [i_11] [i_11] [i_11] [i_11]))))) ? ((~(((/* implicit */int) var_13)))) : (arr_48 [i_12] [(unsigned char)5] [i_14] [i_15])))));
                                var_34 += (~((~(((/* implicit */int) ((signed char) arr_37 [i_11] [i_14]))))));
                                arr_51 [i_11] [i_11] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) arr_38 [i_15]);
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned char) ((((arr_38 [i_11]) / (arr_38 [i_11]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    /* LoopSeq 4 */
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        var_37 -= ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_49 [(short)14] [i_12] [i_13] [(short)14] [i_16])))), (((/* implicit */int) var_0))));
                        var_38 = ((/* implicit */signed char) var_17);
                        arr_56 [21LL] = max(((~(arr_35 [i_11] [i_16]))), (((/* implicit */unsigned long long int) var_3)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned int) var_0);
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */int) arr_43 [i_12])) | (var_2))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_13))))))));
                            var_42 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) var_1)), ((short)32763)))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_45 [i_11] [i_11] [i_18] [i_11] [(unsigned char)22] [i_18])))))));
                            var_43 -= ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) var_16)), (arr_60 [i_13] [4ULL] [i_13] [i_11] [i_11])))));
                            arr_61 [i_11] [i_12] [i_13] [15U] [i_11] [i_18] [i_18] = ((/* implicit */signed char) arr_40 [i_13] [i_18]);
                            arr_62 [i_16] = ((/* implicit */unsigned int) arr_35 [i_13] [i_13]);
                        }
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_44 += ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                            var_45 = ((/* implicit */unsigned char) var_17);
                        }
                        for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
                        {
                            var_46 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))));
                            var_47 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)249))));
                        }
                        arr_70 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) var_5);
                    }
                    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        var_48 += arr_53 [i_11] [i_11] [i_11];
                        arr_73 [i_11] [i_12] [i_12] [i_21] |= (!(((/* implicit */_Bool) (~(4294967295U)))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        arr_76 [i_11] [i_13] [i_12] [i_11] [i_11] = (unsigned char)0;
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (arr_52 [i_11] [i_12] [i_13] [i_11])))) ? (((/* implicit */int) arr_47 [i_11] [i_12] [i_12])) : (((/* implicit */int) arr_41 [i_11]))))) != (arr_60 [12ULL] [12ULL] [i_12] [i_13] [i_22])));
                        var_50 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_40 [i_13] [i_11]))) >= (((/* implicit */long long int) max((arr_46 [(unsigned char)3] [i_12] [i_12] [i_12]), (arr_46 [i_11] [i_12] [i_13] [i_13]))))));
                        arr_77 [i_11] [5U] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_11] [i_12] [i_12] [i_13] [i_13])) << (((((/* implicit */int) (signed char)(-127 - 1))) + (137)))))) ? (8608271310165635919LL) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (var_17))))))) : (((/* implicit */long long int) ((1584326624U) | (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned int) min((max((18446744073709551594ULL), (((/* implicit */unsigned long long int) arr_57 [i_11] [i_12] [i_12] [i_13] [i_22] [(_Bool)1] [i_23])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                            var_52 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)4))));
                            var_53 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_22]))) < ((+(arr_71 [i_22] [7LL] [i_12] [i_11]))));
                            var_54 *= ((/* implicit */unsigned char) min((((/* implicit */int) (short)-31228)), (-1922258450)));
                        }
                    }
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 2) 
                    {
                        arr_82 [(short)19] = ((/* implicit */int) ((((/* implicit */int) max((arr_79 [i_11] [1U] [i_13] [(short)16] [i_13] [i_24] [i_13]), (var_5)))) != (((((/* implicit */_Bool) arr_48 [i_11] [i_12] [i_13] [i_24])) ? (((/* implicit */int) arr_79 [i_13] [i_13] [i_13] [10LL] [i_13] [i_13] [i_13])) : (((/* implicit */int) var_3))))));
                        var_55 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((var_11), (((/* implicit */short) (signed char)-112))))))) ? (((/* implicit */int) arr_65 [i_13])) : (-2059157593)));
                    }
                }
            } 
        } 
        arr_83 [i_11] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_11), (((/* implicit */short) arr_75 [i_11] [i_11] [i_11] [i_11]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2904917416U))))) : ((~(((/* implicit */int) arr_41 [i_11])))))), (((int) 9868925501038629558ULL))));
    }
    var_56 |= var_5;
    var_57 = ((/* implicit */unsigned char) var_2);
}
