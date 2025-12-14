/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184074
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_12 ^= ((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_2] [i_2])), (((unsigned char) ((unsigned short) 3800083573806978415LL)))));
                        var_13 = ((/* implicit */long long int) arr_7 [i_0] [i_3] [i_2] [i_3]);
                        arr_8 [i_3] = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) max((((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_2] [i_3])), (var_3)))));
                        var_14 = ((/* implicit */unsigned int) ((((long long int) arr_6 [i_0] [i_3] [i_1] [5LL] [(short)10] [i_3])) == (((/* implicit */long long int) ((unsigned int) ((unsigned short) var_8))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        arr_13 [i_4] [(signed char)3] = ((/* implicit */unsigned char) ((unsigned short) (short)-21088));
                        var_15 ^= ((/* implicit */signed char) (+(var_2)));
                        arr_14 [i_0] [i_1] [i_4] [i_4 + 2] = ((/* implicit */int) ((arr_4 [i_0] [i_4 + 2] [i_4 + 2] [i_4 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4] [i_4 + 3])))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 ^= ((/* implicit */int) var_11);
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_2] [i_5] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)16109)))), (((/* implicit */int) ((signed char) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_0] [i_5] [(short)3] [i_1] [i_2] [i_5])))))) : (((/* implicit */int) (((_Bool)0) || (var_9))))));
                    }
                    arr_18 [i_0] [i_0] [(short)5] [i_2] = ((/* implicit */int) ((((/* implicit */int) max((arr_11 [i_2] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */short) arr_17 [i_0] [i_0] [(short)2] [i_2] [i_2]))))) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2]))));
                    arr_19 [i_1] [i_1] &= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0])), (((long long int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (long long int i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                {
                    arr_26 [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(var_4))), (((/* implicit */long long int) (~(arr_25 [i_6] [i_7] [i_8 + 1] [i_7]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_6] [i_7] [i_7])) ^ (arr_25 [i_8 - 1] [i_7] [i_6] [i_6])))))))));
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((8388607) ^ (arr_25 [i_7] [i_6] [i_8 - 1] [i_7]))), (arr_22 [i_6] [i_7])))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)64))))) ^ ((-(var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_23 [i_8] [i_7])))) << (((((((arr_25 [(_Bool)1] [i_7] [i_8] [i_6]) + (2147483647))) << (((((/* implicit */int) var_5)) - (50085))))) - (791372954))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) ((short) ((signed char) 3800083573806978415LL)))) : (((/* implicit */int) (signed char)-3))));
    var_20 = ((/* implicit */int) (~((~(((var_9) ? (var_1) : (var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_11 = 4; i_11 < 7; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                arr_38 [i_13] [i_13] [i_11] [i_12] = ((/* implicit */int) ((unsigned char) var_11));
                                var_21 ^= ((/* implicit */unsigned short) (short)27661);
                            }
                        } 
                    } 
                    arr_39 [i_9] = ((/* implicit */signed char) max((var_2), (max((((((/* implicit */_Bool) 2899412752U)) ? (((/* implicit */int) var_8)) : (var_2))), (min((((/* implicit */int) var_9)), (-1572463141)))))));
                    arr_40 [i_9] [i_10] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_11 + 3])) ? (arr_36 [i_9] [4U] [i_10] [i_11] [i_10]) : (arr_30 [i_9] [i_10] [i_9]))) | (min((arr_29 [i_9] [i_10]), (((/* implicit */long long int) var_3))))))) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_10] [i_10])) ? (((/* implicit */int) arr_17 [i_9] [i_11] [i_9] [i_9] [i_9])) : (arr_35 [i_9])))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_44 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (_Bool)1);
                    var_22 = ((/* implicit */unsigned short) max((-133252427), (((/* implicit */int) (short)18476))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    arr_47 [i_9] [i_10] [i_10] [i_15] = ((/* implicit */unsigned int) ((signed char) arr_32 [i_9] [i_10] [i_15]));
                    arr_48 [2] [i_10] [i_15] [i_9] = (((_Bool)1) ? (((((/* implicit */long long int) var_3)) & (-7244757587853161431LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3800083573806978415LL)))));
                    var_23 = ((/* implicit */_Bool) ((unsigned int) arr_42 [i_15] [i_10] [i_9]));
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) 
                    {
                        var_24 -= (((_Bool)1) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_51 [i_9] [i_10] [i_9] [i_16 - 1])) : (((/* implicit */int) arr_16 [i_9] [i_10] [i_16] [i_16 - 1])))) : (((/* implicit */int) (_Bool)1)));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_9] [i_10] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_1)) ? (arr_30 [i_10] [i_10] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10] [i_10] [i_15]))))))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) -7244757587853161431LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [i_9]))) : (var_1)))))));
                    }
                }
                arr_53 [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_21 [i_9])))) < (-2701562053453861076LL)))) / ((~(((int) (short)28511))))));
                /* LoopSeq 3 */
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    arr_58 [i_9] [i_10] [i_17] = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (((var_4) ^ (((/* implicit */long long int) 444086793U))))))));
                    arr_59 [i_9] [i_10] [i_17] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)174)), ((short)16595)));
                }
                for (signed char i_18 = 4; i_18 < 8; i_18 += 2) 
                {
                    var_27 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [(unsigned char)2] [i_9] [i_18] [i_9])), (var_10)))) ? (((long long int) ((long long int) arr_11 [i_9] [i_10] [i_10] [i_18 - 4] [i_18]))) : (((((arr_51 [(unsigned char)5] [i_10] [(unsigned char)5] [(unsigned char)5]) ? (arr_37 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_10] [i_9] [i_18] [i_18 - 3]))))) - (arr_29 [2] [i_10]))));
                    var_28 = ((/* implicit */signed char) 1917993288279999622LL);
                    arr_64 [i_9] [i_9] [i_18] [i_18 - 1] = var_6;
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_21 = 3; i_21 < 9; i_21 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_0 [i_9] [i_9]);
                            var_30 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((unsigned short) var_7))) * (((/* implicit */int) arr_72 [i_20 + 1] [i_10] [i_19] [i_19])))));
                            arr_74 [i_19] [i_10] [i_19] [i_20 + 1] = ((((/* implicit */_Bool) ((short) min((((/* implicit */short) arr_69 [i_9] [i_19] [i_19])), (arr_72 [i_9] [9] [i_19] [i_19]))))) ? (var_2) : (((/* implicit */int) arr_28 [i_20] [i_21])));
                            arr_75 [i_9] [i_10] [i_19] [i_19] [i_21 + 1] = ((/* implicit */unsigned int) ((short) arr_62 [i_10] [i_20] [i_10]));
                            arr_76 [i_19] = (+(max((var_6), (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)27661))))))));
                        }
                        for (signed char i_22 = 2; i_22 < 7; i_22 += 1) 
                        {
                            var_31 = ((/* implicit */_Bool) (+(var_6)));
                            var_32 = ((/* implicit */signed char) (+(min((min((((/* implicit */int) var_7)), (arr_54 [i_9] [i_10] [i_19] [i_19]))), (((/* implicit */int) ((signed char) var_5)))))));
                        }
                        for (unsigned short i_23 = 1; i_23 < 9; i_23 += 3) 
                        {
                            arr_82 [i_9] [i_10] [i_19] [i_20] [i_19] = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (arr_52 [(unsigned short)4] [(unsigned short)4] [i_9] [i_10])));
                            var_33 -= ((/* implicit */long long int) ((-1917993288279999622LL) == (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_20 + 1] [i_20 + 1] [i_23 - 1] [i_23 - 1])))));
                            var_34 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_9] [i_19]))))), (min((var_5), ((unsigned short)61194)))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_10] [i_19]))) : (arr_32 [i_20] [i_19] [i_10]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)193)))))))));
                        }
                        var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) arr_60 [i_9] [i_9] [i_19])) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_11)) ? (arr_70 [i_9] [i_10] [i_10] [i_19] [i_19] [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))))) : (((/* implicit */long long int) arr_54 [i_9] [i_19] [i_20 + 1] [i_20 + 1]))))));
                        var_36 = ((/* implicit */long long int) 1743215380U);
                    }
                    for (long long int i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        arr_86 [i_9] [i_9] [i_19] [i_19] = ((/* implicit */_Bool) ((signed char) ((_Bool) min((var_10), (((/* implicit */unsigned int) arr_16 [i_9] [i_10] [i_19] [i_24]))))));
                        var_37 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) arr_69 [i_19] [i_10] [i_19])), (arr_78 [i_9] [i_19] [i_10] [i_19] [i_24]))));
                    }
                    /* vectorizable */
                    for (int i_25 = 1; i_25 < 9; i_25 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) (~(1338683658U)));
                        /* LoopSeq 4 */
                        for (int i_26 = 1; i_26 < 7; i_26 += 3) 
                        {
                            arr_91 [9U] [i_10] [i_19] [i_10] [i_19] [i_26 + 2] = ((/* implicit */unsigned char) ((arr_29 [i_9] [i_26 + 2]) / ((~(-8238728918418609614LL)))));
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) * (1980705347239511022LL)))) ? (((/* implicit */int) var_8)) : (arr_88 [i_25] [i_25] [i_25] [4LL] [i_25 - 1] [i_19])));
                        }
                        for (unsigned short i_27 = 0; i_27 < 10; i_27 += 2) 
                        {
                            var_40 = arr_3 [i_25 - 1] [i_25 + 1];
                            var_41 = ((/* implicit */unsigned int) var_5);
                            var_42 = ((/* implicit */signed char) var_2);
                        }
                        for (long long int i_28 = 0; i_28 < 10; i_28 += 4) 
                        {
                            var_43 = ((/* implicit */long long int) ((unsigned int) arr_52 [i_25 - 1] [(signed char)4] [i_19] [i_25 + 1]));
                            arr_97 [(short)8] [i_10] [i_19] [i_25 + 1] [(short)8] [(_Bool)1] [i_10] = ((/* implicit */signed char) ((int) arr_12 [i_19] [i_25] [i_19] [i_25 - 1]));
                        }
                        for (unsigned int i_29 = 0; i_29 < 10; i_29 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned char) ((short) (_Bool)1));
                            var_45 = ((/* implicit */unsigned char) ((long long int) arr_65 [i_25 + 1]));
                            var_46 &= ((/* implicit */unsigned char) ((long long int) arr_34 [i_19] [i_9] [i_19] [i_19] [i_25 + 1]));
                        }
                        arr_101 [i_19] = ((/* implicit */unsigned int) arr_42 [i_10] [i_19] [i_25 - 1]);
                        var_47 = ((/* implicit */long long int) (_Bool)0);
                    }
                    arr_102 [i_9] [i_10] [i_19] = ((/* implicit */int) ((((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((_Bool) arr_68 [i_9] [i_19] [i_10] [i_19])))))) == (((long long int) min((((/* implicit */unsigned int) var_8)), (arr_78 [i_19] [i_19] [i_10] [i_19] [i_9]))))));
                    arr_103 [i_19] [i_19] = (-(((/* implicit */int) (_Bool)0)));
                    var_48 = ((/* implicit */short) max((min((((long long int) 3196724802U)), (((/* implicit */long long int) arr_45 [i_9] [i_10] [i_10] [i_19])))), (((/* implicit */long long int) arr_61 [i_19] [i_10] [i_9]))));
                }
                arr_104 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_10] [(_Bool)1] [i_9] [(_Bool)1] [i_9])) ? (2113929216U) : (arr_4 [i_9] [i_9] [i_10] [i_10])))), (max((arr_37 [i_9]), (((/* implicit */long long int) var_10))))))) ? (arr_95 [i_9] [(short)0] [i_10] [i_10] [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_99 [i_10] [i_9] [(unsigned short)0] [i_9] [i_9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))))));
            }
        } 
    } 
}
