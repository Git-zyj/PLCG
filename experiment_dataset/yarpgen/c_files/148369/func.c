/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148369
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_5)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_17 = ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2 + 3] [i_2 + 2])) : (arr_2 [i_0] [i_2]))))));
                                arr_11 [i_1] [3] = ((short) max((max((((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4 + 2])), (arr_0 [i_1]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) arr_8 [i_3] [i_3]))))));
                                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (-(arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_8 [(unsigned char)1] [i_1]))) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(short)8])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (arr_0 [i_2])))))) : (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) arr_6 [i_1] [(_Bool)1] [i_4])), (arr_9 [i_1] [i_2 - 2] [i_3] [i_4])))), ((-(arr_2 [i_3] [i_3]))))))));
                                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((unsigned short) arr_2 [i_1] [i_2])), (((/* implicit */unsigned short) min((arr_6 [i_3] [i_2] [(unsigned char)9]), (arr_6 [i_1] [i_3] [i_4]))))))), (min((min((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_5 [i_4 + 3] [(_Bool)1] [i_2 - 1] [i_1]))), (((/* implicit */unsigned long long int) ((short) arr_2 [i_3] [i_4])))))));
                                var_20 -= ((/* implicit */short) min(((unsigned short)4096), ((unsigned short)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)61430), ((unsigned short)61421)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 2] [i_2 + 2] [i_6]))) : ((~(arr_5 [i_1] [i_2] [i_5] [i_5]))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65519))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (short)11))));
                                arr_17 [i_0] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0])), (arr_5 [(unsigned char)7] [i_1] [i_2] [i_5]))))), ((~(((/* implicit */int) arr_4 [i_1] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_7] [i_7] [i_7] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((arr_0 [i_0]), (((/* implicit */int) arr_8 [i_0] [i_0])))))) ? (max((0ULL), (0ULL))) : ((~(((unsigned long long int) arr_6 [i_1] [i_2] [i_7]))))));
                        var_23 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        arr_22 [i_7] [(short)1] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_7] [i_1])) ? (((/* implicit */int) arr_14 [i_1] [(_Bool)1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_18 [i_0]))))))));
                        var_24 = ((/* implicit */short) ((unsigned long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_1] [i_7 - 2] [i_2] [i_7 + 1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2])))))));
                        arr_23 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */short) arr_16 [i_0] [i_1] [i_2] [i_7] [i_7]);
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned int) ((signed char) ((unsigned int) (short)32749)));
                            var_26 ^= ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned int i_10 = 3; i_10 < 8; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((signed char) ((short) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1]))))));
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_8] [i_0] [i_8])) ? (((((/* implicit */_Bool) max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_15 [i_2] [i_1]))))) ? ((+(((/* implicit */int) (short)-1)))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_10])) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_2 + 3] [i_8] [i_10])) : (((/* implicit */int) arr_4 [i_8] [i_2])))))) : ((-(((/* implicit */int) arr_1 [i_8] [i_10]))))));
                            arr_30 [i_0] [i_0] [i_0] [(signed char)9] [i_10] = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_8] [i_0])) ? (arr_3 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2 + 1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)120)))))))));
                        }
                        var_29 = max(((+((-(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [(signed char)1] [i_0])))))), (((/* implicit */int) arr_26 [i_0] [i_2 - 1] [(short)2] [i_2] [i_2] [i_2])));
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (unsigned char)0)))));
                        var_31 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_2] [(_Bool)1] [i_2]))))), ((+(((/* implicit */int) max((((/* implicit */signed char) arr_13 [i_0] [i_0] [i_2] [i_8])), (arr_25 [i_0] [i_0] [i_0] [i_8]))))))));
                        var_32 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_35 [i_11] [i_11] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)112))));
                        arr_36 [i_0] [i_0] [i_11] [i_2] [i_11] = ((/* implicit */signed char) ((unsigned char) min(((-(arr_5 [i_0] [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_33 [i_11]))))));
                        var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_4 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_9 [i_11] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_11])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_2 - 1] [i_2] [i_11]))))))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_25 [i_2] [i_2] [i_1] [(_Bool)1]))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_27 [(unsigned short)6] [i_1] [i_2 + 1] [i_1] [i_0])) ? (((/* implicit */int) arr_19 [i_11] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0])))))));
                    }
                    arr_37 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) max((arr_18 [i_0]), (((/* implicit */unsigned char) arr_32 [i_0] [i_2] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 10; i_13 += 4) 
                        {
                            {
                                var_34 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (short)0)))));
                                var_35 ^= ((/* implicit */unsigned short) max((((/* implicit */short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_19 [i_0] [i_1] [(signed char)0] [(short)9])));
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_20 [i_0] [i_0] [i_2] [i_12] [i_13]))));
                                var_37 = ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */_Bool) arr_15 [i_13] [i_1])) ? (((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_10 [i_13] [i_13] [i_13] [(short)10] [i_13])))), (((((/* implicit */_Bool) arr_33 [i_13])) ? (((/* implicit */int) arr_18 [i_13 - 3])) : (((/* implicit */int) arr_39 [i_2] [i_13 + 1] [i_2] [i_12])))))));
                                var_38 = arr_6 [i_0] [i_12] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_0])))))), (arr_5 [i_0] [i_0] [i_0] [i_0])));
        var_39 = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_10 [(unsigned char)8] [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)61430))))) ? (((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_32 [i_0] [i_0] [i_0] [i_0]))))) : (min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))))));
        arr_44 [i_0] [i_0] &= ((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 2) 
    {
        var_40 ^= ((/* implicit */unsigned char) arr_47 [i_14 + 1] [i_14]);
        arr_48 [i_14] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) min((arr_46 [i_14]), (arr_46 [i_14 - 1])))))));
    }
    for (int i_15 = 1; i_15 < 11; i_15 += 2) 
    {
        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_47 [i_15] [i_15])))) : (((/* implicit */int) (short)-1))));
        var_42 += ((/* implicit */_Bool) ((signed char) ((unsigned short) ((int) arr_51 [i_15] [i_15]))));
        arr_53 [i_15] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) ((short) arr_50 [i_15]))), ((+(((/* implicit */int) arr_46 [i_15])))))));
        var_43 = ((/* implicit */_Bool) arr_51 [i_15] [i_15]);
    }
    for (signed char i_16 = 1; i_16 < 10; i_16 += 4) 
    {
        var_44 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)48))));
        arr_56 [i_16] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */int) arr_12 [i_16] [(unsigned short)4] [(unsigned short)4])) : (((/* implicit */int) arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [(unsigned short)8])))))), ((+(((((/* implicit */_Bool) arr_46 [i_16 - 1])) ? (((/* implicit */int) arr_49 [i_16])) : (arr_2 [i_16] [i_16])))))));
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (short i_18 = 3; i_18 < 8; i_18 += 3) 
            {
                {
                    arr_63 [i_16 + 1] [i_16] [(signed char)5] = ((/* implicit */short) (~(((arr_57 [i_16]) ? ((+(((/* implicit */int) arr_39 [i_16 - 1] [(unsigned short)5] [(unsigned short)5] [i_16 - 1])))) : (((/* implicit */int) ((short) arr_49 [i_17])))))));
                    var_45 -= ((/* implicit */unsigned long long int) arr_49 [i_16]);
                }
            } 
        } 
    }
    var_46 ^= ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
}
