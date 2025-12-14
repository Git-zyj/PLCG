/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156496
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
    var_19 = ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_10))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17167)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] = ((/* implicit */signed char) var_6);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_18)) - (((/* implicit */int) arr_2 [i_0] [i_2 + 3] [i_2 - 1]))));
                        }
                        var_23 ^= ((/* implicit */long long int) arr_3 [i_0] [i_2] [i_0]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) var_14);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_0])) ? ((-(-11))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_5] [i_5] [i_0] [i_5]))));
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 10; i_6 += 3) 
                {
                    arr_21 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_15 [i_6] [i_0 + 1] [i_1] [i_0 + 1]) : (((/* implicit */long long int) (~(var_13))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_1 [i_6 - 3]))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_5])) ? (((/* implicit */int) var_3)) : (-2080843625))))));
                        var_28 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_29 ^= ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]);
                        arr_28 [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_25 [i_8] [i_6] [i_6] [i_6 - 3] [i_6] [i_6]))));
                        arr_29 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 11);
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_7)));
                    }
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_5 [i_0] [i_5] [i_0] [i_6 + 2])) : (var_13))))));
                }
                var_31 = ((/* implicit */unsigned short) (!((_Bool)1)));
            }
        }
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 10; i_9 += 3) 
        {
            arr_34 [i_9 + 2] = ((/* implicit */short) ((-4) + (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 8; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-17167))));
                            var_33 = ((/* implicit */unsigned char) ((arr_19 [i_0 - 1]) + (((/* implicit */int) arr_36 [i_9 + 1] [i_10 - 1] [i_9 + 1]))));
                            var_34 = ((/* implicit */unsigned int) ((arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) << (((arr_15 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1]) - (8580764426100261556LL)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)7)))))));
                        arr_46 [i_0] [i_0] = (~((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */int) var_18)) / (arr_4 [i_0] [i_0 - 2])));
            arr_51 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13)) & (((/* implicit */int) arr_42 [i_15] [i_15] [i_15]))))) ? (arr_11 [i_0] [i_0] [i_0] [i_15] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_18))))));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 2; i_18 < 11; i_18 += 2) 
                        {
                            arr_59 [i_0] [i_15] [i_16] [i_17] [i_17] [i_18] = ((((/* implicit */_Bool) 6037267192314560079ULL)) ? (((/* implicit */int) arr_27 [i_0] [i_15] [i_16] [i_0])) : (((/* implicit */int) var_0)));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) -18)) : (-6826299398959506623LL)));
                        }
                        arr_61 [i_0] [i_0] [i_17] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_37 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        var_38 = ((/* implicit */int) (+(arr_15 [i_15] [i_15] [i_16] [i_16 - 2])));
                    }
                } 
            } 
        }
        for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_32 [i_0]))));
            var_40 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
        }
    }
}
