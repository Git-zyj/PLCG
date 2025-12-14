/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18853
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) == ((((_Bool)1) ? (arr_5 [i_0] [7LL] [i_1]) : (arr_3 [10]))))) ? (((arr_1 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) arr_3 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1018))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -220509019)) && (((/* implicit */_Bool) 18ULL)))))))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), ((unsigned char)173)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (((arr_4 [i_2 + 1]) + (arr_4 [i_0])))))) ^ (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (237791321U) : (arr_4 [i_1])))) % (-1984074347199989726LL)))));
                            arr_12 [i_1] [i_1] [i_1] [i_1] = arr_7 [i_1] [i_2 - 1] [(signed char)19];
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 2] [i_2])) | (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [(short)10] [i_2] [i_2 - 2] [i_2 + 1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 2] [i_2])))))));
                            var_15 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ^ (arr_4 [i_0]))))))), (((long long int) ((((/* implicit */_Bool) var_1)) ? (arr_8 [(unsigned char)1]) : (var_5))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 4294967295U)))))) : (((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))))))));
                var_17 = ((/* implicit */unsigned int) 0);
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    var_18 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4]))) < (arr_5 [i_5] [i_6 - 1] [i_6 + 1]))))));
                    arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2968)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (arr_3 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-20772)) > (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [(unsigned char)8]))))))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) var_8)), (var_6))))) : (((/* implicit */int) (signed char)2))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 19U)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) % (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [(short)4] [i_4]))))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (var_1) : (((/* implicit */long long int) var_3)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 9; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((long long int) min((arr_5 [(signed char)8] [i_6 - 2] [i_8 + 1]), (((/* implicit */unsigned int) (unsigned char)254))))))));
                                var_21 *= ((/* implicit */int) min((0U), (((/* implicit */unsigned int) arr_24 [i_8] [i_7] [i_7] [i_6 - 1] [i_4] [i_4] [i_4]))));
                                var_22 = ((/* implicit */unsigned long long int) (~(arr_8 [i_6])));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(max((arr_7 [i_4] [i_4] [i_4]), (arr_5 [i_4] [i_5] [i_4]))))))));
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4])) & (((/* implicit */int) arr_0 [i_4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (1673395622U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_5]))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((min((1213909358117078278LL), (((/* implicit */long long int) 4294967288U)))) >> (((500475422U) - (500475375U)))))) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (10660394750283280621ULL))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) 2224645176U)), (arr_8 [4]))), (-7126080885007419387LL)))))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 10660394750283280605ULL))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)88))))))))));
                                arr_40 [i_4] [i_4] [(signed char)0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_12] [i_5] [i_10] [i_11] [i_4])) < (((/* implicit */int) arr_14 [i_4]))));
                                var_28 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 7126080885007419387LL)) ? (arr_16 [i_4]) : (((/* implicit */unsigned int) var_3)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 9; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) (_Bool)1);
                                var_30 |= ((/* implicit */signed char) (unsigned char)15);
                                var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (signed char)-83)) == (((/* implicit */int) (short)(-32767 - 1))))));
                                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_10 [i_16] [i_15] [(short)19] [i_5] [i_5] [i_4]))));
                                var_34 |= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_5] [i_5] [i_15 + 1]))) : (((((/* implicit */_Bool) arr_34 [i_4] [i_16])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_4]))))));
                                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_28 [i_16] [i_16] [i_4] [(short)8])))) < (((var_3) % (((/* implicit */int) arr_17 [i_15])))))))));
                                arr_51 [i_4] [i_15] [i_10] [i_15 - 1] [i_16] [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2455138401013233750LL)) ? ((~(1753574683100936543ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_16] [(short)7] [i_15 - 1] [(short)7] [6] [i_4])))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */long long int) ((int) arr_22 [i_4] [i_4] [i_10] [i_4] [i_4] [8U]));
                    arr_52 [i_4] [7ULL] [i_4] [i_4] |= arr_30 [i_5] [i_5] [i_10] [i_5];
                }
                arr_53 [i_4] = ((/* implicit */long long int) ((arr_4 [i_5]) > (((((/* implicit */_Bool) -1)) ? (arr_4 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5])))))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        {
                            var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_4] [i_5] [i_18]) == (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_5] [i_17] [3LL]))))))) == ((~(arr_27 [i_4] [i_5] [i_17])))));
                            /* LoopSeq 3 */
                            for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                            {
                                arr_62 [i_5] [i_19] [i_5] [(short)9] [i_4] [(short)9] = ((/* implicit */short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_6))), (((arr_39 [i_4] [i_5] [i_4] [i_18] [i_19]) ? (arr_55 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4] [i_4] [6ULL]))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_48 [i_4] [4LL] [i_5] [i_19]), (4294967295U))) < (max((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_17] [i_17])))))))));
                                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5052)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_58 [i_4] [i_4] [i_18] [i_19]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_59 [i_4] [i_5] [i_17] [i_18] [i_18] [i_19]), ((unsigned char)168))))) : (((((/* implicit */_Bool) arr_59 [i_19] [i_19] [i_17] [9U] [i_19] [i_19])) ? (arr_46 [i_4] [i_4] [i_17] [i_18] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_17] [i_17] [i_17] [i_17])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [9U] [i_5] [i_5] [i_17] [i_18] [5U])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_26 [i_18] [7U] [i_17] [i_17] [i_19]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (arr_30 [i_4] [i_5] [0ULL] [(unsigned char)3]))))))));
                            }
                            for (int i_20 = 3; i_20 < 9; i_20 += 2) 
                            {
                                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_4] [(_Bool)1] [i_17] [i_18] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13429004816446756987ULL)) ? (23U) : (4294967291U)))) ? ((+(arr_5 [i_4] [i_5] [i_20]))) : (((/* implicit */unsigned int) 356476770)))))))));
                                var_40 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -926798281010878540LL)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (var_0) : (var_0))))) : (((int) var_10))));
                                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_18])) ? (min((var_6), (((/* implicit */unsigned int) (_Bool)1)))) : (3087069113U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)13803)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(_Bool)1] [(_Bool)1] [(_Bool)1] [2] [(unsigned char)0] [(unsigned char)1]))) : (arr_5 [19] [i_5] [6U]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
                                var_42 = ((/* implicit */unsigned int) max((((/* implicit */short) var_7)), (((short) var_3))));
                            }
                            for (unsigned long long int i_21 = 4; i_21 < 6; i_21 += 2) 
                            {
                                arr_67 [i_4] [i_4] [i_17] [i_18] [i_21 - 3] = ((/* implicit */unsigned char) var_11);
                                arr_68 [i_21] [i_17] [i_17] [(signed char)0] [2U] = ((/* implicit */_Bool) min((((/* implicit */int) max((max(((unsigned char)6), (((/* implicit */unsigned char) arr_47 [i_5] [i_21])))), (((unsigned char) var_3))))), (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) 17814608169024346737ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-5)))) : (((/* implicit */int) var_9))))));
                                var_43 |= ((/* implicit */unsigned int) (~(arr_37 [i_4] [i_4] [i_17] [i_17] [i_21] [i_5] [i_4])));
                                var_44 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((arr_46 [i_4] [i_5] [i_17] [i_17] [i_4] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(short)2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_4] [i_4] [4LL] [i_4])))))) | (((((long long int) arr_0 [i_21])) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (5017739257262794628ULL)))))))));
                                arr_69 [i_4] [3LL] [i_4] |= (-(((/* implicit */int) arr_24 [i_18] [i_18] [i_17] [i_21 - 3] [(unsigned char)6] [i_4] [(unsigned char)6])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
