/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17564
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min(((((((-(arr_2 [i_0]))) + (2147483647))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_9)))) - (65520))))), (((/* implicit */int) ((((/* implicit */long long int) 0U)) <= (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0]) : (309196038634199682LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_8 [(short)10] [i_1] = ((/* implicit */int) var_10);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                arr_13 [i_1] [(unsigned short)1] = ((/* implicit */short) 666575287U);
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(arr_3 [i_1] [i_1 - 1]))))));
            }
            arr_14 [i_0 + 2] [i_1] [i_0] = ((int) ((arr_12 [i_0] [i_1]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42107)))));
            arr_15 [(_Bool)1] &= ((/* implicit */_Bool) ((((arr_3 [i_0 + 1] [i_0]) + (9223372036854775807LL))) << (((-5856846725963254148LL) + (5856846725963254148LL)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_22 [i_0] [i_3 - 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)239)))), (((/* implicit */int) (unsigned short)52171))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(var_2)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_29 [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23407)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_0] [i_3])), (min((var_1), (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_6]))))))) : (((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_24 [i_0 + 3] [i_3 + 1])) : (var_8)))));
                                var_13 = (~(((((/* implicit */int) arr_11 [i_3] [i_3] [i_0])) % (((/* implicit */int) arr_23 [i_5 - 1] [i_6] [i_6 + 1])))));
                                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_0]))) ? (14ULL) : (((/* implicit */unsigned long long int) 5749592655917804082LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_6 + 1] [i_6 - 1] [2] [i_6] [i_6 - 1])) ? (min((((/* implicit */long long int) (unsigned char)255)), (1201323861007267050LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_3 [i_4] [i_3]), (((/* implicit */long long int) var_3))))), (((((/* implicit */_Bool) -5171975741501734580LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))))) ? (min((((/* implicit */unsigned int) var_4)), (var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_5 + 1] [i_3] [i_3] [i_5])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_35 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1099511627775LL)) % ((-(var_5))))))));
                                arr_36 [i_8] [14U] [i_3] [i_3] [i_3 - 3] [i_3 - 3] [i_0] = ((/* implicit */unsigned short) ((max((arr_4 [i_0 - 2] [i_0 - 1]), (((/* implicit */long long int) arr_21 [i_0 + 3] [i_3 - 1] [i_3])))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23429)) ? (((/* implicit */unsigned long long int) var_3)) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_7] [i_3])) ? (arr_16 [i_3 - 3] [i_3 - 3]) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) (unsigned short)42104)), (2251799813685247LL)))))));
                                arr_37 [i_0] [i_0] [i_4] [i_0] [i_3] [i_8] = ((/* implicit */short) arr_19 [i_0] [i_3 - 3] [i_3] [i_3 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (-(var_0)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_45 [i_10] [i_10] [i_12]), (((/* implicit */unsigned short) arr_11 [i_10] [i_10] [i_10]))))))))));
                        var_17 = ((/* implicit */unsigned char) ((min((var_7), (((/* implicit */unsigned long long int) arr_4 [i_10 - 1] [i_10 - 1])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_10 - 1] [i_10 - 1] [i_10 - 1])) || (((/* implicit */_Bool) (unsigned short)22188)))))) ^ (min((0U), (((/* implicit */unsigned int) -237109776))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)4)) / (((/* implicit */int) var_4))))) != (var_0)))), (arr_17 [i_11] [i_11] [i_11]))))));
                            var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)8002)))) ? (((((/* implicit */_Bool) (short)12695)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned short)30099))))));
                            arr_53 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10 - 1] [i_10 - 1]))) : (min((((/* implicit */unsigned long long int) var_2)), (var_6)))))) ? (((/* implicit */unsigned long long int) var_1)) : ((+(var_6)))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((_Bool) (-(4294967285U)))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_9] [i_10 - 1]))))))) ? ((~(arr_16 [i_9] [i_10 - 1]))) : ((-(((/* implicit */int) min((var_9), (((/* implicit */short) var_2)))))))));
                        }
                        var_23 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_9] [i_11]))))), ((+(((/* implicit */int) var_9))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_28 [i_9])), (((((var_6) % (var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_56 [i_14] = min((((/* implicit */unsigned int) ((((/* implicit */int) max((arr_23 [i_14] [(unsigned char)8] [i_14]), (((/* implicit */unsigned char) (_Bool)1))))) >> (((/* implicit */int) (_Bool)1))))), (max((var_1), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
        arr_57 [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_14] [i_14])) && (((/* implicit */_Bool) max((-1488983250), (((/* implicit */int) var_10))))))) ? (max((((/* implicit */unsigned long long int) arr_38 [i_14])), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)724)) && (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_23 [i_14] [i_14] [i_14])))))))))));
        var_25 ^= ((/* implicit */long long int) var_4);
    }
    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((((/* implicit */_Bool) (+(((/* implicit */int) arr_63 [i_15] [i_15] [i_17] [i_15]))))) ? (min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_16] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_64 [i_15] [i_16])) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)166)) : (506344735))))))))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_63 [i_17] [i_17] [i_17] [i_17]))));
                }
            } 
        } 
        var_28 -= ((/* implicit */unsigned short) (_Bool)0);
    }
}
