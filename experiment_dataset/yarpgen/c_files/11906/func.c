/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11906
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1229671241U)) ? (4199615397U) : (3095986871U))), (((/* implicit */unsigned int) (unsigned short)32106))))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -93706610237022310LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))) ? (((((/* implicit */int) var_8)) << (((var_13) - (5425895352876959491ULL))))) : (((/* implicit */int) ((signed char) var_5))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            var_17 &= ((((((/* implicit */_Bool) 1198980425U)) ? (3095986854U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (min((((/* implicit */unsigned int) arr_2 [i_1 + 2] [i_1 - 2])), (((((/* implicit */_Bool) arr_2 [(unsigned char)13] [(unsigned char)13])) ? (var_11) : (arr_3 [(unsigned char)11]))))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_2 [i_0] [1U]))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 + 3] [i_2 + 3])) > (((/* implicit */int) ((signed char) var_13))))))) / (((((/* implicit */_Bool) ((signed char) arr_0 [(unsigned char)7]))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [(short)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */unsigned long long int) arr_11 [i_0])))))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_8 [i_0] [(signed char)2] [i_0] [i_1 - 1] [10U]), (arr_8 [i_0] [i_1] [i_1] [i_1 - 4] [8U])))))))));
                            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3095986871U)) ? (((((/* implicit */_Bool) var_3)) ? ((~(arr_11 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        }
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 1588413071U))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1]))), (min((((((/* implicit */_Bool) var_14)) ? (arr_12 [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)8] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [(short)5])) ? (((/* implicit */int) arr_2 [(unsigned char)3] [i_1])) : (((/* implicit */int) (short)15613))))))))))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((unsigned short) max((arr_3 [i_5 + 2]), (arr_3 [i_5 + 2]))))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 1])), (arr_16 [i_0] [i_5 + 1] [i_0])))) ? (var_13) : (((/* implicit */unsigned long long int) arr_3 [(signed char)2]))))));
        }
        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)42)) && (((/* implicit */_Bool) (signed char)2)))))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2706554234U)))) < (((((/* implicit */_Bool) arr_6 [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6 + 1]))) : (var_5))))))));
        }
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_1))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_13))));
    }
    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    var_30 += ((/* implicit */unsigned int) ((_Bool) ((((unsigned int) var_5)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))), (((/* implicit */unsigned int) arr_20 [i_7] [(signed char)11]))))), (var_15))))));
                }
            } 
        } 
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_9))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) (signed char)-67))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48566))) : (max((((/* implicit */unsigned long long int) (unsigned short)14598)), (11430987937373654447ULL))))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned char)15])) ? (var_3) : (((/* implicit */unsigned long long int) var_6)))))))))));
        var_34 += ((/* implicit */short) arr_9 [i_10] [i_10] [4] [i_10] [i_10]);
    }
    var_35 ^= ((/* implicit */unsigned int) var_0);
}
