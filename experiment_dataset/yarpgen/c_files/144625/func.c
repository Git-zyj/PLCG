/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144625
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
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) var_1)) : (arr_2 [i_1 + 1] [(unsigned char)12])))) * (1841172718764161453ULL))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) -1041289225)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)18441)))), (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2] [4])) ? (((/* implicit */int) (short)29921)) : (var_1)))) ? ((~(((/* implicit */int) (signed char)-7)))) : (((((/* implicit */_Bool) arr_5 [11] [i_2] [11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))))));
                                var_21 = ((/* implicit */short) (-((~(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_5 - 2] [i_0 + 3])) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_6] [i_0 + 2])) : (arr_2 [i_0 + 1] [i_5 - 2])))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) arr_12 [i_6] [i_6]))));
                    var_24 = ((/* implicit */unsigned int) 1584943591);
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_12))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_11))) && (((_Bool) arr_18 [i_7] [i_7]))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((int) arr_19 [i_8]));
            var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_17)) ? (var_0) : (arr_20 [i_7] [16])))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_29 = ((((/* implicit */int) arr_25 [i_7])) > (arr_22 [i_7] [i_9]));
            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (signed char)51)))));
            var_31 = ((/* implicit */unsigned int) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7])))));
            var_32 = ((/* implicit */signed char) var_15);
        }
        var_33 ^= ((/* implicit */signed char) (unsigned char)32);
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 4; i_11 < 9; i_11 += 1) 
        {
            var_34 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [6ULL]))))));
            var_35 = ((/* implicit */unsigned int) ((arr_24 [i_11] [14]) + (arr_7 [i_11] [i_11] [i_11 - 4] [i_11] [i_11 - 4] [i_11])));
            var_36 = ((((var_9) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_11] [(unsigned short)10]))))) << ((((+(var_13))) + (114680372))));
        }
        var_37 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_13 [i_10] [i_10] [i_10])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 1; i_12 < 7; i_12 += 2) 
        {
            var_38 = ((int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_1 [6]))));
            var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1085432938)) ? (arr_20 [i_10] [i_10]) : (((/* implicit */unsigned int) arr_9 [i_12 + 3] [i_12 + 2] [i_10] [i_10]))));
            var_40 &= ((/* implicit */_Bool) ((var_9) ? (arr_26 [i_12 + 2] [i_12 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) (_Bool)0))))))));
        }
    }
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        var_41 = arr_14 [i_13] [i_13] [i_13] [i_13];
        /* LoopNest 2 */
        for (short i_14 = 2; i_14 < 10; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        for (short i_17 = 2; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) arr_9 [i_15] [i_14 - 2] [i_17] [i_17])) ? (arr_24 [(short)8] [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62911)))))) & (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)4)), (((((/* implicit */int) (signed char)-17)) & (arr_6 [10] [i_13] [i_14] [(short)8]))))))));
                                var_43 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_17] [i_16] [i_15] [i_14])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_13] [i_14 - 1] [4] [i_16] [(unsigned char)3])))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_13] [i_14] [i_15] [i_16] [i_17]))) | (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_13] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_13]))))))) : (var_10)));
                            }
                        } 
                    } 
                    var_44 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((((/* implicit */_Bool) -1177242850)) || (((/* implicit */_Bool) var_13)))))))));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */unsigned char) 2969797248U);
}
