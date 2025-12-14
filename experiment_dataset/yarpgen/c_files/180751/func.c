/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180751
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((((((/* implicit */int) var_3)) + (((/* implicit */int) var_2)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5300))))))), (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_3] = ((/* implicit */_Bool) 8388607);
                        arr_9 [i_0] = ((/* implicit */long long int) (~(arr_5 [i_0] [i_1] [i_2])));
                        var_12 = ((/* implicit */unsigned long long int) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_12 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)64)) : (-8388603))) : (((/* implicit */int) (signed char)64))));
                        }
                    }
                    var_14 = ((/* implicit */unsigned short) var_2);
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */int) (short)29023))));
                    arr_14 [i_0] [i_2] [i_1] [i_0] = (((!(((/* implicit */_Bool) (signed char)-73)))) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_7 [i_0] [(short)6] [(short)6] [i_0])))) ? (((/* implicit */unsigned long long int) 0LL)) : (18446744073709551615ULL)));
                        arr_18 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_0] [(_Bool)1])) ? (722461455077470250LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((/* implicit */long long int) ((/* implicit */int) (short)21941)))));
                    }
                }
            } 
        } 
        var_16 = ((unsigned int) -1485240408);
        arr_19 [i_0] = ((/* implicit */unsigned int) (unsigned short)0);
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            {
                arr_26 [i_6] [i_6] = ((/* implicit */short) ((unsigned short) ((unsigned short) var_5)));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) & (arr_24 [i_7 + 1] [i_6] [i_7 - 1])))) ? (((arr_24 [i_7 + 1] [i_6] [i_7 + 1]) & (((/* implicit */int) (short)31705)))) : (arr_24 [i_7 - 1] [i_6] [i_7 + 1])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 16LL)))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_32 [i_8 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8 + 1])) ? (((/* implicit */int) arr_32 [i_8 + 1])) : (((/* implicit */int) arr_32 [i_8 + 1])))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 4; i_10 < 16; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185))));
                            arr_39 [i_8] [i_8] [i_10] [(short)0] [4] [i_10] &= ((/* implicit */long long int) arr_38 [(unsigned short)0] [i_9] [i_10] [i_11]);
                        }
                    } 
                } 
                var_21 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8 + 1]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43846))) | (13670431769402868382ULL))))), (((/* implicit */unsigned long long int) 224003349U)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (int i_14 = 4; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((_Bool) (unsigned char)77)))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : ((~(5984630376355961680LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        arr_52 [i_8] [i_8] [i_12] [3ULL] = ((/* implicit */unsigned int) (+(((long long int) var_0))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21938)) ? (arr_51 [i_8] [i_8 + 1] [i_12] [i_15 + 1]) : (arr_51 [i_15] [i_8 + 1] [(short)10] [i_15 + 1])));
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)40890)) & (((/* implicit */int) arr_49 [i_12] [i_9]))));
                    var_26 = ((/* implicit */int) arr_32 [i_8]);
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) (unsigned short)16);
                        arr_55 [i_12] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) (unsigned short)0);
                        arr_59 [i_8] [i_12] [i_8] [i_17] = ((/* implicit */unsigned char) ((unsigned int) arr_34 [i_17 + 4]));
                    }
                }
                /* vectorizable */
                for (short i_18 = 3; i_18 < 15; i_18 += 1) 
                {
                    var_29 = ((/* implicit */short) ((unsigned short) 9223372036854775807LL));
                    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)82))));
                }
            }
        } 
    } 
}
