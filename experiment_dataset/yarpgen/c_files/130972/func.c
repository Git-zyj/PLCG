/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130972
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 += ((/* implicit */signed char) arr_2 [(unsigned short)10]);
        var_15 = ((/* implicit */unsigned long long int) ((int) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) arr_2 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])))))))) ? (((arr_2 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1189237870U) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : ((+(arr_7 [i_0] [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */_Bool) (+(arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1])));
                        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 2] [i_0]))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                            arr_16 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_2 - 1])) >= (((/* implicit */int) arr_4 [i_2 + 1]))));
                            var_18 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2 + 1]))));
                        }
                    }
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((max((((/* implicit */long long int) (~(1717313236U)))), (max((3774387194513887614LL), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (max((((/* implicit */int) arr_4 [10])), (var_13)))))))))));
                    arr_17 [i_0] [i_2] [i_2 - 2] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (-3726040070839032732LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_2] [i_2 - 1] [i_2])))))) : (max((var_11), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1])) : (var_13))))))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_13 [i_2 - 1] [i_1] [i_2 - 1] [i_2 - 1] [i_0])))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 6; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 8; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                            {
                                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) arr_1 [i_5])), (var_0))))))) ? ((+(((((/* implicit */_Bool) arr_8 [(unsigned short)12] [i_6] [i_6] [i_6 - 1])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_8])) >= (((/* implicit */int) var_0))))) == (((/* implicit */int) ((signed char) var_7))))))));
                                var_21 = max((min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 817138363))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_12)))))), (max((var_13), (((/* implicit */int) arr_4 [i_6 + 1])))));
                                var_22 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_5])), (((((/* implicit */_Bool) ((signed char) -6824287509591794190LL))) ? (arr_29 [3LL] [i_6 - 3] [3LL]) : (max((((/* implicit */unsigned int) arr_26 [i_5] [i_8] [i_8] [i_5])), (var_7)))))));
                            }
                            arr_31 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-67)) == (((/* implicit */int) arr_19 [i_5] [i_5])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_22 [8LL] [i_6]))))) && (((/* implicit */_Bool) var_13))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                arr_40 [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_12]) ? (var_13) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_1)) ? (1562491896U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5]))))) : ((-(2732475386U)))))));
                                var_23 = ((/* implicit */signed char) ((unsigned short) (unsigned char)198));
                                var_24 -= ((/* implicit */long long int) (((-(((/* implicit */int) arr_39 [i_5] [i_10 - 1] [i_12] [i_11])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_5] [i_10 - 1] [i_12] [i_11])) && (((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6])))))));
                            }
                        } 
                    } 
                    arr_41 [i_6] = ((/* implicit */short) (+(max((var_13), (((/* implicit */int) arr_13 [i_6 + 3] [i_6 + 1] [i_10 - 1] [i_10] [i_6]))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))))) & ((~(max((((/* implicit */int) var_3)), (var_4))))))))));
                    var_26 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_27 [i_10] [2U] [i_10] [i_6 + 4] [i_10])), (arr_20 [i_5])))) || (((/* implicit */_Bool) max((8331423757783976924LL), (((/* implicit */long long int) (unsigned char)34))))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        for (unsigned int i_14 = 1; i_14 < 10; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) min((var_27), (max((((/* implicit */long long int) max((((unsigned short) arr_46 [i_15] [i_14 + 2])), (((/* implicit */unsigned short) max((arr_3 [i_13] [i_14]), (var_2))))))), (((((/* implicit */long long int) max((2513279548U), (((/* implicit */unsigned int) (unsigned char)96))))) | (-2705917408122848636LL)))))));
                                arr_54 [i_14] [i_17] = ((/* implicit */signed char) ((unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_13] [i_13] [i_15] [i_16 + 1]))))) : (max((3783390045U), (((/* implicit */unsigned int) var_1)))))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_45 [i_13] [i_13] [5LL]))));
                                arr_55 [i_13] [i_14 + 2] [i_15] [i_14] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_17] [i_16] [i_15] [i_14 + 2])) ? (((10188712162155200292ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_16] [i_15] [i_14] [i_13]))))) : (((/* implicit */unsigned long long int) var_13))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 3; i_18 < 8; i_18 += 4) 
                    {
                        for (long long int i_19 = 2; i_19 < 10; i_19 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_5 [i_13] [i_14] [i_15] [i_18]))));
                                arr_61 [i_14] [5LL] [i_19 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_18])), ((~(((/* implicit */int) arr_3 [i_13] [i_14 + 1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_13] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) <= (7836219316831689185ULL))))) : (2533696770U)))) : (max((((((/* implicit */_Bool) arr_5 [i_19] [7] [(unsigned short)8] [i_13])) ? (((/* implicit */long long int) var_4)) : (-2705917408122848649LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))));
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_19 + 1] [i_19 - 1] [i_19 - 2] [i_19 - 1]) * (arr_7 [i_19] [i_19 + 1] [(_Bool)1] [i_19 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((arr_7 [i_19] [i_19 - 1] [i_19] [i_19 - 2]) / (arr_7 [(signed char)7] [i_19 + 2] [i_19 - 1] [i_19 - 2])))));
                            }
                        } 
                    } 
                    arr_62 [i_14] [i_14] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1312808081)) ? (((/* implicit */int) arr_51 [i_14 + 1] [i_14] [(unsigned char)6] [i_14 - 1])) : (((/* implicit */int) var_5)))) & ((+(((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) max((var_31), (max((max((((2732475399U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (var_1)))))), (((/* implicit */unsigned int) var_6))))));
}
