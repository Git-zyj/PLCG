/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170360
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) arr_1 [i_0 - 2] [i_0 - 2]);
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((max((((unsigned int) -5740335172182303986LL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))))))) - (308583177U)))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_4 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) % (arr_4 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_16 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((unsigned int) ((arr_3 [i_1] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_3 - 1] [(unsigned short)0]))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_3 + 1] [i_4])) * (((/* implicit */int) arr_11 [i_0 - 2] [i_0 + 1] [i_3 + 1] [i_3])))))))));
                                var_22 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) arr_14 [6] [i_1] [8LL] [i_3] [i_4] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))), (1457935060U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((arr_6 [(unsigned char)8] [i_0 - 2] [i_0 - 2] [i_4]), ((+(arr_3 [i_0] [i_3]))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [(signed char)6] [i_0 - 2] [i_0 + 1] [i_0] [i_3 + 1] [i_3 - 1]))))), (var_14)));
                                var_24 -= ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_5]);
                            }
                            for (unsigned short i_6 = 1; i_6 < 7; i_6 += 3) 
                            {
                                arr_23 [5U] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_15);
                                arr_24 [i_2] [i_3] [0LL] [(unsigned char)5] [i_1] [0LL] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_8))))))));
                            }
                            var_25 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(unsigned short)0] [i_1] [i_2] [i_3] [i_0 - 2])) ? (arr_10 [i_0] [i_1] [i_2] [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [2U] [i_1] [i_1] [i_2] [i_2] [i_3])))))))))) ^ (((min((((/* implicit */unsigned int) var_16)), (arr_18 [i_0] [i_1] [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3 - 1])))))));
                            arr_25 [i_2] = ((/* implicit */unsigned char) var_3);
                            var_26 *= (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)228))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            arr_30 [i_8] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned char)37), ((unsigned char)220))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))))))))) >= (arr_21 [i_0] [i_8] [3U] [i_0] [i_0])));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((short) (-(((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_8]))))))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((unsigned short) (-(((/* implicit */int) arr_1 [(short)7] [i_1]))))), (var_4))))));
                            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((~(((/* implicit */int) var_15)))) != (((((/* implicit */_Bool) arr_9 [i_7] [i_8])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)19)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_1)), ((+(((((/* implicit */_Bool) var_2)) ? (14LL) : (((/* implicit */long long int) 973112299)))))))))));
    /* LoopSeq 3 */
    for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */_Bool) (unsigned char)244);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    arr_39 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_12)), (arr_33 [i_10] [i_9])))))) ? (min((((arr_37 [i_9] [(unsigned char)7] [i_9]) >> (((arr_33 [i_11] [i_9]) - (3988228670U))))), (arr_38 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_12)), (arr_33 [i_10] [i_9])))))) ? (min((((arr_37 [i_9] [(unsigned char)7] [i_9]) >> (((((arr_33 [i_11] [i_9]) - (3988228670U))) - (3664064597U))))), (arr_38 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                    arr_40 [i_9] [i_9] [7U] [i_11] = ((/* implicit */unsigned char) (signed char)67);
                    var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_35 [i_9 - 1])) ? (((/* implicit */int) arr_35 [i_9 + 1])) : (((/* implicit */int) arr_35 [i_9 + 1])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)7)), (var_15))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    {
                        arr_50 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_12] [i_13] [i_14] [i_12] [20])) ? (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_12] [i_14] [i_12])) | (((/* implicit */int) (unsigned short)7010)))))));
                        arr_51 [i_12] [i_13] [i_12] [i_15] = ((/* implicit */unsigned int) var_0);
                        var_32 = ((/* implicit */unsigned int) var_13);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                {
                    arr_58 [i_17] [i_16] [i_17] |= ((/* implicit */signed char) var_15);
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))));
                }
            } 
        } 
    }
    for (unsigned int i_18 = 3; i_18 < 22; i_18 += 2) 
    {
        var_34 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (max((var_6), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), (var_17)))) / (((/* implicit */int) (signed char)127)))))));
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) 4294967295U))));
        var_36 = ((/* implicit */unsigned short) arr_59 [22U]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 3; i_19 < 15; i_19 += 4) 
    {
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 13; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (signed char)-63)) : ((((_Bool)0) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_41 [(unsigned short)1])))) : ((-(((/* implicit */int) arr_69 [i_19] [i_20] [0U] [(short)5]))))))));
                            var_38 = ((/* implicit */signed char) var_14);
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) min((var_12), ((unsigned char)24)))))) ? (((/* implicit */int) arr_62 [i_19] [i_19])) : (((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-68)), (var_2))))))))))));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) arr_56 [i_20] [i_20])) != (((((/* implicit */int) ((signed char) (unsigned short)60729))) ^ (((((/* implicit */_Bool) arr_54 [i_19 - 2] [i_21 + 2] [i_22])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_54 [4U] [i_21] [i_22])))))))))));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_19 - 2] [i_20] [(_Bool)1] [i_21] [(_Bool)1] [i_22]))) != (min((min((var_6), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)31442)))))))));
                        }
                    } 
                } 
                var_42 &= ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
}
