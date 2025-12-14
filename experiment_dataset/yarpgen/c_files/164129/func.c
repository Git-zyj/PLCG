/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164129
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
    var_10 = ((/* implicit */unsigned int) var_8);
    var_11 = (short)-8192;
    var_12 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_13 ^= ((/* implicit */unsigned long long int) var_5);
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                arr_8 [i_2] [i_1] = ((/* implicit */unsigned char) var_2);
                var_14 += ((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2] [i_1 - 1] [i_2]);
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (-1636451848615742947LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2])))));
                var_16 *= ((/* implicit */unsigned char) var_2);
                var_17 = ((/* implicit */short) (signed char)8);
            }
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_1] [i_4] [i_4] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_5 - 1] [i_3] [i_3] [i_4 + 3])) : (((/* implicit */int) (unsigned char)153))));
                        arr_17 [i_1] [i_1] [i_3] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) var_4);
                        arr_18 [i_1] [i_1] [i_3] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) % (9270152125342987585ULL));
                    }
                    var_18 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) (unsigned char)210))))));
                }
                for (unsigned char i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    arr_22 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    /* LoopSeq 1 */
                    for (int i_7 = 4; i_7 < 15; i_7 += 2) 
                    {
                        arr_27 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 849374328)) ? (arr_6 [i_1] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                        arr_28 [i_0] [i_1] [i_3] [i_6] [i_1] [i_7] = ((arr_15 [i_0] [i_1] [i_6] [i_6] [i_3]) ? (((/* implicit */int) (signed char)15)) : (((((/* implicit */int) arr_0 [i_6])) + (((/* implicit */int) var_2)))));
                        arr_29 [i_1] [i_6] [i_3] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1]);
                    }
                }
                for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_35 [i_1] [i_1] [i_3] [i_8] [i_9] = ((/* implicit */unsigned int) -561288766);
                        var_19 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_8]);
                        var_20 -= ((/* implicit */unsigned short) ((long long int) var_2));
                        arr_36 [i_0] [i_0] [i_3] [i_8] [i_9] &= 1180507270;
                    }
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_3] [i_8])) ? ((-(13896655131527511420ULL))) : (((/* implicit */unsigned long long int) arr_25 [i_1 + 1] [i_1] [i_8] [i_8] [i_1]))));
                }
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (signed char)54))));
            }
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_33 [i_1] [i_0])))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 1) 
                {
                    var_24 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (arr_6 [i_0] [i_1] [i_11 + 2])));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        arr_46 [i_1] [i_0] [i_0] [i_12] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33449)) ? (1636451848615742921LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_11] [i_10] [i_1]))))))));
                        arr_47 [i_1] = ((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_10]);
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        arr_50 [i_13] [i_1] [i_10] [i_1] [i_0] = ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_11 - 1] [i_1 + 2]))) : ((~(13896655131527511420ULL))));
                        var_25 = ((/* implicit */long long int) var_4);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        var_26 -= ((/* implicit */int) 21ULL);
                        var_27 *= ((/* implicit */signed char) ((arr_11 [i_14] [i_1] [i_14] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_10]))) : (2403886982235022396ULL)));
                        var_28 += ((/* implicit */long long int) ((int) (unsigned char)210));
                    }
                    for (int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        arr_56 [i_1] [i_11] [i_10] [i_1] [i_0] [i_1] = var_9;
                        arr_57 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                        arr_58 [i_1] [i_1] [i_10] [i_11] [i_15] [i_15] [i_15] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) * (((((/* implicit */_Bool) arr_53 [i_0] [i_1] [i_10] [i_1] [i_15])) ? (13896655131527511420ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_11] [i_10]))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        arr_62 [i_0] [i_1] [i_10] [i_11] [i_16] [i_0] [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) (short)23458)) - (23439)))))) ? (((16609519291534372894ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))))) : (((/* implicit */unsigned long long int) (~(1101466605U))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)211)) * (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (short)-17))))));
                    }
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                    var_31 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (arr_60 [i_0] [i_1] [i_1] [i_10] [i_11]) : (((/* implicit */int) (signed char)-7))))));
                }
                for (short i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_0] [i_1] [i_17] [i_10] [i_1 + 2] [i_18]))) : (var_8)));
                        var_33 -= ((/* implicit */short) (((~(((/* implicit */int) (short)17485)))) - (-459432135)));
                    }
                    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        arr_71 [i_1] [i_10] [i_17] [i_1] = (signed char)93;
                        var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
                    {
                        arr_74 [i_0] [i_17] [i_10] [i_17] [i_1] [i_0] [i_0] = ((/* implicit */short) var_3);
                        var_35 -= ((/* implicit */int) 14ULL);
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_34 [i_0] [i_1 + 2] [i_1] [i_10] [i_10] [i_17] [i_20]))))));
                    }
                    var_37 &= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_17]);
                }
                arr_75 [i_1] [i_10] = ((/* implicit */unsigned int) -7096105118879838604LL);
            }
            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_55 [i_0] [i_0] [i_0] [i_0] [i_1]))));
        }
        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            arr_80 [i_0] [i_0] [i_21] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)7))));
            arr_81 [i_0] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((unsigned long long int) arr_77 [i_0] [i_0] [i_21]))));
        }
        arr_82 [i_0] [i_0] = ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
}
