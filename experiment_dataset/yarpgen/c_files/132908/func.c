/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132908
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)34688)), (arr_4 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_8)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_4 [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) -6098108921677418299LL)) : (6297909267300840950ULL)))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_3 [i_0])))) || (((/* implicit */_Bool) arr_4 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                            var_22 = ((/* implicit */_Bool) arr_7 [i_3] [i_4]);
                            arr_15 [i_3] [i_1] = ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((((((/* implicit */long long int) arr_10 [i_4])) < (var_5))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 + 1] [i_3] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))) : (var_14)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_20 [(_Bool)1] [i_1] [i_1] [i_3] [i_5] [i_3] [i_1] = ((/* implicit */long long int) arr_0 [i_2] [i_5]);
                            arr_21 [i_3] = ((/* implicit */long long int) ((arr_8 [i_0] [i_1 - 4] [i_1] [(unsigned char)11]) <= (((/* implicit */long long int) 2147483642))));
                            arr_22 [i_0] [i_0] [i_3] [i_3] [(unsigned short)7] = ((/* implicit */unsigned short) ((short) (unsigned short)38894));
                        }
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) var_8)));
                            var_24 = ((((/* implicit */_Bool) var_6)) ? ((+(12148834806408710647ULL))) : (((/* implicit */unsigned long long int) arr_12 [i_3])));
                        }
                        arr_27 [i_3] [(unsigned char)3] = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) var_15)));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_8 [(short)4] [i_1] [i_2] [i_2]))));
                        var_26 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_19)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 9; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((unsigned long long int) ((((/* implicit */_Bool) -2147483642)) ? (-196957048) : (((/* implicit */int) (unsigned short)26065)))))));
                        arr_30 [i_0] [i_0] [(short)9] = ((/* implicit */_Bool) var_15);
                        var_28 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 1341803728)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))));
                        var_29 = ((/* implicit */int) (-(arr_18 [i_0] [i_1 - 1] [i_2 + 4] [i_7 - 2])));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)8128)) : (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) var_19))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -6886828517366967533LL)))) : (arr_25 [i_0] [i_1] [i_2] [i_0] [i_8] [i_7 + 2])));
                        }
                    }
                    for (unsigned short i_9 = 2; i_9 < 11; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_32 -= ((/* implicit */unsigned char) ((unsigned long long int) var_8));
                            var_33 = ((/* implicit */_Bool) max((var_33), ((!(((/* implicit */_Bool) (~(var_2))))))));
                        }
                        for (long long int i_11 = 2; i_11 < 8; i_11 += 2) 
                        {
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [7ULL] [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (var_4)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_11)))))) ? (var_0) : (((/* implicit */long long int) arr_10 [i_9]))));
                            var_35 -= ((/* implicit */unsigned char) ((_Bool) var_13));
                            arr_40 [i_0] [i_0] [i_1] [(short)0] [(_Bool)1] [i_9] [i_11 + 3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((long long int) arr_31 [i_0] [i_1] [2LL]))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) min(((+(arr_25 [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_9] [i_2 + 2] [(_Bool)0]))), (((/* implicit */long long int) var_13))));
                            arr_45 [i_9] [i_1] [1LL] [i_12] [i_12] [i_9] = ((/* implicit */unsigned long long int) var_17);
                            arr_46 [i_0] [i_0] [i_9] = (~(arr_7 [i_0] [i_1]));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            arr_49 [i_9] [i_2] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_9])) ? (((/* implicit */int) (unsigned short)12076)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (short)7889))))) ? (max((max((var_3), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_1] [i_2] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_9] [i_2] [(unsigned char)9] [i_13] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_1] [i_2 + 2] [i_9] [i_13]))) : (var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) & (arr_47 [i_0] [i_9] [i_2 + 3] [i_9] [i_9] [i_13]))))))))));
                            arr_50 [i_0] [i_0] [i_1] [10LL] [10LL] [i_9] = ((/* implicit */int) arr_33 [i_1] [i_2] [(_Bool)0] [i_9]);
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [10ULL] [i_0] [i_2] [i_9 - 1] [i_13] [i_9])) ? ((((!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (17108195344281911795ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (-1888867293194186246LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            arr_54 [i_9] [11ULL] [i_1 - 3] [i_1 - 3] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9636))) < (arr_0 [i_0] [i_14])))), (((unsigned short) -1671003950)))))));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_1 - 1] [i_2 - 1]))) : (min((((/* implicit */unsigned long long int) var_0)), (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_1))) && (((/* implicit */_Bool) ((unsigned short) var_4)))))))))));
                            var_38 = (((_Bool)1) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (short)-1)), ((-9223372036854775807LL - 1LL)))), (min((((/* implicit */long long int) (unsigned short)36286)), (arr_47 [i_0] [i_9] [i_2] [i_9] [i_14] [i_1])))))) : (((((((/* implicit */int) arr_35 [i_14] [i_9] [i_2 + 1] [(_Bool)1] [i_9] [11ULL])) == (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) 5997259976899417428LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (var_11))))));
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_1 + 1] [i_1 - 3] [i_2] [i_2] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))))));
                            var_40 = ((/* implicit */long long int) min((var_11), (((((/* implicit */_Bool) 17303112712281979789ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [(unsigned short)7] [(unsigned short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9] [i_9] [i_2 + 2] [i_2 - 1] [i_9 - 2] [i_14]))) : (var_17)))) : (127ULL)))));
                        }
                        arr_55 [i_0] |= ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1 + 1] [i_2] [i_1]);
                    }
                    var_41 &= ((/* implicit */unsigned char) ((long long int) arr_3 [i_1]));
                    arr_56 [i_0] [i_1] [i_2] [9] = ((/* implicit */short) (((((~(var_4))) + (9223372036854775807LL))) >> (((arr_47 [i_0] [i_0] [i_2] [i_2 + 3] [i_0] [i_2 + 1]) + (4231386160433685521LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            {
                                arr_63 [7LL] [i_1 - 2] [i_15] [i_15] [7LL] [i_15] = ((/* implicit */int) (unsigned char)0);
                                var_42 = ((/* implicit */unsigned char) 4348991462485458053LL);
                            }
                        } 
                    } 
                    arr_64 [i_0] [i_1 - 2] [i_2 + 2] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1719)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12791))) : (5492159586509763489LL)))), (max((((/* implicit */unsigned long long int) (unsigned short)49661)), (var_9))))), (((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */unsigned long long int) arr_7 [i_1 - 3] [i_2 + 2])))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_17 = 3; i_17 < 19; i_17 += 3) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                {
                    var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_17 - 2] [i_17 + 1])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_67 [i_17 - 2] [i_17 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((((/* implicit */_Bool) var_7)) ? (arr_67 [i_17 - 1] [i_17 - 3]) : (arr_67 [i_17 + 1] [i_17 - 1]))));
                    var_44 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)60711))));
                    arr_74 [i_17 - 1] [i_17] [i_19] [i_19] = ((/* implicit */unsigned short) arr_70 [i_19] [i_18]);
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */unsigned char) var_13);
}
