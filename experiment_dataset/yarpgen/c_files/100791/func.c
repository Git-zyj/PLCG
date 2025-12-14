/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100791
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
    var_13 = (((!(((/* implicit */_Bool) min((var_5), (((/* implicit */int) (signed char)127))))))) ? (var_5) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19998)) && ((!(((/* implicit */_Bool) (unsigned short)45538))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)45537))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3 + 2] [i_4] = min((((/* implicit */long long int) max(((unsigned short)21473), ((unsigned short)21452)))), (arr_1 [i_2 + 3] [i_4]));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_1] [i_3 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2 + 3] [i_1] [i_3 - 1]))))) > ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_3 + 2]))) : (arr_7 [i_2 + 3] [i_3 + 2]))))))));
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (max((((/* implicit */long long int) arr_4 [i_0])), (min((var_1), (var_7)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] |= ((/* implicit */int) var_8);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        arr_20 [i_5 - 1] [i_2] [i_0] [i_0] [(short)18] [i_0] = ((/* implicit */int) (unsigned short)511);
                        var_16 = ((/* implicit */int) var_7);
                    }
                    for (unsigned short i_6 = 3; i_6 < 23; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_1] [i_0] [i_6] = ((/* implicit */short) arr_3 [i_2 + 1]);
                        var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_6 + 1] [i_6] [i_6 - 3]) : (arr_11 [i_0] [19] [i_2] [i_6 - 1]))), (((/* implicit */long long int) (~(var_3))))));
                        arr_24 [i_0] = ((/* implicit */unsigned short) var_10);
                        arr_25 [i_0] [i_0] [i_2 + 3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6 - 3] [i_6] [i_6 + 1] [(signed char)14] [i_6 - 3])) ? (((/* implicit */long long int) arr_21 [i_6 + 1] [i_2 + 1])) : ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (3473482555996775502LL)))))));
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */int) (~(var_7)));
                            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 + 3]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            arr_30 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1] [i_2 + 3] [(signed char)1] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -768068760)) && (((/* implicit */_Bool) (short)-5557)))))) : ((~(arr_11 [i_0] [i_0] [i_2 + 1] [i_6 - 2])))));
                            arr_31 [i_2] [i_0] [i_2 + 1] [i_6 - 2] [i_8] [i_6] [i_8] = var_9;
                            arr_32 [i_8] [i_0] [2LL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (min((var_7), (arr_11 [i_0] [i_2 + 1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21471))))))));
                            arr_33 [i_0] [i_1] |= (unsigned short)45537;
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_6 - 1] [i_6 - 1]);
                            var_21 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (short i_10 = 1; i_10 < 23; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) var_0);
                            arr_41 [i_0] [i_0] [i_6 + 1] [i_1] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 809003838)) ? (max((max((16144710556576104262ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_6] [i_10 - 1] [i_0] [i_6])))), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_2 + 3] [i_2 + 3]), (arr_12 [i_2 - 1] [i_6])))))));
                            var_23 ^= ((/* implicit */unsigned short) arr_11 [i_1] [18] [18] [i_1]);
                        }
                    }
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [(signed char)17]))) : ((-(2305843009213693951ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (min((var_1), (((/* implicit */long long int) var_3)))))))));
                }
            } 
        } 
        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_11 = 1; i_11 < 11; i_11 += 3) 
    {
        arr_44 [i_11] [i_11] = ((/* implicit */long long int) min(((+(arr_42 [i_11 + 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0)))))));
        arr_45 [i_11] [i_11 - 1] = min((((/* implicit */short) ((var_12) < (((/* implicit */long long int) var_3))))), ((short)-32748));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) 
        {
            arr_49 [i_12] [i_12] [i_11 - 1] = ((/* implicit */signed char) var_6);
            arr_50 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45542)) ? (var_5) : (((/* implicit */int) var_4))));
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                arr_55 [i_12] [i_12 + 1] [i_12 + 1] [11LL] = ((/* implicit */_Bool) arr_54 [i_12] [i_13]);
                arr_56 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_12])) ? (arr_51 [i_12]) : (arr_51 [i_12])));
            }
            for (int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_11 [i_12] [i_12] [i_14] [8]) : (((/* implicit */long long int) var_10))));
                var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_11 + 1] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)20009))));
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    arr_63 [i_11] [i_12] [i_14] [i_15] [i_12] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_36 [i_11 - 1] [i_11 - 1] [i_12] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_14 [i_11 - 1] [i_11 + 1] [i_11 - 1] [10] [i_11 - 1] [i_12] [(signed char)9]))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (9436725378832698204ULL) : (((/* implicit */unsigned long long int) var_10))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        arr_66 [i_12] [i_15] [i_12 + 1] [i_12] = ((/* implicit */_Bool) (unsigned short)44064);
                        arr_67 [i_11] [i_11] [i_11 - 1] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 - 1] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_11] [i_12] [i_12] [i_12] [i_12 + 1] [i_14]))));
                    }
                    for (int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_40 [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11])))));
                        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        var_31 = ((/* implicit */_Bool) var_12);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) var_7);
                        var_33 = ((/* implicit */_Bool) (unsigned short)44059);
                        var_34 = var_3;
                    }
                }
                var_35 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_59 [i_11] [i_11] [i_14] [i_12]))))));
            }
            arr_73 [i_12] [1] = ((/* implicit */_Bool) (-(2427751475229742454ULL)));
        }
        arr_74 [i_11] [i_11 - 1] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_4)), (var_3)))));
        arr_75 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */long long int) max((max((arr_18 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1]), (arr_18 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) arr_64 [i_11 - 1] [i_11 - 1] [4] [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_64 [i_11 + 1] [i_11 - 1] [8] [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1])))))));
    }
    for (signed char i_19 = 3; i_19 < 18; i_19 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (max((((/* implicit */unsigned long long int) arr_78 [i_19 - 3] [i_19])), (var_0)))));
        var_37 = ((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_19] [i_19] [i_19] [i_19 - 2] [i_19 + 1] [i_19])), (min((((/* implicit */unsigned short) var_4)), ((unsigned short)45526)))));
    }
    for (signed char i_20 = 3; i_20 < 18; i_20 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21486))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_20 - 1] [i_21] [i_20 - 1] [i_20 + 1]))))) : (((((/* implicit */_Bool) arr_18 [i_20] [i_21 - 1] [i_20 - 3] [i_20 - 2])) ? (arr_18 [21U] [i_21 - 1] [21U] [i_20 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_39 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)44064)) : (((/* implicit */int) (_Bool)0))))), (var_0)));
            var_40 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (arr_77 [i_20])))) + (((arr_18 [i_20 - 2] [i_21 - 1] [i_21] [i_20 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
        }
        var_41 = ((/* implicit */unsigned long long int) var_5);
        arr_84 [i_20] = ((/* implicit */_Bool) var_11);
    }
    var_42 = ((/* implicit */int) max((var_42), (-788352575)));
}
