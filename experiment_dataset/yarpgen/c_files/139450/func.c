/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139450
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((min((((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_2)))), ((~(((/* implicit */int) var_7)))))) | ((+(((/* implicit */int) (unsigned short)63204)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63206)) ? (((/* implicit */int) (unsigned short)63204)) : (((/* implicit */int) (_Bool)1))))) >= (max((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) var_5)), (arr_0 [i_1] [16ULL])))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                            {
                                var_22 -= arr_15 [i_4] [i_3] [i_2] [i_1] [(signed char)15];
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((~((+(((/* implicit */int) (unsigned char)255)))))) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [10LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)18] [i_4])) ? (6476242023503391071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))))), (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_10 [i_0] [(unsigned char)0] [i_1] [i_1] [i_3] [i_4]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_16)) - (41198))))))))) : (((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [(unsigned char)0])))) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_4 [i_0] [i_4]))))))));
                                arr_17 [5U] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_11))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                var_24 += 1311737927U;
                                arr_20 [i_5] [i_5] [i_0] [14U] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_3] [i_5])), (-2720680551804010488LL)))), (((((/* implicit */_Bool) (+(arr_12 [i_5] [i_3] [i_2] [(signed char)10] [i_0] [i_0])))) ? ((~(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1)))))))));
                                arr_21 [i_0] [i_5] [i_2] [i_3] [i_2 - 3] [i_2 + 1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) == (786580944350492LL))))) == (3975153521187699467LL)))) ^ (((((((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8468))) : ((-9223372036854775807LL - 1LL)))) - (8468LL)))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) == (786580944350492LL))))) == (3975153521187699467LL)))) ^ (((((((((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) - (2147483647))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8468))) : ((-9223372036854775807LL - 1LL)))) - (8468LL))))))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >= ((~(((/* implicit */int) arr_2 [i_0])))))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39444))))) : ((~(arr_22 [i_6]))))))));
                                var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2 - 3])) ? (var_1) : (((/* implicit */unsigned long long int) arr_13 [i_2 + 2]))));
                                var_28 -= ((/* implicit */signed char) (+(arr_7 [i_3] [i_1] [i_2 + 1] [i_1])));
                                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_2 + 2] [i_2 + 2]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_32 [i_9] [5U] [(unsigned char)7] [i_7]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) (unsigned short)51909))));
                        arr_38 [i_7] [i_7] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned short) 3316032224U);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10392)) && (((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_9] [i_10] [(signed char)6] [i_10 - 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((var_17) + (9223372036854775807LL))) << (((((arr_40 [i_9] [i_11 + 1] [i_11 + 1]) + (755557096393801571LL))) - (20LL)))));
                        arr_42 [i_7] = ((/* implicit */unsigned char) ((((long long int) 3975153521187699461LL)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)232)))))));
                        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_7] [(unsigned char)4] [(unsigned char)4] [i_8] [(_Bool)1] [i_7] [i_7]))));
                        arr_43 [(signed char)15] [(signed char)15] [i_9] [(signed char)15] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2307))))) || (((/* implicit */_Bool) arr_27 [(signed char)0] [i_8]))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_34 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                            arr_50 [i_7] [12U] [i_7] [i_7] = (+(((unsigned long long int) (unsigned char)62)));
                            /* LoopSeq 2 */
                            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
                            {
                                arr_53 [i_14] [i_14] [i_13] [i_12] [(signed char)15] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_37 [i_7] [i_7] [i_13] [i_13]), (((/* implicit */unsigned long long int) (+(var_15))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [(unsigned short)5] [i_13] [i_12] [5LL] [i_7]))) : (-1315306255187109614LL)));
                                var_35 -= ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) >= (9045418256851177918LL))))) : (-9045418256851177919LL));
                            }
                            for (short i_15 = 1; i_15 < 13; i_15 += 2) 
                            {
                                arr_56 [(_Bool)1] [i_8] [(_Bool)1] [i_13] [i_15] = ((/* implicit */unsigned int) 9223372036854775807LL);
                                var_36 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_18 [i_7] [i_15 - 1] [i_12] [i_12] [i_7] [i_15] [i_13]))))));
                            }
                            var_37 -= ((/* implicit */unsigned char) 3969074285315299551ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) var_17);
}
