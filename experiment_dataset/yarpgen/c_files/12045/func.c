/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12045
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (((unsigned short) var_4))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) ((unsigned char) var_10)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 *= max((((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)21459)))), (((/* implicit */int) (unsigned char)3))))), (927882747U));
                var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (short)-4957)) : (((/* implicit */int) arr_0 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                arr_9 [i_3] [i_3] [i_3] = ((/* implicit */int) ((short) ((min((arr_7 [i_2]), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [19LL]))))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                            {
                                arr_18 [i_4] [i_5] = ((/* implicit */unsigned int) var_10);
                                arr_19 [i_2] [i_3] [i_5 - 1] [i_4] [i_3] = ((/* implicit */short) arr_13 [i_2] [i_5 + 1]);
                                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (min((((/* implicit */unsigned short) var_0)), (arr_10 [i_4 + 1] [i_5 - 1])))));
                            }
                            for (unsigned short i_7 = 2; i_7 < 12; i_7 += 3) 
                            {
                                arr_23 [i_3] [i_4] [0LL] [i_4] = ((/* implicit */signed char) (unsigned char)173);
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_5))));
                                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_0)))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64013))) : (67104768U)))) ? ((-(((/* implicit */int) arr_21 [i_7] [i_5 + 3] [i_5 - 1] [i_4 + 1] [i_4] [i_3] [(unsigned char)2])))) : (((/* implicit */int) min((arr_15 [i_3] [i_5 + 2] [i_5] [1U] [i_5] [4LL] [i_7]), (((/* implicit */unsigned short) arr_20 [i_2] [i_2] [i_2] [i_4 - 1] [i_4] [i_4] [i_7])))))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                            {
                                arr_27 [(signed char)6] [4U] [i_4 - 1] [i_5 + 1] [i_4] [i_5] [i_8] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((3711594230U), (583373066U)))) ? (3855097220U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4956)))))));
                                var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 3711594229U)) ? (((/* implicit */int) arr_26 [i_4] [i_4] [i_4 + 1])) : (((/* implicit */int) arr_26 [i_4] [i_4 - 1] [i_4 + 1]))))));
                                arr_28 [i_3] [i_3] [i_4] [i_5] [i_8] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_22 [(unsigned short)2] [i_3] [i_4] [i_4 + 1] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_2] [i_4] [i_4 + 1] [i_4 - 1] [(unsigned char)8] [i_5 + 2] [(short)7]))))));
                            }
                            arr_29 [i_4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_5 + 3] [i_5 + 1] [i_4]))))) ? (((/* implicit */int) max((((unsigned char) var_6)), (((unsigned char) var_8))))) : (((/* implicit */int) ((unsigned char) arr_24 [i_4] [i_4 - 1] [7U] [i_3] [i_2])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_5))))) : ((~(arr_5 [i_2])))));
                var_23 = ((/* implicit */unsigned short) (+((-(4294967276U)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24733)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))));
}
