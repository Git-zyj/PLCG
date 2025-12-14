/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131846
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
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1023))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)87)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (short)16278))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_7 [i_3]))) >> ((((~(2302482196U))) - (1992485077U)))));
                            var_19 = ((/* implicit */unsigned int) arr_4 [i_3 + 1]);
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)1010)) ? (arr_14 [i_4] [i_4] [i_3] [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 + 1] [i_2])))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */int) arr_9 [i_5] [i_3 - 3] [i_2] [i_1] [i_0]);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1024)))))));
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_3] [i_2] [i_3]))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_1] [8LL] [i_3 - 1] [i_5] [8LL] [i_3 + 1])) >> (((((/* implicit */int) var_7)) + (22359)))));
                        }
                        var_24 |= ((/* implicit */signed char) var_3);
                        var_25 = arr_3 [i_0];
                        var_26 = ((/* implicit */long long int) (+(arr_14 [i_3] [i_3] [i_3 - 4] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 4; i_6 < 11; i_6 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (arr_13 [(unsigned char)0] [i_6] [i_6] [i_6 + 2] [i_6 - 3] [i_6] [(unsigned char)0])));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))) : (arr_0 [i_7]))), (((/* implicit */long long int) (short)9645)))))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) (-(arr_2 [i_6] [i_6])));
                                var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7154)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_10 + 1] [i_7] [i_6]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 ^= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-27))));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_12 = 4; i_12 < 18; i_12 += 4) 
        {
            var_32 |= ((/* implicit */unsigned char) min((2726948502U), (2818252764U)));
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                for (int i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            arr_45 [i_11] [i_11] = ((/* implicit */unsigned short) (+(-2138405460)));
                            var_33 += ((/* implicit */int) (signed char)0);
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((arr_30 [i_11 - 1]) ? (((/* implicit */int) (unsigned short)1000)) : (((/* implicit */int) arr_30 [i_11 - 1])))) < (((/* implicit */int) arr_30 [i_11 - 1])))))));
                        }
                    } 
                } 
            } 
            var_35 *= ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (_Bool)1))))))));
            arr_46 [i_12] [i_12] |= (!(((/* implicit */_Bool) (short)-30001)));
        }
        for (long long int i_16 = 1; i_16 < 18; i_16 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
            {
                arr_53 [i_11] [i_16] [i_11] = ((/* implicit */int) arr_52 [i_11]);
                arr_54 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44347))) & (((((/* implicit */_Bool) arr_51 [i_11 - 1] [i_11 - 1] [i_16 + 1])) ? (arr_51 [i_11 - 1] [i_11 - 1] [i_16 - 1]) : (arr_51 [i_11 - 1] [i_11 - 1] [i_16 + 1])))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_5)))) != (((/* implicit */int) arr_33 [(signed char)14])))))));
            }
            /* vectorizable */
            for (signed char i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) ((long long int) (short)10826));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_61 [i_11] [i_11] [i_18] [(unsigned short)12] [i_11] = ((/* implicit */long long int) (~(var_13)));
                            var_38 |= ((/* implicit */long long int) arr_30 [i_18]);
                            arr_62 [i_11] [i_19] [i_18] [i_16] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (signed char i_21 = 0; i_21 < 19; i_21 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_22 = 1; i_22 < 17; i_22 += 2) 
                {
                    for (int i_23 = 1; i_23 < 18; i_23 += 1) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned long long int) (~(((arr_34 [i_11 - 1] [(unsigned short)10] [i_22 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11 - 1])))))));
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) == (2302482196U))))));
                            var_41 = ((((/* implicit */_Bool) max(((+(856219103U))), (((/* implicit */unsigned int) ((arr_39 [i_11] [i_16] [i_21]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_11] [i_11])))))) : ((~(((((/* implicit */_Bool) 288221580058689536ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_11] [i_11] [9] [i_11]))) : (-9114238305784767925LL))))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (-(((/* implicit */int) ((short) (-(((/* implicit */int) (short)-9646)))))))))));
                        }
                    } 
                } 
                var_43 ^= ((/* implicit */unsigned short) arr_43 [i_11] [8LL] [i_16] [i_16] [(signed char)2] [i_11]);
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (signed char)-13))));
                arr_70 [i_11] [i_11] = ((/* implicit */_Bool) var_13);
                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (unsigned char)228))));
            }
            for (signed char i_24 = 0; i_24 < 19; i_24 += 3) /* same iter space */
            {
                var_46 -= ((/* implicit */long long int) max((((short) (unsigned short)32821)), (((/* implicit */short) arr_43 [i_24] [(short)10] [(short)10] [i_16] [i_11 - 1] [i_24]))));
                var_47 |= (!((_Bool)1));
            }
            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (~((-(2461819336865939698LL))))))));
            var_49 ^= (-(max((1706884841U), (((/* implicit */unsigned int) (_Bool)1)))));
        }
        arr_73 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)4095)))), ((!(((/* implicit */_Bool) var_7)))))))) < (max((((/* implicit */unsigned int) arr_69 [i_11] [i_11] [i_11] [i_11 - 1] [i_11] [i_11])), (1124828024U)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_25 = 0; i_25 < 19; i_25 += 3) 
        {
            var_50 = ((/* implicit */unsigned int) 17664545601059297100ULL);
            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) arr_68 [i_11] [i_11] [i_11] [i_11]))));
            arr_77 [(_Bool)1] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_76 [(short)8] [(short)8]))));
        }
        for (unsigned int i_26 = 0; i_26 < 19; i_26 += 2) 
        {
            var_52 = 2531027676244712251ULL;
            var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) (-(67108848))))));
            var_54 |= ((/* implicit */unsigned int) (((!(arr_48 [i_26] [(signed char)6] [i_26]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_11 - 1] [i_11] [i_26] [i_11 - 1] [i_26] [i_11] [i_11]))))) : (arr_59 [i_11 - 1] [0] [i_26] [i_11 - 1] [i_26] [i_11] [i_11])));
        }
        for (long long int i_27 = 0; i_27 < 19; i_27 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_28 = 0; i_28 < 19; i_28 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_29 = 2; i_29 < 17; i_29 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 0; i_30 < 19; i_30 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned short) var_13);
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2461819336865939698LL)));
                    }
                    arr_90 [i_11] [i_11] [i_28] [i_29] [i_11] [i_29] = ((arr_78 [(unsigned short)3]) + (max((((/* implicit */unsigned int) (signed char)75)), (4294967286U))));
                    var_57 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_36 [i_11 - 1] [i_29 + 2])))));
                    var_58 = (i_11 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_80 [i_11])) << ((((-(arr_63 [i_11] [i_11]))) - (4136895701U)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_80 [i_11])) << ((((((-(arr_63 [i_11] [i_11]))) - (4136895701U))) - (579116650U))))));
                }
                /* vectorizable */
                for (unsigned char i_31 = 0; i_31 < 19; i_31 += 3) 
                {
                    var_59 = ((/* implicit */unsigned int) arr_41 [i_31] [i_31] [i_28] [i_27] [i_11]);
                    arr_93 [6LL] [i_28] [i_11] [i_11] [i_27] [16] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2302482196U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1010)))));
                    var_60 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_92 [i_11] [i_28] [i_28] [i_31])) ? (((/* implicit */int) (unsigned short)58896)) : (((/* implicit */int) (unsigned short)43353))))) * (arr_63 [i_27] [i_27])));
                }
                /* LoopSeq 1 */
                for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) 
                {
                    var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) -2461819336865939674LL))));
                    var_62 |= ((/* implicit */unsigned long long int) 2461819336865939723LL);
                }
                var_63 = (unsigned short)1023;
            }
            for (unsigned long long int i_33 = 2; i_33 < 15; i_33 += 3) 
            {
                var_64 = ((/* implicit */unsigned short) max((var_64), (((/* implicit */unsigned short) var_5))));
                var_65 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 3171872897U)) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_6)))))) + (2147483647))) << (((32752U) - (32752U)))));
            }
            var_66 = ((/* implicit */unsigned int) max((var_66), (1123094386U)));
        }
        arr_98 [i_11] = ((/* implicit */unsigned short) var_14);
    }
    /* LoopSeq 2 */
    for (long long int i_34 = 2; i_34 < 15; i_34 += 2) 
    {
        var_67 = ((/* implicit */unsigned int) min((var_67), (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_83 [i_34] [i_34] [i_34]) == (((/* implicit */int) arr_58 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34]))))))))));
        var_68 = ((/* implicit */unsigned char) (+((+(arr_51 [i_34 - 1] [i_34 + 1] [i_34 - 1])))));
    }
    for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 4) 
    {
        arr_104 [i_35] [i_35] = ((/* implicit */_Bool) -8767558513938431428LL);
        var_69 += ((/* implicit */unsigned int) ((unsigned long long int) (~(4102215277U))));
        var_70 = ((/* implicit */unsigned long long int) var_9);
        var_71 = ((/* implicit */short) max((var_71), (((/* implicit */short) ((((/* implicit */long long int) 2534486791U)) == (arr_67 [i_35] [i_35]))))));
        var_72 = arr_14 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35] [i_35];
    }
}
