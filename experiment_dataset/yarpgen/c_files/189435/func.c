/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189435
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
    var_20 = ((/* implicit */unsigned long long int) min(((~(697560256U))), (((/* implicit */unsigned int) var_17))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)1))));
                arr_8 [i_1] = ((/* implicit */signed char) (-(min((min((var_4), (((/* implicit */unsigned int) (unsigned char)62)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0])))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_1 [i_2])))) ? ((-(((/* implicit */int) (unsigned char)245)))) : (((((/* implicit */int) var_12)) + (((/* implicit */int) var_3))))));
                    var_22 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (unsigned char)218)))));
                }
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_13 [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (signed char)-18))))) ? (((((/* implicit */_Bool) var_8)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)205))))))) - (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) - (((/* implicit */int) ((unsigned char) var_1))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_3] [12LL] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_3] [i_4] [i_4] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_4])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) (signed char)-61);
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)37861))));
                            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_14))))));
                            var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))) : (var_19)));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_4])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43)))))) ? (((int) 3840U)) : ((-(130911996)))));
                            arr_24 [i_3] [i_1] [i_1] [i_1] [i_6] &= ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1])) + (((/* implicit */int) var_16))));
                            arr_25 [i_0] [i_0] [i_3] [i_4] [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (var_7) : (((/* implicit */int) var_14)))))));
                            arr_26 [i_0] [(unsigned short)9] [i_4] [i_6] [8U] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_3] [i_3])) ? (((unsigned long long int) arr_9 [i_3] [i_3] [i_1] [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL))))));
                        }
                    }
                    arr_27 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-8783237974359429392LL) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0])))))) ? (((arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_0])))) : (((((/* implicit */int) arr_11 [i_0])) * (((/* implicit */int) (_Bool)1))))));
                }
                for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_28 = ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)229)) + (((/* implicit */int) var_3))))) * (((((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_7]))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((var_18) | (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) min((7485444276275217753ULL), (((/* implicit */unsigned long long int) var_13))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0])))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((unsigned char) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_5))))));
                                var_31 = ((/* implicit */unsigned short) (unsigned char)247);
                                var_32 = ((/* implicit */unsigned short) 6ULL);
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_0] [i_0] [i_7] = ((unsigned char) (!(((/* implicit */_Bool) var_2))));
                    arr_38 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_3 [i_7]))))) : ((~(var_10)))));
                }
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        var_33 &= ((/* implicit */int) (unsigned char)135);
                        arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_10] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_11] [i_0]))))));
                        arr_46 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | ((-(0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) * (((((/* implicit */_Bool) arr_30 [i_0] [i_11] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_15)))))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */int) (!(((var_19) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            var_35 = 405698518;
                        }
                        arr_51 [i_12] |= ((/* implicit */unsigned int) (-((+(min((((/* implicit */int) var_3)), (var_18)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                var_36 += (-(((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) - (((/* implicit */unsigned int) min((arr_0 [i_14]), (((/* implicit */int) var_2))))))));
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_0] [i_1] [i_15] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_1] [i_14] [i_0] [i_14]))))))))) - (((/* implicit */int) (signed char)48))));
                                var_38 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (signed char)120))))), (min((var_4), (((/* implicit */unsigned int) 688800789))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) 1189974128)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_12)) ? (arr_35 [i_0] [i_1] [i_10] [i_14] [i_0] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((unsigned int) var_9)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((14110849898621110853ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            {
                var_40 = ((/* implicit */short) (-(((unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned char)40)))))));
                var_41 = (-((~(arr_30 [i_17] [i_16] [i_17]))));
                arr_62 [i_16] [6ULL] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_40 [(signed char)18] [(signed char)18] [i_16])) : (((/* implicit */int) var_12)))))) ? ((-(((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */int) (unsigned char)255)))))) : ((+(((/* implicit */int) var_3))))));
            }
        } 
    } 
}
