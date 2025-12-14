/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166593
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
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 -= ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 -= ((/* implicit */_Bool) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned short) arr_0 [3U] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_0] [i_1 - 1] [i_1 - 1] = ((((/* implicit */_Bool) 6191913713968988684LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (-6191913713968988684LL));
            var_18 *= ((/* implicit */unsigned int) arr_6 [i_1] [i_1 - 1] [i_1 - 1]);
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) arr_14 [i_3] [i_3] [i_4 - 1] [i_4 + 2] [1U] [i_2]);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_14 [i_2] [i_4 + 3] [i_4] [i_4 - 1] [i_4] [i_4])) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_7)))))))));
                        var_21 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((arr_12 [i_0] [i_3] [i_4 + 1] [i_4]) - (2137701021U)))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_4] [i_0]);
                        var_22 ^= ((/* implicit */unsigned int) arr_1 [i_3]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) arr_19 [i_0] [i_2] [i_5 + 1] [i_5] [i_7 - 1]);
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7 + 1] [(signed char)9] [i_7 + 1]))));
                            var_25 *= ((/* implicit */long long int) arr_1 [i_0]);
                            arr_22 [i_0] [(signed char)4] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */long long int) 4294967276U)) : (6191913713968988666LL)));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_8] [i_8 + 1] [i_8 - 1])) != (((/* implicit */int) var_2))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_14 [i_8 + 1] [i_8 - 2] [i_8] [i_8 - 2] [i_8] [i_8]))));
            var_28 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [(signed char)2] [i_8 + 1] [i_8 - 1] [i_8 - 2]))));
            arr_27 [3LL] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8]))));
            arr_28 [i_0] [i_0] [i_8 - 1] = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
    }
    for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        var_29 += ((/* implicit */unsigned int) arr_30 [i_9]);
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_29 [i_9] [i_9]), (arr_29 [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_30 [i_9])) ? (arr_29 [i_9] [i_9]) : (arr_30 [i_9]))) : (min((arr_29 [6U] [i_9]), (((/* implicit */long long int) var_6))))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned char)11))));
}
