/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136598
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-5689)))))))));
                var_19 = ((/* implicit */short) (~(arr_5 [i_0 + 2] [i_0 + 2])));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-5689))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                                var_22 = arr_12 [i_0] [i_1] [i_2] [i_0] [i_4];
                                var_23 |= ((/* implicit */_Bool) arr_0 [i_0]);
                                var_24 = ((/* implicit */int) arr_0 [i_0 - 1]);
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_11 [16] [i_1] [i_1] [i_2] [i_2]);
                        var_27 = ((/* implicit */_Bool) arr_10 [i_1] [i_1]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            var_28 |= ((/* implicit */signed char) arr_2 [i_0]);
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(818975873U))))));
                        }
                        var_30 = ((/* implicit */long long int) (-((~((-(arr_1 [i_0])))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) arr_9 [i_7]);
                            var_32 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-30753))))));
                            var_33 ^= (!(((/* implicit */_Bool) 0LL)));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))))));
                        }
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */_Bool) arr_14 [i_0]);
                            var_36 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
                            var_37 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_1 + 2] [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_10]))));
                            var_39 ^= ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2]);
                            var_40 = (!(((/* implicit */_Bool) arr_7 [(short)11] [i_1] [i_0 - 2])));
                        }
                        /* LoopSeq 2 */
                        for (short i_11 = 4; i_11 < 19; i_11 += 2) 
                        {
                            var_41 = (-((+(arr_12 [(signed char)12] [i_1 + 2] [i_2] [i_7] [i_11]))));
                            var_42 = ((/* implicit */unsigned char) arr_8 [i_1 + 1] [i_1 + 1] [i_11 - 4]);
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_2]))));
                            var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_1] [i_2] [i_1] [i_11 + 1]))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2]);
                            var_46 = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)32))))));
                            var_47 = ((/* implicit */signed char) arr_4 [i_1] [i_1 - 1]);
                            var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                        }
                    }
                    for (short i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        var_49 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_10 [(signed char)8] [i_1]))))))));
                        var_50 = ((/* implicit */short) (~((~((~(((/* implicit */int) arr_2 [i_0]))))))));
                    }
                }
                for (unsigned int i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 1; i_15 < 20; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                        {
                            {
                                var_51 = ((/* implicit */signed char) arr_40 [19ULL] [i_1 + 1] [i_14] [5LL] [i_16 + 2]);
                                var_52 = (~((+(arr_21 [i_0] [i_0] [(unsigned char)8] [(unsigned char)8] [i_0]))));
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */_Bool) (~(-450177976)));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 2; i_17 < 20; i_17 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned char) (-((+((~(arr_8 [i_0] [i_1] [(signed char)5])))))));
                        var_55 = ((/* implicit */short) arr_5 [i_1 + 1] [i_17]);
                    }
                }
                for (int i_18 = 1; i_18 < 18; i_18 += 2) 
                {
                    var_56 = ((/* implicit */unsigned int) arr_14 [i_0]);
                    var_57 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0] [i_1] [i_18 - 1] [i_0] [i_1 + 2]))))));
                    var_58 &= ((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_18 + 1] [i_18 + 1] [i_1] [i_18]);
                }
            }
        } 
    } 
    var_59 = (+(var_7));
    var_60 = ((/* implicit */unsigned int) var_16);
    var_61 = (+((-((+(var_12))))));
    var_62 = ((/* implicit */long long int) var_11);
}
