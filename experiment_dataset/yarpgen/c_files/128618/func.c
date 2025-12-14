/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128618
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (_Bool)1);
                                var_18 += ((/* implicit */unsigned char) ((9223372036854775807LL) / (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)23868)) ? (3943995484U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23868))))))))));
                                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)190))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (unsigned short)28743))))))));
                                var_20 += arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1];
                                var_21 ^= ((/* implicit */unsigned char) (_Bool)0);
                                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)117))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63733)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)43677))));
                                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) (unsigned short)38691)))) || (((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_1)), (18013129448186906253ULL))))))));
                                arr_27 [(short)7] [i_10] [i_9] = ((/* implicit */short) 820608198U);
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(6742703861359858028ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 4; i_12 < 13; i_12 += 2) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */int) max((arr_29 [i_12 - 3] [i_12 - 3] [i_12 - 2] [i_13 - 1]), (((/* implicit */short) arr_28 [i_12 - 3] [i_12 - 1] [i_12 + 2] [i_13 - 1] [i_13 - 1]))))) * (((/* implicit */int) (_Bool)0))));
                                var_27 = ((/* implicit */unsigned short) (short)-26097);
                                var_28 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_22 [i_8] [i_9] [(signed char)0]), (((/* implicit */short) arr_30 [i_7] [i_8] [i_9] [i_12] [i_12])))))))) < (4000817557U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 1; i_14 < 11; i_14 += 1) 
    {
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((12917988697293464524ULL) ^ (18446744073709551615ULL)));
                            arr_43 [i_14] [(_Bool)1] [i_14] [i_16] [i_16] [(unsigned short)5] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_14 + 1] [i_16])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_18 = 1; i_18 < 14; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((unsigned long long int) (~(((((/* implicit */_Bool) 4550806234556375739ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_14] [i_18 + 1] [i_20]))))))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 17902270938431827954ULL)) ? (((/* implicit */int) (short)-4298)) : (((/* implicit */int) (short)16037))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)139)) >> (((((/* implicit */int) (unsigned char)241)) - (213)))));
                                var_33 ^= arr_39 [i_14] [i_15] [i_18];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_21 = 0; i_21 < 14; i_21 += 3) 
    {
        for (unsigned int i_22 = 3; i_22 < 13; i_22 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 3; i_24 < 11; i_24 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) min((var_34), (arr_53 [i_21] [i_21])));
                            var_35 = ((/* implicit */int) max((max((arr_42 [i_22 - 2] [i_22]), (((/* implicit */unsigned long long int) arr_60 [i_22 - 2] [i_22] [i_24 - 1] [i_24])))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)58348)))), (((/* implicit */int) (unsigned char)190)))))));
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (unsigned char)19))));
                            var_37 = ((((/* implicit */int) (short)1)) >> (((((/* implicit */int) (unsigned char)65)) - (61))));
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_15))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_25 = 2; i_25 < 13; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 3) 
                    {
                        for (int i_27 = 1; i_27 < 12; i_27 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((_Bool) 1752424684))))), (((/* implicit */int) (signed char)1))));
                                var_40 ^= ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_28 = 3; i_28 < 12; i_28 += 4) 
                {
                    for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                    {
                        {
                            arr_76 [i_21] [i_21] [i_28] = ((/* implicit */long long int) arr_33 [i_21] [7ULL]);
                            var_41 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_30 [i_21] [0U] [i_28 + 2] [i_29 + 1] [i_29])))) << (((/* implicit */int) var_10))));
                        }
                    } 
                } 
            }
        } 
    } 
}
