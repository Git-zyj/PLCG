/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162172
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_4 [4LL] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_6)), (arr_3 [3LL] [i_0 - 1]))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (_Bool)0)))))));
        arr_5 [i_0] = ((/* implicit */short) ((long long int) ((unsigned char) (_Bool)0)));
        arr_6 [i_0 - 1] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_11 [i_0 - 1] [(signed char)1] [i_0 - 1] = ((((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (min((max((arr_10 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) 126824360U)));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_17 [i_3] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) -1746581564);
                        arr_18 [i_3] [17LL] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_1 [i_0 - 1])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_21 [15ULL] [i_3] = ((long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2])))));
                            var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [20LL] [i_1] [i_1] [i_3 + 1] [19U])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)))) ? (9567085138592760618ULL) : (((/* implicit */unsigned long long int) max((-5128483862971892150LL), (arr_3 [i_1] [i_4])))))) : (((arr_7 [i_0 + 1] [i_0 + 1] [15U]) + (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))))));
                            var_17 = ((/* implicit */unsigned int) (unsigned char)11);
                            var_18 = ((/* implicit */unsigned int) min((min((15374552608052037056ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_15)) < (var_5))))));
                        }
                        var_19 = ((/* implicit */signed char) min((min((arr_10 [i_0]), (arr_10 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) var_14)))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_24 [i_5] = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_5]);
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) 9567085138592760618ULL);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            arr_32 [i_0] [i_5] [i_6] [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                            arr_33 [i_0] [i_0 - 2] [10ULL] [17ULL] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((min((17776607968243719688ULL), (((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551596ULL))))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_10)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-3170864712283589402LL)))) : (((unsigned long long int) var_3))))));
                        }
                        for (unsigned int i_9 = 4; i_9 < 19; i_9 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) var_4)));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((unsigned long long int) arr_29 [i_7] [i_9 - 1] [i_7] [i_9 - 1] [i_9])) ^ (((/* implicit */unsigned long long int) max((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_2 [i_9 + 2]))))))))));
                        }
                        for (unsigned char i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((1U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_10 - 3] [i_10] [i_10 - 3]))))));
                            arr_38 [i_0] [i_0] [i_10] [i_7] [i_10] = ((long long int) min((var_1), (((/* implicit */long long int) arr_15 [i_7] [i_7 + 2] [i_10 + 2] [i_7] [i_10] [i_10 + 2]))));
                            arr_39 [i_0] [i_10] [i_6] [i_7] [i_10] = ((/* implicit */unsigned int) var_2);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned long long int) ((unsigned short) 8879658935116790997ULL))))));
                            var_25 = ((/* implicit */unsigned int) var_5);
                        }
                        var_26 = ((/* implicit */long long int) ((min((arr_36 [13U] [i_7] [13U] [(short)0] [i_7 - 1]), (8787503087616ULL))) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_34 [i_7] [i_0] [i_5] [i_0])))) ^ (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) var_8);
            arr_40 [i_5] = ((/* implicit */unsigned long long int) arr_34 [i_5] [i_5] [i_0] [i_0]);
        }
        for (unsigned char i_11 = 3; i_11 < 17; i_11 += 4) 
        {
            arr_45 [i_11] [i_11] [i_0] = ((/* implicit */long long int) arr_19 [(short)0] [i_0] [i_11 - 3] [i_0] [i_0 + 1]);
            var_28 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_44 [i_0 - 2] [i_0])))) / (((/* implicit */int) arr_44 [i_0 - 1] [i_0]))));
        }
        var_29 = ((/* implicit */long long int) ((unsigned long long int) ((arr_10 [i_0 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))))));
    }
    var_30 = ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (501015053U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) 13383315585151292536ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_14))))));
    var_31 += ((/* implicit */unsigned long long int) ((unsigned char) min(((~(20ULL))), (((/* implicit */unsigned long long int) max((2731963224681256088LL), (((/* implicit */long long int) (unsigned char)0))))))));
    var_32 = ((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))))), (((/* implicit */long long int) var_6)))));
    var_33 = ((((/* implicit */_Bool) 1072972255U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) : (var_14));
}
