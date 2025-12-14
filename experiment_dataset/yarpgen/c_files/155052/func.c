/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155052
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
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) 9223372036854775807LL);
        var_13 = (~(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 -= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (-529864832) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                            arr_15 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */int) arr_0 [i_2 + 2] [i_3 + 1]);
                            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_4] [i_3]))));
                            var_17 = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_2 + 1] [i_3 + 2]));
                            var_18 &= ((/* implicit */short) (~((+(arr_10 [i_3] [i_3] [i_3] [i_3] [i_2 - 1] [i_1])))));
                        }
                        for (short i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) ((min((arr_14 [i_6 - 1] [i_1] [i_2 + 2] [i_3 + 3] [i_4]), (arr_14 [i_6 - 4] [i_1] [i_2 + 2] [i_4] [i_4]))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 - 3] [i_2 + 2] [i_2 - 1] [i_4] [i_4]))))) : (((/* implicit */long long int) ((arr_14 [i_6 - 3] [0U] [i_2 + 2] [0U] [i_4]) ? (-770756530) : (((/* implicit */int) arr_14 [i_6 - 3] [i_6 - 3] [i_2 + 2] [i_4] [i_4])))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 9223372036854775807LL)))))));
                        }
                        arr_18 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) var_9);
                        /* LoopSeq 1 */
                        for (short i_7 = 4; i_7 < 9; i_7 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)14448), (((/* implicit */short) arr_3 [i_3 + 2] [i_2 - 1])))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_8))));
                        }
                        var_23 ^= (+((~(arr_13 [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [6U])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) var_1)))))));
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_3])) ? (arr_1 [i_3]) : (((/* implicit */unsigned int) var_2)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) ((2128135431365485469LL) / (2128135431365485469LL)));
                        var_28 = ((/* implicit */unsigned int) ((unsigned char) var_1));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14811)) && (((/* implicit */_Bool) (unsigned char)73))));
                            var_30 = min((-9223372036854775790LL), (((/* implicit */long long int) ((short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_35 [i_1] [i_1] [i_3] [i_10] &= ((/* implicit */unsigned short) (~(4294967295U)));
                    }
                    var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_22 [i_2 - 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2783)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)0))))) : (((2128135431365485469LL) << (((((/* implicit */int) arr_25 [i_1] [i_1])) - (58385)))))))));
                }
            } 
        } 
        var_32 = ((min((((/* implicit */long long int) 4294967295U)), (70064875586666263LL))) / (((((2128135431365485469LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (((/* implicit */long long int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 1; i_12 < 15; i_12 += 2) 
    {
        arr_38 [i_12] = arr_36 [i_12 + 1];
        var_33 ^= (~(9223372036854775807LL));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
            {
                {
                    var_34 = ((/* implicit */short) 2128135431365485469LL);
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (-(((/* implicit */int) var_4)))))));
                    var_36 ^= ((/* implicit */short) (unsigned char)42);
                    var_37 = ((/* implicit */short) (~(((unsigned int) arr_43 [i_13] [i_12] [i_13] [i_13]))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_43 [15LL] [i_12] [i_14] [i_14]))) << (((/* implicit */int) arr_44 [i_12 - 1] [i_14 + 3] [i_14]))));
                }
            } 
        } 
        arr_46 [i_12] = ((/* implicit */int) var_5);
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_39 ^= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_40 [(short)16])) & (arr_47 [i_12])))));
            arr_51 [i_12] = var_4;
            var_40 = ((/* implicit */short) ((917291806U) ^ (arr_50 [i_12])));
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 21; i_16 += 1) 
    {
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((-2128135431365485470LL) + (2128135431365485472LL)))));
                    var_42 = ((/* implicit */unsigned int) (short)14991);
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) 2147483647))));
                }
                var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
            }
        } 
    } 
}
