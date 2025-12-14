/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124647
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
    var_12 = max((((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)152))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (-(min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) max((arr_1 [9LL]), (arr_1 [i_0])))) : (((-1) ^ (((/* implicit */int) (_Bool)0))))))));
        var_14 &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23119))))), (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = max((max((((/* implicit */unsigned int) var_1)), (max((var_4), (((/* implicit */unsigned int) (short)32767)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(unsigned char)8])) / (((((/* implicit */_Bool) (short)31014)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (_Bool)0))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~((-(max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (var_5)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_14 [i_1] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), (var_1)));
                    arr_15 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) max((8486566047999111232LL), (((/* implicit */long long int) var_2))))))));
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [10U] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))) : (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) arr_8 [i_3] [(unsigned short)6] [i_2])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_4]))))));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_18 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    arr_19 [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_8 [i_1] [i_3] [i_5])))), (((/* implicit */int) max((arr_8 [i_2] [i_3] [i_5]), (var_11))))));
                    var_16 &= ((/* implicit */unsigned int) var_10);
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_16 [i_2] [i_2] [i_2] [i_2]);
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_5] [i_3] [i_2])) ? (arr_11 [i_1] [i_3] [i_5] [i_6]) : (arr_11 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((int) arr_8 [i_2] [(_Bool)1] [i_2]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [(_Bool)1] [(_Bool)1])) && (arr_7 [i_1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_20 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_3] [i_1] [i_2] [i_1])) : (arr_12 [i_1] [i_1] [i_3] [i_5] [i_6] [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_7 [i_5]))));
                        var_19 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_8 [i_1] [i_2] [i_1]));
                        arr_27 [5U] [i_2] [i_3] [i_5] [(_Bool)1] = ((/* implicit */signed char) (-(arr_12 [(_Bool)1] [(_Bool)1] [i_3] [10U] [i_5] [i_7])));
                        arr_28 [i_1] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-17261))))));
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    arr_31 [i_1] &= ((/* implicit */unsigned char) (unsigned short)18092);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (arr_30 [i_1] [i_1] [(unsigned short)10] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_2])))));
                        arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((((/* implicit */_Bool) (+(((/* implicit */int) (short)15716))))) ? (5829063840489424330LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_11))))));
                    }
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        arr_38 [i_3] [i_10] [i_10] [i_3] = ((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))));
                        arr_39 [i_8] [(unsigned short)11] [i_8] [(unsigned short)11] [i_8] = ((/* implicit */unsigned int) var_0);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_21 &= ((/* implicit */unsigned char) ((arr_13 [i_1] [i_2] [i_3] [i_11]) ? (((/* implicit */int) arr_13 [i_1] [i_2] [1U] [i_1])) : (((/* implicit */int) arr_13 [i_11] [i_8] [i_2] [i_1]))));
                        var_22 = ((/* implicit */unsigned short) ((arr_41 [i_11] [i_8] [i_3] [i_2] [i_2] [i_1]) + (arr_33 [i_1] [i_2] [i_3] [i_8])));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_11] [i_8] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) 1973317625U)) : (arr_30 [i_1] [i_1] [i_3] [i_1])));
                    }
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((short) arr_21 [i_1] [i_2] [i_3] [i_1] [i_13])))));
                        arr_47 [i_1] [i_1] [i_13] [i_1] = ((unsigned int) ((unsigned short) var_3));
                    }
                    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) (~(var_9)))) : (((((/* implicit */_Bool) arr_34 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_2] [i_3] [i_12] [i_12] [i_1]))) : (arr_12 [i_1] [i_1] [i_2] [i_2] [i_3] [i_12])))));
                }
                arr_48 [i_1] [(short)12] [(unsigned short)12] = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_43 [(short)8] [i_2] [(short)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))) | ((~(((/* implicit */int) arr_7 [i_1]))))));
                arr_49 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_1] [i_2] [i_2] [i_3] [i_3]))))) ? (((/* implicit */int) (unsigned short)27157)) : ((-(((/* implicit */int) (signed char)-109))))));
                var_27 = ((/* implicit */unsigned int) min((var_27), ((~(max((((/* implicit */unsigned int) arr_32 [(_Bool)1] [i_3] [(unsigned short)5] [i_3] [i_2] [i_1] [i_1])), (0U)))))));
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~((+(arr_30 [i_14] [i_14] [i_14] [i_14]))))))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_1] [i_2] [(unsigned char)5])))))));
                var_30 = ((/* implicit */unsigned char) 9223372036854775807LL);
                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)76)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_14] [i_14] [i_2] [i_2] [i_1] [i_1])))));
            }
            for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                arr_57 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28672)) ? (-1LL) : (((/* implicit */long long int) 3561393704U))));
                var_32 -= ((/* implicit */unsigned short) ((((6587967107514583970LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_13 [9U] [i_15] [i_15] [i_15]) || (((/* implicit */_Bool) arr_29 [9LL] [i_2] [i_15]))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    arr_60 [i_1] [i_15] [i_15] [i_16] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_56 [i_1] [i_1] [9LL] [(signed char)9])) : (((/* implicit */int) var_8))))) ? (min((733573591U), (((/* implicit */unsigned int) arr_56 [i_1] [i_2] [5ULL] [i_16])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-105))) || (((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_2] [i_15] [i_16]))))) : ((-(((/* implicit */int) (_Bool)1))))));
                    arr_61 [i_1] [i_1] [i_1] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (min((((/* implicit */unsigned int) arr_36 [i_15] [i_15] [i_15])), (((((/* implicit */_Bool) 1896894574U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_1] [i_2] [i_15] [i_16]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60265)))));
                    arr_62 [i_16] = ((/* implicit */long long int) arr_43 [i_1] [i_1] [i_1]);
                }
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_25 [8U] [i_2] [i_15] [i_15] [i_15]))) ? ((-((~(((/* implicit */int) (short)2577)))))) : (min((((/* implicit */int) ((_Bool) arr_58 [i_1] [i_15] [i_18]))), ((+(((/* implicit */int) arr_46 [i_1] [i_1] [i_18]))))))));
                            var_34 ^= ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_29 [i_2] [i_17] [i_18]), (arr_29 [i_1] [i_1] [i_1]))))));
                            arr_67 [i_1] [i_18] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_1] [i_2] [i_17] [i_18])) / (((/* implicit */int) arr_37 [i_1] [i_2] [i_2] [i_17]))))) : ((-(var_4))));
                            arr_68 [i_1] [i_2] [i_2] [i_18] [i_15] [12U] [i_18] = ((/* implicit */_Bool) min((3561393704U), (234881024U)));
                            var_35 = ((/* implicit */short) var_11);
                        }
                    } 
                } 
            }
            var_36 += ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_2] [2LL]))) <= (var_9))))));
        }
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_20 [i_1] [(signed char)0] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((short) arr_25 [i_1] [i_1] [i_1] [3U] [i_1]))) : (((arr_24 [(short)7] [(short)7] [i_1] [i_1] [4U] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_56 [i_1] [(unsigned short)14] [i_1] [(unsigned short)13])))))), ((-(((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
        arr_69 [(signed char)9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_33 [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_1] [i_1])) ? (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_1] [(unsigned char)13] [i_1])))))));
    }
    /* LoopNest 3 */
    for (long long int i_19 = 0; i_19 < 15; i_19 += 1) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned short i_21 = 0; i_21 < 15; i_21 += 3) 
            {
                {
                    arr_78 [i_19] [i_20] [i_21] = ((((/* implicit */_Bool) arr_58 [i_19] [i_19] [(unsigned short)14])) ? (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) arr_5 [i_19] [i_19])) : (((/* implicit */int) arr_5 [i_19] [i_21])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1223812801U))))))));
                    var_38 = ((((/* implicit */_Bool) var_4)) ? (min((arr_50 [i_19] [(unsigned short)12] [9LL]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_21] [i_20] [i_19])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
}
