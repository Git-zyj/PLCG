/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11748
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
    var_18 = ((/* implicit */_Bool) var_1);
    var_19 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (var_16)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 532676608))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 - 2] [i_2])), (var_15)))) || (((/* implicit */_Bool) ((signed char) ((int) arr_4 [i_1] [i_0]))))));
                    arr_8 [i_0] [i_1 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) var_12)) / (arr_5 [i_1 - 2] [i_1 - 2]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), ((~(arr_5 [i_2] [i_2])))));
                        arr_12 [i_0] = (_Bool)1;
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_16 [i_4] [i_1] [(short)4] [(unsigned short)9] [i_0] [i_1] = ((/* implicit */long long int) ((var_16) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)31338)), (1620134782))))));
                        var_23 -= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_1] [i_2 - 2] [0U] [(unsigned char)9] [i_4]), (((/* implicit */unsigned int) var_5))))), (max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1 + 1])), (var_11))))) / (((((((/* implicit */int) arr_3 [(unsigned char)0] [i_1])) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_17 [i_2 - 1] [i_4] [i_2 - 1] [14] [i_0])));
                            var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (18014398241046528ULL));
                            var_25 -= ((/* implicit */unsigned short) var_13);
                            var_26 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((var_5) || (((/* implicit */_Bool) arr_11 [i_2] [i_4] [i_2] [i_1 + 1] [i_2])))) || ((!(((/* implicit */_Bool) var_4))))))), ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_18 [i_0] [i_1] [i_2] [i_0] [i_5])))));
                            var_27 = ((/* implicit */unsigned long long int) ((int) max((arr_11 [i_0] [i_4] [i_4] [i_2 + 1] [i_0]), (arr_11 [i_0] [i_4] [i_4] [i_2 + 1] [i_0]))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [i_1 - 2] [i_1 - 2] [(short)4] [i_1 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)1)), (95136952)))), (((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) : (135291469824ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) 95136935));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_14))));
                            arr_25 [i_6] [i_4] [i_6] [i_1] [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_4] [i_6] [i_0])), (((((/* implicit */int) (signed char)31)) & (((/* implicit */int) var_14))))));
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((((-1620134797) != (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_22 [i_0] [i_0] [(unsigned char)9] [i_1 - 1] [i_0]) : (var_11))) << ((((~(((/* implicit */int) arr_21 [i_0])))) + (14273)))))) : (((/* implicit */_Bool) ((((((-1620134797) != (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_22 [i_0] [i_0] [(unsigned char)9] [i_1 - 1] [i_0]) : (var_11))) << ((((((~(((/* implicit */int) arr_21 [i_0])))) + (14273))) - (44102))))));
                            var_29 = ((/* implicit */int) max((var_29), (min((((/* implicit */int) max((((/* implicit */unsigned short) ((arr_17 [9U] [i_1] [i_1 - 2] [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [16LL] [4] [4] [16LL] [i_1])))))), (((unsigned short) arr_22 [i_0] [i_2] [i_2] [i_0] [i_0]))))), (arr_7 [i_2 - 2] [i_2 - 1])))));
                            arr_31 [i_0] [i_0] [i_1 - 1] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (signed char)-99)), (((((/* implicit */unsigned long long int) var_4)) - (18446744073709551594ULL)))))));
                        }
                        for (short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            var_30 -= min((1257989665), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_16)))))));
                            arr_35 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) 790718831);
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_2), (arr_4 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (arr_0 [i_0] [i_1])))) : (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [(unsigned short)18] [i_0] [i_0])), (arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_9]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_39 [i_0] [i_0] [i_0] [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_2 [i_1] [i_2] [(unsigned char)14]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)34197))))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_10])) ? (arr_17 [i_10] [i_1] [i_10] [i_11] [i_0]) : (((/* implicit */unsigned int) 1734554871))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))) + (var_11)))));
                        var_33 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_1 - 1] [i_1 - 2] [i_10] [i_1 - 1] [i_11]))));
                        var_34 = ((/* implicit */_Bool) max((var_34), (var_3)));
                    }
                    arr_46 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_41 [i_0])) <= (((/* implicit */int) arr_27 [i_0] [i_0] [i_1 - 1] [i_10] [i_10])))))) != ((+(775549377U)))));
                    arr_47 [i_0] [i_1] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_10])) ? (((int) var_9)) : (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0])))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((arr_50 [(unsigned char)12] [i_1]), (((/* implicit */unsigned short) arr_40 [i_0] [i_1] [i_12]))))))))))));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) -1)), (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_44 [i_0] [i_1 - 2])), (var_1))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 536870911ULL)))))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) var_1)), (min((14984159152740928560ULL), (((/* implicit */unsigned long long int) var_5))))))))));
                        var_39 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (+(min((1620134776), (((/* implicit */int) (unsigned short)6713))))))), (arr_19 [i_1 - 2])));
                        var_40 &= ((/* implicit */int) min((((/* implicit */unsigned int) min(((short)-12780), ((short)14336)))), (max((min((((/* implicit */unsigned int) var_7)), (arr_45 [i_1 + 1] [i_12]))), (((/* implicit */unsigned int) ((int) arr_22 [i_13] [i_1] [i_0] [i_1] [i_0])))))));
                        var_41 ^= ((/* implicit */unsigned short) arr_15 [i_0]);
                    }
                    for (unsigned short i_14 = 4; i_14 < 15; i_14 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) arr_36 [i_14] [i_14] [i_12] [i_1] [i_0]))));
                        var_43 *= ((/* implicit */signed char) var_0);
                        arr_57 [i_0] [i_1 - 2] [i_12] [i_0] = ((/* implicit */int) max((max((((var_15) ^ (var_11))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) var_12))))));
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 628545459)) ? (660342874) : (((/* implicit */int) arr_37 [i_0] [i_1] [i_1] [i_1]))))) * (((15219095616825830421ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1])))))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 17; i_15 += 1) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((short) max((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_37 [i_0] [i_12] [i_0] [i_15])))), (((/* implicit */int) ((unsigned char) var_9)))))))));
                        arr_62 [i_0] [i_0] [i_0] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_22 [i_15] [i_0] [i_12] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_5))))) && (((/* implicit */_Bool) var_17))));
                        var_46 = ((/* implicit */unsigned long long int) -628545458);
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_12] [i_16] [i_16]))));
                        var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_17 = 1; i_17 < 18; i_17 += 4) 
                        {
                            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_12] [i_17 - 1] [i_17 + 1] [i_17] [i_17])))))));
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_33 [i_1 - 1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_27 [i_0] [i_1 - 2] [i_0] [(signed char)7] [i_17 + 1]))))))));
                        }
                        for (int i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                            var_52 -= (+(((arr_66 [i_0] [i_1 - 1] [i_12] [i_16] [i_16]) ? (var_15) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_12] [i_16] [2ULL] [(_Bool)1])))));
                            var_53 = ((/* implicit */unsigned long long int) (signed char)3);
                        }
                        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            var_54 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_0] [i_1 - 1])) ^ (((/* implicit */int) arr_44 [i_12] [i_1 - 2]))));
                            var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_0] [i_1 - 2])) | (arr_29 [i_0] [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_12])));
                        }
                    }
                    var_56 -= ((/* implicit */unsigned short) (signed char)45);
                }
                var_57 = ((/* implicit */int) (-(arr_48 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 1])));
            }
        } 
    } 
}
