/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179362
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])));
                    var_12 -= ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (short)8259);
                        var_13 = ((/* implicit */unsigned short) (-(arr_4 [i_3 - 1] [i_3 - 1])));
                    }
                    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_4] [i_4 - 1] [i_4] [i_4 - 3] [i_4 - 1] [i_4] = (!(((/* implicit */_Bool) var_4)));
                        var_14 = ((/* implicit */int) ((signed char) arr_1 [i_4 - 3]));
                        arr_17 [i_0] [i_4] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (unsigned char)31);
                        var_15 = ((arr_15 [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 3] [i_4]) > (arr_15 [i_4 - 1] [i_4 + 2] [i_4] [i_4 - 3] [i_4]));
                    }
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))) : (1056964608U)));
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_18 = ((/* implicit */_Bool) (-(arr_13 [i_0] [i_1] [i_1] [i_2] [(signed char)0])));
                    var_19 -= ((/* implicit */unsigned char) (unsigned short)25083);
                }
                var_20 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_31 [i_7 - 1] [i_7] = ((/* implicit */long long int) ((arr_25 [i_6] [i_7] [i_8]) >= (((/* implicit */int) arr_20 [i_7 - 1]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)18)) ? (465261563) : (((/* implicit */int) (signed char)-2))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2464872132U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))))) ? (((/* implicit */int) arr_6 [i_6] [i_6])) : (((/* implicit */int) (unsigned char)179))));
                        arr_32 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) 2147352576)) > (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_9]))) : (3974903094U)))));
                    }
                    arr_33 [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                }
                arr_34 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)17038), (((/* implicit */unsigned short) arr_18 [i_7] [i_7 - 1]))))) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_7 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_7] [i_7 + 1])))) : ((+(((/* implicit */int) arr_18 [i_7] [i_7 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_10 = 3; i_10 < 22; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) min(((unsigned char)61), (((/* implicit */unsigned char) (signed char)98))));
                    arr_44 [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) arr_38 [i_10 - 1] [i_10 - 2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned char i_16 = 3; i_16 < 15; i_16 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_17 = 0; i_17 < 17; i_17 += 4) 
                            {
                                var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2831971585U)) ? (((/* implicit */long long int) 8192U)) : (5125211000746864886LL)));
                                arr_59 [i_13] [i_14] [i_13] [i_16] [i_17] = ((/* implicit */_Bool) (unsigned short)17038);
                            }
                            arr_60 [i_13] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_53 [i_13] [i_16 - 2] [i_16 - 2] [i_16])) ? (((/* implicit */unsigned long long int) arr_53 [i_13] [i_16 + 2] [i_16] [i_16 - 1])) : (2116087528655221499ULL))) << (((min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) arr_55 [i_13] [i_14] [i_13])) : (arr_40 [i_13] [i_16]))), (((/* implicit */unsigned long long int) min((7068871146944513749LL), (((/* implicit */long long int) 4096))))))) - (4033ULL)))));
                            var_25 *= (signed char)13;
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1672989287)) ? (var_3) : (((/* implicit */int) arr_37 [i_16 + 1]))))) ? (((arr_37 [i_16 - 2]) ? (4967507885212399367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_16 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_37 [i_16 + 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    for (unsigned char i_19 = 3; i_19 < 15; i_19 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((min((((var_2) & (((/* implicit */unsigned long long int) -1742530405)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (1927716643)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-14))))));
                            arr_65 [i_13] [i_14] [i_18] [i_19 + 1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_52 [i_13] [i_19 + 1])))), (((/* implicit */int) max(((signed char)-10), (((/* implicit */signed char) arr_46 [i_13])))))));
                            var_28 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((int) 2147483647)))))), (min((((/* implicit */int) (signed char)14)), (1943636767))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        for (unsigned long long int i_21 = 3; i_21 < 15; i_21 += 4) 
        {
            {
                var_29 ^= ((/* implicit */unsigned char) arr_68 [i_20]);
                var_30 = ((/* implicit */signed char) (-(arr_50 [i_20] [i_21] [i_21])));
            }
        } 
    } 
}
