/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135632
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
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [3U] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (max((((/* implicit */int) var_0)), (arr_1 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-32)) + (2147483647))) >> (((-9223372036854775788LL) - (-9223372036854775806LL)))));
                        arr_11 [i_0] [i_0] [i_0] [(short)7] [i_0] = ((/* implicit */unsigned char) (+(9223372036854775787LL)));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0] [i_1] [i_4 + 2])) < (((/* implicit */int) var_10)))) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1] [i_4 - 2] [5U])) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_9)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [6LL] [i_0] [i_4]))) : (var_1))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_5] [i_2] [i_1] [i_5] = ((/* implicit */_Bool) ((signed char) 2082437954));
                            var_21 = ((_Bool) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 3])) : (((/* implicit */int) var_9))));
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_18 [i_0] [i_0]);
                            arr_20 [i_0] [i_6] [i_6] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_3 + 3] [i_3 - 1] [i_1])) ? (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_6])) : (var_11)));
                            var_23 -= ((/* implicit */unsigned char) arr_10 [i_0] [(signed char)6] [i_2] [i_6]);
                        }
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)14039)) > (var_13)));
                    }
                } 
            } 
            arr_21 [i_0] = ((/* implicit */signed char) ((_Bool) var_13));
            var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-22))));
            arr_22 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_0)))));
        }
        var_26 = ((/* implicit */signed char) max((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-82))));
    }
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_27 = ((/* implicit */int) arr_23 [i_7]);
        arr_26 [i_7] = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */int) var_7)) << (((((/* implicit */int) (signed char)97)) - (89))))) ^ ((+(2061686543))))));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) (short)-22919);
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), ((signed char)-29)))) ? (((/* implicit */int) (signed char)21)) : (var_14)))) ? (((/* implicit */int) ((signed char) arr_23 [(unsigned char)13]))) : (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_23 [i_7]))))));
    }
}
